/** \file L1Cache_Controller.cc
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:479
 * Created by slicc definition of Module "MESI Directory L1 Cache CMP"
 */

#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <sstream>
#include <string>
#include <typeinfo>

#include "base/compiler.hh"
#include "base/cprintf.hh"

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
#include "mem/protocol/TBETable.hh"
L1Cache_Controller *
L1Cache_ControllerParams::create()
{
    return new L1Cache_Controller(this);
}

int L1Cache_Controller::m_num_controllers = 0;
std::vector<Stats::Vector *>  L1Cache_Controller::eventVec;
std::vector<std::vector<Stats::Vector *> >  L1Cache_Controller::transVec;

// for adding information to the protocol debug trace
stringstream L1Cache_transitionComment;

#ifndef NDEBUG
#define APPEND_TRANSITION_COMMENT(str) (L1Cache_transitionComment << str)
#else
#define APPEND_TRANSITION_COMMENT(str) do {} while (0)
#endif

/** \brief constructor */
L1Cache_Controller::L1Cache_Controller(const Params *p)
    : AbstractController(p)
{
    m_machineID.type = MachineType_L1Cache;
    m_machineID.num = m_version;
    m_num_controllers++;

    m_in_ports = 4;
    m_sequencer_ptr = p->sequencer;
    if (m_sequencer_ptr != NULL) {
        m_sequencer_ptr->setController(this);
    }
    m_L1Icache_ptr = p->L1Icache;
    m_L1Dcache_ptr = p->L1Dcache;
    m_prefetcher_ptr = p->prefetcher;
    m_l2_select_num_bits = p->l2_select_num_bits;
    m_l1_request_latency = p->l1_request_latency;
    m_l1_response_latency = p->l1_response_latency;
    m_to_l2_latency = p->to_l2_latency;
    m_send_evictions = p->send_evictions;
    m_enable_prefetch = p->enable_prefetch;
    m_requestFromL1Cache_ptr = p->requestFromL1Cache;
    m_responseFromL1Cache_ptr = p->responseFromL1Cache;
    m_unblockFromL1Cache_ptr = p->unblockFromL1Cache;
    m_requestToL1Cache_ptr = p->requestToL1Cache;
    m_responseToL1Cache_ptr = p->responseToL1Cache;
    m_optionalQueue_ptr = p->optionalQueue;
    m_mandatoryQueue_ptr = p->mandatoryQueue;

    for (int state = 0; state < L1Cache_State_NUM; state++) {
        for (int event = 0; event < L1Cache_Event_NUM; event++) {
            m_possible[state][event] = false;
            m_counters[state][event] = 0;
        }
    }
    for (int event = 0; event < L1Cache_Event_NUM; event++) {
        m_event_counters[event] = 0;
    }
}

void
L1Cache_Controller::initNetQueues()
{
    MachineType machine_type = string_to_MachineType("L1Cache");
    int base M5_VAR_USED = MachineType_base_number(machine_type);

    assert(m_requestFromL1Cache_ptr != NULL);
    m_net_ptr->setToNetQueue(m_version + base, m_requestFromL1Cache_ptr->getOrdered(), 0,
                                     "request", m_requestFromL1Cache_ptr);
    assert(m_responseFromL1Cache_ptr != NULL);
    m_net_ptr->setToNetQueue(m_version + base, m_responseFromL1Cache_ptr->getOrdered(), 1,
                                     "response", m_responseFromL1Cache_ptr);
    assert(m_unblockFromL1Cache_ptr != NULL);
    m_net_ptr->setToNetQueue(m_version + base, m_unblockFromL1Cache_ptr->getOrdered(), 2,
                                     "unblock", m_unblockFromL1Cache_ptr);
    assert(m_requestToL1Cache_ptr != NULL);
    m_net_ptr->setFromNetQueue(m_version + base, m_requestToL1Cache_ptr->getOrdered(), 2,
                                     "request", m_requestToL1Cache_ptr);
    assert(m_responseToL1Cache_ptr != NULL);
    m_net_ptr->setFromNetQueue(m_version + base, m_responseToL1Cache_ptr->getOrdered(), 1,
                                     "response", m_responseToL1Cache_ptr);
}

