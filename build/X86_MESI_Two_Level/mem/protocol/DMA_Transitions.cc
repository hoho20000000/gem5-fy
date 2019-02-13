// Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:1202
// DMA: DMA Controller

#include <cassert>

#include "base/misc.hh"
#include "base/trace.hh"
#include "debug/ProtocolTrace.hh"
#include "debug/RubyGenerated.hh"
#include "debug/RubyCacheState.hh"
#include "mem/protocol/DMA_Controller.hh"
#include "mem/protocol/DMA_Event.hh"
#include "mem/protocol/DMA_State.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#define HASH_FUN(state, event)  ((int(state)*DMA_Event_NUM)+int(event))

#define GET_TRANSITION_COMMENT() (DMA_transitionComment.str())
#define CLEAR_TRANSITION_COMMENT() (DMA_transitionComment.str(""))

TransitionResult
DMA_Controller::doTransition(DMA_Event event,
                                  Addr addr)
{
    DMA_State state = getState(addr);
    DMA_State next_state = state;

    DPRINTF(RubyGenerated, "%s, Time: %lld, state: %s, event: %s, addr: %#x\n",
            *this, curCycle(), DMA_State_to_string(state),
            DMA_Event_to_string(event), addr);
    TransitionResult result =
    doTransitionWorker(event, state, next_state, addr);
    if (result == TransitionResult_Valid) {
        DPRINTF(RubyGenerated, "next_state: %s\n",
                DMA_State_to_string(next_state));
        countTransition(state, event);

        DPRINTFR(ProtocolTrace, "%15d %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "DMA",
                 DMA_Event_to_string(event),
                 DMA_State_to_string(state),
                 DMA_State_to_string(next_state),
                 printAddress(addr), GET_TRANSITION_COMMENT());

        CLEAR_TRANSITION_COMMENT();
    setState(addr, next_state);
    setAccessPermission(addr, next_state);
    } else if (result == TransitionResult_ResourceStall) {
        DPRINTFR(ProtocolTrace, "%15s %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "DMA",
                 DMA_Event_to_string(event),
                 DMA_State_to_string(state),
                 DMA_State_to_string(next_state),
                 printAddress(addr), "Resource Stall");
    } else if (result == TransitionResult_ProtocolStall) {
        DPRINTF(RubyGenerated, "stalling\n");
        DPRINTFR(ProtocolTrace, "%15s %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "DMA",
                 DMA_Event_to_string(event),
                 DMA_State_to_string(state),
                 DMA_State_to_string(next_state),
                 printAddress(addr), "Protocol Stall");
    }

    return result;
}

TransitionResult
DMA_Controller::doTransitionWorker(DMA_Event event,
                                        DMA_State state,
                                        DMA_State& next_state,
                                  Addr addr)
{
    switch(HASH_FUN(state, event)) {
  case HASH_FUN(DMA_State_READY, DMA_Event_ReadRequest):
    next_state = DMA_State_BUSY_RD;
    if (!(*m_requestToDir_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    s_sendReadRequest(addr);
    p_popRequestQueue(addr);
    return TransitionResult_Valid;

  case HASH_FUN(DMA_State_READY, DMA_Event_WriteRequest):
    next_state = DMA_State_BUSY_WR;
    if (!(*m_requestToDir_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    s_sendWriteRequest(addr);
    p_popRequestQueue(addr);
    return TransitionResult_Valid;

  case HASH_FUN(DMA_State_BUSY_RD, DMA_Event_Data):
    next_state = DMA_State_READY;
    d_dataCallback(addr);
    p_popResponseQueue(addr);
    return TransitionResult_Valid;

  case HASH_FUN(DMA_State_BUSY_WR, DMA_Event_Ack):
    next_state = DMA_State_READY;
    a_ackCallback(addr);
    p_popResponseQueue(addr);
    return TransitionResult_Valid;

      default:
        panic("Invalid transition\n"
              "%s time: %d addr: %s event: %s state: %s\n",
              name(), curCycle(), addr, event, state);
    }

    return TransitionResult_Valid;
}
