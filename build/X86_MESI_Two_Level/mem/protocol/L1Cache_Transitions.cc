// Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:1202
// L1Cache: MESI Directory L1 Cache CMP

#include <cassert>

#include "base/misc.hh"
#include "base/trace.hh"
#include "debug/ProtocolTrace.hh"
#include "debug/RubyGenerated.hh"
#include "debug/RubyCacheState.hh"
#include "mem/protocol/L1Cache_Controller.hh"
#include "mem/protocol/L1Cache_Event.hh"
#include "mem/protocol/L1Cache_State.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#define HASH_FUN(state, event)  ((int(state)*L1Cache_Event_NUM)+int(event))

#define GET_TRANSITION_COMMENT() (L1Cache_transitionComment.str())
#define CLEAR_TRANSITION_COMMENT() (L1Cache_transitionComment.str(""))

TransitionResult
L1Cache_Controller::doTransition(L1Cache_Event event,
                                  L1Cache_Entry* m_cache_entry_ptr,
                                  L1Cache_TBE* m_tbe_ptr,
                                  Addr addr,
                                  int core_id)//fanyao: default invalid core id
{
    L1Cache_State state = getState(m_tbe_ptr, m_cache_entry_ptr, addr);
    L1Cache_State next_state = state;

    DPRINTF(RubyGenerated, "%s, Time: %lld, state: %s, event: %s, addr: %#x\n",
            *this, curCycle(), L1Cache_State_to_string(state),
            L1Cache_Event_to_string(event), addr);
    TransitionResult result =
    doTransitionWorker(event, state, next_state, m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    //fanyao added from StateMachine.py
    DPRINTF(RubyCacheState, "%s, Time: %lld, state: %s, next_state: %s, event: %s, addr: %#x\n",
            *this, curCycle(), L1Cache_State_to_string(state),
                    L1Cache_State_to_string(next_state),
            L1Cache_Event_to_string(event), addr);
    if (result == TransitionResult_Valid) {
        DPRINTF(RubyGenerated, "next_state: %s\n",
                L1Cache_State_to_string(next_state));
        countTransition(state, event);

        DPRINTFR(ProtocolTrace, "%15d %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "L1Cache",
                 L1Cache_Event_to_string(event),
                 L1Cache_State_to_string(state),
                 L1Cache_State_to_string(next_state),
                 printAddress(addr), GET_TRANSITION_COMMENT());

        CLEAR_TRANSITION_COMMENT();
    setState(m_tbe_ptr, m_cache_entry_ptr, addr, next_state);
    setAccessPermission(m_cache_entry_ptr, addr, next_state);
    } else if (result == TransitionResult_ResourceStall) {
        DPRINTFR(ProtocolTrace, "%15s %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "L1Cache",
                 L1Cache_Event_to_string(event),
                 L1Cache_State_to_string(state),
                 L1Cache_State_to_string(next_state),
                 printAddress(addr), "Resource Stall");
    } else if (result == TransitionResult_ProtocolStall) {
        DPRINTF(RubyGenerated, "stalling\n");
        DPRINTFR(ProtocolTrace, "%15s %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "L1Cache",
                 L1Cache_Event_to_string(event),
                 L1Cache_State_to_string(state),
                 L1Cache_State_to_string(next_state),
                 printAddress(addr), "Protocol Stall");
    }

    return result;
}

TransitionResult
L1Cache_Controller::doTransitionWorker(L1Cache_Event event,
                                        L1Cache_State state,
                                        L1Cache_State& next_state,
                                        L1Cache_TBE*& m_tbe_ptr,
                                        L1Cache_Entry*& m_cache_entry_ptr,
                                        Addr addr,
                                        int core_id)//fanyao: default invalid core id
{
    switch(HASH_FUN(state, event)) {
  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_PF_IS_I, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_PF_IS_I, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_PF_SM, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_PF_SM, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_PF_SM, L1Cache_Event_L1_Replacement):
    z_stallAndWaitMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_L1_Replacement):
    ff_deallocateL1CacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_S, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_S, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_S, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_E, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_E, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_E, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_PF_Ifetch):
    pq_popPrefetchQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_Load):
    next_state = L1Cache_State_IS;
    if (!(*m_TBEs_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_requestFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    oo_allocateL1DCacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    i_allocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    a_issueGETS(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    uu_profileDataMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    po_observeMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_PF_Load):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_PF_Load):
    next_state = L1Cache_State_PF_IS;
    if (!(*m_TBEs_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_requestFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    oo_allocateL1DCacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    i_allocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    pa_issuePfGETS(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    pq_popPrefetchQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_Ifetch):
    next_state = L1Cache_State_IS;
    uu_profileDataMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    ppm_observePfMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IS_I, L1Cache_Event_Load):
    next_state = L1Cache_State_IS_I;
    uu_profileDataMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    ppm_observePfMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_Ifetch):
    next_state = L1Cache_State_IS;
    if (!(*m_TBEs_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_requestFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    pp_allocateL1ICacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    i_allocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    ai_issueGETINSTR(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    uu_profileInstMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    po_observeMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_PF_Ifetch):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_PF_Ifetch):
    next_state = L1Cache_State_PF_IS;
    if (!(*m_TBEs_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_requestFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    pp_allocateL1ICacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    i_allocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    pai_issuePfGETINSTR(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    pq_popPrefetchQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_Store):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_Store):
    next_state = L1Cache_State_IM;
    if (!(*m_TBEs_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_requestFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    oo_allocateL1DCacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    i_allocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    b_issueGETX(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    uu_profileDataMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    po_observeMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_PF_Store):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_PF_Store):
    next_state = L1Cache_State_PF_IM;
    if (!(*m_TBEs_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_requestFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    oo_allocateL1DCacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    i_allocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    pb_issuePfGETX(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    pq_popPrefetchQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_Store):
    next_state = L1Cache_State_IM;
    uu_profileDataMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    ppm_observePfMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_SM, L1Cache_Event_Store):
    next_state = L1Cache_State_SM;
    uu_profileDataMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    ppm_observePfMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_Inv):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_Inv):
  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_Inv):
  case HASH_FUN(L1Cache_State_PF_IS_I, L1Cache_Event_Inv):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_Inv):
  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_Inv):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_Inv):
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    fi_sendInvAck(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_NP, L1Cache_Event_EVI_NOTI):
  case HASH_FUN(L1Cache_State_I, L1Cache_Event_EVI_NOTI):
  case HASH_FUN(L1Cache_State_S, L1Cache_Event_EVI_NOTI):
  case HASH_FUN(L1Cache_State_E, L1Cache_Event_EVI_NOTI):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_EVI_NOTI):
    pse_sendEviction(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_S, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_E, L1Cache_Event_Load):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_Load):
    h_load_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    uu_profileDataHit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_S, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_E, L1Cache_Event_Ifetch):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_Ifetch):
    h_ifetch_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    uu_profileInstHit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_S, L1Cache_Event_Store):
    next_state = L1Cache_State_SM;
    if (!(*m_TBEs_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_requestFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    i_allocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    c_issueUPGRADE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    uu_profileDataMiss(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_S, L1Cache_Event_L1_Replacement):
    next_state = L1Cache_State_I;
    forward_eviction_to_cpu(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    ff_deallocateL1CacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_S, L1Cache_Event_Inv):
  case HASH_FUN(L1Cache_State_E, L1Cache_Event_Inv):
    next_state = L1Cache_State_I;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    forward_eviction_to_cpu(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    fi_sendInvAck(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_E, L1Cache_Event_Store):
    next_state = L1Cache_State_M;
    hh_store_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    uu_profileDataHit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_M, L1Cache_Event_Store):
    hh_store_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    uu_profileDataHit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    k_popMandatoryQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_E, L1Cache_Event_L1_Replacement):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_L1_Replacement):
    next_state = L1Cache_State_M_I;
    if (!(*m_TBEs_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_requestFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    forward_eviction_to_cpu(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    i_allocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    g_issuePUTX(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    ff_deallocateL1CacheBlock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_E, L1Cache_Event_Fwd_GETX):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_Fwd_GETX):
    next_state = L1Cache_State_I;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    forward_eviction_to_cpu(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    d_sendDataToRequestor(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_E, L1Cache_Event_Fwd_GETS):
  case HASH_FUN(L1Cache_State_E, L1Cache_Event_Fwd_GET_INSTR):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_Fwd_GETS):
  case HASH_FUN(L1Cache_State_M, L1Cache_Event_Fwd_GET_INSTR):
    next_state = L1Cache_State_S;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(2, clockEdge()))
        return TransitionResult_ResourceStall;
    d_sendDataToRequestor(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    d2_sendDataToL2(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_WB_Ack):
  case HASH_FUN(L1Cache_State_PF_IS_I, L1Cache_Event_Data_all_Acks):
  case HASH_FUN(L1Cache_State_SINK_WB_ACK, L1Cache_Event_WB_Ack):
    next_state = L1Cache_State_I;
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_M, L1Cache_Event_Inv):
    next_state = L1Cache_State_I;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    forward_eviction_to_cpu(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    f_sendDataToL2(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_Inv):
    next_state = L1Cache_State_SINK_WB_ACK;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    ft_sendDataToL2_fromTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_Fwd_GETX):
    next_state = L1Cache_State_SINK_WB_ACK;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    dt_sendDataToRequestor_fromTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_Fwd_GETS):
  case HASH_FUN(L1Cache_State_M_I, L1Cache_Event_Fwd_GET_INSTR):
    next_state = L1Cache_State_SINK_WB_ACK;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(2, clockEdge()))
        return TransitionResult_ResourceStall;
    dt_sendDataToRequestor_fromTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    d2t_sendDataToL2_fromTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_Inv):
    next_state = L1Cache_State_IS_I;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    fi_sendInvAck(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_Inv):
    next_state = L1Cache_State_PF_IS_I;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    fi_sendInvAck(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_Data_all_Acks):
    next_state = L1Cache_State_S;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    hx_load_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_Data_all_Acks):
    next_state = L1Cache_State_S;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    mp_markPrefetched(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_Data_all_Acks):
    next_state = L1Cache_State_I;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    hx_load_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_DataS_fromL1):
    next_state = L1Cache_State_S;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    j_sendUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    hx_load_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_DataS_fromL1):
    next_state = L1Cache_State_S;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    j_sendUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_DataS_fromL1):
    next_state = L1Cache_State_I;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    j_sendUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    hx_load_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IS_I, L1Cache_Event_DataS_fromL1):
    next_state = L1Cache_State_I;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    j_sendUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_IS_I, L1Cache_Event_Data_Exclusive):
  case HASH_FUN(L1Cache_State_IS, L1Cache_Event_Data_Exclusive):
    next_state = L1Cache_State_E;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    hx_load_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    jj_sendExclusiveUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IS_I, L1Cache_Event_Data_Exclusive):
    next_state = L1Cache_State_E;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    jj_sendExclusiveUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IS, L1Cache_Event_Data_Exclusive):
    next_state = L1Cache_State_E;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    jj_sendExclusiveUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    mp_markPrefetched(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_SM, L1Cache_Event_Inv):
    next_state = L1Cache_State_PF_IM;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    fi_sendInvAck(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_Data):
    next_state = L1Cache_State_SM;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    q_updateAckCount(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_Data):
    next_state = L1Cache_State_PF_SM;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    q_updateAckCount(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_Data_all_Acks):
    next_state = L1Cache_State_M;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    hhx_store_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    jj_sendExclusiveUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_Data_all_Acks):
    next_state = L1Cache_State_M;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    u_writeDataToL1Cache(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    jj_sendExclusiveUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    mp_markPrefetched(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_Inv):
    next_state = L1Cache_State_IM;
    if (!(*m_responseFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    forward_eviction_to_cpu(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    fi_sendInvAck(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    dg_invalidate_sc(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    l_popRequestQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_Ack):
  case HASH_FUN(L1Cache_State_IM, L1Cache_Event_Ack):
  case HASH_FUN(L1Cache_State_PF_SM, L1Cache_Event_Ack):
  case HASH_FUN(L1Cache_State_PF_IM, L1Cache_Event_Ack):
    q_updateAckCount(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_SM, L1Cache_Event_Ack_all):
    next_state = L1Cache_State_M;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    jj_sendExclusiveUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    hhx_store_hit(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

  case HASH_FUN(L1Cache_State_PF_SM, L1Cache_Event_Ack_all):
    next_state = L1Cache_State_M;
    if (!(*m_unblockFromL1Cache_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    jj_sendExclusiveUnblock(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    s_deallocateTBE(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    mp_markPrefetched(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    o_popIncomingResponseQueue(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    kd_wakeUpDependents(m_tbe_ptr, m_cache_entry_ptr, addr, core_id);
    return TransitionResult_Valid;

      default:
        panic("Invalid transition\n"
              "%s time: %d addr: %s event: %s state: %s\n",
              name(), curCycle(), addr, event, state);
    }

    return TransitionResult_Valid;
}
