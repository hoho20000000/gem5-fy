/** \file DMA_Controller.hh
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:282
 * Created by slicc definition of Module "DMA Controller"
 */

#ifndef __DMA_CONTROLLER_HH__
#define __DMA_CONTROLLER_HH__

#include <iostream>
#include <sstream>
#include <string>

#include "mem/protocol/TransitionResult.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/common/Consumer.hh"
#include "mem/ruby/slicc_interface/AbstractController.hh"
#include "params/DMA_Controller.hh"

#include "mem/protocol/DMA_State.hh"
extern std::stringstream DMA_transitionComment;

class DMA_Controller : public AbstractController
{
  public:
    typedef DMA_ControllerParams Params;
    DMA_Controller(const Params *p);
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

    void countTransition(DMA_State state, DMA_Event event);
    void possibleTransition(DMA_State state, DMA_Event event);
    uint64_t getEventCount(DMA_Event event);
    bool isPossible(DMA_State state, DMA_Event event);
    uint64_t getTransitionCount(DMA_State state, DMA_Event event);

private:
    DMASequencer* m_dma_sequencer_ptr;
    Cycles m_request_latency;
    MessageBuffer* m_responseFromDir_ptr;
    MessageBuffer* m_requestToDir_ptr;
    MessageBuffer* m_mandatoryQueue_ptr;
    TransitionResult doTransition(DMA_Event event,
                                  Addr addr);

    TransitionResult doTransitionWorker(DMA_Event event,
                                        DMA_State state,
                                        DMA_State& next_state,
                                        Addr addr);
    int m_counters[DMA_State_NUM][DMA_Event_NUM];
    int m_event_counters[DMA_Event_NUM];
    bool m_possible[DMA_State_NUM][DMA_Event_NUM];

    static std::vector<Stats::Vector *> eventVec;
    static std::vector<std::vector<Stats::Vector *> > transVec;
    static int m_num_controllers;

    // Internal functions
    DMA_State getState(const Addr& param_addr);
    void setState(const Addr& param_addr, const DMA_State& param_state);
    AccessPermission getAccessPermission(const Addr& param_addr);
    void setAccessPermission(const Addr& param_addr, const DMA_State& param_state);
    void functionalRead(const Addr& param_addr, Packet* param_pkt);
    int functionalWrite(const Addr& param_addr, Packet* param_pkt);

    // Actions
    /** \brief Send a DMA read request to memory */
    void s_sendReadRequest(Addr addr);
    /** \brief Send a DMA write request to memory */
    void s_sendWriteRequest(Addr addr);
    /** \brief Notify dma controller that write request completed */
    void a_ackCallback(Addr addr);
    /** \brief Write data to dma sequencer */
    void d_dataCallback(Addr addr);
    /** \brief Pop request queue */
    void p_popRequestQueue(Addr addr);
    /** \brief Pop request queue */
    void p_popResponseQueue(Addr addr);

    // Objects
    DMA_State* m_cur_state_ptr;
};
#endif // __DMA_CONTROLLER_H__
