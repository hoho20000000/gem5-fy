/** \file L1Cache_Event.hh
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/Type.py:458
 */

#ifndef __L1Cache_Event_HH__
#define __L1Cache_Event_HH__

#include <iostream>
#include <string>


// Class definition
/** \enum L1Cache_Event
 *  \brief Cache events
 */
enum L1Cache_Event {
    L1Cache_Event_FIRST,
    L1Cache_Event_Load = L1Cache_Event_FIRST, /**< Load request from the home processor */
    L1Cache_Event_Ifetch, /**< I-fetch request from the home processor */
    L1Cache_Event_Store, /**< Store request from the home processor */
    L1Cache_Event_Inv, /**< Invalidate request from L2 bank */
    L1Cache_Event_EVI_NOTI, /**< for prefetch guard */
    L1Cache_Event_L1_Replacement, /**< L1 Replacement */
    L1Cache_Event_Fwd_GETX, /**< GETX from other processor */
    L1Cache_Event_Fwd_GETS, /**< GETS from other processor */
    L1Cache_Event_Fwd_GET_INSTR, /**< GET_INSTR from other processor */
    L1Cache_Event_Data, /**< Data for processor */
    L1Cache_Event_Data_Exclusive, /**< Data for processor */
    L1Cache_Event_DataS_fromL1, /**< data for GETS request, need to unblock directory */
    L1Cache_Event_Data_all_Acks, /**< Data for processor, all acks */
    L1Cache_Event_Ack, /**< Ack for processor */
    L1Cache_Event_Ack_all, /**< Last ack for processor */
    L1Cache_Event_WB_Ack, /**< Ack for replacement */
    L1Cache_Event_PF_Load, /**< load request from prefetcher */
    L1Cache_Event_PF_Ifetch, /**< instruction fetch request from prefetcher */
    L1Cache_Event_PF_Store, /**< exclusive load request from prefetcher */
    L1Cache_Event_NUM
};

// Code to convert from a string to the enumeration
L1Cache_Event string_to_L1Cache_Event(const std::string& str);

// Code to convert state to a string
std::string L1Cache_Event_to_string(const L1Cache_Event& obj);

// Code to increment an enumeration type
L1Cache_Event &operator++(L1Cache_Event &e);
std::ostream& operator<<(std::ostream& out, const L1Cache_Event& obj);

#endif // __L1Cache_Event_HH__