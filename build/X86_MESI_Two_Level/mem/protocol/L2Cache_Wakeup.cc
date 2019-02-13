// Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:1069
// L2Cache: MESI Directory L2 Cache CMP

#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <typeinfo>

#include "base/misc.hh"

#include "debug/RubySlicc.hh"
#include "debug/RubyCacheState.hh"
#include "debug/MTRACEMICRO17.hh"
#include "debug/FYCOREID.hh"
#include "debug/RubyGLSVLSI.hh"
#include "debug/WayEvictMICRO17.hh"
#include "debug/RubyGenerated.hh"
#include "mem/protocol/L2Cache_Controller.hh"
#include "mem/protocol/L2Cache_Event.hh"
#include "mem/protocol/L2Cache_State.hh"

#include "mem/protocol/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"

using namespace std;

void
L2Cache_Controller::wakeup()
{
    int counter = 0;
    while (true) {
        unsigned char rejected[3];
        memset(rejected, 0, sizeof(unsigned char)*3);
        // Some cases will put us into an infinite loop without this limit
        assert(counter <= m_transitions_per_cycle);
        if (counter == m_transitions_per_cycle) {
            // Count how often we are fully utilized
            m_fully_busy_cycles++;

            // Wakeup in another cycle and try again
            scheduleEvent(Cycles(1));
            break;
        }
            // L2CacheInPort L1unblockNetwork_in
            m_cur_in_port = 2;
            try {
                            if ((((*m_unblockToL2Cache_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const ResponseMsg* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_unblockToL2Cache_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                L2Cache_Entry* cache_entry
                                 = (getCacheEntry(((*in_msg_ptr)).m_addr));
                                L2Cache_TBE* tbe
                                 = (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_addr));
                                DPRINTF(RubySlicc, "MESI_Two_Level-L2cache.sm:301: Addr: %#x State: %s Sender: %s Type: %s Dest: %s\n", ((*in_msg_ptr)).m_addr, (getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)), ((*in_msg_ptr)).m_Sender, ((*in_msg_ptr)).m_Type, ((*in_msg_ptr)).m_Destination);
                                #ifndef NDEBUG
                                if (!(((((*in_msg_ptr)).m_Destination).isElement(m_machineID)))) {
                                    panic("Runtime Error at MESI_Two_Level-L2cache.sm:305: %s.\n", "assert failure");

                                }
                                #endif
                                ;
                                    if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_EXCLUSIVE_UNBLOCK)) {
                                        {

                                            TransitionResult result = doTransition(L2Cache_Event_Exclusive_Unblock, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_UNBLOCK)) {
                                                    if (((getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)) == L2Cache_State_MT_SB)) {
                                                        DPRINTF(RubyGLSVLSI, "MESI_Two_Level-L2cache.sm:313: Time:%lld, Addr: %#x, State: %s Type: %s, Sender: %s\n", (curCycle()), ((*in_msg_ptr)).m_addr, (getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)), ((*in_msg_ptr)).m_Type, ((*in_msg_ptr)).m_Sender);
                                                    } else {
                                                    }
                                                    {

                                                        TransitionResult result = doTransition(L2Cache_Event_Unblock, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                                    panic("Runtime Error at MESI_Two_Level-L2cache.sm:323: %s.\n", ("unknown unblock message"));
                                                    ;
                                                }
                                            }
                                            }
                                        }
                        } catch (const RejectException & e) {
                            rejected[0]++;
                        }
            // L2CacheInPort responseL2Network_in
            m_cur_in_port = 1;
            try {
                            if ((((*m_responseToL2Cache_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const ResponseMsg* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseToL2Cache_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                #ifndef NDEBUG
                                if (!(((((*in_msg_ptr)).m_Destination).isElement(m_machineID)))) {
                                    panic("Runtime Error at MESI_Two_Level-L2cache.sm:334: %s.\n", "assert failure");

                                }
                                #endif
                                ;
                                L2Cache_Entry* cache_entry
                                 = (getCacheEntry(((*in_msg_ptr)).m_addr));
                                L2Cache_TBE* tbe
                                 = (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_addr));
                                    if (((machineIDToMachineType(((*in_msg_ptr)).m_Sender)) == MachineType_L1Cache)) {
                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DATA)) {
                                                    if (((*in_msg_ptr)).m_Dirty) {
                                                            if (((getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)) == L2Cache_State_MT_IIB)) {
                                                                DPRINTF(RubyGLSVLSI, "MESI_Two_Level-L2cache.sm:344: Time:%lld, Addr: %#x, State: %s Type: %s, Sender: %s, Dirty: 1\n", (curCycle()), ((*in_msg_ptr)).m_addr, (getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)), ((*in_msg_ptr)).m_Type, ((*in_msg_ptr)).m_Sender);
                                                            } else {
                                                            }
                                                            {

                                                                TransitionResult result = doTransition(L2Cache_Event_WB_Data, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                                                if (((getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)) == L2Cache_State_MT_IIB)) {
                                                                    DPRINTF(RubyGLSVLSI, "MESI_Two_Level-L2cache.sm:357: Time:%lld, Addr: %#x, State: %s Type: %s, Sender: %s, Dirty: 0\n", (curCycle()), ((*in_msg_ptr)).m_addr, (getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)), ((*in_msg_ptr)).m_Type, ((*in_msg_ptr)).m_Sender);
                                                                } else {
                                                                }
                                                                {

                                                                    TransitionResult result = doTransition(L2Cache_Event_WB_Data_clean, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                                                if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_ACK)) {
                                                                        if ((((getPendingAcks(tbe)) - ((*in_msg_ptr)).m_AckCount) == (0))) {
                                                                            {

                                                                                TransitionResult result = doTransition(L2Cache_Event_Ack_all, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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

                                                                                TransitionResult result = doTransition(L2Cache_Event_Ack, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                                                        panic("Runtime Error at MESI_Two_Level-L2cache.sm:376: %s.\n", ("unknown message type"));
                                                                        ;
                                                                    }
                                                                }
                                                            } else {
                                                                    if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_MEMORY_DATA)) {
                                                                        {

                                                                            TransitionResult result = doTransition(L2Cache_Event_Mem_Data, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_MEMORY_ACK)) {
                                                                                {

                                                                                    TransitionResult result = doTransition(L2Cache_Event_Mem_Ack, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                                                                    if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_INV)) {
                                                                                        {

                                                                                            TransitionResult result = doTransition(L2Cache_Event_MEM_Inv, cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                                                                        panic("Runtime Error at MESI_Two_Level-L2cache.sm:392: %s.\n", ("unknown message type"));
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
            // L2CacheInPort L1RequestL2Network_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_L1RequestToL2Cache_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const RequestMsg* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const RequestMsg *>(((*m_L1RequestToL2Cache_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                L2Cache_Entry* cache_entry
                                 = (getCacheEntry(((*in_msg_ptr)).m_addr));
                                L2Cache_TBE* tbe
                                 = (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_addr));
                                DPRINTF(RubySlicc, "MESI_Two_Level-L2cache.sm:406: Addr: %#x State: %s Req: %s Type: %s Dest: %s\n", ((*in_msg_ptr)).m_addr, (getState(tbe, cache_entry, ((*in_msg_ptr)).m_addr)), ((*in_msg_ptr)).m_Requestor, ((*in_msg_ptr)).m_Type, ((*in_msg_ptr)).m_Destination);
                                #ifndef NDEBUG
                                if (!(((machineIDToMachineType(((*in_msg_ptr)).m_Requestor)) == MachineType_L1Cache))) {
                                    panic("Runtime Error at MESI_Two_Level-L2cache.sm:412: %s.\n", "assert failure");

                                }
                                #endif
                                ;
                                #ifndef NDEBUG
                                if (!(((((*in_msg_ptr)).m_Destination).isElement(m_machineID)))) {
                                    panic("Runtime Error at MESI_Two_Level-L2cache.sm:413: %s.\n", "assert failure");

                                }
                                #endif
                                ;
                                DPRINTF(FYCOREID, "MESI_Two_Level-L2cache.sm:417: Time:%lld, Addr: %#x, CoreId:%d\n", (curCycle()), ((*in_msg_ptr)).m_addr, ((*in_msg_ptr)).m_ThreadId);
                                    if ((cache_entry != NULL)) {
                                        {

                                            TransitionResult result = doTransition((L1Cache_request_type_to_event(((*in_msg_ptr)).m_Type, ((*in_msg_ptr)).m_addr, ((*in_msg_ptr)).m_Requestor, cache_entry)), cache_entry, tbe, ((*in_msg_ptr)).m_addr, (88));

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
                                            if ((((*m_L2cache_ptr)).cacheAvail(((*in_msg_ptr)).m_addr))) {
                                                {

                                                    TransitionResult result = doTransition((L1Cache_request_type_to_event(((*in_msg_ptr)).m_Type, ((*in_msg_ptr)).m_addr, ((*in_msg_ptr)).m_Requestor, cache_entry)), cache_entry, tbe, ((*in_msg_ptr)).m_addr, ((*in_msg_ptr)).m_ThreadId);

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
                                                L2Cache_Entry* L2cache_entry
                                                 = (getCacheEntry((((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_addr))));
                                                    if ((isDirty(L2cache_entry))) {
                                                        {

                                                            TransitionResult result = doTransition(L2Cache_Event_L2_Replacement, L2cache_entry, (((*m_TBEs_ptr)).lookup((((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_addr)))), (((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_addr)), ((*in_msg_ptr)).m_ThreadId);

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

                                                            TransitionResult result = doTransition(L2Cache_Event_L2_Replacement_clean, L2cache_entry, (((*m_TBEs_ptr)).lookup((((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_addr)))), (((*m_L2cache_ptr)).cacheProbe(((*in_msg_ptr)).m_addr)), ((*in_msg_ptr)).m_ThreadId);

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
                            rejected[2]++;
                        }
        // If we got this far, we have nothing left todo or something went
        // wrong
        break;
    }
}
