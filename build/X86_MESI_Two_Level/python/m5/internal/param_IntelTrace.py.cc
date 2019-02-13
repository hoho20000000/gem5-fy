#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IntelTrace[] = {
    120,156,197,88,109,111,219,200,17,158,37,41,201,178,45,91,
    142,29,59,78,156,154,69,227,139,250,18,187,237,193,237,181,
    151,6,189,11,114,69,128,59,39,160,3,36,209,21,32,104,
    114,37,211,145,72,149,92,199,209,65,238,135,58,125,249,49,
    253,214,31,216,206,204,114,105,250,37,192,1,109,84,217,90,
    45,151,251,50,51,207,51,179,179,27,66,241,105,227,247,247,
    46,64,254,87,1,16,225,191,128,55,0,3,1,93,11,132,
    180,32,90,134,163,26,164,235,32,162,26,188,7,232,218,32,
    109,56,195,138,3,223,218,144,124,170,123,173,148,189,26,215,
    245,106,225,11,156,123,6,222,56,220,100,193,120,22,100,13,
    186,117,120,153,44,131,35,27,112,52,11,105,3,4,126,18,
    92,249,213,184,13,197,136,25,232,54,177,215,38,246,154,229,
    94,203,220,171,120,219,164,183,60,34,106,66,52,11,239,81,
    242,57,136,230,88,138,121,136,230,185,210,130,168,197,149,5,
    136,22,184,178,104,166,111,67,119,201,212,111,84,234,203,149,
    250,10,215,23,65,46,65,124,19,226,85,136,215,160,39,32,
    106,211,84,168,229,235,238,45,144,14,196,235,208,93,7,137,
    255,183,224,76,160,202,75,149,17,183,121,196,141,114,196,29,
    30,177,1,221,13,144,248,127,71,143,152,129,253,206,77,132,
    36,254,55,126,58,8,9,168,121,44,222,202,44,143,211,196,
    143,147,94,26,91,244,190,65,5,1,24,82,97,227,183,142,
    223,199,132,100,6,12,35,202,142,72,158,226,12,2,112,76,
    100,209,10,145,13,235,167,130,30,98,27,38,88,113,160,199,
    47,98,167,232,113,138,216,44,193,4,103,175,193,132,91,246,
    95,38,119,193,81,117,54,254,18,27,95,191,198,193,244,26,
    77,15,40,118,13,151,221,99,185,21,201,189,205,210,169,37,
    44,252,81,144,5,67,255,105,162,228,224,69,22,132,178,67,
    210,171,38,169,48,28,165,153,26,196,7,106,134,58,250,73,
    48,148,190,175,102,241,33,195,81,42,86,168,182,114,240,241,
    40,141,19,69,58,14,114,149,197,35,213,42,71,251,195,52,
    58,30,72,53,135,45,79,185,229,73,150,165,89,135,140,226,
    81,161,168,24,189,233,43,18,113,72,75,116,72,54,46,242,
    23,88,236,28,166,67,137,69,210,31,31,239,244,229,112,247,
    65,111,188,115,112,28,15,162,157,87,159,253,202,255,230,201,
    254,83,255,197,73,234,127,45,223,202,193,206,104,172,176,235,
    206,112,119,7,37,146,89,18,96,211,37,5,183,177,207,13,
    154,253,36,238,251,133,148,135,114,48,146,25,41,157,47,208,
    202,98,94,44,139,31,8,91,44,137,5,17,215,13,148,100,
    154,150,129,242,159,5,148,86,225,148,136,166,40,160,181,224,
    148,43,132,87,135,160,36,4,109,2,14,213,68,88,250,2,
    206,44,248,163,77,29,78,177,116,208,135,220,18,198,21,237,
    67,122,170,6,156,34,214,53,66,242,187,13,158,106,134,167,
    178,96,130,37,130,236,192,41,58,42,118,197,38,44,143,154,
    144,46,128,192,135,184,73,100,22,9,82,247,213,164,142,36,
    112,74,18,104,242,146,54,81,156,145,205,61,226,109,103,214,
    180,166,249,246,40,80,135,94,203,0,132,102,98,160,247,210,
    68,99,217,139,147,200,96,171,217,209,139,7,200,14,143,108,
    200,179,113,183,65,26,148,221,8,224,112,144,230,154,97,60,
    183,183,72,29,169,119,111,196,211,208,170,36,15,15,142,100,
    30,18,155,144,101,122,70,146,128,102,155,2,67,60,242,236,
    21,90,225,54,243,161,141,140,168,35,31,58,200,7,93,219,
    176,90,98,81,236,197,100,202,176,86,248,184,99,200,241,47,
    208,128,8,56,178,216,49,39,28,18,176,55,194,198,142,57,
    97,183,167,183,63,3,161,172,162,29,61,31,209,165,214,27,
    56,134,41,131,220,193,190,15,201,143,25,76,226,64,13,144,
    148,26,112,36,146,102,8,195,94,163,17,52,149,69,75,56,
    48,90,195,201,103,136,11,19,40,72,115,102,35,41,80,34,
    116,100,12,18,216,188,138,235,254,133,217,86,4,10,230,128,
    58,140,243,244,68,251,55,213,57,214,237,163,207,60,31,63,
    59,56,146,161,202,55,177,225,117,122,236,134,65,146,164,202,
    13,162,200,13,20,250,255,193,177,146,185,171,82,119,43,239,
    16,142,222,109,67,163,114,190,241,72,122,92,209,220,137,226,
    80,97,100,89,230,7,246,203,92,42,100,193,97,26,229,216,
    78,67,251,82,121,180,31,114,152,73,89,0,38,137,79,93,
    105,89,236,71,174,251,133,145,64,199,153,186,225,77,46,7,
    61,14,93,225,32,200,115,159,36,224,118,102,27,105,253,54,
    24,28,75,158,61,199,249,80,32,170,106,25,166,17,145,110,
    145,46,70,117,214,39,73,147,104,140,226,197,225,167,180,242,
    45,230,97,11,35,82,75,172,226,183,41,110,138,6,178,177,
    33,214,172,208,41,184,87,238,51,171,164,55,48,232,162,192,
    29,185,120,134,113,164,99,113,24,96,149,136,187,222,79,168,
    70,131,189,123,84,108,81,241,9,21,247,141,214,31,89,245,
    214,101,213,31,211,114,22,235,27,218,133,102,165,103,249,23,
    60,107,161,226,89,103,228,33,19,222,80,99,187,226,29,54,
    105,159,206,25,127,98,239,67,200,209,251,168,51,251,17,238,
    179,85,47,160,69,247,188,117,18,227,135,88,220,223,202,239,
    187,154,115,238,97,144,187,73,122,78,116,151,94,234,136,70,
    52,247,54,200,240,21,34,247,43,68,246,92,234,65,44,246,
    126,68,133,243,33,203,255,120,234,150,239,107,203,255,129,150,
    155,47,152,182,192,12,155,19,33,209,132,224,104,24,12,246,
    177,50,94,35,12,170,198,95,195,77,239,101,178,129,251,24,
    3,64,91,89,75,111,101,188,31,234,68,208,132,180,184,102,
    42,117,130,161,103,195,106,177,67,229,180,133,140,178,244,221,
    216,77,123,174,2,35,210,195,173,124,123,43,255,28,163,138,
    251,232,220,224,69,4,201,228,136,34,128,142,8,100,22,21,
    39,248,76,83,61,121,23,74,222,68,248,201,247,117,0,208,
    121,140,95,108,78,136,13,131,97,25,48,56,4,98,50,67,
    145,111,26,72,204,150,72,144,38,207,105,173,89,134,193,22,
    107,232,242,21,16,232,107,19,8,68,178,191,3,103,174,2,
    254,6,100,98,52,100,225,223,236,55,198,119,150,169,59,37,
    48,19,113,237,142,100,21,62,97,21,241,2,157,102,212,226,
    141,166,216,161,48,35,249,71,37,152,148,59,136,93,100,53,
    85,223,113,74,223,97,124,190,215,46,225,92,116,31,178,61,
    250,25,117,99,71,209,217,226,189,139,129,137,83,24,155,35,
    187,250,200,224,204,232,85,124,18,232,245,57,52,20,139,239,
    138,21,75,243,131,169,243,107,42,62,43,189,87,152,182,143,
    39,219,230,229,224,89,217,55,124,29,121,94,145,0,14,139,
    188,216,80,107,248,203,163,253,199,207,190,126,182,183,95,153,
    143,115,92,250,208,126,248,37,145,230,151,88,145,120,34,19,
    32,57,156,190,231,148,151,74,139,160,63,179,4,158,38,49,
    139,120,207,167,73,125,104,244,116,22,193,132,53,95,142,26,
    20,109,46,4,235,138,225,74,240,53,174,84,188,155,134,223,
    17,180,15,7,193,240,32,10,30,29,210,74,180,92,104,252,
    204,50,162,183,171,162,147,135,136,15,72,207,143,159,27,21,
    222,78,35,83,125,72,222,98,68,103,143,136,210,144,163,195,
    139,67,233,14,229,240,0,15,168,135,241,200,237,13,130,62,
    163,98,23,170,61,51,170,41,134,181,226,196,28,67,114,202,
    12,246,82,55,76,19,140,132,199,161,74,51,55,146,152,249,
    203,200,125,224,114,24,117,227,220,13,14,240,109,16,42,205,
    246,139,254,202,41,86,144,245,115,206,166,222,156,80,117,90,
    176,250,120,34,143,49,173,60,130,50,155,208,219,6,71,27,
    202,169,56,97,212,206,131,251,13,30,0,213,88,7,174,47,
    168,216,165,98,7,170,59,241,71,70,242,183,56,113,159,86,
    32,99,213,197,29,171,105,41,130,231,188,215,115,26,149,95,
    245,211,111,190,143,159,74,7,186,53,227,173,117,40,238,140,
    26,32,249,124,208,197,227,64,157,91,230,200,133,27,255,165,
    11,179,19,76,139,254,127,250,95,122,174,247,187,255,135,228,
    222,35,40,246,244,15,121,173,168,170,213,210,94,27,11,147,
    209,178,209,247,180,22,124,88,94,187,134,56,126,152,201,64,
    73,13,208,189,233,168,201,158,175,215,85,231,158,88,166,51,
    53,163,209,87,165,70,103,156,203,140,87,24,55,115,25,70,
    55,112,124,209,168,56,119,164,228,178,173,175,187,216,4,190,
    85,228,151,80,154,162,94,154,130,206,241,137,60,241,47,155,
    67,39,144,212,47,24,141,100,18,121,63,167,33,191,128,106,
    34,200,125,166,193,6,138,57,39,80,38,23,243,152,249,173,
    96,130,113,213,7,41,124,85,212,100,44,219,165,219,77,9,
    85,38,239,159,13,121,59,148,159,159,199,85,239,75,42,56,
    146,150,65,212,123,2,38,176,150,244,140,228,64,42,121,5,
    22,142,121,197,241,41,146,184,185,164,99,76,215,27,220,136,
    67,124,127,106,1,153,14,162,35,40,206,31,24,144,69,221,
    106,218,205,122,83,240,14,119,233,178,183,210,86,47,219,238,
    130,201,82,199,185,71,45,138,204,82,236,57,44,132,95,189,
    63,230,107,39,109,32,190,14,51,187,18,25,148,143,47,123,
    193,80,223,108,240,251,226,160,147,107,226,242,213,27,237,217,
    222,79,169,120,80,218,255,55,52,154,130,220,112,119,219,232,
    187,109,244,205,21,171,155,241,53,220,112,87,221,185,182,223,
    126,60,212,183,62,124,105,92,125,31,101,1,214,111,94,106,
    205,101,22,7,131,248,59,125,59,104,154,25,217,43,11,95,
    147,145,154,119,188,37,170,123,87,59,24,148,216,146,153,236,
    199,57,174,80,108,150,102,112,225,228,4,162,186,123,93,52,
    172,142,157,22,167,116,198,169,79,157,143,248,144,73,216,182,
    233,66,103,166,137,199,109,252,93,196,95,11,253,223,178,197,
    44,30,194,107,248,219,198,223,37,107,190,221,116,154,77,236,
    55,55,47,244,223,38,114,113,214,218,196,17,255,1,229,231,
    188,168,
};

EmbeddedPython embedded_m5_internal_param_IntelTrace(
    "m5/internal/param_IntelTrace.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_IntelTrace.py",
    "m5.internal.param_IntelTrace",
    data_m5_internal_param_IntelTrace,
    2306,
    6709);

} // anonymous namespace