#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_FuncUnit[] = {
    120,156,165,85,109,111,219,70,12,166,108,199,113,156,116,73,
    187,45,91,247,210,222,2,116,115,95,22,3,5,218,79,67,
    209,52,157,135,2,75,83,216,205,134,249,139,170,136,231,232,
    86,73,167,73,39,183,254,156,254,239,142,164,45,217,46,48,
    96,64,44,235,64,242,238,200,231,248,144,167,16,22,191,13,
    122,159,42,128,226,13,9,72,127,15,222,2,196,30,140,61,
    240,88,111,192,219,6,188,198,38,232,38,76,60,192,22,124,
    0,184,4,248,107,220,2,220,0,237,137,181,93,91,55,0,
    55,43,107,167,182,182,1,183,96,212,235,82,16,243,145,126,
    61,143,36,183,69,195,200,36,167,231,127,235,208,205,77,60,
    220,115,155,52,158,102,199,113,80,20,97,133,244,128,222,103,
    140,212,145,160,129,1,206,241,18,68,130,135,2,135,128,80,
    120,10,76,225,176,11,184,13,184,3,120,13,240,51,192,93,
    192,61,192,235,128,55,0,63,7,252,2,240,75,192,125,192,
    175,0,191,6,188,9,248,13,224,183,128,223,1,126,15,120,
    11,240,54,160,2,252,1,46,14,96,220,128,225,168,199,8,
    28,31,225,165,245,23,232,92,155,212,23,169,59,138,75,1,
    77,226,73,25,187,202,252,220,76,93,135,196,65,108,3,119,
    132,184,84,142,147,108,69,153,58,201,133,40,178,191,158,98,
    15,245,212,232,159,220,73,24,74,26,178,187,238,82,62,10,
    195,229,212,2,13,203,28,168,150,167,115,207,44,159,152,34,
    92,42,28,115,123,69,97,111,11,118,112,20,153,137,115,59,
    171,26,79,87,123,5,84,53,91,31,116,221,64,120,214,12,
    12,106,221,48,253,196,7,159,251,218,170,65,240,174,91,24,
    244,222,167,22,134,182,182,172,78,218,137,78,134,58,152,115,
    64,242,159,185,113,90,14,249,34,203,105,151,38,54,119,132,
    182,194,189,202,245,68,187,48,234,53,153,114,222,224,251,105,
    144,104,223,151,148,251,126,98,177,140,89,109,145,58,13,226,
    162,199,37,186,28,68,239,71,54,209,52,164,23,179,178,127,
    161,147,71,63,79,102,253,34,15,251,97,86,246,7,101,26,
    158,165,198,29,102,179,97,131,22,63,224,93,124,154,182,183,
    187,120,118,232,105,123,82,75,167,217,115,93,132,117,47,52,
    171,94,248,109,181,23,168,74,169,29,198,212,170,45,48,27,
    220,23,151,164,182,69,221,92,244,200,101,3,198,29,177,108,
    129,238,114,203,176,101,155,203,155,227,12,123,21,12,198,56,
    33,140,126,201,32,163,168,184,206,169,152,101,90,217,137,178,
    153,206,3,103,108,106,184,95,11,197,235,103,97,172,11,85,
    166,206,196,42,215,5,81,161,76,161,130,105,96,226,224,156,
    166,52,175,212,78,57,171,92,94,106,245,46,210,169,114,145,
    86,28,133,125,5,177,226,88,106,98,115,23,209,86,155,177,
    131,73,25,199,51,149,153,76,199,38,213,120,168,6,148,109,
    173,18,29,164,133,74,173,91,78,169,192,169,32,142,15,123,
    204,226,240,14,15,63,50,230,214,2,184,80,23,190,127,239,
    71,84,5,58,119,124,245,189,10,242,32,145,252,75,137,216,
    149,174,62,150,3,201,42,155,253,30,56,241,243,204,218,88,
    132,215,116,4,41,158,58,252,149,42,128,23,63,230,93,93,
    169,0,126,118,189,27,115,238,7,103,107,220,55,42,238,31,
    254,47,238,55,193,116,152,123,86,183,152,102,70,63,124,248,
    159,52,223,34,99,90,38,231,58,103,162,137,31,74,246,224,
    236,167,85,38,15,36,37,139,10,80,33,103,140,152,39,218,
    148,240,54,56,83,156,110,185,236,151,52,12,239,242,112,143,
    135,251,156,238,230,252,134,148,252,134,150,202,70,238,159,63,
    232,67,96,243,57,43,156,19,73,0,165,223,20,238,74,249,
    229,243,62,225,93,157,149,252,190,236,49,231,210,244,201,163,
    195,250,67,52,100,247,194,45,89,51,134,82,8,229,191,82,
    90,164,84,4,153,184,188,10,38,185,86,126,153,95,36,79,
    238,86,216,246,188,110,99,191,187,223,249,23,19,189,196,47,
};

EmbeddedPython embedded_m5_objects_FuncUnit(
    "m5/objects/FuncUnit.py",
    "/home/hongyu/gem5-fy/src/cpu/FuncUnit.py",
    "m5.objects.FuncUnit",
    data_m5_objects_FuncUnit,
    912,
    1953);

} // anonymous namespace
