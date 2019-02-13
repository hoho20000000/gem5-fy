/** \file L2Cache_Controller.hh
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:282
 * Created by slicc definition of Module "MESI Directory L2 Cache CMP"
 */

#ifndef __L2Cache_CONTROLLER_HH__
#define __L2Cache_CONTROLLER_HH__

#include <iostream>
#include <sstream>
#include <string>

#include "mem/protocol/TransitionResult.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/common/Consumer.hh"
#include "mem/ruby/slicc_interface/AbstractController.hh"
#include "params/L2Cache_Controller.hh"

#include "mem/protocol/TBETable.hh"
extern std::stringstream L2Cache_transitionComment;

class L2Cache_Controller : public AbstractController
{
  public:
    typedef L2Cache_ControllerParams Params;
    L2Cache_Controller(const Params *p);
    static int getNumControllers();
    void init();

    MessageBuffer *getMandatoryQueue() const;
    MessageBuffer *getMemoryQueue() const;
    void initNetQueues();

    void print(std::ostream& out) const;
    void wakeup();
    void resetStats();
    void regStats();
    void collateStats();

    void recordCacheTrace(int cntrl, CacheRecorder* tr);
    Sequencer* getCPUSequencer() const;
    GPUCoalescer* getGPUCoalescer() const;

    int functionalWriteBuffers(PacketPtr&);

    void countTransition(L2Cache_State state, L2Cache_Event event);
    void possibleTransition(L2Cache_State state, L2Cache_Event event);
    uint64_t getEventCount(L2Cache_Event event);
    bool isPossible(L2Cache_State state, L2Cache_Event event);
    uint64_t getTransitionCount(L2Cache_State state, L2Cache_Event event);

private:
    CacheMemory* m_L2cache_ptr;
    Cycles m_l2_request_latency;
    Cycles m_l2_response_latency;
    Cycles m_to_l1_latency;
    MessageBuffer* m_DirRequestFromL2Cache_ptr;
    MessageBuffer* m_L1RequestFromL2Cache_ptr;
    MessageBuffer* m_responseFromL2Cache_ptr;
    MessageBuffer* m_unblockToL2Cache_ptr;
    MessageBuffer* m_L1RequestToL2Cache_ptr;
    MessageBuffer* m_responseToL2Cache_ptr;
    TransitionResult doTransition(L2Cache_Event event,
                                  L2Cache_Entry* m_cache_entry_ptr,
                                  L2Cache_TBE* m_tbe_ptr,
                                  Addr addr,
                                  int core_id = 88);//fanyao: default invalid core id

    TransitionResult doTransitionWorker(L2Cache_Event event,
                                        L2Cache_State state,
                                        L2Cache_State& next_state,
                                        L2Cache_TBE*& m_tbe_ptr,
                                        L2Cache_Entry*& m_cache_entry_ptr,
                                        Addr addr,
                                        int core_id);//fanyao: default invalid core id
    int m_counters[L2Cache_State_NUM][L2Cache_Event_NUM];
    int m_event_counters[L2Cache_Event_NUM];
    bool m_possible[L2Cache_State_NUM][L2Cache_Event_NUM];

    static std::vector<Stats::Vector *> eventVec;
    static std::vector<std::vector<Stats::Vector *> > transVec;
    static int m_num_controllers;

    // Internal functions
    L2Cache_Entry* getCacheEntry(const Addr& param_addr);
    bool isSharer(const Addr& param_addr, const MachineID& param_requestor, L2Cache_Entry* param_cache_entry);
    void addSharer(const Addr& param_addr, const MachineID& param_requestor, L2Cache_Entry* param_cache_entry);
    L2Cache_State getState(L2Cache_TBE* param_tbe, L2Cache_Entry* param_cache_entry, const Addr& param_addr);
    void setState(L2Cache_TBE* param_tbe, L2Cache_Entry* param_cache_entry, const Addr& param_addr, const L2Cache_State& param_state);
    AccessPermission getAccessPermission(const Addr& param_addr);
    void functionalRead(const Addr& param_addr, Packet* param_pkt);
    int functionalWrite(const Addr& param_addr, Packet* param_pkt);
    void setAccessPermission(L2Cache_Entry* param_cache_entry, const Addr& param_addr, const L2Cache_State& param_state);
    L2Cache_Event L1Cache_request_type_to_event(const CoherenceRequestType& param_type, const Addr& param_addr, const MachineID& param_requestor, L2Cache_Entry* param_cache_entry);
    int getPendingAcks(L2Cache_TBE* param_tbe);
    bool isDirty(L2Cache_Entry* param_cache_entry);

