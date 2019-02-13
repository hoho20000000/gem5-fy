// Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/StateMachine.py:1069
// DMA: DMA Controller

#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <typeinfo>

#include "base/misc.hh"

#include "debug/RubySlicc.hh"
#include "debug/RubyCacheState.hh"
#include "debug/RubyGenerated.hh"
#include "mem/protocol/DMA_Controller.hh"
#include "mem/protocol/DMA_Event.hh"
#include "mem/protocol/DMA_State.hh"

#include "mem/protocol/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"

using namespace std;

void
DMA_Controller::wakeup()
{
    int counter = 0;
    while (true) {
        unsigned char rejected[2];
        memset(rejected, 0, sizeof(unsigned char)*2);
        // Some cases will put us into an infinite loop without this limit
        assert(counter <= m_transitions_per_cycle);
        if (counter == m_transitions_per_cycle) {
            // Count how often we are fully utilized
            m_fully_busy_cycles++;

            // Wakeup in another cycle and try again
            scheduleEvent(Cycles(1));
            break;
        }
            // DMAInPort dmaRequestQueue_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_mandatoryQueue_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const SequencerMsg* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const SequencerMsg *>(((*m_mandatoryQueue_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                    if ((((*in_msg_ptr)).m_Type == SequencerRequestType_LD)) {
                                        {

                                            TransitionResult result = doTransition(DMA_Event_ReadRequest, ((*in_msg_ptr)).m_LineAddress);

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
                                            if ((((*in_msg_ptr)).m_Type == SequencerRequestType_ST)) {
                                                {

                                                    TransitionResult result = doTransition(DMA_Event_WriteRequest, ((*in_msg_ptr)).m_LineAddress);

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
                                                panic("Runtime Error at MESI_Two_Level-dma.sm:89: %s.\n", ("Invalid request type"));
                                                ;
                                            }
                                        }
                                        }
                                    }
                        } catch (const RejectException & e) {
                            rejected[0]++;
                        }
            // DMAInPort dmaResponseQueue_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_responseFromDir_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    const ResponseMsg* in_msg_ptr M5_VAR_USED;
                                    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseFromDir_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                    if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_ACK)) {
                                        {

                                            TransitionResult result = doTransition(DMA_Event_Ack, (makeLineAddress(((*in_msg_ptr)).m_addr)));

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
                                                {

                                                    TransitionResult result = doTransition(DMA_Event_Data, (makeLineAddress(((*in_msg_ptr)).m_addr)));

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
                                                panic("Runtime Error at MESI_Two_Level-dma.sm:103: %s.\n", ("Invalid response type"));
                                                ;
                                            }
                                        }
                                        }
                                    }
                        } catch (const RejectException & e) {
                            rejected[1]++;
                        }
        // If we got this far, we have nothing left todo or something went
        // wrong
        break;
    }
}
