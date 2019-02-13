/** \file Directory_TBE.cc
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/Type.py:412
 */

#include <iostream>
#include <memory>

#include "mem/protocol/Directory_TBE.hh"
#include "mem/ruby/system/RubySystem.hh"

using namespace std;
/** \brief Print the state of this object */
void
Directory_TBE::print(ostream& out) const
{
    out << "[Directory_TBE: ";
    out << "PhysicalAddress = " << printAddress(m_PhysicalAddress) << " ";
    out << "TBEState = " << m_TBEState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Len = " << m_Len << " ";
    out << "]";
}
