from m5.params import *
from m5.SimObject import SimObject
from Controller import RubyController

class L1Cache_Controller(RubyController):
    type = 'L1Cache_Controller'
    cxx_header = 'mem/protocol/L1Cache_Controller.hh'
    sequencer = Param.RubySequencer("")
    L1Icache = Param.RubyCache("")
    L1Dcache = Param.RubyCache("")
    prefetcher = Param.Prefetcher("")
    l2_select_num_bits = Param.Int("")
    l1_request_latency = Param.Cycles((2), "")
    l1_response_latency = Param.Cycles((2), "")
    to_l2_latency = Param.Cycles((1), "")
    send_evictions = Param.Bool("")
    enable_prefetch = Param.Bool(("True"), "")
    requestFromL1Cache = Param.MessageBuffer("")
    responseFromL1Cache = Param.MessageBuffer("")
    unblockFromL1Cache = Param.MessageBuffer("")
    requestToL1Cache = Param.MessageBuffer("")
    responseToL1Cache = Param.MessageBuffer("")
    optionalQueue = Param.MessageBuffer("")
    mandatoryQueue = Param.MessageBuffer("")
