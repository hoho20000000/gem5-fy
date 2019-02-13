#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_AddrMapper[] = {
    120,156,165,82,77,111,211,64,16,157,141,19,39,41,173,64,
    28,56,251,132,76,37,98,9,169,183,10,81,142,72,133,202,
    169,144,200,197,218,120,39,182,169,191,180,187,65,245,185,252,
    111,152,153,196,244,4,7,234,143,241,204,120,103,223,155,183,
    147,195,241,154,209,251,33,2,112,159,200,49,244,40,184,3,
    184,101,111,2,119,10,106,5,27,5,202,4,128,10,118,10,
    204,20,126,2,60,0,124,219,76,192,204,0,39,146,13,255,
    100,3,48,115,88,199,11,218,174,250,69,87,172,200,243,108,
    206,15,238,146,204,53,54,95,182,223,49,247,254,132,162,43,
    99,236,181,238,123,180,249,72,107,66,239,71,166,245,142,28,
    4,230,64,148,24,146,248,16,151,41,108,8,59,100,146,15,
    148,153,3,46,128,56,178,191,132,116,29,79,169,44,229,77,
    220,75,50,13,54,137,38,144,172,17,148,85,89,186,103,204,
    66,59,143,54,234,59,235,29,243,88,215,250,7,74,24,115,
    232,185,135,44,107,117,131,89,38,68,179,172,233,204,190,230,
    144,1,252,208,163,228,243,251,251,172,68,109,208,74,254,214,
    238,81,138,245,214,121,171,143,93,30,208,110,104,119,31,50,
    39,9,69,13,193,149,31,124,26,142,163,152,69,120,52,238,
    156,76,82,118,13,146,105,139,97,159,20,216,92,188,221,13,
    137,179,121,194,237,61,106,184,234,7,233,60,225,58,6,14,
    149,220,193,169,242,207,89,22,221,22,248,95,146,87,179,81,
    239,112,12,131,163,252,163,228,103,255,144,60,30,193,93,212,
    237,34,90,208,217,33,242,165,246,145,43,187,125,109,40,21,
    89,148,245,198,189,249,235,98,109,49,218,98,213,22,209,97,
    105,228,59,153,182,52,96,35,44,88,198,148,69,246,124,204,
    95,105,206,58,123,163,173,110,68,110,238,93,182,22,57,58,
    91,21,85,171,235,204,10,154,228,70,22,199,220,19,15,131,
    53,185,228,186,211,241,48,230,161,90,210,247,179,104,38,156,
    154,139,85,207,4,93,170,198,201,149,186,167,65,203,16,94,
    30,102,246,253,107,174,103,81,78,212,139,197,171,179,223,198,
    40,226,106,
};

EmbeddedPython embedded_m5_objects_AddrMapper(
    "m5/objects/AddrMapper.py",
    "/home/hongyu/gem5-fy/src/mem/AddrMapper.py",
    "m5.objects.AddrMapper",
    data_m5_objects_AddrMapper,
    483,
    1026);

} // anonymous namespace
