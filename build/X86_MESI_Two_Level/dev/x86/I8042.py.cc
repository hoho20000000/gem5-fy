#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_I8042[] = {
    120,156,165,146,221,111,211,64,12,192,125,73,155,174,165,176,
    34,241,134,144,34,120,41,72,52,104,98,83,53,33,196,96,
    47,123,153,170,150,7,200,75,116,36,183,38,106,146,139,114,
    151,169,121,46,255,55,216,78,3,154,196,27,249,176,108,223,
    249,252,179,125,49,28,159,17,254,159,124,0,115,139,74,130,
    159,128,29,192,215,163,38,58,205,129,157,3,185,11,161,11,
    130,108,23,118,3,200,135,16,14,209,30,128,114,225,78,64,
    50,132,159,0,7,128,239,161,7,137,7,155,57,157,157,253,
    194,103,46,80,179,36,222,116,234,19,20,159,165,201,226,85,
    166,175,213,125,22,171,206,127,138,226,219,242,226,166,180,27,
    221,212,177,90,101,165,29,162,239,102,249,238,253,89,220,51,
    187,20,77,204,41,42,10,32,20,68,30,58,132,140,136,136,
    27,14,8,18,241,148,7,217,8,144,241,128,75,39,189,57,
    100,115,204,230,4,212,132,168,145,248,128,129,143,30,58,71,
    236,156,194,122,51,63,193,100,107,74,109,30,31,41,55,87,
    151,151,76,102,102,212,60,117,31,236,151,23,65,70,158,69,
    154,102,132,106,158,162,184,150,86,250,149,174,173,47,147,164,
    86,198,152,231,232,253,162,139,66,150,73,96,172,180,141,121,
    184,142,197,1,214,238,91,237,155,108,91,202,220,183,169,242,
    11,221,24,229,167,210,248,9,158,104,94,253,115,211,78,181,
    63,180,172,147,63,251,230,132,107,137,62,138,74,89,168,40,
    178,19,54,10,157,52,57,153,3,218,208,86,202,142,81,137,
    247,251,40,206,165,49,188,139,172,84,201,68,213,124,66,149,
    233,136,24,121,40,43,89,203,130,131,175,200,69,193,148,47,
    162,74,236,148,130,187,10,217,177,118,40,9,161,112,21,17,
    14,54,170,80,80,231,122,228,222,57,167,206,253,21,230,53,
    138,32,213,133,66,81,110,219,38,216,170,226,252,237,93,27,
    152,58,14,250,182,243,32,22,85,203,35,122,73,97,207,80,
    120,130,95,199,19,167,248,78,197,24,255,91,190,152,204,91,
    156,47,42,170,194,112,117,100,213,122,223,90,143,134,198,215,
    114,45,250,173,221,181,196,126,115,37,156,229,191,56,57,227,
    135,110,6,31,95,80,56,57,38,98,34,102,98,230,252,6,
    91,202,202,211,
};

EmbeddedPython embedded_m5_objects_I8042(
    "m5/objects/I8042.py",
    "/home/hongyu/gem5-fy/src/dev/x86/I8042.py",
    "m5.objects.I8042",
    data_m5_objects_I8042,
    516,
    928);

} // anonymous namespace