void
L1Cache_Controller::init()
{
    // initialize objects
    m_TBEs_ptr  = new TBETable<L1Cache_TBE>(m_number_of_TBEs);
    assert(m_TBEs_ptr != NULL);
    m_l2_select_low_bit_ptr = new int;
    (*m_l2_select_low_bit_ptr) = RubySystem::getBlockSizeBits();

    (*m_prefetcher_ptr).setController(this);

    (*m_optionalQueue_ptr).setConsumer(this);
    (*m_responseToL1Cache_ptr).setConsumer(this);
    (*m_requestToL1Cache_ptr).setConsumer(this);
    (*m_mandatoryQueue_ptr).setConsumer(this);

    possibleTransition(L1Cache_State_IS, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_PF_IS_I, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_PF_IS_I, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_PF_SM, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_PF_SM, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_PF_SM, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_I, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_S, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_S, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_S, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_E, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_E, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_E, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_M, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_M, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_M, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_I, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_I, L1Cache_Event_PF_Load);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_PF_IS_I, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_I, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_I, L1Cache_Event_PF_Ifetch);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_I, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_I, L1Cache_Event_PF_Store);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_PF_SM, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_I, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_NP, L1Cache_Event_EVI_NOTI);
    possibleTransition(L1Cache_State_I, L1Cache_Event_EVI_NOTI);
    possibleTransition(L1Cache_State_S, L1Cache_Event_EVI_NOTI);
    possibleTransition(L1Cache_State_E, L1Cache_Event_EVI_NOTI);
    possibleTransition(L1Cache_State_M, L1Cache_Event_EVI_NOTI);
    possibleTransition(L1Cache_State_S, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_E, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_M, L1Cache_Event_Load);
    possibleTransition(L1Cache_State_S, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_E, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_M, L1Cache_Event_Ifetch);
    possibleTransition(L1Cache_State_S, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_S, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_S, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_E, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_M, L1Cache_Event_Store);
    possibleTransition(L1Cache_State_E, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_E, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_E, L1Cache_Event_Fwd_GETX);
    possibleTransition(L1Cache_State_E, L1Cache_Event_Fwd_GETS);
    possibleTransition(L1Cache_State_E, L1Cache_Event_Fwd_GET_INSTR);
    possibleTransition(L1Cache_State_M, L1Cache_Event_L1_Replacement);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_WB_Ack);
    possibleTransition(L1Cache_State_M, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_M, L1Cache_Event_Fwd_GETX);
    possibleTransition(L1Cache_State_M, L1Cache_Event_Fwd_GETS);
    possibleTransition(L1Cache_State_M, L1Cache_Event_Fwd_GET_INSTR);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_Fwd_GETX);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_Fwd_GETS);
    possibleTransition(L1Cache_State_M_I, L1Cache_Event_Fwd_GET_INSTR);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_PF_IS_I, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_Data_all_Acks);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_Data_all_Acks);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_Data_all_Acks);
    possibleTransition(L1Cache_State_PF_IS_I, L1Cache_Event_Data_all_Acks);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_DataS_fromL1);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_DataS_fromL1);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_DataS_fromL1);
    possibleTransition(L1Cache_State_PF_IS_I, L1Cache_Event_DataS_fromL1);
    possibleTransition(L1Cache_State_IS_I, L1Cache_Event_Data_Exclusive);
    possibleTransition(L1Cache_State_PF_IS_I, L1Cache_Event_Data_Exclusive);
    possibleTransition(L1Cache_State_IS, L1Cache_Event_Data_Exclusive);
    possibleTransition(L1Cache_State_PF_IS, L1Cache_Event_Data_Exclusive);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_PF_SM, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_Data);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_Data);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_Data_all_Acks);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_Data_all_Acks);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_Ack);
    possibleTransition(L1Cache_State_IM, L1Cache_Event_Ack);
    possibleTransition(L1Cache_State_PF_SM, L1Cache_Event_Ack);
    possibleTransition(L1Cache_State_PF_IM, L1Cache_Event_Ack);
    possibleTransition(L1Cache_State_SM, L1Cache_Event_Ack_all);
    possibleTransition(L1Cache_State_PF_SM, L1Cache_Event_Ack_all);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_Inv);
    possibleTransition(L1Cache_State_SINK_WB_ACK, L1Cache_Event_WB_Ack);
    AbstractController::init();
    resetStats();
}
Sequencer*
L1Cache_Controller::getCPUSequencer() const
{
    if (NULL != m_sequencer_ptr && m_sequencer_ptr->isCPUSequencer()) {
        return m_sequencer_ptr;
    } else {
        return NULL;
    }
}

GPUCoalescer*
L1Cache_Controller::getGPUCoalescer() const
{
    return NULL;
}

void
L1Cache_Controller::regStats()
{
    AbstractController::regStats();

    if (m_version == 0) {
        for (L1Cache_Event event = L1Cache_Event_FIRST;
             event < L1Cache_Event_NUM; ++event) {
            Stats::Vector *t = new Stats::Vector();
            t->init(m_num_controllers);
            t->name(params()->ruby_system->name() + ".L1Cache_Controller." +
                L1Cache_Event_to_string(event));
            t->flags(Stats::pdf | Stats::total | Stats::oneline |
                     Stats::nozero);

            eventVec.push_back(t);
        }

        for (L1Cache_State state = L1Cache_State_FIRST;
             state < L1Cache_State_NUM; ++state) {

            transVec.push_back(std::vector<Stats::Vector *>());

            for (L1Cache_Event event = L1Cache_Event_FIRST;
                 event < L1Cache_Event_NUM; ++event) {

                Stats::Vector *t = new Stats::Vector();
                t->init(m_num_controllers);
                t->name(params()->ruby_system->name() + ".L1Cache_Controller." +
                        L1Cache_State_to_string(state) +
                        "." + L1Cache_Event_to_string(event));

                t->flags(Stats::pdf | Stats::total | Stats::oneline |
                         Stats::nozero);
                transVec[state].push_back(t);
            }
        }
    }
}

void
L1Cache_Controller::collateStats()
{
    for (L1Cache_Event event = L1Cache_Event_FIRST;
         event < L1Cache_Event_NUM; ++event) {
        for (unsigned int i = 0; i < m_num_controllers; ++i) {
            RubySystem *rs = params()->ruby_system;
            std::map<uint32_t, AbstractController *>::iterator it =
                     rs->m_abstract_controls[MachineType_L1Cache].find(i);
            assert(it != rs->m_abstract_controls[MachineType_L1Cache].end());
            (*eventVec[event])[i] =
                ((L1Cache_Controller *)(*it).second)->getEventCount(event);
        }
    }

    for (L1Cache_State state = L1Cache_State_FIRST;
         state < L1Cache_State_NUM; ++state) {

        for (L1Cache_Event event = L1Cache_Event_FIRST;
             event < L1Cache_Event_NUM; ++event) {

            for (unsigned int i = 0; i < m_num_controllers; ++i) {
                RubySystem *rs = params()->ruby_system;
                std::map<uint32_t, AbstractController *>::iterator it =
                         rs->m_abstract_controls[MachineType_L1Cache].find(i);
                assert(it != rs->m_abstract_controls[MachineType_L1Cache].end());
                (*transVec[state][event])[i] =
                    ((L1Cache_Controller *)(*it).second)->getTransitionCount(state, event);
            }
        }
    }
}

