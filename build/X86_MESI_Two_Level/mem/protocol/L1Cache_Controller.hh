/** \file L1Cache_Controller.hh
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:282
 * Created by slicc definition of Module "MESI Directory L1 Cache CMP"
 */

#ifndef __L1Cache_CONTROLLER_HH__
#define __L1Cache_CONTROLLER_HH__

#include <iostream>
#include <sstream>
#include <string>

#include "mem/protocol/TransitionResult.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/common/Consumer.hh"
#include "mem/ruby/slicc_interface/AbstractController.hh"
#include "params/L1Cache_Controller.hh"

#include "mem/protocol/TBETable.hh"
extern std::stringstream L1Cache_transitionComment;

class L1Cache_Controller : public AbstractController
{
  public:
    typedef L1Cache_ControllerParams Params;
    L1Cache_Controller(const Params *p);
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

    void countTransition(L1Cache_State state, L1Cache_Event event);
    void possibleTransition(L1Cache_State state, L1Cache_Event event);
    uint64_t getEventCount(L1Cache_Event event);
    bool isPossible(L1Cache_State state, L1Cache_Event event);
    uint64_t getTransitionCount(L1Cache_State state, L1Cache_Event event);

private:
    Sequencer* m_sequencer_ptr;
    CacheMemory* m_L1Icache_ptr;
    CacheMemory* m_L1Dcache_ptr;
    Prefetcher* m_prefetcher_ptr;
    int m_l2_select_num_bits;
    Cycles m_l1_request_latency;
    Cycles m_l1_response_latency;
    Cycles m_to_l2_latency;
    bool m_send_evictions;
    bool m_enable_prefetch;
    MessageBuffer* m_requestFromL1Cache_ptr;
    MessageBuffer* m_responseFromL1Cache_ptr;
    MessageBuffer* m_unblockFromL1Cache_ptr;
    MessageBuffer* m_requestToL1Cache_ptr;
    MessageBuffer* m_responseToL1Cache_ptr;
    MessageBuffer* m_optionalQueue_ptr;
    MessageBuffer* m_mandatoryQueue_ptr;
    TransitionResult doTransition(L1Cache_Event event,
                                  L1Cache_Entry* m_cache_entry_ptr,
                                  L1Cache_TBE* m_tbe_ptr,
                                  Addr addr,
                                  int core_id = 88);//fanyao: default invalid core id

    TransitionResult doTransitionWorker(L1Cache_Event event,
                                        L1Cache_State state,
                                        L1Cache_State& next_state,
                                        L1Cache_TBE*& m_tbe_ptr,
                                        L1Cache_Entry*& m_cache_entry_ptr,
                                        Addr addr,
                                        int core_id);//fanyao: default invalid core id
    int m_counters[L1Cache_State_NUM][L1Cache_Event_NUM];
    int m_event_counters[L1Cache_Event_NUM];
    bool m_possible[L1Cache_State_NUM][L1Cache_Event_NUM];

    static std::vector<Stats::Vector *> eventVec;
    static std::vector<std::vector<Stats::Vector *> > transVec;
    static int m_num_controllers;

    // Internal functions
    L1Cache_Entry* getCacheEntry(const Addr& param_addr);
    L1Cache_Entry* getL1DCacheEntry(const Addr& param_addr);
    L1Cache_Entry* getL1ICacheEntry(const Addr& param_addr);
    L1Cache_State getState(L1Cache_TBE* param_tbe, L1Cache_Entry* param_cache_entry, const Addr& param_addr);
    void setState(L1Cache_TBE* param_tbe, L1Cache_Entry* param_cache_entry, const Addr& param_addr, const L1Cache_State& param_state);
    AccessPermission getAccessPermission(const Addr& param_addr);
    void functionalRead(const Addr& param_addr, Packet* param_pkt);
    int functionalWrite(const Addr& param_addr, Packet* param_pkt);
    void setAccessPermission(L1Cache_Entry* param_cache_entry, const Addr& param_addr, const L1Cache_State& param_state);
    L1Cache_Event mandatory_request_type_to_event(const RubyRequestType& param_type);
    L1Cache_Event prefetch_request_type_to_event(const RubyRequestType& param_type);
    int getPendingAcks(L1Cache_TBE* param_tbe);
    void enqueuePrefetch(const Addr& param_address, const RubyRequestType& param_type);

