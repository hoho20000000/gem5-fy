#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_FuncUnitConfig[] = {
    120,156,189,86,109,111,227,68,16,30,39,142,243,222,38,105,
    47,215,19,210,137,143,225,116,52,192,81,196,7,4,132,190,
    160,194,149,59,57,45,39,242,37,164,89,39,231,214,113,76,
    188,137,232,231,242,187,129,153,177,119,179,14,21,58,113,165,
    121,89,61,251,120,95,102,30,207,206,236,24,210,79,17,255,
    223,126,8,16,255,137,64,224,207,130,107,128,192,130,129,5,
    22,245,115,112,157,131,32,15,131,124,210,207,195,181,13,231,
    41,42,32,178,193,115,96,98,129,40,192,31,0,183,0,191,
    12,138,32,28,197,22,53,91,2,81,82,108,89,179,101,16,
    21,197,86,53,91,1,81,83,108,93,179,85,16,91,138,221,
    214,108,13,68,67,177,77,205,214,65,180,20,187,163,217,45,
    16,187,138,125,164,217,109,16,109,232,119,30,163,4,254,95,
    248,233,88,136,100,25,155,190,63,123,117,121,229,141,101,66,
    149,176,185,92,250,129,56,14,87,9,67,205,51,233,96,123,
    26,202,222,203,139,177,18,54,143,255,239,72,88,252,131,7,
    164,167,151,75,21,190,5,107,106,145,162,168,238,192,6,183,
    223,161,209,146,222,197,60,58,12,70,113,172,87,12,150,62,
    193,78,65,109,63,28,134,163,153,55,28,202,10,119,102,115,
    177,12,168,75,163,94,69,71,94,60,102,56,143,94,250,177,
    148,52,109,60,95,134,178,67,54,173,155,248,83,108,186,111,
    231,51,15,155,112,122,179,236,78,189,217,193,199,147,155,110,
    188,24,119,199,209,178,59,127,209,61,89,134,227,139,208,151,
    135,243,112,226,79,247,163,27,151,204,220,167,233,54,54,142,
    213,178,216,10,180,243,108,25,200,35,127,165,189,47,41,239,
    127,253,167,247,232,52,198,206,45,228,82,198,102,166,192,49,
    67,124,126,202,170,120,5,10,158,39,24,51,87,14,204,155,
    24,125,101,240,108,10,157,39,67,7,66,10,207,10,96,168,
    161,122,85,220,196,181,149,132,169,57,236,59,202,48,146,62,
    171,155,42,138,86,250,187,234,245,70,126,228,5,126,232,9,
    246,227,188,231,126,127,124,62,60,237,247,36,205,248,253,203,
    47,124,122,189,126,142,84,35,143,92,90,195,165,61,92,234,
    242,14,39,163,32,246,92,90,204,165,193,110,157,154,74,70,
    236,247,81,156,92,251,140,166,87,82,197,159,58,77,171,153,
    99,111,78,94,15,205,136,43,42,205,127,120,87,205,77,166,
    176,102,166,124,218,241,117,36,177,89,212,234,146,211,39,193,
    124,36,123,66,176,163,44,205,154,62,156,69,70,103,37,125,
    91,133,238,134,114,137,94,247,167,210,14,206,250,134,166,151,
    82,149,90,214,94,18,155,168,209,102,108,150,149,78,63,255,
    135,216,76,249,34,243,37,35,102,243,164,22,6,231,160,64,
    154,85,180,102,101,165,7,153,145,136,150,213,146,2,178,70,
    195,183,51,195,251,191,45,164,191,167,195,207,185,67,196,214,
    255,160,36,229,192,99,83,201,61,235,169,149,164,194,211,179,
    163,33,13,214,66,182,149,144,182,117,87,138,75,113,206,192,
    121,3,219,6,46,24,216,49,112,209,192,37,3,151,13,92,
    49,112,213,192,53,3,215,13,188,101,224,109,3,55,12,220,
    52,112,203,192,59,6,222,229,52,190,203,71,229,81,122,84,
    218,153,68,132,197,67,224,73,225,56,76,113,111,60,94,63,
    10,150,26,211,201,209,120,37,57,58,8,159,249,152,207,117,
    135,178,90,213,232,208,106,105,149,18,253,183,254,68,202,154,
    217,163,199,106,46,133,147,126,170,206,240,6,129,246,100,8,
    50,42,75,172,54,214,192,216,149,117,147,96,123,179,12,25,
    221,216,100,200,180,204,48,14,247,135,74,23,31,224,172,31,
    105,250,51,14,242,218,59,125,177,216,177,45,222,72,188,158,
    47,228,123,20,250,117,132,156,121,51,90,207,135,7,114,252,
    19,156,117,9,102,253,166,13,222,44,124,233,221,139,79,165,
    196,39,94,240,193,156,162,242,56,201,56,197,187,136,55,139,
    140,79,182,242,233,249,157,62,153,217,138,46,32,121,202,86,
    137,127,182,242,207,37,3,221,23,144,230,240,135,112,238,115,
    156,117,181,118,14,115,49,95,113,162,172,111,197,127,241,45,
    41,105,116,77,79,10,149,197,133,170,144,22,42,71,191,187,
    114,178,46,158,76,47,142,147,66,197,47,150,202,18,223,131,
    30,172,6,29,224,172,208,244,249,167,14,37,16,78,61,179,
    131,125,125,39,119,105,15,206,174,200,10,111,130,23,185,216,
    213,87,119,228,162,209,98,52,139,147,82,155,238,146,92,156,
    46,232,158,204,183,89,190,96,241,253,129,75,31,167,6,62,
    38,28,86,44,63,219,115,47,158,177,37,95,37,87,246,175,
    63,162,101,168,192,55,172,134,85,177,42,185,182,221,174,183,
    29,252,62,70,132,223,191,1,141,165,118,241,
};

EmbeddedPython embedded_m5_objects_FuncUnitConfig(
    "m5/objects/FuncUnitConfig.py",
    "/home/hongyu/gem5-fy/src/cpu/o3/FuncUnitConfig.py",
    "m5.objects.FuncUnitConfig",
    data_m5_objects_FuncUnitConfig,
    1084,
    3492);

} // anonymous namespace