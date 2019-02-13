#include "sim/init.hh"

namespace {

const uint8_t data_m5_ticks[] = {
    120,156,165,148,65,111,220,68,20,199,223,216,94,111,236,77,
    162,180,164,155,182,128,24,33,162,172,68,27,159,114,64,130,
    0,173,72,225,64,85,57,145,144,114,89,57,246,236,214,141,
    215,94,102,102,11,43,101,47,132,143,192,145,83,111,124,29,
    190,9,119,36,120,239,205,218,129,136,19,181,236,241,120,222,
    248,189,55,239,255,155,201,97,125,133,248,124,33,1,204,24,
    59,5,222,2,46,1,206,93,223,131,75,1,149,7,231,30,
    136,194,135,204,7,21,64,214,131,34,128,159,113,82,8,69,
    143,59,125,40,66,56,223,128,162,207,159,17,20,216,199,54,
    134,98,0,211,0,206,99,242,123,58,218,196,24,229,95,120,
    61,31,9,236,218,0,155,31,50,93,79,241,253,230,151,135,
    179,39,57,165,68,38,178,60,165,180,78,128,115,194,108,48,
    173,21,254,35,96,158,128,176,30,100,2,174,208,157,15,101,
    0,182,7,54,132,107,65,183,192,180,187,239,225,179,175,107,
    26,2,140,238,163,171,231,28,222,124,140,221,103,85,115,145,
    85,114,162,213,247,11,85,231,75,105,148,149,153,149,251,133,
    180,101,126,105,228,92,105,28,203,155,186,24,245,41,219,13,
    202,190,182,74,215,89,101,35,26,153,155,241,164,252,81,21,
    188,144,51,189,80,220,201,27,173,236,29,236,160,195,167,85,
    147,95,158,180,33,172,239,92,240,27,255,230,42,164,212,140,
    160,109,56,183,228,101,51,83,216,212,211,229,34,153,170,217,
    209,227,201,50,49,58,79,230,75,139,163,201,236,40,225,28,
    15,241,251,46,206,199,44,220,114,186,80,31,145,171,152,203,
    185,233,245,69,40,134,34,167,64,30,62,189,182,184,111,214,
    197,245,168,184,149,128,149,224,202,54,119,240,229,3,42,142,
    235,25,254,228,1,149,16,75,138,229,198,170,218,62,76,60,
    184,198,105,49,8,28,202,2,168,191,235,236,27,183,44,159,
    117,150,136,45,15,240,59,134,43,1,229,128,70,157,100,52,
    113,23,13,155,68,150,221,90,27,40,50,11,215,235,132,115,
    216,244,185,200,245,107,165,173,121,252,95,74,102,149,86,89,
    177,148,44,14,107,58,113,154,38,230,208,124,72,208,105,44,
    173,180,203,185,146,7,251,230,64,78,26,237,38,188,80,250,
    212,73,190,221,70,154,29,29,46,108,89,165,164,120,74,229,
    179,100,250,210,90,93,94,44,172,250,74,235,70,167,12,8,
    149,187,52,101,109,108,86,231,42,13,91,196,43,12,102,105,
    17,147,170,201,156,248,198,106,30,209,205,162,46,216,97,86,
    47,207,154,27,82,40,218,25,230,199,238,217,11,101,59,234,
    226,255,59,91,78,238,45,25,66,90,111,49,244,136,70,239,
    51,67,59,65,95,248,98,219,27,138,88,236,240,243,192,243,
    197,244,207,223,254,248,253,219,139,23,159,51,90,254,63,247,
    237,175,148,35,176,240,130,132,159,239,49,90,72,27,174,255,
    70,95,38,43,128,249,22,99,130,32,174,199,112,6,226,247,
    10,129,233,241,209,115,42,28,124,159,172,88,21,196,172,131,
    103,197,231,0,18,117,31,95,239,174,60,184,242,8,182,87,
    1,52,187,12,27,50,229,38,92,251,32,216,185,104,161,50,
    31,16,74,89,125,96,229,26,40,199,131,109,28,28,92,160,
    99,156,243,77,45,27,93,224,129,128,150,162,89,79,54,101,
    83,155,71,210,190,84,114,122,27,193,217,194,88,121,161,28,
    130,37,139,146,180,122,151,200,158,34,93,229,49,250,171,148,
    38,92,98,137,23,114,202,51,144,90,12,180,95,140,6,4,
    29,29,155,41,137,158,146,78,233,59,45,136,41,91,9,61,
    102,45,221,161,154,147,181,75,99,220,185,79,25,14,62,119,
    104,229,175,179,10,79,171,200,29,71,99,247,69,70,76,235,
    45,48,26,112,236,102,230,160,52,79,200,199,123,142,31,177,
    199,4,197,222,150,232,249,177,119,87,108,139,45,17,137,129,
    72,239,81,234,116,182,166,15,169,25,82,116,114,228,246,201,
    210,164,180,173,56,125,183,203,40,253,147,172,50,202,213,128,
    255,188,215,254,201,62,120,219,142,199,89,85,141,199,55,171,
    249,127,75,34,247,159,206,154,98,81,169,227,247,201,1,73,
    176,41,118,188,80,132,126,180,17,237,134,94,180,23,137,191,
    1,27,119,145,149,
};

EmbeddedPython embedded_m5_ticks(
    "m5/ticks.py",
    "/home/hongyu/gem5-fy/src/python/m5/ticks.py",
    "m5.ticks",
    data_m5_ticks,
    965,
    1872);

} // anonymous namespace