#ifndef __PARAMS__L1Cache_Controller__
#define __PARAMS__L1Cache_Controller__

class L1Cache_Controller;

#include <cstddef>
#include "params/RubyCache.hh"
#include <cstddef>
#include "params/RubyCache.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/Prefetcher.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include <cstddef>
#include "params/RubySequencer.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"

#include "params/RubyController.hh"

struct L1Cache_ControllerParams
    : public RubyControllerParams
{
    L1Cache_Controller * create();
    CacheMemory * L1Dcache;
    CacheMemory * L1Icache;
    bool enable_prefetch;
    Cycles l1_request_latency;
    Cycles l1_response_latency;
    int l2_select_num_bits;
    MessageBuffer * mandatoryQueue;
    MessageBuffer * optionalQueue;
    Prefetcher * prefetcher;
    MessageBuffer * requestFromL1Cache;
    MessageBuffer * requestToL1Cache;
    MessageBuffer * responseFromL1Cache;
    MessageBuffer * responseToL1Cache;
    bool send_evictions;
    Sequencer * sequencer;
    Cycles to_l2_latency;
    MessageBuffer * unblockFromL1Cache;
};

#endif // __PARAMS__L1Cache_Controller__
