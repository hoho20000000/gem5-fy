#include "sim/init.hh"

namespace {

const uint8_t data_m5_config[] = {
    120,156,157,145,79,79,219,64,16,197,223,172,227,56,65,180,
    149,224,208,11,72,28,77,213,198,234,33,183,10,85,66,4,
    56,36,72,230,230,11,66,241,38,184,216,222,52,94,42,69,
    10,39,144,248,2,124,95,58,207,252,41,231,174,188,227,153,
    55,59,179,191,209,78,241,178,186,186,127,238,1,205,163,58,
    185,126,130,107,32,123,246,13,174,5,165,65,102,80,6,200,
    2,148,29,100,33,196,2,69,23,69,132,60,192,157,32,235,
    193,246,176,24,189,79,116,218,68,31,182,15,183,175,9,3,
    27,50,200,67,220,25,230,220,182,170,239,36,109,242,251,1,
    82,11,36,239,226,94,25,34,194,156,199,145,130,21,79,186,
    38,113,160,174,15,25,55,121,177,244,221,214,155,21,165,245,
    29,117,127,185,162,246,125,117,198,195,139,195,179,201,232,244,
    184,149,79,206,198,71,13,43,7,213,112,42,250,55,186,25,
    31,114,236,239,108,9,44,116,42,157,248,92,188,97,184,6,
    145,110,5,62,192,90,136,251,118,96,77,38,182,153,196,236,
    238,137,55,117,245,140,64,20,38,174,182,190,247,130,179,184,
    244,87,41,15,199,188,180,205,215,151,213,115,158,69,100,143,
    249,12,173,105,190,170,73,174,92,101,213,212,243,213,77,50,
    183,213,240,219,108,149,52,203,105,178,88,121,85,147,106,152,
    176,178,152,15,84,224,24,115,235,191,176,120,147,45,36,146,
    80,62,201,7,9,77,188,193,43,121,175,107,90,74,215,12,
    90,30,158,107,161,82,38,211,232,117,10,91,255,41,150,174,
    78,89,151,134,175,42,113,116,182,127,148,255,137,202,145,127,
    84,46,191,41,237,193,46,59,124,84,179,41,59,193,150,137,
    130,45,217,149,207,230,47,33,173,122,41,
};

EmbeddedPython embedded_m5_config(
    "m5/config.py",
    "/home/hongyu/gem5-fy/src/python/m5/config.py",
    "m5.config",
    data_m5_config,
    395,
    661);

} // anonymous namespace