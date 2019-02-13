/** \file L1Cache_Entry.cc
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/Type.py:412
 */

#include <iostream>
#include <memory>

#include "mem/protocol/L1Cache_Entry.hh"
#include "mem/ruby/system/RubySystem.hh"

using namespace std;
/** \brief Print the state of this object */
void
L1Cache_Entry::print(ostream& out) const
{
    out << "[L1Cache_Entry: ";
    out << "CacheState = " << m_CacheState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "isPrefetch = " << m_isPrefetch << " ";
    out << "]";
}