    // Set and Reset for cache_entry variable
    void set_cache_entry(L2Cache_Entry*& m_cache_entry_ptr, AbstractCacheEntry* m_new_cache_entry);
    void unset_cache_entry(L2Cache_Entry*& m_cache_entry_ptr);

    // Set and Reset for tbe variable
    void set_tbe(L2Cache_TBE*& m_tbe_ptr, L2Cache_TBE* m_new_tbe);
    void unset_tbe(L2Cache_TBE*& m_tbe_ptr);

    // Actions
    /** \brief fetch data from memory */
    void a_issueFetchToMemory(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Forward request to the exclusive L1 */
    void b_forwardRequestToExclusive(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send data to memory */
    void c_exclusiveReplacement(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send ack to memory for clean replacement */
    void c_exclusiveCleanReplacement(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send data to memory */
    void ct_exclusiveReplacementFromTBE(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send data from cache to reqeustor */
    void d_sendDataToRequestor(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send data from cache to reqeustor */
    void dd_sendExclusiveDataToRequestor(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send data from cache to reqeustor */
    void ds_sendSharedDataToRequestor(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send data from cache to all GetS IDs */
    void e_sendDataToGetSRequestors(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send data from cache to all GetS IDs */
    void ex_sendExclusiveDataToGetSRequestors(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send data from cache to GetX ID */
    void ee_sendDataToGetXRequestor(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief invalidate sharers for L2 replacement */
    void f_sendInvToSharers(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief invalidate sharers for request */
    void fw_sendFwdInvToSharers(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief invalidate sharers for request, requestor is sharer */
    void fwm_sendFwdInvToSharersMinusRequestor(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Allocate TBE for request */
    void i_allocateTBE(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Deallocate external TBE */
    void s_deallocateTBE(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Pop incoming L1 request queue */
    void jj_popL1RequestQueue(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Pop incoming unblock queue */
    void k_popUnblockQueue(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Pop Incoming Response queue */
    void o_popIncomingResponseQueue(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Write data from response queue to cache */
    void m_writeDataToCache(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Write data from response queue to cache */
    void mr_writeDataToCacheFromRequest(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief update pending ack count */
    void q_updateAck(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Write data from response queue to TBE */
    void qq_writeDataToTBE(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Record L1 GetS for load response */
    void ss_recordGetSL1ID(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Record L1 GetX for store response */
    void xx_recordGetXL1ID(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief set the MRU entry */
    void set_setMRU(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Set L2 cache tag equal to tag of block B. */
    void qq_allocateL2CacheBlock(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Deallocate L2 cache block.  Sets the cache to not present, allowing a replacement in parallel with a fetch. */
    void rr_deallocateL2CacheBlock(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send writeback ACK */
    void t_sendWBAck(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Send ACK to upgrader */
    void ts_sendInvAckToUpgrader(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Profile the demand miss */
    void uu_profileMiss(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Profile the demand hit */
    void uu_profileHit(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Add L1 sharer to list */
    void nn_addSharer(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Add L1 sharer to list */
    void nnu_addSharerFromUnblock(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Remove L1 Request sharer from list */
    void kk_removeRequestSharer(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Remove all L1 sharers from list */
    void ll_clearSharers(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief set the exclusive owner */
    void mm_markExclusive(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief set the exclusive owner */
    void mmu_markExclusiveFromUnblock(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief recycle L1 request queue */
    void zz_stallAndWaitL1RequestQueue(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief recycle memory request */
    void zn_recycleResponseNetwork(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief wake-up dependents */
    void kd_wakeUpDependents(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief 212 */
    void mtit_mtitocleannotice(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief notice the L1 about Eviction */
    void evnt_evictNotice(L2Cache_TBE*& m_tbe_ptr, L2Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);

    // Objects
    TBETable<L2Cache_TBE>* m_TBEs_ptr;
};
#endif // __L2Cache_CONTROLLER_H__
