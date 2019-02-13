#ifndef __PARAMS__L2Cache_Controller__
#define __PARAMS__L2Cache_Controller__

class L2Cache_Controller;

#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/RubyCache.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"

#include "params/RubyController.hh"

struct L2Cache_ControllerParams
    : public RubyControllerParams
{
    L2Cache_Controller * create();
    MessageBuffer * DirRequestFromL2Cache;
    MessageBuffer * L1RequestFromL2Cache;
    MessageBuffer * L1RequestToL2Cache;
    CacheMemory * L2cache;
    Cycles l2_request_latency;
    Cycles l2_response_latency;
    MessageBuffer * responseFromL2Cache;
    MessageBuffer * responseToL2Cache;
    Cycles to_l1_latency;
    MessageBuffer * unblockToL2Cache;
};

#endif // __PARAMS__L2Cache_Controller__
