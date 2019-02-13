#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_I8254[] = {
    120,156,165,145,205,74,195,64,16,199,103,147,38,213,226,71,
    95,64,136,158,162,96,3,98,75,41,34,42,94,122,41,37,
    241,160,185,132,144,108,219,165,249,34,187,45,205,185,190,183,
    206,108,90,124,0,55,201,48,255,201,206,206,111,102,19,56,
    172,46,126,47,14,128,156,161,147,226,203,96,13,240,113,240,
    88,235,25,176,54,32,51,33,52,129,145,54,97,221,129,204,
    130,208,66,221,1,110,194,130,65,106,193,55,192,30,224,43,
    180,33,181,33,112,233,108,241,131,203,101,232,41,50,119,173,
    123,129,230,45,150,34,153,139,242,157,111,69,194,219,248,37,
    154,207,241,104,90,168,160,220,212,9,159,139,66,89,24,155,
    142,31,134,143,201,145,217,164,108,98,246,208,225,0,33,35,
    242,208,32,100,68,68,220,16,161,44,16,54,112,155,136,16,
    120,143,193,46,248,129,219,193,28,159,78,144,231,135,98,193,
    235,100,162,11,200,62,205,128,111,189,221,120,228,9,138,12,
    86,43,121,141,65,228,112,84,233,72,177,44,226,204,81,34,
    231,181,131,104,188,174,55,149,146,248,203,61,33,124,50,81,
    84,196,57,143,34,213,211,34,47,211,77,70,146,234,170,166,
    226,234,20,157,100,183,139,146,44,150,82,239,34,181,226,113,
    202,107,221,236,60,174,227,220,55,104,191,158,96,161,162,74,
    20,46,117,254,103,228,45,26,111,85,230,28,77,177,108,54,
    222,146,231,195,251,69,227,201,58,241,142,77,232,182,6,85,
    163,27,190,161,52,170,103,179,246,57,99,51,125,71,26,41,
    31,14,42,42,44,117,23,164,234,114,215,40,27,69,123,67,
    62,59,110,109,111,8,103,162,33,245,217,255,162,211,21,159,
    218,73,61,95,81,58,5,122,172,199,250,172,111,252,2,61,
    132,138,81,
};

EmbeddedPython embedded_m5_objects_I8254(
    "m5/objects/I8254.py",
    "/home/hongyu/gem5-fy/src/dev/x86/I8254.py",
    "m5.objects.I8254",
    data_m5_objects_I8254,
    403,
    683);

} // anonymous namespace
