/** \file L1Cache_Entry.hh
 *
 *
 * Auto generated C++ code started by /home/hongyu/gem5-fy/src/mem/slicc/symbols/Type.py:205
 */

#ifndef __L1Cache_Entry_HH__
#define __L1Cache_Entry_HH__

#include <iostream>

#include "mem/ruby/slicc_interface/RubySlicc_Util.hh"
#include "mem/protocol/L1Cache_State.hh"
#include "mem/protocol/DataBlock.hh"
#include "mem/protocol/AbstractCacheEntry.hh"
class L1Cache_Entry :  public AbstractCacheEntry
{
  public:
    L1Cache_Entry
()
		{
        m_CacheState = L1Cache_State_I; // default value of L1Cache_State
        // m_DataBlk has no default
        m_Dirty = false; // default for this field
        m_isPrefetch = false; // default value of bool
    }
    L1Cache_Entry(const L1Cache_Entry&other)
        : AbstractCacheEntry(other)
    {
        m_CacheState = other.m_CacheState;
        m_DataBlk = other.m_DataBlk;
        m_Dirty = other.m_Dirty;
        m_isPrefetch = other.m_isPrefetch;
    }
    L1Cache_Entry(const L1Cache_State& local_CacheState, const DataBlock& local_DataBlk, const bool& local_Dirty, const bool& local_isPrefetch)
        : AbstractCacheEntry()
    {
        m_CacheState = local_CacheState;
        m_DataBlk = local_DataBlk;
        m_Dirty = local_Dirty;
        m_isPrefetch = local_isPrefetch;
    }
    L1Cache_Entry*
    clone() const
    {
         return new L1Cache_Entry(*this);
    }
    // Const accessors methods for each field
    /** \brief Const accessor method for CacheState field.
     *  \return CacheState field
     */
    const L1Cache_State&
    getCacheState() const
    {
        return m_CacheState;
    }
    /** \brief Const accessor method for DataBlk field.
     *  \return DataBlk field
     */
    const DataBlock&
    getDataBlk() const
    {
        return m_DataBlk;
    }
    /** \brief Const accessor method for Dirty field.
     *  \return Dirty field
     */
    const bool&
    getDirty() const
    {
        return m_Dirty;
    }
    /** \brief Const accessor method for isPrefetch field.
     *  \return isPrefetch field
     */
    const bool&
    getisPrefetch() const
    {
        return m_isPrefetch;
    }
    // Non const Accessors methods for each field
    /** \brief Non-const accessor method for CacheState field.
     *  \return CacheState field
     */
    L1Cache_State&
    getCacheState()
    {
        return m_CacheState;
    }
    /** \brief Non-const accessor method for DataBlk field.
     *  \return DataBlk field
     */
    DataBlock&
    getDataBlk()
    {
        return m_DataBlk;
    }
    /** \brief Non-const accessor method for Dirty field.
     *  \return Dirty field
     */
    bool&
    getDirty()
    {
        return m_Dirty;
    }
    /** \brief Non-const accessor method for isPrefetch field.
     *  \return isPrefetch field
     */
    bool&
    getisPrefetch()
    {
        return m_isPrefetch;
    }
    // Mutator methods for each field
    /** \brief Mutator method for CacheState field */
    void
    setCacheState(const L1Cache_State& local_CacheState)
    {
        m_CacheState = local_CacheState;
    }
    /** \brief Mutator method for DataBlk field */
    void
    setDataBlk(const DataBlock& local_DataBlk)
    {
        m_DataBlk = local_DataBlk;
    }
    /** \brief Mutator method for Dirty field */
    void
    setDirty(const bool& local_Dirty)
    {
        m_Dirty = local_Dirty;
    }
    /** \brief Mutator method for isPrefetch field */
    void
    setisPrefetch(const bool& local_isPrefetch)
    {
        m_isPrefetch = local_isPrefetch;
    }
    void print(std::ostream& out) const;
  //private:
    /** cache state */
    L1Cache_State m_CacheState;
    /** data for the block */
    DataBlock m_DataBlk;
    /** data is dirty */
    bool m_Dirty;
    /** Set if this block was prefetched */
    bool m_isPrefetch;
};
inline std::ostream&
operator<<(std::ostream& out, const L1Cache_Entry& obj)
{
    obj.print(out);
    out << std::flush;
    return out;
}

#endif // __L1Cache_Entry_HH__