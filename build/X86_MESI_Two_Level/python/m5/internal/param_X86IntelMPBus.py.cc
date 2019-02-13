#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPBus[] = {
    120,156,197,88,109,111,219,200,17,158,165,222,44,219,178,229,
    216,142,243,226,187,176,104,210,168,237,37,110,123,72,123,237,
    165,65,147,32,45,2,220,57,1,125,64,18,181,0,65,139,
    43,153,142,68,170,226,58,142,14,54,80,212,233,203,143,233,
    183,254,192,118,158,89,146,161,19,27,57,160,141,78,182,86,
    203,229,236,238,204,62,207,204,206,110,143,178,79,155,191,191,
    115,137,210,191,41,162,144,255,21,189,36,26,42,234,58,164,
    180,67,225,42,237,215,40,185,76,42,172,209,27,162,110,133,
    116,133,78,184,82,165,63,86,40,254,220,74,173,21,82,141,
    179,164,90,252,130,199,158,163,151,85,105,114,104,58,79,186,
    70,221,58,61,139,87,169,170,27,180,63,79,73,131,20,127,
    98,158,249,249,180,77,89,143,57,234,54,89,234,26,75,205,
    139,212,170,72,101,111,155,120,43,61,194,38,133,243,244,134,
    53,95,160,112,65,180,88,164,112,81,42,45,10,91,82,89,
    162,112,73,42,203,249,240,109,234,174,228,245,11,165,250,106,
    169,190,38,245,101,210,43,20,173,83,116,145,162,13,234,43,
    10,219,24,138,173,124,209,189,68,186,74,209,101,234,94,38,
    205,255,151,232,68,177,201,43,165,30,87,164,199,133,162,199,
    85,233,177,73,221,77,210,252,127,213,246,152,163,157,206,58,
    67,18,253,135,63,29,134,132,204,34,23,175,244,36,141,146,
    216,143,226,126,18,57,120,223,64,1,0,123,40,42,252,173,
    243,247,33,144,156,144,192,200,186,51,146,199,60,130,34,238,
    19,58,152,33,172,208,229,99,133,135,168,66,71,92,169,82,
    95,94,68,213,76,226,152,177,89,161,35,30,189,70,71,210,
    178,243,44,254,132,170,166,46,139,191,34,139,111,95,115,103,
    188,230,165,39,86,187,198,211,110,139,222,6,122,223,22,237,
    204,26,23,254,56,152,4,35,255,249,23,191,124,28,27,61,
    252,250,233,131,131,180,3,3,76,19,86,140,198,201,196,12,
    163,93,51,7,89,63,14,70,218,247,205,60,63,76,184,163,
    137,12,91,110,170,252,184,159,68,177,129,153,195,212,76,162,
    177,105,21,189,253,81,18,30,12,181,89,224,150,199,210,242,
    104,50,73,38,29,172,139,135,194,160,24,191,28,24,104,57,
    194,20,29,168,39,69,250,140,139,173,189,100,164,185,136,7,
    211,131,173,129,30,221,185,213,159,110,237,30,68,195,112,139,
    245,246,191,126,180,243,216,255,230,48,241,191,210,175,244,112,
    107,60,53,44,186,53,186,179,197,26,233,73,28,112,211,251,
    54,222,102,177,11,152,224,48,26,248,153,162,123,122,56,214,
    19,216,157,46,97,114,181,168,86,213,167,170,162,86,212,146,
    138,234,57,160,88,157,86,14,232,191,50,64,157,204,53,25,
    83,149,1,236,208,177,84,128,90,7,128,2,199,10,224,99,
    75,25,156,129,162,19,135,254,84,129,192,49,151,85,246,36,
    183,0,115,205,122,146,29,170,65,199,140,120,13,120,126,187,
    41,67,205,201,80,14,29,113,201,80,87,233,152,221,149,69,
    185,137,203,253,38,37,75,164,248,33,106,130,210,42,102,2,
    63,63,170,51,21,170,5,21,44,133,97,77,24,77,176,236,
    30,216,219,153,207,91,19,94,164,192,236,121,173,28,35,94,
    38,193,122,59,137,45,156,253,40,14,115,120,45,65,250,209,
    144,9,226,97,13,101,52,17,27,38,65,33,6,140,123,195,
    36,213,66,50,25,219,91,134,32,164,251,99,25,6,179,66,
    31,233,28,234,180,7,66,49,209,236,136,208,0,163,205,134,
    36,30,92,28,142,146,94,17,74,180,153,20,117,166,68,135,
    41,97,107,155,78,75,45,171,237,8,171,217,171,101,206,94,
    205,249,241,111,178,152,40,218,119,196,67,143,36,54,176,52,
    35,39,30,122,36,254,143,183,159,145,50,78,214,206,33,128,
    1,70,235,5,238,35,172,97,250,176,236,93,56,180,224,9,
    26,212,136,121,105,49,103,46,89,146,8,242,53,244,192,80,
    14,166,168,210,120,131,7,159,3,29,142,40,227,205,73,133,
    121,193,26,177,59,115,180,224,230,139,60,239,95,133,112,89,
    196,16,26,152,189,40,77,14,173,151,163,46,65,111,135,221,
    230,233,244,201,238,190,238,153,244,26,55,188,72,14,220,94,
    16,199,137,113,131,48,116,3,195,81,96,247,192,232,212,53,
    137,123,35,237,0,74,239,74,206,164,98,188,233,88,123,82,
    177,244,9,163,158,225,248,178,42,15,226,154,169,54,76,132,
    189,36,76,185,29,93,7,218,120,216,24,37,216,36,162,128,
    240,196,135,40,166,101,57,120,239,253,92,3,27,109,234,57,
    117,82,61,236,75,0,235,13,131,52,245,161,129,180,11,225,
    96,245,171,96,120,160,101,244,148,199,99,133,80,181,58,204,
    40,46,93,130,57,185,245,98,82,156,196,225,148,53,140,122,
    159,99,242,75,66,197,22,199,165,150,186,200,223,166,90,87,
    13,38,100,67,109,56,189,106,70,191,98,207,185,8,211,73,
    112,87,25,244,76,199,19,142,38,29,71,130,129,88,5,250,
    122,63,65,13,157,189,235,40,110,160,248,17,138,155,185,225,
    31,223,250,214,187,214,63,196,140,142,152,220,171,100,198,21,
    254,229,159,242,175,165,146,127,157,192,79,142,100,127,141,42,
    37,31,169,96,1,146,133,220,171,196,7,25,120,246,65,8,
    139,55,241,182,91,246,5,76,186,237,93,134,26,63,224,226,
    230,141,244,166,107,153,231,238,5,169,27,39,111,233,238,226,
    165,13,109,32,187,183,137,181,47,209,121,80,162,179,231,66,
    2,92,246,126,136,162,122,222,226,255,248,251,88,252,129,93,
    252,63,96,198,197,140,111,75,194,179,5,213,3,89,128,72,
    35,135,97,135,43,211,13,192,80,94,255,13,222,0,159,197,
    155,188,167,9,6,216,214,90,118,91,147,189,209,166,134,121,
    108,139,106,121,165,14,36,250,21,186,152,237,86,41,182,147,
    241,36,121,61,117,147,190,107,40,87,233,238,141,244,246,141,
    244,75,14,47,238,189,183,107,158,133,146,137,30,35,20,216,
    208,128,149,49,81,204,207,24,234,209,235,158,150,13,69,158,
    124,223,70,2,155,214,248,217,70,197,240,8,30,78,142,135,
    196,66,206,109,16,2,103,4,198,124,1,6,140,121,138,233,
    230,5,137,138,218,96,223,47,225,128,111,5,56,128,106,255,
    32,73,103,21,253,157,176,202,188,150,153,163,139,247,228,30,
    180,10,113,228,51,71,234,204,221,201,201,60,195,201,2,7,
    187,206,184,37,155,78,182,91,113,130,242,207,82,84,41,118,
    147,74,150,228,148,61,168,90,120,144,64,244,157,118,140,234,
    105,39,194,242,179,183,65,76,220,197,230,143,215,79,71,40,
    201,104,42,18,229,205,199,199,103,206,78,228,67,167,23,111,
    209,65,92,254,68,173,57,150,37,66,160,95,161,248,162,112,
    99,149,183,125,84,245,174,189,27,72,75,219,136,111,163,208,
    115,232,80,21,173,151,27,6,241,8,163,236,220,247,31,62,
    249,234,201,246,142,159,13,152,63,242,192,146,1,227,131,173,
    242,1,56,244,11,174,104,62,181,41,210,18,99,223,72,66,
    140,210,1,19,78,28,197,39,78,78,48,222,200,137,211,30,
    44,61,155,96,8,127,243,175,196,17,196,159,83,17,188,180,
    136,5,23,44,204,40,94,207,200,19,129,244,221,97,48,218,
    13,131,123,123,152,12,51,246,114,207,115,114,237,219,101,237,
    225,51,234,28,3,228,241,203,220,138,87,51,74,101,239,194,
    133,114,237,197,77,194,164,39,33,227,155,61,237,142,244,104,
    151,143,178,123,209,216,237,15,131,129,96,83,201,172,123,146,
    91,103,4,220,146,103,75,96,73,145,55,108,39,110,47,137,
    57,66,30,244,76,50,113,67,205,167,3,29,186,183,92,9,
    175,110,148,186,193,46,191,13,122,198,242,255,180,19,75,14,
    22,76,6,169,164,91,47,15,81,157,33,184,62,31,223,35,
    78,61,247,169,200,53,236,142,34,81,8,73,151,36,149,214,
    157,120,43,226,115,162,153,218,128,118,31,197,29,20,91,84,
    222,167,63,62,158,191,225,177,7,152,4,75,86,87,87,157,
    166,35,185,198,41,193,167,232,123,134,219,30,126,23,183,213,
    85,234,214,114,231,173,67,82,55,112,246,68,217,196,150,208,
    157,207,27,23,164,92,148,198,22,101,23,82,75,210,184,76,
    221,54,133,117,105,89,129,239,55,254,71,223,23,215,153,161,
    211,252,249,255,233,242,222,111,191,39,229,189,123,148,101,8,
    231,185,187,42,91,214,178,238,30,169,60,75,150,165,223,182,
    134,200,73,252,202,217,92,243,123,19,29,24,109,145,186,62,
    51,99,37,112,216,169,205,91,47,46,82,164,90,110,215,239,
    11,187,78,36,63,154,174,9,128,249,173,27,174,250,228,70,
    211,72,74,138,156,181,109,239,213,100,33,124,39,75,91,169,
    88,144,122,177,32,27,92,196,250,208,63,99,81,108,106,10,
    209,96,60,214,113,232,253,12,189,126,78,229,20,83,100,102,
    196,12,68,173,41,21,57,203,34,231,148,107,156,183,188,239,
    149,8,128,37,99,5,212,118,225,136,179,131,87,184,252,151,
    156,203,29,220,221,189,13,206,222,3,20,18,142,139,72,236,
    61,42,112,249,244,28,162,238,30,164,126,20,226,168,243,33,
    17,206,160,4,60,251,88,100,74,103,73,227,70,65,134,252,
    160,16,6,157,203,6,149,155,144,251,185,87,133,122,168,141,
    62,139,71,6,107,159,29,38,67,205,251,105,50,229,147,75,
    67,26,185,151,239,207,114,3,194,201,124,76,89,20,228,13,
    72,213,121,11,90,87,235,78,179,222,84,178,183,191,115,33,
    94,106,171,23,109,159,80,158,180,79,83,15,45,6,64,102,
    91,173,232,226,151,239,216,229,70,206,226,42,151,133,249,102,
    12,10,200,129,110,59,24,217,75,159,108,113,229,232,151,90,
    135,147,139,73,100,43,222,79,81,220,42,24,243,107,244,70,
    219,232,206,237,220,236,219,239,153,29,164,250,97,18,247,163,
    193,163,216,76,166,114,103,57,186,99,174,158,217,109,39,26,
    217,251,49,179,242,206,251,112,18,112,125,253,157,214,84,79,
    162,96,24,125,107,175,82,243,102,201,226,63,164,199,103,244,
    161,196,253,116,7,201,28,204,173,15,246,98,94,2,133,137,
    30,68,41,171,35,186,156,171,69,22,231,192,137,115,169,95,
    30,109,134,68,181,249,187,61,216,223,147,115,60,200,210,198,
    205,217,92,83,53,240,187,204,191,14,71,65,167,162,230,213,
    146,170,241,111,155,127,87,156,197,118,179,218,108,178,220,194,
    162,178,127,215,152,220,243,206,181,149,166,250,47,101,52,38,
    192,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPBus(
    "m5/internal/param_X86IntelMPBus.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_X86IntelMPBus.py",
    "m5.internal.param_X86IntelMPBus",
    data_m5_internal_param_X86IntelMPBus,
    2385,
    7082);

} // anonymous namespace