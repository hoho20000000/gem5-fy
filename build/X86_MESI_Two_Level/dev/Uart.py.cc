#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Uart[] = {
    120,156,157,82,77,111,211,64,16,157,181,29,39,77,11,228,
    80,122,67,50,18,7,11,137,24,33,69,234,1,33,132,122,
    174,42,215,28,240,197,90,236,73,109,53,254,208,238,166,138,
    207,229,127,195,204,218,14,148,27,56,241,104,230,121,118,230,
    205,155,205,97,124,124,122,63,7,0,58,33,167,160,191,128,
    123,128,100,244,196,224,57,112,239,192,206,133,212,5,81,184,
    128,46,108,5,20,30,252,0,120,4,248,150,122,80,204,0,
    61,139,250,71,116,6,197,28,110,195,5,21,174,126,210,19,
    10,242,12,155,183,131,251,156,204,23,169,171,252,166,106,175,
    240,161,202,209,120,4,125,149,202,228,19,63,151,115,152,223,
    21,57,8,144,10,102,153,58,76,130,251,10,160,62,232,67,
    53,7,92,64,117,194,100,31,29,72,151,22,60,157,64,215,
    130,103,16,223,134,220,34,118,200,232,83,30,25,31,162,61,
    53,92,151,165,166,54,112,179,147,102,219,170,58,48,101,165,
    131,194,178,10,200,235,40,39,104,183,107,125,70,73,73,137,
    129,65,85,87,141,220,133,207,120,20,30,50,203,26,89,99,
    150,153,165,13,234,182,216,239,56,228,134,166,239,134,225,18,
    181,71,155,45,191,107,163,100,110,108,118,126,56,100,37,202,
    2,149,153,49,9,169,100,109,179,38,58,198,31,96,108,140,
    97,73,100,211,219,239,221,244,157,131,100,164,100,131,35,63,
    86,241,183,209,111,200,68,101,91,35,153,230,174,223,71,119,
    88,111,222,109,251,72,171,60,98,53,88,254,117,215,91,137,
    94,243,9,38,232,139,225,247,82,216,226,156,115,249,97,243,
    254,184,38,49,173,233,252,175,53,241,130,92,150,157,203,197,
    43,174,247,226,15,217,185,8,73,63,44,133,7,139,173,199,
    34,196,139,39,196,255,145,253,106,60,162,189,145,253,117,200,
    18,154,19,50,245,102,221,177,194,218,206,194,145,106,15,189,
    149,120,184,134,177,152,238,200,177,206,255,144,176,229,63,14,
    247,224,211,43,62,201,192,82,44,197,202,185,152,255,2,113,
    92,179,225,
};

EmbeddedPython embedded_m5_objects_Uart(
    "m5/objects/Uart.py",
    "/home/hongyu/gem5-fy/src/dev/Uart.py",
    "m5.objects.Uart",
    data_m5_objects_Uart,
    467,
    899);

} // anonymous namespace