void
L1Cache_Controller::countTransition(L1Cache_State state, L1Cache_Event event)
{
    assert(m_possible[state][event]);
    m_counters[state][event]++;
    m_event_counters[event]++;
}
void
L1Cache_Controller::possibleTransition(L1Cache_State state,
                             L1Cache_Event event)
{
    m_possible[state][event] = true;
}

uint64_t
L1Cache_Controller::getEventCount(L1Cache_Event event)
{
    return m_event_counters[event];
}

bool
L1Cache_Controller::isPossible(L1Cache_State state, L1Cache_Event event)
{
    return m_possible[state][event];
}

uint64_t
L1Cache_Controller::getTransitionCount(L1Cache_State state,
                             L1Cache_Event event)
{
    return m_counters[state][event];
}

int
L1Cache_Controller::getNumControllers()
{
    return m_num_controllers;
}

MessageBuffer*
L1Cache_Controller::getMandatoryQueue() const
{
    return m_mandatoryQueue_ptr;
}

MessageBuffer*
L1Cache_Controller::getMemoryQueue() const
{
    return NULL;
}

void
L1Cache_Controller::print(ostream& out) const
{
    out << "[L1Cache_Controller " << m_version << "]";
}

void L1Cache_Controller::resetStats()
{
    for (int state = 0; state < L1Cache_State_NUM; state++) {
        for (int event = 0; event < L1Cache_Event_NUM; event++) {
            m_counters[state][event] = 0;
        }
    }

    for (int event = 0; event < L1Cache_Event_NUM; event++) {
        m_event_counters[event] = 0;
    }

    AbstractController::resetStats();
}

// Set and Reset for cache_entry variable
void
L1Cache_Controller::set_cache_entry(L1Cache_Entry*& m_cache_entry_ptr, AbstractCacheEntry* m_new_cache_entry)
{
  m_cache_entry_ptr = (L1Cache_Entry*)m_new_cache_entry;
}

void
L1Cache_Controller::unset_cache_entry(L1Cache_Entry*& m_cache_entry_ptr)
{
  m_cache_entry_ptr = 0;
}

// Set and Reset for tbe variable
void
L1Cache_Controller::set_tbe(L1Cache_TBE*& m_tbe_ptr, L1Cache_TBE* m_new_tbe)
{
  m_tbe_ptr = m_new_tbe;
}

void
L1Cache_Controller::unset_tbe(L1Cache_TBE*& m_tbe_ptr)
{
  m_tbe_ptr = NULL;
}

void
L1Cache_Controller::recordCacheTrace(int cntrl, CacheRecorder* tr)
{
    m_L1Icache_ptr->recordCacheContents(cntrl, tr);
    m_L1Dcache_ptr->recordCacheContents(cntrl, tr);
}

