/** \file Directory_Entry.cc
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/Type.py:412
 */

#include <iostream>
#include <memory>

#include "mem/protocol/Directory_Entry.hh"
#include "mem/ruby/system/RubySystem.hh"

using namespace std;
/** \brief Print the state of this object */
void
Directory_Entry::print(ostream& out) const
{
    out << "[Directory_Entry: ";
    out << "DirectoryState = " << m_DirectoryState << " ";
    out << "Owner = " << m_Owner << " ";
    out << "]";
}
