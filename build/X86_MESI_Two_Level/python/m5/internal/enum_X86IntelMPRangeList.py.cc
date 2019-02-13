#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_X86IntelMPRangeList[] = {
    120,156,197,87,109,111,19,71,16,158,189,59,191,38,118,156,
    23,18,64,161,184,42,41,238,11,113,37,4,165,42,66,69,
    8,161,72,37,69,151,170,128,139,116,114,238,206,206,5,251,
    206,242,109,2,174,156,47,13,106,251,99,250,173,63,176,157,
    103,246,206,49,8,164,126,105,26,197,227,189,185,217,221,217,
    121,158,153,89,251,148,253,45,240,231,187,38,81,122,65,17,
    5,252,175,232,37,209,64,81,199,34,21,90,20,44,209,97,
    129,146,75,164,130,2,189,33,234,216,20,218,116,202,3,135,
    126,182,41,190,105,172,26,51,171,210,251,172,106,252,130,215,
    46,211,75,71,84,22,77,170,20,22,168,83,164,167,241,42,
    57,97,137,14,171,148,148,72,241,95,204,59,63,155,52,40,
    155,81,166,78,133,173,174,178,85,85,172,86,197,42,123,91,
    193,91,153,17,84,40,168,210,27,246,124,129,130,5,241,98,
    145,130,69,25,212,40,168,201,160,78,65,93,6,75,20,58,
    20,53,168,211,144,193,50,117,150,101,176,66,157,21,25,172,
    82,103,21,59,236,181,150,57,68,209,223,252,215,226,16,145,
    94,100,113,28,142,211,40,137,189,40,238,37,145,133,247,37,
    8,4,212,135,176,249,83,228,207,3,68,118,76,18,86,118,
    152,35,123,194,43,40,226,57,129,69,167,172,180,233,210,137,
    194,67,100,211,148,7,14,245,228,69,228,100,22,39,28,171,
    101,154,242,234,5,154,138,102,239,105,124,133,28,93,148,96,
    44,75,48,204,107,158,140,215,28,10,98,183,11,188,237,174,
    248,173,225,247,182,120,167,47,177,240,194,248,104,232,61,187,
    115,123,39,214,225,224,241,19,183,27,247,195,239,163,84,183,
    112,10,93,193,81,134,163,100,172,7,209,190,46,99,130,23,
    119,135,161,231,233,42,63,140,71,221,177,142,52,31,95,59,
    252,120,152,68,177,198,89,7,169,30,71,35,93,155,205,246,
    134,73,112,52,8,53,40,182,35,154,135,227,113,50,110,33,
    56,46,132,134,24,189,236,107,184,58,196,22,45,248,40,34,
    125,193,162,125,144,12,67,22,113,127,114,212,238,135,195,91,
    55,122,147,246,254,81,52,8,218,236,189,247,248,225,222,142,
    247,227,171,196,251,62,60,14,7,237,209,68,179,105,123,120,
    171,205,30,133,227,184,59,104,127,232,160,219,108,187,130,93,
    94,69,125,47,243,246,32,28,140,194,49,14,159,214,225,129,
    90,84,171,234,35,101,171,101,85,87,81,49,135,22,33,170,
    229,208,254,153,65,107,101,73,195,232,170,12,106,139,78,100,
    0,252,90,128,22,136,218,0,146,143,203,48,245,21,157,90,
    244,194,134,193,9,75,135,57,222,156,193,186,102,56,110,150,
    42,209,9,99,95,0,178,191,108,202,82,101,89,202,162,41,
    75,6,221,161,19,78,36,54,101,21,203,195,10,37,117,82,
    252,16,85,144,132,42,86,156,31,211,34,147,194,153,145,194,
    144,25,167,9,162,49,98,239,130,199,173,106,174,77,210,237,
    81,87,31,184,181,28,40,14,147,0,190,155,196,6,211,94,
    20,7,57,198,134,37,189,104,192,44,113,17,67,89,77,204,
    6,73,119,102,6,160,253,65,146,134,194,52,89,219,93,130,
    33,172,123,35,89,6,187,194,31,153,28,132,169,15,86,49,
    219,204,138,240,0,171,157,35,83,92,100,252,26,118,186,44,
    188,104,48,51,138,204,139,22,243,194,140,54,173,154,90,82,
    187,17,66,234,23,178,220,119,114,146,252,69,6,24,69,135,
    150,36,236,84,74,5,91,51,124,146,176,83,41,7,120,251,
    37,41,109,101,122,174,8,140,50,180,43,60,71,168,195,28,
    98,219,187,200,111,1,21,92,40,16,147,211,0,207,132,50,
    76,17,248,11,152,129,165,44,108,225,208,104,131,23,47,131,
    19,83,202,200,115,106,51,57,216,35,78,108,46,30,172,94,
    231,125,127,21,214,101,5,68,184,160,15,162,52,121,101,242,
    29,99,169,129,123,156,59,79,38,63,236,31,134,190,78,175,
    178,226,121,114,212,244,187,113,156,232,102,55,8,154,93,205,
    245,96,255,72,135,105,83,39,205,173,180,5,60,221,203,57,
    157,102,235,77,70,161,43,3,195,161,32,242,53,87,154,85,
    121,144,252,76,67,205,108,56,72,130,148,245,152,218,15,181,
    219,192,12,132,57,17,7,132,44,30,76,177,45,219,33,133,
    239,231,30,152,186,83,204,249,147,134,131,158,148,50,127,208,
    77,83,15,30,136,94,88,135,83,31,119,7,71,161,172,158,
    242,122,236,16,134,198,135,243,172,80,23,113,166,60,4,114,
    174,56,137,131,9,187,25,249,55,225,193,69,225,99,141,43,
    84,77,173,243,167,162,46,168,18,179,178,164,54,44,223,201,
    56,56,235,67,235,56,63,9,248,42,195,159,57,121,202,117,
    165,101,73,89,144,163,129,195,238,231,24,97,178,123,13,98,
    11,226,83,136,235,249,233,207,41,4,181,119,67,240,0,219,
    90,114,110,223,206,78,56,203,52,239,173,76,171,207,101,218,
    41,50,102,42,141,55,178,231,178,197,70,20,146,133,60,191,
    36,27,153,2,156,141,48,150,188,226,126,60,159,21,216,116,
    215,69,27,77,63,102,113,125,43,189,222,52,28,108,30,116,
    211,102,156,156,17,191,137,151,166,210,129,246,238,38,0,152,
    35,118,127,142,216,110,19,22,96,181,251,9,132,243,33,4,
    62,251,223,16,232,27,4,30,97,219,197,140,121,117,97,220,
    130,242,65,27,192,82,202,177,216,227,193,100,3,88,204,131,
    176,193,77,241,105,188,201,125,78,128,64,171,171,153,86,39,
    253,210,92,228,242,82,23,21,242,65,17,112,244,108,90,207,
    58,88,138,22,51,26,39,175,39,205,164,215,212,148,187,116,
    119,43,221,222,74,191,229,106,211,188,119,22,248,172,178,140,
    195,17,42,131,169,20,8,143,142,98,126,198,82,15,95,251,
    161,52,25,121,242,60,83,24,204,125,199,203,154,23,99,36,
    160,88,57,40,82,26,249,210,131,138,120,158,136,84,103,136,
    224,68,79,176,103,85,224,176,213,6,151,130,57,48,240,177,
    1,6,72,247,59,119,88,5,60,126,35,132,154,3,154,229,
    189,228,81,158,75,171,48,199,69,103,170,222,219,177,172,44,
    71,172,172,142,112,18,141,106,210,136,178,14,198,55,151,63,
    230,138,204,172,195,216,217,237,103,62,151,156,89,46,9,78,
    255,170,139,56,111,167,19,48,224,188,131,153,36,142,185,93,
    94,123,187,96,201,85,199,150,202,175,207,9,164,178,217,205,
    131,99,207,207,32,66,173,190,162,214,44,195,23,161,210,215,
    16,119,102,89,173,114,221,127,239,227,213,119,139,235,92,127,
    241,76,101,122,6,71,28,113,125,169,36,177,125,231,231,206,
    156,174,56,211,173,205,226,61,73,93,104,204,207,14,217,202,
    248,232,205,255,130,146,11,150,185,222,149,77,94,243,69,92,
    79,164,135,103,147,114,21,210,115,151,219,180,116,116,177,206,
    18,57,117,191,194,34,114,245,68,247,114,191,128,184,1,113,
    11,226,27,172,142,90,182,179,119,255,65,50,228,75,102,180,
    207,23,82,104,126,122,52,175,217,192,14,239,143,153,92,18,
    252,227,238,248,44,219,207,145,77,119,77,25,186,39,85,231,
    54,139,6,58,126,185,194,245,151,191,151,248,219,90,84,182,
    101,171,42,87,229,2,127,55,248,123,217,90,108,84,156,74,
    133,237,22,42,124,63,168,88,255,0,30,48,114,63,
};

EmbeddedPython embedded_m5_internal_enum_X86IntelMPRangeList(
    "m5/internal/enum_X86IntelMPRangeList.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/enum_X86IntelMPRangeList.py",
    "m5.internal.enum_X86IntelMPRangeList",
    data_m5_internal_enum_X86IntelMPRangeList,
    1662,
    4090);

} // anonymous namespace
