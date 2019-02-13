// Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:1069
// L1Cache: MESI Directory L1 Cache CMP

#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <typeinfo>

#include "base/misc.hh"

#include "debug/RubySlicc.hh"
#include "debug/RubyPrefetcher.hh"
#include "debug/RubyCacheState.hh"
#include "debug/RubyGenerated.hh"
#include "mem/protocol/L1Cache_Controller.hh"
#include "mem/protocol/L1Cache_Event.hh"
#include "mem/protocol/L1Cache_State.hh"

#include "mem/protocol/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"

using namespace std;

void
L1Cache_Controller::wakeup()
{
    int counter = 0;
    while (true) {
        unsigned char rejected[4];
        memset(rejected, 0, sizeof(unsigned char)*4);
        // Some cases will put us into an infinite loop without this limit
        assert(counter <= m_transitions_per_cycle);
        if (counter == m_transitions_per_cycle) {
            // Count how often we are fully utilized
            m_fully_busy_cycles++;

            // Wakeup in another cycle and try again
            scheduleEvent(Cycles(1));
            break;
        }
            // L1CacheInPort optionalQueue_in
            m_cur_in_port = 3;
            try {
                            if ((((*m_optionalQueue_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const RubyRequest* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const RubyRequest *>(((*m_optionalQueue_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                    if ((((*in_msg_ptr)).m_Type == RubyRequestType_IFETCH)) {
                                        L1Cache_Entry* L1Icache_entry
                                         = (getL1ICacheEntry(((*in_msg_ptr)).m_LineAddress));
                                            if ((L1Icache_entry != NULL)) {
                                                {

                                                    TransitionResult result = doTransition((prefetch_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    }

                                                    if (result == TransitionResult_ResourceStall ||
                                                        result == TransitionResult_ProtocolStall) {
                                                        scheduleEvent(Cycles(1));

                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                    }
                                                }
                                                ;
                                            }
                                            L1Cache_Entry* L1Dcache_entry
                                             = (getL1DCacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                if ((L1Dcache_entry != NULL)) {
                                                    {

                                                        TransitionResult result = doTransition((prefetch_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                        if (result == TransitionResult_Valid) {
                                                            counter++;
                                                            continue; // Check the first port again
                                                        }

                                                        if (result == TransitionResult_ResourceStall ||
                                                            result == TransitionResult_ProtocolStall) {
                                                            scheduleEvent(Cycles(1));

                                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                        }
                                                    }
                                                    ;
                                                }
                                                    if ((((*m_L1Icache_ptr)).cacheAvail(((*in_msg_ptr)).m_LineAddress))) {
                                                        {

                                                            TransitionResult result = doTransition((prefetch_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall ||
                                                                result == TransitionResult_ProtocolStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    } else {
                                                        {

                                                            TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, (getL1ICacheEntry((((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_TBEs_ptr)).lookup((((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)), (88));

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall ||
                                                                result == TransitionResult_ProtocolStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    }
                                                } else {
                                                    L1Cache_Entry* L1Dcache_entry
                                                     = (getL1DCacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                        if ((L1Dcache_entry != NULL)) {
                                                            {

                                                                TransitionResult result = doTransition((prefetch_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                                if (result == TransitionResult_Valid) {
                                                                    counter++;
                                                                    continue; // Check the first port again
                                                                }

                                                                if (result == TransitionResult_ResourceStall ||
                                                                    result == TransitionResult_ProtocolStall) {
                                                                    scheduleEvent(Cycles(1));

                                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                }
                                                            }
                                                            ;
                                                        }
                                                        L1Cache_Entry* L1Icache_entry
                                                         = (getL1ICacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                            if ((L1Icache_entry != NULL)) {
                                                                {

                                                                    TransitionResult result = doTransition((prefetch_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                                    if (result == TransitionResult_Valid) {
                                                                        counter++;
                                                                        continue; // Check the first port again
                                                                    }

                                                                    if (result == TransitionResult_ResourceStall ||
                                                                        result == TransitionResult_ProtocolStall) {
                                                                        scheduleEvent(Cycles(1));

                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                    }
                                                                }
                                                                ;
                                                            }
                                                                if ((((*m_L1Dcache_ptr)).cacheAvail(((*in_msg_ptr)).m_LineAddress))) {
                                                                    {

                                                                        TransitionResult result = doTransition((prefetch_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                                        if (result == TransitionResult_Valid) {
                                                                            counter++;
                                                                            continue; // Check the first port again
                                                                        }

                                                                        if (result == TransitionResult_ResourceStall ||
                                                                            result == TransitionResult_ProtocolStall) {
                                                                            scheduleEvent(Cycles(1));

                                                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                        }
                                                                    }
                                                                    ;
                                                                } else {
                                                                    {

                                                                        TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, (getL1DCacheEntry((((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_TBEs_ptr)).lookup((((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)), (88));

                                                                        if (result == TransitionResult_Valid) {
                                                                            counter++;
                                                                            continue; // Check the first port again
                                                                        }

                                                                        if (result == TransitionResult_ResourceStall ||
                                                                            result == TransitionResult_ProtocolStall) {
                                                                            scheduleEvent(Cycles(1));

                                                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                        }
                                                                    }
                                                                    ;
                                                                }
                                                            }
                                                            }
                                                        }
                        } catch (const RejectException & e) {
                            rejected[0]++;
                        }
            // L1CacheInPort responseL1Network_in
            m_cur_in_port = 2;
            try {
                            if ((((*m_responseToL1Cache_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const ResponseMsg* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToL1Cache_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                    if (m_is_blocking &&
                                        (m_block_map.count(in_msg_ptr->m_addr) == 1) &&
                                        (m_block_map[in_msg_ptr->m_addr] != &(*m_responseToL1Cache_ptr))) {
                                            (*m_responseToL1Cache_ptr).delayHead(clockEdge(), cyclesToTicks(Cycles(1)));
                                            continue;
                                    }
                                            
                                #ifndef NDEBUG
                                if (!(((((*in_msg_ptr)).m_Destination).isElement(m_machineID)))) {
                                    panic("Runtime Error at MESI_Two_Level-L1cache.sm:397: %s.\n", "assert failure");

                                }
                                #endif
                                ;
                                L1Cache_Entry* cache_entry
                                 = (getCacheEntry(((*in_msg_ptr)).m_addr));
                                L1Cache_TBE* tbe
                                 = (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_addr));
                                    if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DATA_EXCLUSIVE)) {
                                        {

                                            TransitionResult result = doTransition(L1Cache_Event_Data_Exclusive, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                            if (result == TransitionResult_Valid) {
                                                counter++;
                                                continue; // Check the first port again
                                            }

                                            if (result == TransitionResult_ResourceStall ||
                                                result == TransitionResult_ProtocolStall) {
                                                scheduleEvent(Cycles(1));

                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                            }
                                        }
                                        ;
                                    } else {
                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DATA)) {
                                                    if (((((((getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)) == L1Cache_State_IS) || ((getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)) == L1Cache_State_IS_I)) || ((getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)) == L1Cache_State_PF_IS)) || ((getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)) == L1Cache_State_PF_IS_I)) && ((machineIDToMachineType(((*in_msg_ptr)).m_Sender)) == MachineType_L1Cache))) {
                                                        {

                                                            TransitionResult result = doTransition(L1Cache_Event_DataS_fromL1, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall ||
                                                                result == TransitionResult_ProtocolStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    } else {
                                                            if ((((getPendingAcks(tbe)) - ((*in_msg_ptr)).m_AckCount) == (0))) {
                                                                {

                                                                    TransitionResult result = doTransition(L1Cache_Event_Data_all_Acks, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                                    if (result == TransitionResult_Valid) {
                                                                        counter++;
                                                                        continue; // Check the first port again
                                                                    }

                                                                    if (result == TransitionResult_ResourceStall ||
                                                                        result == TransitionResult_ProtocolStall) {
                                                                        scheduleEvent(Cycles(1));

                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                    }
                                                                }
                                                                ;
                                                            } else {
                                                                {

                                                                    TransitionResult result = doTransition(L1Cache_Event_Data, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                                    if (result == TransitionResult_Valid) {
                                                                        counter++;
                                                                        continue; // Check the first port again
                                                                    }

                                                                    if (result == TransitionResult_ResourceStall ||
                                                                        result == TransitionResult_ProtocolStall) {
                                                                        scheduleEvent(Cycles(1));

                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                    }
                                                                }
                                                                ;
                                                            }
                                                        }
                                                    } else {
                                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_ACK)) {
                                                                    if ((((getPendingAcks(tbe)) - ((*in_msg_ptr)).m_AckCount) == (0))) {
                                                                        {

                                                                            TransitionResult result = doTransition(L1Cache_Event_Ack_all, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                                            if (result == TransitionResult_Valid) {
                                                                                counter++;
                                                                                continue; // Check the first port again
                                                                            }

                                                                            if (result == TransitionResult_ResourceStall ||
                                                                                result == TransitionResult_ProtocolStall) {
                                                                                scheduleEvent(Cycles(1));

                                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                            }
                                                                        }
                                                                        ;
                                                                    } else {
                                                                        {

                                                                            TransitionResult result = doTransition(L1Cache_Event_Ack, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                                            if (result == TransitionResult_Valid) {
                                                                                counter++;
                                                                                continue; // Check the first port again
                                                                            }

                                                                            if (result == TransitionResult_ResourceStall ||
                                                                                result == TransitionResult_ProtocolStall) {
                                                                                scheduleEvent(Cycles(1));

                                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                            }
                                                                        }
                                                                        ;
                                                                    }
                                                                } else {
                                                                        if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_WB_ACK)) {
                                                                            {

                                                                                TransitionResult result = doTransition(L1Cache_Event_WB_Ack, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                                                if (result == TransitionResult_Valid) {
                                                                                    counter++;
                                                                                    continue; // Check the first port again
                                                                                }

                                                                                if (result == TransitionResult_ResourceStall ||
                                                                                    result == TransitionResult_ProtocolStall) {
                                                                                    scheduleEvent(Cycles(1));

                                                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                                }
                                                                            }
                                                                            ;
                                                                        } else {
                                                                            panic("Runtime Error at MESI_Two_Level-L1cache.sm:432: %s.\n", ("Invalid L1 response type"));
                                                                            ;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            }
                                                        }
                        } catch (const RejectException & e) {
                            rejected[1]++;
                        }
            // L1CacheInPort requestL1Network_in
            m_cur_in_port = 1;
            try {
                            if ((((*m_requestToL1Cache_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const RequestMsg* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_requestToL1Cache_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                    if (m_is_blocking &&
                                        (m_block_map.count(in_msg_ptr->m_addr) == 1) &&
                                        (m_block_map[in_msg_ptr->m_addr] != &(*m_requestToL1Cache_ptr))) {
                                            (*m_requestToL1Cache_ptr).delayHead(clockEdge(), cyclesToTicks(Cycles(1)));
                                            continue;
                                    }
                                            
                                #ifndef NDEBUG
                                if (!(((((*in_msg_ptr)).m_Destination).isElement(m_machineID)))) {
                                    panic("Runtime Error at MESI_Two_Level-L1cache.sm:442: %s.\n", "assert failure");

                                }
                                #endif
                                ;
                                L1Cache_Entry* cache_entry
                                 = (getCacheEntry(((*in_msg_ptr)).m_addr));
                                L1Cache_TBE* tbe
                                 = (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_addr));
                                    if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_INV)) {
                                        {

                                            TransitionResult result = doTransition(L1Cache_Event_Inv, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                            if (result == TransitionResult_Valid) {
                                                counter++;
                                                continue; // Check the first port again
                                            }

                                            if (result == TransitionResult_ResourceStall ||
                                                result == TransitionResult_ProtocolStall) {
                                                scheduleEvent(Cycles(1));

                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                            }
                                        }
                                        ;
                                    } else {
                                            if (((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETX) || (((*in_msg_ptr)).m_Type == CoherenceRequestType_UPGRADE))) {
                                                {

                                                    TransitionResult result = doTransition(L1Cache_Event_Fwd_GETX, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    }

                                                    if (result == TransitionResult_ResourceStall ||
                                                        result == TransitionResult_ProtocolStall) {
                                                        scheduleEvent(Cycles(1));

                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                    }
                                                }
                                                ;
                                            } else {
                                                    if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GETS)) {
                                                        {

                                                            TransitionResult result = doTransition(L1Cache_Event_Fwd_GETS, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall ||
                                                                result == TransitionResult_ProtocolStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    } else {
                                                            if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_GET_INSTR)) {
                                                                {

                                                                    TransitionResult result = doTransition(L1Cache_Event_Fwd_GET_INSTR, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                                    if (result == TransitionResult_Valid) {
                                                                        counter++;
                                                                        continue; // Check the first port again
                                                                    }

                                                                    if (result == TransitionResult_ResourceStall ||
                                                                        result == TransitionResult_ProtocolStall) {
                                                                        scheduleEvent(Cycles(1));

                                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                    }
                                                                }
                                                                ;
                                                            } else {
                                                                    if ((((*in_msg_ptr)).m_Type == CoherenceRequestType_EVI_NOTI)) {
                                                                        {

                                                                            TransitionResult result = doTransition(L1Cache_Event_EVI_NOTI, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

                                                                            if (result == TransitionResult_Valid) {
                                                                                counter++;
                                                                                continue; // Check the first port again
                                                                            }

                                                                            if (result == TransitionResult_ResourceStall ||
                                                                                result == TransitionResult_ProtocolStall) {
                                                                                scheduleEvent(Cycles(1));

                                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                            }
                                                                        }
                                                                        ;
                                                                    } else {
                                                                        panic("Runtime Error at MESI_Two_Level-L1cache.sm:464: %s.\n", ("Invalid forwarded request type"));
                                                                        ;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    }
                                                }
                        } catch (const RejectException & e) {
                            rejected[2]++;
                        }
            // L1CacheInPort mandatoryQueue_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_mandatoryQueue_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const RubyRequest* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const RubyRequest *>(((*m_mandatoryQueue_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                    if (m_is_blocking &&
                                        (m_block_map.count(in_msg_ptr->m_LineAddress) == 1) &&
                                        (m_block_map[in_msg_ptr->m_LineAddress] != &(*m_mandatoryQueue_ptr))) {
                                            (*m_mandatoryQueue_ptr).delayHead(clockEdge(), cyclesToTicks(Cycles(1)));
                                            continue;
                                    }
                                            
                                    if ((((*in_msg_ptr)).m_Type == RubyRequestType_IFETCH)) {
                                        L1Cache_Entry* L1Icache_entry
                                         = (getL1ICacheEntry(((*in_msg_ptr)).m_LineAddress));
                                            if ((L1Icache_entry != NULL)) {
                                                {

                                                    TransitionResult result = doTransition((mandatory_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    }

                                                    if (result == TransitionResult_ResourceStall ||
                                                        result == TransitionResult_ProtocolStall) {
                                                        scheduleEvent(Cycles(1));

                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                    }
                                                }
                                                ;
                                            } else {
                                                L1Cache_Entry* L1Dcache_entry
                                                 = (getL1DCacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                    if ((L1Dcache_entry != NULL)) {
                                                        {

                                                            TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                            if (result == TransitionResult_Valid) {
                                                                counter++;
                                                                continue; // Check the first port again
                                                            }

                                                            if (result == TransitionResult_ResourceStall ||
                                                                result == TransitionResult_ProtocolStall) {
                                                                scheduleEvent(Cycles(1));

                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                            }
                                                        }
                                                        ;
                                                    }
                                                        if ((((*m_L1Icache_ptr)).cacheAvail(((*in_msg_ptr)).m_LineAddress))) {
                                                            {

                                                                TransitionResult result = doTransition((mandatory_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                                if (result == TransitionResult_Valid) {
                                                                    counter++;
                                                                    continue; // Check the first port again
                                                                }

                                                                if (result == TransitionResult_ResourceStall ||
                                                                    result == TransitionResult_ProtocolStall) {
                                                                    scheduleEvent(Cycles(1));

                                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                }
                                                            }
                                                            ;
                                                        } else {
                                                            {

                                                                TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, (getL1ICacheEntry((((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_TBEs_ptr)).lookup((((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_L1Icache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)), (88));

                                                                if (result == TransitionResult_Valid) {
                                                                    counter++;
                                                                    continue; // Check the first port again
                                                                }

                                                                if (result == TransitionResult_ResourceStall ||
                                                                    result == TransitionResult_ProtocolStall) {
                                                                    scheduleEvent(Cycles(1));

                                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                }
                                                            }
                                                            ;
                                                        }
                                                    }
                                                } else {
                                                    L1Cache_Entry* L1Dcache_entry
                                                     = (getL1DCacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                        if ((L1Dcache_entry != NULL)) {
                                                            {

                                                                TransitionResult result = doTransition((mandatory_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                                if (result == TransitionResult_Valid) {
                                                                    counter++;
                                                                    continue; // Check the first port again
                                                                }

                                                                if (result == TransitionResult_ResourceStall ||
                                                                    result == TransitionResult_ProtocolStall) {
                                                                    scheduleEvent(Cycles(1));

                                                                    // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                }
                                                            }
                                                            ;
                                                        } else {
                                                            L1Cache_Entry* L1Icache_entry
                                                             = (getL1ICacheEntry(((*in_msg_ptr)).m_LineAddress));
                                                                if ((L1Icache_entry != NULL)) {
                                                                    {

                                                                        TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, L1Icache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                                        if (result == TransitionResult_Valid) {
                                                                            counter++;
                                                                            continue; // Check the first port again
                                                                        }

                                                                        if (result == TransitionResult_ResourceStall ||
                                                                            result == TransitionResult_ProtocolStall) {
                                                                            scheduleEvent(Cycles(1));

                                                                            // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                        }
                                                                    }
                                                                    ;
                                                                }
                                                                    if ((((*m_L1Dcache_ptr)).cacheAvail(((*in_msg_ptr)).m_LineAddress))) {
                                                                        {

                                                                            TransitionResult result = doTransition((mandatory_request_type_to_event(((*in_msg_ptr)).m_Type)), L1Dcache_entry, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress, (88));

                                                                            if (result == TransitionResult_Valid) {
                                                                                counter++;
                                                                                continue; // Check the first port again
                                                                            }

                                                                            if (result == TransitionResult_ResourceStall ||
                                                                                result == TransitionResult_ProtocolStall) {
                                                                                scheduleEvent(Cycles(1));

                                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                            }
                                                                        }
                                                                        ;
                                                                    } else {
                                                                        {

                                                                            TransitionResult result = doTransition(L1Cache_Event_L1_Replacement, (getL1DCacheEntry((((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_TBEs_ptr)).lookup((((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)))), (((*m_L1Dcache_ptr)).cacheProbe(((*in_msg_ptr)).m_LineAddress)), (88));

                                                                            if (result == TransitionResult_Valid) {
                                                                                counter++;
                                                                                continue; // Check the first port again
                                                                            }

                                                                            if (result == TransitionResult_ResourceStall ||
                                                                                result == TransitionResult_ProtocolStall) {
                                                                                scheduleEvent(Cycles(1));

                                                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)
                                                                            }
                                                                        }
                                                                        ;
                                                                    }
                                                                }
                                                            }
                                                            }
                                                        }
                        } catch (const RejectException & e) {
                            rejected[3]++;
                        }
        // If we got this far, we have nothing left todo or something went
        // wrong
        break;
    }
}
