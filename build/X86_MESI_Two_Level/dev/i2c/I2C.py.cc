#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_I2C[] = {
    120,156,165,82,77,79,227,64,12,245,36,105,90,62,22,177,
    151,61,113,200,9,2,18,13,66,66,226,128,16,203,238,133,
    11,160,20,144,200,37,74,51,211,54,219,166,169,50,19,68,
    207,221,255,189,107,123,72,225,194,137,124,88,182,99,59,239,
    189,113,14,111,151,143,239,85,0,160,19,116,36,62,2,166,
    0,51,1,137,0,65,177,3,83,7,30,200,115,97,234,194,
    204,131,196,195,47,30,40,1,35,1,178,3,127,1,86,0,
    207,73,7,164,15,202,227,108,119,157,245,65,246,96,16,110,
    224,248,226,31,94,161,64,207,80,56,40,202,187,225,31,149,
    27,155,34,115,100,221,29,52,215,153,46,242,251,162,250,173,
    94,138,92,113,195,205,233,47,27,229,45,122,135,10,9,253,
    33,58,10,8,52,34,77,28,162,145,184,4,6,81,41,31,
    138,46,17,89,97,178,7,241,32,116,177,58,38,163,191,19,
    107,245,18,21,167,121,36,121,118,127,50,209,123,152,253,41,
    101,173,180,14,170,81,96,63,4,213,60,192,178,96,216,104,
    102,99,122,104,210,116,158,149,42,77,205,38,7,101,37,155,
    25,133,30,21,44,23,138,243,249,235,107,58,81,153,84,53,
    231,31,234,70,113,115,54,212,166,206,114,99,58,24,220,103,
    117,86,178,247,120,51,55,231,92,128,191,75,51,196,17,18,
    215,119,163,15,208,68,147,170,84,104,230,227,101,19,141,85,
    121,118,60,90,70,186,102,26,76,7,213,234,47,150,76,243,
    136,154,104,160,47,236,109,124,43,231,117,163,215,90,186,173,
    150,251,159,105,89,116,96,204,27,177,114,0,207,181,21,242,
    27,77,223,249,32,36,42,132,42,154,46,166,236,121,233,144,
    252,152,200,199,196,48,166,223,199,148,51,91,104,158,112,7,
    170,154,5,96,184,220,41,223,58,191,64,157,128,157,80,147,
    191,166,126,203,72,204,54,154,242,172,191,222,192,24,218,165,
    196,236,130,128,104,150,200,194,143,157,118,95,120,228,23,32,
    241,169,94,216,45,185,220,111,79,101,87,108,138,93,231,135,
    255,31,97,153,179,41,
};

EmbeddedPython embedded_m5_objects_I2C(
    "m5/objects/I2C.py",
    "/home/hongyu/gem5-fy/src/dev/i2c/I2C.py",
    "m5.objects.I2C",
    data_m5_objects_I2C,
    470,
    917);

} // anonymous namespace