#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_E820[] = {
    120,156,173,83,77,107,219,64,16,157,149,63,100,59,61,164,
    134,230,208,147,78,69,41,212,10,161,49,38,148,210,4,114,
    72,33,109,145,211,210,250,34,100,105,45,41,177,36,179,187,
    1,43,87,247,127,183,51,163,200,73,74,11,133,86,31,195,
    236,219,157,157,183,111,102,35,184,123,58,248,191,115,0,244,
    123,116,98,252,4,92,3,92,146,103,193,181,128,165,5,51,
    11,68,220,2,105,193,66,64,220,134,239,0,27,128,111,179,
    22,196,157,6,237,110,209,54,196,54,76,221,30,110,151,253,
    192,199,21,232,25,50,47,107,183,143,102,154,229,31,231,87,
    50,50,230,9,142,190,78,198,103,147,195,131,179,194,168,42,
    106,136,181,240,63,37,98,23,232,72,128,153,32,122,200,5,
    25,82,106,228,213,6,217,129,172,11,72,14,105,109,16,177,
    25,233,17,49,164,68,72,159,145,1,145,218,96,224,14,248,
    53,55,223,66,163,159,214,217,207,167,39,199,199,91,10,250,
    25,162,161,138,82,111,61,25,123,243,172,212,158,196,185,81,
    154,102,68,76,191,160,233,56,86,82,107,167,92,56,38,149,
    206,92,38,89,81,100,69,210,0,10,129,178,48,148,228,224,
    84,15,41,44,187,149,143,103,25,54,213,234,23,216,37,73,
    12,113,12,130,34,204,101,16,152,1,15,242,50,190,89,210,
    176,125,23,199,82,70,235,117,16,45,67,173,121,21,141,82,
    25,198,82,25,170,236,167,80,133,57,175,63,65,194,236,16,
    115,94,122,33,243,82,85,83,164,197,56,241,51,93,116,62,
    159,23,102,252,154,151,168,176,72,100,64,169,92,58,249,189,
    209,35,52,94,90,230,18,77,145,84,55,94,34,243,163,87,
    139,202,211,42,242,30,107,71,186,142,86,21,11,190,79,177,
    116,190,174,224,215,26,138,161,120,216,3,151,225,124,41,183,
    61,96,53,61,176,255,55,61,64,245,181,169,190,116,28,127,
    247,119,245,229,237,255,92,95,253,156,242,96,15,100,82,59,
    139,82,113,85,104,206,49,20,88,55,14,239,78,226,250,164,
    150,111,147,161,9,179,131,230,11,246,116,169,88,118,62,176,
    177,239,119,252,15,26,210,161,14,41,182,247,64,195,15,110,
    167,185,87,249,209,104,69,185,53,107,138,163,237,69,243,69,
    211,244,188,201,191,115,225,14,125,83,247,228,91,186,18,154,
    228,24,136,93,107,175,255,19,95,41,233,236,
};

EmbeddedPython embedded_m5_objects_E820(
    "m5/objects/E820.py",
    "/home/hongyu/gem5-fy/src/arch/x86/bios/E820.py",
    "m5.objects.E820",
    data_m5_objects_E820,
    540,
    1118);

} // anonymous namespace