    // Set and Reset for cache_entry variable
    void set_cache_entry(L1Cache_Entry*& m_cache_entry_ptr, AbstractCacheEntry* m_new_cache_entry);
    void unset_cache_entry(L1Cache_Entry*& m_cache_entry_ptr);

    // Set and Reset for tbe variable
    void set_tbe(L1Cache_TBE*& m_tbe_ptr, L1Cache_TBE* m_new_tbe);
    void unset_tbe(L1Cache_TBE*& m_tbe_ptr);

    // Actions
    /** \brief Issue GETS */
    void a_issueGETS(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Issue prefetch GETS */
    void pa_issuePfGETS(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Issue GETINSTR */
    void ai_issueGETINSTR(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Issue GETINSTR for prefetch request */
    void pai_issuePfGETINSTR(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Issue GETX */
    void b_issueGETX(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Issue prefetch GETX */
    void pb_issuePfGETX(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Issue GETX */
    void c_issueUPGRADE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send data to requestor */
    void d_sendDataToRequestor(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send data to the L2 cache because of M downgrade */
    void d2_sendDataToL2(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send data to requestor */
    void dt_sendDataToRequestor_fromTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send data to the L2 cache */
    void d2t_sendDataToL2_fromTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send invalidate ack to requestor (could be L2 or L1) */
    void e_sendAckToRequestor(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send data to the L2 cache */
    void f_sendDataToL2(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send data to the L2 cache */
    void ft_sendDataToL2_fromTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send data to the L2 cache */
    void fi_sendInvAck(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief sends eviction information to the processor */
    void forward_eviction_to_cpu(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send data to the L2 cache */
    void g_issuePUTX(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send unblock to the L2 cache */
    void j_sendUnblock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief send unblock to the L2 cache */
    void jj_sendExclusiveUnblock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Invalidate store conditional as the cache lost permissions */
    void dg_invalidate_sc(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Notify sequencer the load completed. */
    void h_load_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Notify sequencer the instruction fetch completed. */
    void h_ifetch_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Notify sequencer the load completed. */
    void hx_load_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Notify sequencer that store completed. */
    void hh_store_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Notify sequencer that store completed. */
    void hhx_store_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Allocate TBE (isPrefetch=0, number of invalidates=0) */
    void i_allocateTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Pop mandatory queue. */
    void k_popMandatoryQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Pop incoming request queue and profile the delay within this virtual network */
    void l_popRequestQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Pop Incoming Response queue and profile the delay within this virtual network */
    void o_popIncomingResponseQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Deallocate TBE */
    void s_deallocateTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Write data to cache */
    void u_writeDataToL1Cache(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Update ack count */
    void q_updateAckCount(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Deallocate L1 cache block.  Sets the cache to not present, allowing a replacement in parallel with a fetch. */
    void ff_deallocateL1CacheBlock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Set L1 D-cache tag equal to tag of block B. */
    void oo_allocateL1DCacheBlock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Set L1 I-cache tag equal to tag of block B. */
    void pp_allocateL1ICacheBlock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief recycle L1 request queue */
    void z_stallAndWaitMandatoryQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief wake-up dependents */
    void kd_wakeUpDependents(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Profile the demand miss */
    void uu_profileInstMiss(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Profile the demand hit */
    void uu_profileInstHit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Profile the demand miss */
    void uu_profileDataMiss(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Profile the demand hit */
    void uu_profileDataHit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Inform the prefetcher about the miss */
    void po_observeMiss(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Inform the prefetcher about the EVICTION */
    void pse_sendEviction(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Inform the prefetcher about the partial miss */
    void ppm_observePfMiss(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Pop the prefetch request queue */
    void pq_popPrefetchQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);
    /** \brief Write data from response queue to cache */
    void mp_markPrefetched(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id);

    // Objects
    TBETable<L1Cache_TBE>* m_TBEs_ptr;
    int* m_l2_select_low_bit_ptr;
};
#endif // __L1Cache_CONTROLLER_H__
