/** \file L1Cache_TBE.cc
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/Type.py:412
 */

#include <iostream>
#include <memory>

#include "mem/protocol/L1Cache_TBE.hh"
#include "mem/ruby/system/RubySystem.hh"

using namespace std;
/** \brief Print the state of this object */
void
L1Cache_TBE::print(ostream& out) const
{
    out << "[L1Cache_TBE: ";
    out << "addr = " << printAddress(m_addr) << " ";
    out << "TBEState = " << m_TBEState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "isPrefetch = " << m_isPrefetch << " ";
    out << "pendingAcks = " << m_pendingAcks << " ";
    out << "]";
}