// Actions
/** \brief Issue GETS */
void
L1Cache_Controller::a_issueGETS(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing a_issueGETS\n");
    try {
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
{
    std::shared_ptr<RequestMsg> out_msg = std::make_shared<RequestMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceRequestType_GETS;
    (*out_msg).m_Requestor = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:567: address: %#x, destination: %s\n", addr, (*out_msg).m_Destination);
    (*out_msg).m_MessageSize = MessageSizeType_Control;
    (*out_msg).m_Prefetch = ((*in_msg_ptr)).m_Prefetch;
    (*out_msg).m_AccessMode = ((*in_msg_ptr)).m_AccessMode;
    (*out_msg).m_ThreadId = ((*in_msg_ptr)).m_procId;
    ((*m_requestFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_request_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:a_issueGETS: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Issue prefetch GETS */
void
L1Cache_Controller::pa_issuePfGETS(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing pa_issuePfGETS\n");
    try {
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
{
    std::shared_ptr<RequestMsg> out_msg = std::make_shared<RequestMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceRequestType_GETS;
    (*out_msg).m_Requestor = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:585: address: %#x, destination: %s\n", addr, (*out_msg).m_Destination);
    (*out_msg).m_MessageSize = MessageSizeType_Control;
    (*out_msg).m_Prefetch = ((*in_msg_ptr)).m_Prefetch;
    (*out_msg).m_AccessMode = ((*in_msg_ptr)).m_AccessMode;
    ((*m_requestFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_request_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:pa_issuePfGETS: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Issue GETINSTR */
void
L1Cache_Controller::ai_issueGETINSTR(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing ai_issueGETINSTR\n");
    try {
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
{
    std::shared_ptr<RequestMsg> out_msg = std::make_shared<RequestMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceRequestType_GET_INSTR;
    (*out_msg).m_Requestor = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:602: address: %#x, destination: %s\n", addr, (*out_msg).m_Destination);
    (*out_msg).m_MessageSize = MessageSizeType_Control;
    (*out_msg).m_Prefetch = ((*in_msg_ptr)).m_Prefetch;
    (*out_msg).m_AccessMode = ((*in_msg_ptr)).m_AccessMode;
    (*out_msg).m_ThreadId = ((*in_msg_ptr)).m_procId;
    ((*m_requestFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_request_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:ai_issueGETINSTR: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Issue GETINSTR for prefetch request */
void
L1Cache_Controller::pai_issuePfGETINSTR(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing pai_issuePfGETINSTR\n");
    try {
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
{
    std::shared_ptr<RequestMsg> out_msg = std::make_shared<RequestMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceRequestType_GET_INSTR;
    (*out_msg).m_Requestor = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    (*out_msg).m_MessageSize = MessageSizeType_Control;
    (*out_msg).m_Prefetch = ((*in_msg_ptr)).m_Prefetch;
    (*out_msg).m_AccessMode = ((*in_msg_ptr)).m_AccessMode;
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:626: address: %#x, destination: %s\n", addr, (*out_msg).m_Destination);
    ((*m_requestFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_request_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:pai_issuePfGETINSTR: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Issue GETX */
void
L1Cache_Controller::b_issueGETX(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing b_issueGETX\n");
    try {
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
{
    std::shared_ptr<RequestMsg> out_msg = std::make_shared<RequestMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceRequestType_GETX;
    (*out_msg).m_Requestor = m_machineID;
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:638: %s\n", m_machineID);
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:641: address: %#x, destination: %s\n", addr, (*out_msg).m_Destination);
    (*out_msg).m_MessageSize = MessageSizeType_Control;
    (*out_msg).m_Prefetch = ((*in_msg_ptr)).m_Prefetch;
    (*out_msg).m_AccessMode = ((*in_msg_ptr)).m_AccessMode;
    (*out_msg).m_ThreadId = ((*in_msg_ptr)).m_procId;
    ((*m_requestFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_request_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:b_issueGETX: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Issue prefetch GETX */
void
L1Cache_Controller::pb_issuePfGETX(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing pb_issuePfGETX\n");
    try {
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
{
    std::shared_ptr<RequestMsg> out_msg = std::make_shared<RequestMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceRequestType_GETX;
    (*out_msg).m_Requestor = m_machineID;
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:657: %s\n", m_machineID);
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:662: address: %#x, destination: %s\n", addr, (*out_msg).m_Destination);
    (*out_msg).m_MessageSize = MessageSizeType_Control;
    (*out_msg).m_Prefetch = ((*in_msg_ptr)).m_Prefetch;
    (*out_msg).m_AccessMode = ((*in_msg_ptr)).m_AccessMode;
    ((*m_requestFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_request_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:pb_issuePfGETX: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Issue GETX */
void
L1Cache_Controller::c_issueUPGRADE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing c_issueUPGRADE\n");
    try {
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
{
    std::shared_ptr<RequestMsg> out_msg = std::make_shared<RequestMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceRequestType_UPGRADE;
    (*out_msg).m_Requestor = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:679: address: %#x, destination: %s\n", addr, (*out_msg).m_Destination);
    (*out_msg).m_MessageSize = MessageSizeType_Control;
    (*out_msg).m_Prefetch = ((*in_msg_ptr)).m_Prefetch;
    (*out_msg).m_AccessMode = ((*in_msg_ptr)).m_AccessMode;
    (*out_msg).m_ThreadId = ((*in_msg_ptr)).m_procId;
    ((*m_requestFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_request_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:c_issueUPGRADE: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send data to requestor */
void
L1Cache_Controller::d_sendDataToRequestor(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing d_sendDataToRequestor\n");
    try {
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
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    #ifndef NDEBUG
    if (!((m_cache_entry_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-L1cache.sm:692: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_DATA;
    (*out_msg).m_DataBlk = (*m_cache_entry_ptr).m_DataBlk;
    (*out_msg).m_Dirty = (*m_cache_entry_ptr).m_Dirty;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add(((*in_msg_ptr)).m_Requestor));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Data;
    ((*m_responseFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:d_sendDataToRequestor: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send data to the L2 cache because of M downgrade */
void
L1Cache_Controller::d2_sendDataToL2(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing d2_sendDataToL2\n");
    try {
       {
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    #ifndef NDEBUG
    if (!((m_cache_entry_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-L1cache.sm:706: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_DATA;
    (*out_msg).m_DataBlk = (*m_cache_entry_ptr).m_DataBlk;
    (*out_msg).m_Dirty = (*m_cache_entry_ptr).m_Dirty;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Data;
    ((*m_responseFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:d2_sendDataToL2: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send data to requestor */
void
L1Cache_Controller::dt_sendDataToRequestor_fromTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing dt_sendDataToRequestor_fromTBE\n");
    try {
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
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    #ifndef NDEBUG
    if (!((m_tbe_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-L1cache.sm:722: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_DATA;
    (*out_msg).m_DataBlk = (*m_tbe_ptr).m_DataBlk;
    (*out_msg).m_Dirty = (*m_tbe_ptr).m_Dirty;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add(((*in_msg_ptr)).m_Requestor));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Data;
    ((*m_responseFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:dt_sendDataToRequestor_fromTBE: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send data to the L2 cache */
void
L1Cache_Controller::d2t_sendDataToL2_fromTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing d2t_sendDataToL2_fromTBE\n");
    try {
       {
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    #ifndef NDEBUG
    if (!((m_tbe_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-L1cache.sm:736: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_DATA;
    (*out_msg).m_DataBlk = (*m_tbe_ptr).m_DataBlk;
    (*out_msg).m_Dirty = (*m_tbe_ptr).m_Dirty;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Data;
    ((*m_responseFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:d2t_sendDataToL2_fromTBE: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send invalidate ack to requestor (could be L2 or L1) */
void
L1Cache_Controller::e_sendAckToRequestor(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing e_sendAckToRequestor\n");
    try {
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
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_ACK;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add(((*in_msg_ptr)).m_Requestor));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Control;
    ((*m_responseFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:e_sendAckToRequestor: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send data to the L2 cache */
void
L1Cache_Controller::f_sendDataToL2(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing f_sendDataToL2\n");
    try {
       {
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    #ifndef NDEBUG
    if (!((m_cache_entry_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-L1cache.sm:762: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_DATA;
    (*out_msg).m_DataBlk = (*m_cache_entry_ptr).m_DataBlk;
    (*out_msg).m_Dirty = (*m_cache_entry_ptr).m_Dirty;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    (*out_msg).m_MessageSize = MessageSizeType_Writeback_Data;
    ((*m_responseFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:f_sendDataToL2: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send data to the L2 cache */
void
L1Cache_Controller::ft_sendDataToL2_fromTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing ft_sendDataToL2_fromTBE\n");
    try {
       {
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    #ifndef NDEBUG
    if (!((m_tbe_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-L1cache.sm:776: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_DATA;
    (*out_msg).m_DataBlk = (*m_tbe_ptr).m_DataBlk;
    (*out_msg).m_Dirty = (*m_tbe_ptr).m_Dirty;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    (*out_msg).m_MessageSize = MessageSizeType_Writeback_Data;
    ((*m_responseFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:ft_sendDataToL2_fromTBE: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send data to the L2 cache */
void
L1Cache_Controller::fi_sendInvAck(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing fi_sendInvAck\n");
    try {
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
{
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_ACK;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add(((*in_msg_ptr)).m_Requestor));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Control;
    (*out_msg).m_AckCount = (1);
    ((*m_responseFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
}
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:fi_sendInvAck: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief sends eviction information to the processor */
void
L1Cache_Controller::forward_eviction_to_cpu(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing forward_eviction_to_cpu\n");
    try {
           if (m_send_evictions) {
        DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:803: Sending invalidation for %#x to the CPU\n", addr);
        (((*m_sequencer_ptr)).evictionCallback(addr));
    }

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:forward_eviction_to_cpu: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send data to the L2 cache */
void
L1Cache_Controller::g_issuePUTX(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing g_issuePUTX\n");
    try {
       {
    std::shared_ptr<RequestMsg> out_msg = std::make_shared<RequestMsg>(clockEdge());
    #ifndef NDEBUG
    if (!((m_cache_entry_ptr != NULL))) {
        panic("Runtime Error at MESI_Two_Level-L1cache.sm:810: %s.\n", "assert failure");

    }
    #endif
    ;
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceRequestType_PUTX;
    (*out_msg).m_DataBlk = (*m_cache_entry_ptr).m_DataBlk;
    (*out_msg).m_Dirty = (*m_cache_entry_ptr).m_Dirty;
    (*out_msg).m_Requestor = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
        if ((*m_cache_entry_ptr).m_Dirty) {
            (*out_msg).m_MessageSize = MessageSizeType_Writeback_Data;
        } else {
            (*out_msg).m_MessageSize = MessageSizeType_Writeback_Control;
        }
        ((*m_requestFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_l1_response_latency)));
    }

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:g_issuePUTX: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send unblock to the L2 cache */
void
L1Cache_Controller::j_sendUnblock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing j_sendUnblock\n");
    try {
       {
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_UNBLOCK;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Control;
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:834: %#x\n", addr);
    ((*m_unblockFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_l2_latency)));
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:j_sendUnblock: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief send unblock to the L2 cache */
void
L1Cache_Controller::jj_sendExclusiveUnblock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing jj_sendExclusiveUnblock\n");
    try {
       {
    std::shared_ptr<ResponseMsg> out_msg = std::make_shared<ResponseMsg>(clockEdge());
    (*out_msg).m_addr = addr;
    (*out_msg).m_Type = CoherenceResponseType_EXCLUSIVE_UNBLOCK;
    (*out_msg).m_Sender = m_machineID;
    (((*out_msg).m_Destination).add((mapAddressToRange(addr, MachineType_L2Cache, (*m_l2_select_low_bit_ptr), m_l2_select_num_bits, (intToID((0)))))));
    (*out_msg).m_MessageSize = MessageSizeType_Response_Control;
    DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:846: %#x\n", addr);
    ((*m_unblockFromL1Cache_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_to_l2_latency)));
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:jj_sendExclusiveUnblock: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Invalidate store conditional as the cache lost permissions */
void
L1Cache_Controller::dg_invalidate_sc(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing dg_invalidate_sc\n");
    try {
       (((*m_sequencer_ptr)).invalidateSC(addr));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:dg_invalidate_sc: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Notify sequencer the load completed. */
void
L1Cache_Controller::h_load_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing h_load_hit\n");
    try {
       #ifndef NDEBUG
if (!((m_cache_entry_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:859: %s.\n", "assert failure");

}
#endif
;
DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:860: %s\n", (*m_cache_entry_ptr).m_DataBlk);
(((*m_L1Dcache_ptr)).setMRU(m_cache_entry_ptr));
(((*m_sequencer_ptr)).readCallback(addr, (*m_cache_entry_ptr).m_DataBlk));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:h_load_hit: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Notify sequencer the instruction fetch completed. */
void
L1Cache_Controller::h_ifetch_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing h_ifetch_hit\n");
    try {
       #ifndef NDEBUG
if (!((m_cache_entry_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:867: %s.\n", "assert failure");

}
#endif
;
DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:868: %s\n", (*m_cache_entry_ptr).m_DataBlk);
(((*m_L1Icache_ptr)).setMRU(m_cache_entry_ptr));
(((*m_sequencer_ptr)).readCallback(addr, (*m_cache_entry_ptr).m_DataBlk));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:h_ifetch_hit: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Notify sequencer the load completed. */
void
L1Cache_Controller::hx_load_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing hx_load_hit\n");
    try {
       #ifndef NDEBUG
if (!((m_cache_entry_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:875: %s.\n", "assert failure");

}
#endif
;
DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:876: %s\n", (*m_cache_entry_ptr).m_DataBlk);
(((*m_L1Icache_ptr)).setMRU(addr));
(((*m_L1Dcache_ptr)).setMRU(addr));
(((*m_sequencer_ptr)).readCallback(addr, (*m_cache_entry_ptr).m_DataBlk, (true)));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:hx_load_hit: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Notify sequencer that store completed. */
void
L1Cache_Controller::hh_store_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing hh_store_hit\n");
    try {
       #ifndef NDEBUG
if (!((m_cache_entry_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:884: %s.\n", "assert failure");

}
#endif
;
DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:885: %s\n", (*m_cache_entry_ptr).m_DataBlk);
(((*m_L1Dcache_ptr)).setMRU(m_cache_entry_ptr));
(((*m_sequencer_ptr)).writeCallback(addr, (*m_cache_entry_ptr).m_DataBlk));
(*m_cache_entry_ptr).m_Dirty = (true);

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:hh_store_hit: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Notify sequencer that store completed. */
void
L1Cache_Controller::hhx_store_hit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing hhx_store_hit\n");
    try {
       #ifndef NDEBUG
if (!((m_cache_entry_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:893: %s.\n", "assert failure");

}
#endif
;
DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:894: %s\n", (*m_cache_entry_ptr).m_DataBlk);
(((*m_L1Icache_ptr)).setMRU(addr));
(((*m_L1Dcache_ptr)).setMRU(addr));
(((*m_sequencer_ptr)).writeCallback(addr, (*m_cache_entry_ptr).m_DataBlk, (true)));
(*m_cache_entry_ptr).m_Dirty = (true);

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:hhx_store_hit: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Allocate TBE (isPrefetch=0, number of invalidates=0) */
void
L1Cache_Controller::i_allocateTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing i_allocateTBE\n");
    try {
       #ifndef NDEBUG
if (!((m_cache_entry_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:903: %s.\n", "assert failure");

}
#endif
;
(((*m_TBEs_ptr)).allocate(addr));
set_tbe(m_tbe_ptr, (((*m_TBEs_ptr)).lookup(addr)));;
(*m_tbe_ptr).m_isPrefetch = (false);
(*m_tbe_ptr).m_Dirty = (*m_cache_entry_ptr).m_Dirty;
(*m_tbe_ptr).m_DataBlk = (*m_cache_entry_ptr).m_DataBlk;

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:i_allocateTBE: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Pop mandatory queue. */
void
L1Cache_Controller::k_popMandatoryQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing k_popMandatoryQueue\n");
    try {
       (((*m_mandatoryQueue_ptr)).dequeue((clockEdge())));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:k_popMandatoryQueue: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Pop incoming request queue and profile the delay within this virtual network */
void
L1Cache_Controller::l_popRequestQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing l_popRequestQueue\n");
    try {
       Tick delay
 = (((*m_requestToL1Cache_ptr)).dequeue((clockEdge())));
(profileMsgDelay((2), (ticksToCycles(delay))));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:l_popRequestQueue: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Pop Incoming Response queue and profile the delay within this virtual network */
void
L1Cache_Controller::o_popIncomingResponseQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing o_popIncomingResponseQueue\n");
    try {
       Tick delay
 = (((*m_responseToL1Cache_ptr)).dequeue((clockEdge())));
(profileMsgDelay((1), (ticksToCycles(delay))));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:o_popIncomingResponseQueue: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Deallocate TBE */
void
L1Cache_Controller::s_deallocateTBE(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing s_deallocateTBE\n");
    try {
       (((*m_TBEs_ptr)).deallocate(addr));
unset_tbe(m_tbe_ptr);;

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:s_deallocateTBE: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Write data to cache */
void
L1Cache_Controller::u_writeDataToL1Cache(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing u_writeDataToL1Cache\n");
    try {
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
#ifndef NDEBUG
if (!((m_cache_entry_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:934: %s.\n", "assert failure");

}
#endif
;
(*m_cache_entry_ptr).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
(*m_cache_entry_ptr).m_Dirty = ((*in_msg_ptr)).m_Dirty;
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:u_writeDataToL1Cache: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Update ack count */
void
L1Cache_Controller::q_updateAckCount(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing q_updateAckCount\n");
    try {
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
#ifndef NDEBUG
if (!((m_tbe_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:942: %s.\n", "assert failure");

}
#endif
;
(*m_tbe_ptr).m_pendingAcks = ((*m_tbe_ptr).m_pendingAcks - ((*in_msg_ptr)).m_AckCount);
APPEND_TRANSITION_COMMENT(((*in_msg_ptr)).m_AckCount);
APPEND_TRANSITION_COMMENT((" p: "));
APPEND_TRANSITION_COMMENT((*m_tbe_ptr).m_pendingAcks);
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:q_updateAckCount: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Deallocate L1 cache block.  Sets the cache to not present, allowing a replacement in parallel with a fetch. */
void
L1Cache_Controller::ff_deallocateL1CacheBlock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing ff_deallocateL1CacheBlock\n");
    try {
           if ((((*m_L1Dcache_ptr)).isTagPresent(addr))) {
        (((*m_L1Dcache_ptr)).deallocate(addr));
    } else {
        (((*m_L1Icache_ptr)).deallocate(addr));
    }
    unset_cache_entry(m_cache_entry_ptr);;

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:ff_deallocateL1CacheBlock: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Set L1 D-cache tag equal to tag of block B. */
void
L1Cache_Controller::oo_allocateL1DCacheBlock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing oo_allocateL1DCacheBlock\n");
    try {
           if ((m_cache_entry_ptr == NULL)) {
        set_cache_entry(m_cache_entry_ptr, (((*m_L1Dcache_ptr)).allocate(addr, new L1Cache_Entry)));;
    }

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:oo_allocateL1DCacheBlock: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Set L1 I-cache tag equal to tag of block B. */
void
L1Cache_Controller::pp_allocateL1ICacheBlock(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing pp_allocateL1ICacheBlock\n");
    try {
           if ((m_cache_entry_ptr == NULL)) {
        set_cache_entry(m_cache_entry_ptr, (((*m_L1Icache_ptr)).allocate(addr, new L1Cache_Entry)));;
    }

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:pp_allocateL1ICacheBlock: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief recycle L1 request queue */
void
L1Cache_Controller::z_stallAndWaitMandatoryQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing z_stallAndWaitMandatoryQueue\n");
    try {
               stallBuffer(&((*m_mandatoryQueue_ptr)), addr);
        (*m_mandatoryQueue_ptr).stallMessage(addr, clockEdge());
        

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:z_stallAndWaitMandatoryQueue: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief wake-up dependents */
void
L1Cache_Controller::kd_wakeUpDependents(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing kd_wakeUpDependents\n");
    try {
       (wakeUpBuffers(addr));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:kd_wakeUpDependents: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Profile the demand miss */
void
L1Cache_Controller::uu_profileInstMiss(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing uu_profileInstMiss\n");
    try {
       (++ ((*m_L1Icache_ptr)).m_demand_misses);

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:uu_profileInstMiss: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Profile the demand hit */
void
L1Cache_Controller::uu_profileInstHit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing uu_profileInstHit\n");
    try {
       (++ ((*m_L1Icache_ptr)).m_demand_hits);

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:uu_profileInstHit: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Profile the demand miss */
void
L1Cache_Controller::uu_profileDataMiss(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing uu_profileDataMiss\n");
    try {
       (++ ((*m_L1Dcache_ptr)).m_demand_misses);

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:uu_profileDataMiss: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Profile the demand hit */
void
L1Cache_Controller::uu_profileDataHit(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing uu_profileDataHit\n");
    try {
       (++ ((*m_L1Dcache_ptr)).m_demand_hits);

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:uu_profileDataHit: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Inform the prefetcher about the miss */
void
L1Cache_Controller::po_observeMiss(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing po_observeMiss\n");
    try {
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
    if (m_enable_prefetch) {
        (((*m_prefetcher_ptr)).observeMiss(((*in_msg_ptr)).m_LineAddress, ((*in_msg_ptr)).m_Type));
    } else {
        DPRINTF(RubyPrefetcher, "MESI_Two_Level-L1cache.sm:1000: prefetcher disabled, address:%s", ((*in_msg_ptr)).m_LineAddress);
    }
    }

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:po_observeMiss: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Inform the prefetcher about the EVICTION */
void
L1Cache_Controller::pse_sendEviction(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing pse_sendEviction\n");
    try {
           if (m_enable_prefetch) {
        (((*m_prefetcher_ptr)).observeEviction(addr));
    } else {
        DPRINTF(RubyPrefetcher, "MESI_Two_Level-L1cache.sm:1009: prefetcher disabled, address:%s", addr);
    }

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:pse_sendEviction: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Inform the prefetcher about the partial miss */
void
L1Cache_Controller::ppm_observePfMiss(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing ppm_observePfMiss\n");
    try {
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
(((*m_prefetcher_ptr)).observePfMiss(((*in_msg_ptr)).m_LineAddress));
}

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:ppm_observePfMiss: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Pop the prefetch request queue */
void
L1Cache_Controller::pq_popPrefetchQueue(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing pq_popPrefetchQueue\n");
    try {
       (((*m_optionalQueue_ptr)).dequeue((clockEdge())));

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:pq_popPrefetchQueue: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

/** \brief Write data from response queue to cache */
void
L1Cache_Controller::mp_markPrefetched(L1Cache_TBE*& m_tbe_ptr, L1Cache_Entry*& m_cache_entry_ptr, Addr addr, int core_id)//fanyao added core_id
{
    DPRINTF(RubyGenerated, "executing mp_markPrefetched\n");
    try {
       #ifndef NDEBUG
if (!((m_cache_entry_ptr != NULL))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:1026: %s.\n", "assert failure");

}
#endif
;
(*m_cache_entry_ptr).m_isPrefetch = (true);

    } catch (const RejectException & e) {
       fatal("Error in action L1Cache:mp_markPrefetched: "
             "executed a peek statement with the wrong message "
             "type specified. ");
    }
}

L1Cache_Entry*
L1Cache_Controller::getCacheEntry(const Addr& param_addr)
{
L1Cache_Entry* L1Dcache_entry
 = static_cast<L1Cache_Entry *>((((*m_L1Dcache_ptr)).lookup(param_addr)))
;
    if ((L1Dcache_entry != NULL)) {
        return L1Dcache_entry;
    }
    L1Cache_Entry* L1Icache_entry
     = static_cast<L1Cache_Entry *>((((*m_L1Icache_ptr)).lookup(param_addr)))
    ;
    return L1Icache_entry;

}
L1Cache_Entry*
L1Cache_Controller::getL1DCacheEntry(const Addr& param_addr)
{
L1Cache_Entry* L1Dcache_entry
 = static_cast<L1Cache_Entry *>((((*m_L1Dcache_ptr)).lookup(param_addr)))
;
return L1Dcache_entry;

}
L1Cache_Entry*
L1Cache_Controller::getL1ICacheEntry(const Addr& param_addr)
{
L1Cache_Entry* L1Icache_entry
 = static_cast<L1Cache_Entry *>((((*m_L1Icache_ptr)).lookup(param_addr)))
;
return L1Icache_entry;

}
L1Cache_State
L1Cache_Controller::getState(L1Cache_TBE* param_tbe, L1Cache_Entry* param_cache_entry, const Addr& param_addr)
{
#ifndef NDEBUG
if (!((((((*m_L1Dcache_ptr)).isTagPresent(param_addr)) && (((*m_L1Icache_ptr)).isTagPresent(param_addr))) == (false)))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:192: %s.\n", "assert failure");

}
#endif
;
    if ((param_tbe != NULL)) {
        return (*param_tbe).m_TBEState;
    } else {
            if ((param_cache_entry != NULL)) {
                return (*param_cache_entry).m_CacheState;
            }
        }
        return L1Cache_State_NP;

}
void
L1Cache_Controller::setState(L1Cache_TBE* param_tbe, L1Cache_Entry* param_cache_entry, const Addr& param_addr, const L1Cache_State& param_state)
{
#ifndef NDEBUG
if (!((((((*m_L1Dcache_ptr)).isTagPresent(param_addr)) && (((*m_L1Icache_ptr)).isTagPresent(param_addr))) == (false)))) {
    panic("Runtime Error at MESI_Two_Level-L1cache.sm:203: %s.\n", "assert failure");

}
#endif
;
    if ((param_tbe != NULL)) {
        (*param_tbe).m_TBEState = param_state;
    }
        if ((param_cache_entry != NULL)) {
            (*param_cache_entry).m_CacheState = param_state;
        }

}
AccessPermission
L1Cache_Controller::getAccessPermission(const Addr& param_addr)
{
L1Cache_TBE* tbe
 = (((*m_TBEs_ptr)).lookup(param_addr));
    if ((tbe != NULL)) {
        DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:218: %s\n", (L1Cache_State_to_permission((*tbe).m_TBEState)));
        return (L1Cache_State_to_permission((*tbe).m_TBEState));
    }
    L1Cache_Entry* cache_entry
     = (getCacheEntry(param_addr));
        if ((cache_entry != NULL)) {
            DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:224: %s\n", (L1Cache_State_to_permission((*cache_entry).m_CacheState)));
            return (L1Cache_State_to_permission((*cache_entry).m_CacheState));
        }
        DPRINTF(RubySlicc, "MESI_Two_Level-L1cache.sm:228: %s\n", AccessPermission_NotPresent);
        return AccessPermission_NotPresent;

}
void
L1Cache_Controller::functionalRead(const Addr& param_addr, Packet* param_pkt)
{
L1Cache_TBE* tbe
 = (((*m_TBEs_ptr)).lookup(param_addr));
    if ((tbe != NULL)) {
        (testAndRead(param_addr, (*tbe).m_DataBlk, param_pkt));
    } else {
        (testAndRead(param_addr, (*(getCacheEntry(param_addr))).m_DataBlk, param_pkt));
    }

}
int
L1Cache_Controller::functionalWrite(const Addr& param_addr, Packet* param_pkt)
{
int num_functional_writes
 = (0);
L1Cache_TBE* tbe
 = (((*m_TBEs_ptr)).lookup(param_addr));
    if ((tbe != NULL)) {
        num_functional_writes = (num_functional_writes + (testAndWrite(param_addr, (*tbe).m_DataBlk, param_pkt)));
        return num_functional_writes;
    }
    num_functional_writes = (num_functional_writes + (testAndWrite(param_addr, (*(getCacheEntry(param_addr))).m_DataBlk, param_pkt)));
    return num_functional_writes;

}
void
L1Cache_Controller::setAccessPermission(L1Cache_Entry* param_cache_entry, const Addr& param_addr, const L1Cache_State& param_state)
{
    if ((param_cache_entry != NULL)) {
        ((*(param_cache_entry)).changePermission((L1Cache_State_to_permission(param_state))));
    }

}
L1Cache_Event
L1Cache_Controller::mandatory_request_type_to_event(const RubyRequestType& param_type)
{
    if ((param_type == RubyRequestType_LD)) {
        return L1Cache_Event_Load;
    } else {
            if ((param_type == RubyRequestType_IFETCH)) {
                return L1Cache_Event_Ifetch;
            } else {
                    if (((param_type == RubyRequestType_ST) || (param_type == RubyRequestType_ATOMIC))) {
                        return L1Cache_Event_Store;
                    } else {
                        panic("Runtime Error at MESI_Two_Level-L1cache.sm:270: %s.\n", ("Invalid RubyRequestType"));
                        ;
                    }
                }
            }

}
L1Cache_Event
L1Cache_Controller::prefetch_request_type_to_event(const RubyRequestType& param_type)
{
    if ((param_type == RubyRequestType_LD)) {
        return L1Cache_Event_PF_Load;
    } else {
            if ((param_type == RubyRequestType_IFETCH)) {
                return L1Cache_Event_PF_Ifetch;
            } else {
                    if (((param_type == RubyRequestType_ST) || (param_type == RubyRequestType_ATOMIC))) {
                        return L1Cache_Event_PF_Store;
                    } else {
                        panic("Runtime Error at MESI_Two_Level-L1cache.sm:283: %s.\n", ("Invalid RubyRequestType"));
                        ;
                    }
                }
            }

}
int
L1Cache_Controller::getPendingAcks(L1Cache_TBE* param_tbe)
{
return (*param_tbe).m_pendingAcks;

}
void
L1Cache_Controller::enqueuePrefetch(const Addr& param_address, const RubyRequestType& param_type)
{
{
    std::shared_ptr<RubyRequest> out_msg = std::make_shared<RubyRequest>(clockEdge());
    (*out_msg).m_LineAddress = param_address;
    (*out_msg).m_Type = param_type;
    (*out_msg).m_AccessMode = RubyAccessMode_Supervisor;
    ((*m_optionalQueue_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles((1))));
}

}
int
L1Cache_Controller::functionalWriteBuffers(PacketPtr& pkt)
{
    int num_functional_writes = 0;
num_functional_writes += m_requestFromL1Cache_ptr->functionalWrite(pkt);
num_functional_writes += m_responseFromL1Cache_ptr->functionalWrite(pkt);
num_functional_writes += m_unblockFromL1Cache_ptr->functionalWrite(pkt);
num_functional_writes += m_requestToL1Cache_ptr->functionalWrite(pkt);
num_functional_writes += m_responseToL1Cache_ptr->functionalWrite(pkt);
num_functional_writes += m_optionalQueue_ptr->functionalWrite(pkt);
num_functional_writes += m_mandatoryQueue_ptr->functionalWrite(pkt);
    return num_functional_writes;
}
