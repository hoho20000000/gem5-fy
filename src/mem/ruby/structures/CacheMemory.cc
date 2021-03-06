/*
 * Copyright (c) 1999-2012 Mark D. Hill and David A. Wood
 * Copyright (c) 2013 Advanced Micro Devices, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "base/intmath.hh"
#include "debug/RubyCache.hh"
#include "debug/RubyCacheTrace.hh"
#include "debug/RubyResourceStalls.hh"
#include "debug/RubyStats.hh"
//fanyao added
#include "debug/WayEvictMICRO17.hh"
#include "mem/protocol/AccessPermission.hh"
#include "mem/ruby/structures/CacheMemory.hh"
#include "mem/ruby/system/RubySystem.hh"
#include "mem/ruby/system/WeightedLRUPolicy.hh"

using namespace std;

ostream&
operator<<(ostream& out, const CacheMemory& obj)
{
    obj.print(out);
    out << flush;
    return out;
}

CacheMemory *
RubyCacheParams::create()
{
    return new CacheMemory(this);
}

CacheMemory::CacheMemory(const Params *p)
    : SimObject(p),
    dataArray(p->dataArrayBanks, p->dataAccessLatency,
              p->start_index_bit, p->ruby_system),
    tagArray(p->tagArrayBanks, p->tagAccessLatency,
             p->start_index_bit, p->ruby_system)
{
    m_cache_size = p->size;
    m_cache_assoc = p->assoc;
    //fanyao added
    m_np = p->np;
    m_cache_level = p->cache_level;
    assert(m_cache_level>=1);

    m_replacementPolicy_ptr = p->replacement_policy;
    m_replacementPolicy_ptr->setCache(this);
    m_start_index_bit = p->start_index_bit;
    m_is_instruction_only_cache = p->is_icache;
    m_resource_stalls = p->resourceStalls;
    m_block_size = p->block_size;  // may be 0 at this point. Updated in init()
}

void
CacheMemory::init()
{
    if (m_block_size == 0) {
        m_block_size = RubySystem::getBlockSizeBytes();
    }
    m_cache_num_sets = (m_cache_size / m_cache_assoc) / m_block_size;
    assert(m_cache_num_sets > 1);
    m_cache_num_set_bits = floorLog2(m_cache_num_sets);
    assert(m_cache_num_set_bits > 0);

    m_cache.resize(m_cache_num_sets,
                    std::vector<AbstractCacheEntry*>(m_cache_assoc, nullptr));
    //fanyao added
    evict_matrix.resize(m_np, std::vector<int>(m_np, 0));
}

CacheMemory::~CacheMemory()
{
    if (m_replacementPolicy_ptr)
        delete m_replacementPolicy_ptr;
    for (int i = 0; i < m_cache_num_sets; i++) {
        for (int j = 0; j < m_cache_assoc; j++) {
            delete m_cache[i][j];
        }
    }
}

// convert a Address to its location in the cache
int64_t
CacheMemory::addressToCacheSet(Addr address) const
{
    assert(address == makeLineAddress(address));
    return bitSelect(address, m_start_index_bit,
                     m_start_index_bit + m_cache_num_set_bits - 1);
}

// Given a cache index: returns the index of the tag in a set.
// returns -1 if the tag is not found.
int
CacheMemory::findTagInSet(int64_t cacheSet, Addr tag) const
{
    assert(tag == makeLineAddress(tag));
    // search the set for the tags
    auto it = m_tag_index.find(tag);
    if (it != m_tag_index.end())
        if (m_cache[cacheSet][it->second]->m_Permission !=
            AccessPermission_NotPresent)
            return it->second;
    return -1; // Not found
}

// Given a cache index: returns the index of the tag in a set.
// returns -1 if the tag is not found.
int
CacheMemory::findTagInSetIgnorePermissions(int64_t cacheSet,
                                           Addr tag) const
{
    assert(tag == makeLineAddress(tag));
    // search the set for the tags
    auto it = m_tag_index.find(tag);
    if (it != m_tag_index.end())
        return it->second;
    return -1; // Not found
}

// Given an unique cache block identifier (idx): return the valid address
// stored by the cache block.  If the block is invalid/notpresent, the
// function returns the 0 address
Addr
CacheMemory::getAddressAtIdx(int idx) const
{
    Addr tmp(0);

    int set = idx / m_cache_assoc;
    assert(set < m_cache_num_sets);

    int way = idx - set * m_cache_assoc;
    assert (way < m_cache_assoc);

    AbstractCacheEntry* entry = m_cache[set][way];
    if (entry == NULL ||
        entry->m_Permission == AccessPermission_Invalid ||
        entry->m_Permission == AccessPermission_NotPresent) {
        return tmp;
    }
    return entry->m_Address;
}

bool
CacheMemory::tryCacheAccess(Addr address, RubyRequestType type,
                            DataBlock*& data_ptr)
{
    assert(address == makeLineAddress(address));
    DPRINTF(RubyCache, "address: %#x\n", address);
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);
    if (loc != -1) {
        // Do we even have a tag match?
        AbstractCacheEntry* entry = m_cache[cacheSet][loc];
        m_replacementPolicy_ptr->touch(cacheSet, loc, curTick());
        data_ptr = &(entry->getDataBlk());

        if (entry->m_Permission == AccessPermission_Read_Write) {
            return true;
        }
        if ((entry->m_Permission == AccessPermission_Read_Only) &&
            (type == RubyRequestType_LD || type == RubyRequestType_IFETCH)) {
            return true;
        }
        // The line must not be accessible
    }
    data_ptr = NULL;
    return false;
}

//fanyao commented: not testing permissions
bool
CacheMemory::testCacheAccess(Addr address, RubyRequestType type,
                             DataBlock*& data_ptr)
{
    assert(address == makeLineAddress(address));
    DPRINTF(RubyCache, "address: %#x\n", address);
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);

    if (loc != -1) {
        // Do we even have a tag match?
        AbstractCacheEntry* entry = m_cache[cacheSet][loc];
        m_replacementPolicy_ptr->touch(cacheSet, loc, curTick());
        data_ptr = &(entry->getDataBlk());

        return m_cache[cacheSet][loc]->m_Permission !=
            AccessPermission_NotPresent;
    }

    data_ptr = NULL;
    return false;
}

// tests to see if an address is present in the cache
bool
CacheMemory::isTagPresent(Addr address) const
{
    assert(address == makeLineAddress(address));
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);

    if (loc == -1) {
        // We didn't find the tag
        DPRINTF(RubyCache, "No tag match for address: %#x\n", address);
        return false;
    }
    DPRINTF(RubyCache, "address: %#x found\n", address);
    return true;
}

// Returns true if there is:
//   a) a tag match on this address or there is
//   b) an unused line in the same cache "way"
bool
CacheMemory::cacheAvail(Addr address) const
{
    assert(address == makeLineAddress(address));

    int64_t cacheSet = addressToCacheSet(address);

    for (int i = 0; i < m_cache_assoc; i++) {
        AbstractCacheEntry* entry = m_cache[cacheSet][i];
        if (entry != NULL) {
            if (entry->m_Address == address ||
                entry->m_Permission == AccessPermission_NotPresent) {
                // Already in the cache or we found an empty entry
                return true;
            }
        } else {
            return true;
        }
    }
    return false;
}

//fanyao commented: call when there are usable ways
AbstractCacheEntry*
CacheMemory::allocate(Addr address, AbstractCacheEntry *entry, bool touch,
                                    int core_id)
{
    assert(address == makeLineAddress(address));
    assert(!isTagPresent(address));
    assert(cacheAvail(address));
    DPRINTF(RubyCache, "address: %#x\n", address);

    // Find the first open slot
    int64_t cacheSet = addressToCacheSet(address);
    std::vector<AbstractCacheEntry*> &set = m_cache[cacheSet];
    for (int i = 0; i < m_cache_assoc; i++) {
        //fanyao commented: if the state is NP, it have to be picked out
        //by allocate
        if (!set[i] || set[i]->m_Permission == AccessPermission_NotPresent) {
            if (set[i] && (set[i] != entry)) {
                warn_once("This protocol contains a cache entry handling bug: "
                    "Entries in the cache should never be NotPresent! If\n"
                    "this entry (%#x) is not tracked elsewhere, it will memory "
                    "leak here. Fix your protocol to eliminate these!",
                    address);
            }
            set[i] = entry;  // Init entry
            set[i]->m_Address = address;
            set[i]->m_Permission = AccessPermission_Invalid;
            DPRINTF(RubyCache, "Allocate clearing lock for addr: %x\n",
                    address);
            set[i]->m_locked = -1;
            m_tag_index[address] = i;
            entry->setSetIndex(cacheSet);
            entry->setWayIndex(i);
            //fanyao added
            entry->setCoreId(core_id == -1 ? 0 : core_id);

            if (touch) {
                m_replacementPolicy_ptr->touch(cacheSet, i, curTick());
            }

            return entry;
        }
    }
    panic("Allocate didn't find an available entry");
}

//fanyao: deallocated is called right before one way is to
//be evicted. Only one exception, MEMORY_INV event from external
//soures. This could be determined based on core_id
void
CacheMemory::deallocate(Addr address, int core_id)
{
    assert(address == makeLineAddress(address));
    assert(isTagPresent(address));
    DPRINTF(RubyCache, "address: %#x\n", address);
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);
    if (loc != -1) {
        //fanyao added: the share of ways for each core
        //this is a little be hacky
        
        //if(m_cache_level == 2 && core_id != 88)
        if (core_id!=88)
        {
            assert(m_np == 4); //let's now consider only 4 cores
            int ways[4] = {0};
            //std::memset(way, 0, m_np);
            for(int j = 0; j < m_cache_assoc; j++)
            {
                assert(m_cache[cacheSet][j] != NULL);
                ways[m_cache[cacheSet][j]->getCoreId()]++;
            }
            int evicted_core_id = m_cache[cacheSet][loc]->getCoreId();
            //currently unknown at what instance when core_id
            //could be -1
            if(core_id == -1)                
                core_id = 0;
            DPRINTF(WayEvictMICRO17, ",src_core:%d, evict_core:%d, "
                   "way-core0:%d, way-core1:%s, way-core2:%d, way-core3:%d, "
                   "cache_set:%lld, evict_address:%#x\n",
                   core_id, evicted_core_id, ways[0], ways[1], 
                   ways[2], ways[3], cacheSet, address);
            //hongyu
            if (core_id!=evicted_core_id){
              last_evicting_core_id=core_id;
              last_evicted_core_id=evicted_core_id;
              newEvict(core_id, evicted_core_id, address);
            }
            //--
        }
        delete m_cache[cacheSet][loc];
        m_cache[cacheSet][loc] = NULL;
        m_tag_index.erase(address);
    }
}

//fanyao commented: called to find a block to replace
// Returns with the physical address of the conflicting cache line
Addr
CacheMemory::cacheProbe(Addr address) const
{
    assert(address == makeLineAddress(address));
    assert(!cacheAvail(address));

    int64_t cacheSet = addressToCacheSet(address);
    return m_cache[cacheSet][m_replacementPolicy_ptr->getVictim(cacheSet)]->
        m_Address;
}

// looks an address up in the cache    rr_deallocateL2CacheBlock;
AbstractCacheEntry*
CacheMemory::lookup(Addr address)
{
    assert(address == makeLineAddress(address));
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);
    if (loc == -1) return NULL;
    return m_cache[cacheSet][loc];
}

// looks an address up in the cache
const AbstractCacheEntry*
CacheMemory::lookup(Addr address) const
{
    assert(address == makeLineAddress(address));
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);
    if (loc == -1) return NULL;
    return m_cache[cacheSet][loc];
}

// Sets the most recently used bit for a cache block
void
CacheMemory::setMRU(Addr address)
{
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);

    if (loc != -1)
        m_replacementPolicy_ptr->touch(cacheSet, loc, curTick());
}

void
CacheMemory::setMRU(const AbstractCacheEntry *e)
{
    uint32_t cacheSet = e->getSetIndex();
    uint32_t loc = e->getWayIndex();
    m_replacementPolicy_ptr->touch(cacheSet, loc, curTick());
}

void
CacheMemory::setMRU(Addr address, int occupancy)
{
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);

    if (loc != -1) {
        if (m_replacementPolicy_ptr->useOccupancy()) {
            (static_cast<WeightedLRUPolicy*>(m_replacementPolicy_ptr))->
                touch(cacheSet, loc, curTick(), occupancy);
        } else {
            m_replacementPolicy_ptr->
                touch(cacheSet, loc, curTick());
        }
    }
}

int
CacheMemory::getReplacementWeight(int64_t set, int64_t loc)
{
    assert(set < m_cache_num_sets);
    assert(loc < m_cache_assoc);
    int ret = 0;
    if (m_cache[set][loc] != NULL) {
        ret = m_cache[set][loc]->getNumValidBlocks();
        assert(ret >= 0);
    }

    return ret;
}

void
CacheMemory::recordCacheContents(int cntrl, CacheRecorder* tr) const
{
    uint64_t warmedUpBlocks = 0;
    uint64_t totalBlocks M5_VAR_USED = (uint64_t)m_cache_num_sets *
                                       (uint64_t)m_cache_assoc;

    for (int i = 0; i < m_cache_num_sets; i++) {
        for (int j = 0; j < m_cache_assoc; j++) {
            if (m_cache[i][j] != NULL) {
                AccessPermission perm = m_cache[i][j]->m_Permission;
                RubyRequestType request_type = RubyRequestType_NULL;
                if (perm == AccessPermission_Read_Only) {
                    if (m_is_instruction_only_cache) {
                        request_type = RubyRequestType_IFETCH;
                    } else {
                        request_type = RubyRequestType_LD;
                    }
                } else if (perm == AccessPermission_Read_Write) {
                    request_type = RubyRequestType_ST;
                }

                if (request_type != RubyRequestType_NULL) {
                    tr->addRecord(cntrl, m_cache[i][j]->m_Address,
                                  0, request_type,
                                  m_replacementPolicy_ptr->getLastAccess(i, j),
                                  m_cache[i][j]->getDataBlk());
                    warmedUpBlocks++;
                }
            }
        }
    }

    DPRINTF(RubyCacheTrace, "%s: %lli blocks of %lli total blocks"
            "recorded %.2f%% \n", name().c_str(), warmedUpBlocks,
            totalBlocks, (float(warmedUpBlocks) / float(totalBlocks)) * 100.0);
}

void
CacheMemory::print(ostream& out) const
{
    out << "Cache dump: " << name() << endl;
    for (int i = 0; i < m_cache_num_sets; i++) {
        for (int j = 0; j < m_cache_assoc; j++) {
            if (m_cache[i][j] != NULL) {
                out << "  Index: " << i
                    << " way: " << j
                    << " entry: " << *m_cache[i][j] << endl;
            } else {
                out << "  Index: " << i
                    << " way: " << j
                    << " entry: NULL" << endl;
            }
        }
    }
}

void
CacheMemory::printData(ostream& out) const
{
    out << "printData() not supported" << endl;
}

void
CacheMemory::setLocked(Addr address, int context)
{
    DPRINTF(RubyCache, "Setting Lock for addr: %#x to %d\n", address, context);
    assert(address == makeLineAddress(address));
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);
    assert(loc != -1);
    m_cache[cacheSet][loc]->setLocked(context);
}

void
CacheMemory::clearLocked(Addr address)
{
    DPRINTF(RubyCache, "Clear Lock for addr: %#x\n", address);
    assert(address == makeLineAddress(address));
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);
    assert(loc != -1);
    m_cache[cacheSet][loc]->clearLocked();
}

bool
CacheMemory::isLocked(Addr address, int context)
{
    assert(address == makeLineAddress(address));
    int64_t cacheSet = addressToCacheSet(address);
    int loc = findTagInSet(cacheSet, address);
    assert(loc != -1);
    DPRINTF(RubyCache, "Testing Lock for addr: %#llx cur %d con %d\n",
            address, m_cache[cacheSet][loc]->m_locked, context);
    return m_cache[cacheSet][loc]->isLocked(context);
}

void
CacheMemory::regStats()
{
    m_demand_hits
        .name(name() + ".demand_hits")
        .desc("Number of cache demand hits")
        ;

    m_demand_misses
        .name(name() + ".demand_misses")
        .desc("Number of cache demand misses")
        ;

    m_demand_accesses
        .name(name() + ".demand_accesses")
        .desc("Number of cache demand accesses")
        ;

    m_demand_accesses = m_demand_hits + m_demand_misses;

    m_sw_prefetches
        .name(name() + ".total_sw_prefetches")
        .desc("Number of software prefetches")
        .flags(Stats::nozero)
        ;

    m_hw_prefetches
        .name(name() + ".total_hw_prefetches")
        .desc("Number of hardware prefetches")
        .flags(Stats::nozero)
        ;

    m_prefetches
        .name(name() + ".total_prefetches")
        .desc("Number of prefetches")
        .flags(Stats::nozero)
        ;

    m_prefetches = m_sw_prefetches + m_hw_prefetches;

    m_accessModeType
        .init(RubyRequestType_NUM)
        .name(name() + ".access_mode")
        .flags(Stats::pdf | Stats::total)
        ;
    for (int i = 0; i < RubyAccessMode_NUM; i++) {
        m_accessModeType
            .subname(i, RubyAccessMode_to_string(RubyAccessMode(i)))
            .flags(Stats::nozero)
            ;
    }

    numDataArrayReads
        .name(name() + ".num_data_array_reads")
        .desc("number of data array reads")
        .flags(Stats::nozero)
        ;

    numDataArrayWrites
        .name(name() + ".num_data_array_writes")
        .desc("number of data array writes")
        .flags(Stats::nozero)
        ;

    numTagArrayReads
        .name(name() + ".num_tag_array_reads")
        .desc("number of tag array reads")
        .flags(Stats::nozero)
        ;

    numTagArrayWrites
        .name(name() + ".num_tag_array_writes")
        .desc("number of tag array writes")
        .flags(Stats::nozero)
        ;

    numTagArrayStalls
        .name(name() + ".num_tag_array_stalls")
        .desc("number of stalls caused by tag array")
        .flags(Stats::nozero)
        ;

    numDataArrayStalls
        .name(name() + ".num_data_array_stalls")
        .desc("number of stalls caused by data array")
        .flags(Stats::nozero)
        ;
}

// assumption: SLICC generated files will only call this function
// once **all** resources are granted
void
CacheMemory::recordRequestType(CacheRequestType requestType, Addr addr)
{
    DPRINTF(RubyStats, "Recorded statistic: %s\n",
            CacheRequestType_to_string(requestType));
    switch(requestType) {
    case CacheRequestType_DataArrayRead:
        if (m_resource_stalls)
            dataArray.reserve(addressToCacheSet(addr));
        numDataArrayReads++;
        return;
    case CacheRequestType_DataArrayWrite:
        if (m_resource_stalls)
            dataArray.reserve(addressToCacheSet(addr));
        numDataArrayWrites++;
        return;
    case CacheRequestType_TagArrayRead:
        if (m_resource_stalls)
            tagArray.reserve(addressToCacheSet(addr));
        numTagArrayReads++;
        return;
    case CacheRequestType_TagArrayWrite:
        if (m_resource_stalls)
            tagArray.reserve(addressToCacheSet(addr));
        numTagArrayWrites++;
        return;
    default:
        warn("CacheMemory access_type not found: %s",
             CacheRequestType_to_string(requestType));
    }
}

bool
CacheMemory::checkResourceAvailable(CacheResourceType res, Addr addr)
{
    if (!m_resource_stalls) {
        return true;
    }

    if (res == CacheResourceType_TagArray) {
        if (tagArray.tryAccess(addressToCacheSet(addr))) return true;
        else {
            DPRINTF(RubyResourceStalls,
                    "Tag array stall on addr %#x in set %d\n",
                    addr, addressToCacheSet(addr));
            numTagArrayStalls++;
            return false;
        }
    } else if (res == CacheResourceType_DataArray) {
        if (dataArray.tryAccess(addressToCacheSet(addr))) return true;
        else {
            DPRINTF(RubyResourceStalls,
                    "Data array stall on addr %#x in set %d\n",
                    addr, addressToCacheSet(addr));
            numDataArrayStalls++;
            return false;
        }
    } else {
        assert(false);
        return true;
    }
}

bool
CacheMemory::isBlockInvalid(int64_t cache_set, int64_t loc)
{
  return (m_cache[cache_set][loc]->m_Permission == AccessPermission_Invalid);
}

bool
CacheMemory::isBlockNotBusy(int64_t cache_set, int64_t loc)
{
  return (m_cache[cache_set][loc]->m_Permission != AccessPermission_Busy);
}

//added by hongyu: when an eviction happens, it is checked that whether a trigger happens.
void 
CacheMemory::newEvict(int evicting_core_id, int evicted_core_id, Addr addr){
  DPRINTF(WayEvictMICRO17, "prefetch controller observed: %d, %d, %#x\n", evicting_core_id, evicted_core_id, addr);
  // the eviction information between cores with id x and y are stored in the temp_table[x][y]th element in the vector.
  int temp_table[4][4] = {{-1, 0, 1, 2}, {0, -1, 3, 4}, {1, 3, -1, 5}, {2, 4, 5, -1}};
  if (!evict_record_built){
  // if the eviction record is not built, initialize it.
    for (int i=0; i<6; i++){
      switch_count.push_back(0);
      evict_direction.push_back(false);
      address_record.push_back(std::vector<Addr>());
    }
    evict_record_built=true;
  }
  //check whether the eviction series switch from A evicts B to B evicts A. the number of switch/time is an essential factor to identify the attack
  bool same_direction=true;
  int table_index=temp_table[evicting_core_id][evicted_core_id];
  if (evict_direction[table_index] && evicting_core_id<evicted_core_id){
    same_direction=false;
  }
  if (!evict_direction[table_index] && evicting_core_id>evicted_core_id){
    same_direction=false;
  }
  if (same_direction){
    //if the eviction continues in the same direction, record it
    address_record[table_index].push_back(addr);
  }else{
    // if the direction changes, check whether the number of eviction go beyond the threshold. current threshold is 50.
    switch_count[table_index]+=1;
    if (switch_count[table_index]>50){
       // if triggers, push the id of triggered core.
       DPRINTF(WayEvictMICRO17, "frequent switch detected: %#x\n", addr);
       triggered_core_id.push_back(evicted_core_id);
    }    
    evict_direction[table_index]=!evict_direction[table_index];
    address_record[table_index].clear();
  }
}

//added by Hongyu for prefetch-guard
bool 
CacheMemory::getTrigger(Addr address, int core_id){
  int64_t cacheSet = addressToCacheSet(address);
  int loc = findTagInSet(cacheSet, address);
  int evicted_core_id = m_cache[cacheSet][loc]->getCoreId();
  //check whether the cores involved in eviction get triggered before, if so, return true and the notification would be sent to the prefetcher of the core.
  if (core_id!=evicted_core_id){
    for (int i=0; i<triggered_core_id.size(); i++){
      if (evicted_core_id==triggered_core_id[i]){
        return true;
      }
    }
  }
  return false;
}
