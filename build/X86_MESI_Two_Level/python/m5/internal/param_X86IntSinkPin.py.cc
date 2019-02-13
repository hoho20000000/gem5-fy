#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntSinkPin[] = {
    120,156,197,88,109,111,219,200,17,158,165,222,44,219,178,229,
    216,142,243,118,23,22,141,27,245,37,118,219,67,218,107,47,
    13,238,46,200,21,1,174,78,64,31,144,68,45,64,208,226,
    74,166,35,145,130,184,142,163,131,141,2,117,208,246,199,244,
    91,127,96,59,207,44,73,211,78,220,30,208,70,39,91,171,
    229,114,118,119,102,159,103,102,103,183,71,217,103,153,191,159,
    187,68,233,84,17,133,252,175,232,21,209,80,81,215,33,165,
    29,10,87,233,160,70,201,117,82,97,141,222,18,117,43,164,
    43,116,202,149,42,253,177,66,241,39,86,106,173,144,106,188,
    79,170,197,47,120,236,57,122,85,149,38,135,166,243,164,107,
    212,173,211,243,120,149,170,186,65,7,243,148,52,72,241,39,
    230,153,95,76,219,148,245,152,163,110,147,165,110,179,212,188,
    72,173,138,84,246,182,137,183,210,35,108,82,56,79,111,89,
    243,5,10,23,68,139,69,10,23,165,210,162,176,37,149,37,
    10,151,164,178,156,15,223,166,238,74,94,191,82,170,175,74,
    125,153,244,10,69,107,20,173,83,116,149,250,138,194,54,186,
    179,101,47,187,27,164,171,20,93,163,238,53,210,252,191,65,
    167,138,205,92,41,245,184,46,61,174,20,61,110,72,143,155,
    212,189,73,154,255,111,216,30,115,180,219,89,103,24,162,127,
    241,167,195,48,144,89,228,226,181,158,164,81,18,251,81,220,
    79,34,7,239,27,40,0,90,15,69,133,191,117,254,62,2,
    122,19,18,232,88,119,70,239,132,71,80,196,125,66,7,51,
    132,21,186,126,162,240,16,85,232,152,43,85,234,203,139,168,
    154,73,156,48,30,43,116,204,163,215,232,88,90,118,159,199,
    31,81,213,212,101,193,87,100,193,237,107,238,140,215,188,220,
    196,106,215,120,218,29,209,219,64,239,45,209,206,172,113,225,
    143,131,73,48,242,95,124,250,171,39,177,217,141,226,87,207,
    162,184,3,3,76,19,86,140,198,201,196,12,163,61,51,7,
    89,63,14,70,218,247,205,60,63,76,184,163,137,12,91,110,
    170,252,120,144,68,177,129,153,195,212,76,162,177,105,21,189,
    253,81,18,30,14,181,89,224,150,39,210,242,120,50,73,38,
    29,172,139,135,194,160,24,191,26,24,104,57,194,20,29,168,
    39,69,250,156,139,237,253,100,164,185,136,7,211,195,237,129,
    30,221,191,215,159,110,239,29,70,195,112,155,245,246,255,240,
    120,247,137,255,205,81,226,127,173,95,235,225,246,120,106,88,
    116,123,116,127,155,53,210,147,56,224,166,119,109,220,98,177,
    43,152,224,40,26,248,153,162,251,122,56,214,19,216,157,46,
    97,114,181,168,86,213,199,170,162,86,212,146,138,234,57,160,
    88,157,86,14,232,63,50,64,157,204,29,25,83,149,1,236,
    208,137,84,128,90,7,128,2,199,10,224,99,75,25,156,129,
    162,83,135,254,84,129,192,9,151,85,246,30,183,0,115,205,
    122,143,29,170,65,39,140,120,13,120,126,123,75,134,154,147,
    161,28,58,230,146,161,174,210,9,187,40,139,114,19,151,7,
    77,74,150,72,241,67,212,4,165,85,204,4,126,113,92,103,
    42,84,11,42,88,10,195,154,48,154,96,217,61,176,183,51,
    159,183,38,233,214,56,48,251,94,43,199,136,151,73,176,222,
    73,98,11,103,63,138,195,28,94,75,144,126,52,100,130,120,
    88,67,25,77,196,134,73,80,136,1,227,222,48,73,181,144,
    76,198,246,16,219,12,164,251,99,25,6,179,66,31,233,28,
    234,180,7,66,49,209,236,136,208,0,163,205,134,36,30,92,
    28,142,146,222,16,74,180,153,20,117,166,68,135,41,97,107,
    183,156,150,90,86,59,17,86,179,87,203,156,189,154,243,227,
    159,100,49,81,116,224,136,135,30,75,108,96,105,70,78,60,
    244,88,252,31,111,127,70,202,56,89,59,135,0,6,24,173,
    87,184,143,176,134,233,195,178,15,224,208,130,39,104,80,35,
    230,165,197,156,185,100,73,34,200,215,208,3,67,57,152,162,
    74,227,13,30,124,14,116,56,166,140,55,167,21,230,5,107,
    196,238,204,209,130,155,175,242,188,127,17,194,101,17,67,104,
    96,246,163,52,57,178,94,142,186,4,189,93,118,155,103,211,
    167,123,7,186,103,210,219,220,240,50,57,116,123,65,28,39,
    198,13,194,208,13,12,71,129,189,67,163,83,215,36,238,102,
    218,1,148,222,141,156,73,197,120,211,177,246,164,98,233,19,
    70,61,195,241,101,85,30,196,53,83,109,152,8,251,73,152,
    114,59,186,14,180,241,218,232,129,101,78,68,1,225,137,15,
    81,76,203,114,240,222,47,114,13,108,180,169,231,212,73,245,
    176,47,1,172,55,12,210,212,135,6,210,46,132,131,213,175,
    131,225,161,150,209,83,30,143,21,66,213,234,48,163,184,116,
    13,230,228,214,139,73,113,18,135,83,214,48,234,125,130,201,
    175,9,21,91,28,151,90,234,42,127,155,106,93,53,152,144,
    13,181,225,244,170,25,253,138,61,231,42,76,39,193,93,101,
    208,51,29,79,57,154,116,28,9,6,98,21,232,235,253,4,
    53,116,246,238,160,216,68,241,35,20,119,115,195,63,188,245,
    173,139,214,63,194,140,142,152,220,171,100,198,21,254,229,159,
    243,175,165,146,127,157,194,79,142,101,127,141,42,37,31,169,
    96,1,146,133,220,171,196,7,25,120,246,65,8,139,55,241,
    182,91,246,5,76,186,227,93,135,26,63,224,226,238,102,122,
    215,181,204,115,247,131,212,141,147,51,186,187,120,105,67,27,
    200,238,221,194,218,151,232,60,40,209,217,115,33,1,46,123,
    63,68,81,189,108,241,127,252,125,44,254,192,46,254,239,49,
    227,98,198,183,37,225,217,130,234,129,44,64,164,145,195,176,
    203,149,233,6,96,40,175,255,6,111,128,207,227,91,188,167,
    9,6,216,214,90,118,91,147,189,209,166,131,121,108,139,106,
    121,165,14,36,250,21,186,154,237,86,41,182,147,241,36,121,
    51,117,147,190,107,40,87,233,193,102,186,181,153,126,198,225,
    197,125,120,182,230,89,40,153,232,49,66,129,13,13,88,25,
    19,197,252,140,161,30,191,233,105,217,80,228,201,247,109,36,
    176,105,141,159,109,84,12,143,224,225,228,120,72,44,228,220,
    6,33,112,70,96,204,23,96,192,152,103,152,110,94,144,168,
    168,13,246,253,18,14,248,86,128,3,168,246,55,146,116,86,
    209,95,9,171,204,107,153,57,186,120,79,238,65,171,16,71,
    62,115,172,222,187,59,57,153,103,56,89,224,96,215,25,183,
    100,211,201,118,43,78,80,254,94,138,42,197,110,82,201,146,
    156,178,7,85,11,15,18,136,190,211,142,81,61,239,68,88,
    126,246,54,136,137,187,216,252,241,206,249,8,37,25,77,69,
    162,188,249,240,248,204,217,137,124,232,244,242,12,29,196,229,
    143,212,154,99,89,34,4,250,53,138,79,11,55,86,121,219,
    7,85,239,246,197,64,90,218,70,124,27,133,94,64,135,170,
    104,189,220,144,125,7,163,236,126,225,63,122,250,245,211,157,
    93,255,108,64,201,124,241,193,22,249,37,184,243,75,174,104,
    62,161,41,210,18,91,223,74,34,140,210,1,3,78,29,197,
    167,75,78,44,222,202,233,210,30,34,61,155,88,8,111,243,
    175,196,15,196,157,115,145,187,180,120,5,7,44,188,40,222,
    204,200,3,129,240,131,97,48,218,11,131,135,3,76,134,25,
    123,185,199,57,185,246,237,178,246,240,21,117,137,1,242,248,
    89,110,197,235,25,165,176,15,120,236,66,123,113,143,48,233,
    73,168,248,102,95,187,35,61,218,227,35,236,126,52,118,251,
    195,96,32,216,84,50,235,158,230,214,25,1,183,228,209,18,
    80,82,228,11,59,137,219,75,98,142,140,135,61,147,76,220,
    80,243,169,64,135,238,61,87,194,170,27,165,110,176,199,111,
    131,158,177,188,63,239,188,146,123,5,147,65,42,105,214,171,
    35,84,103,8,174,207,199,246,136,83,78,228,64,89,142,97,
    119,18,137,62,72,182,36,153,180,110,196,91,16,159,15,205,
    212,6,178,47,80,220,71,177,77,229,253,249,195,227,249,91,
    30,187,143,73,176,100,117,117,211,105,58,146,99,156,19,124,
    134,190,233,187,110,123,244,93,220,86,87,169,91,203,157,183,
    14,73,221,192,153,19,101,19,91,65,119,62,111,92,144,114,
    81,26,91,148,93,62,45,73,227,50,117,219,20,214,165,101,
    5,190,223,248,31,125,95,92,103,134,78,51,254,127,186,188,
    247,187,239,73,121,239,33,101,153,193,101,238,174,202,150,181,
    172,187,71,42,207,142,101,233,119,172,33,114,2,191,241,126,
    174,249,189,137,14,140,182,72,221,153,153,177,18,56,236,212,
    233,153,23,23,169,81,45,183,235,171,194,174,83,201,139,166,
    107,2,96,126,219,134,43,62,185,189,52,146,138,34,87,109,
    219,251,52,89,8,223,201,210,85,42,22,164,94,44,200,6,
    23,177,62,242,223,179,40,54,37,133,104,48,30,235,56,244,
    126,142,94,191,160,114,106,41,50,51,98,6,162,214,27,42,
    114,149,69,206,37,215,56,95,121,215,43,17,0,75,198,10,
    168,237,194,17,103,7,175,112,249,207,57,151,59,184,179,59,
    11,206,222,151,40,36,28,23,145,216,123,92,224,242,241,37,
    68,13,245,235,168,167,113,196,249,111,34,156,57,9,120,246,
    241,82,233,248,16,78,245,31,7,204,68,242,1,237,163,192,
    33,254,20,234,161,54,250,125,12,50,88,245,236,248,24,106,
    222,73,147,41,159,85,26,210,200,189,124,127,150,91,15,206,
    226,9,101,241,143,183,30,85,231,205,103,93,173,59,205,122,
    83,201,174,126,225,10,188,212,86,47,218,36,161,151,52,125,
    154,122,104,49,128,48,219,100,69,23,191,124,171,46,119,112,
    22,81,185,30,204,183,97,128,47,71,184,157,96,100,175,121,
    228,125,118,216,75,173,171,201,85,36,242,20,239,167,40,238,
    21,92,249,13,122,223,228,98,116,127,43,55,123,203,154,189,
    27,141,236,213,150,220,74,142,238,155,149,11,98,225,36,224,
    250,250,133,214,84,79,162,96,24,125,107,47,67,243,102,131,
    235,205,139,227,66,171,226,73,54,116,179,73,151,103,223,178,
    52,19,61,136,82,30,83,6,44,58,103,97,6,192,24,247,
    18,238,149,123,207,144,45,54,125,182,231,233,135,114,124,254,
    156,139,54,46,172,230,154,170,129,223,101,254,117,56,8,57,
    21,53,175,150,84,141,127,219,252,187,226,44,182,155,213,102,
    147,229,22,22,21,254,110,51,191,230,157,219,43,77,245,111,
    66,17,249,12,
};

EmbeddedPython embedded_m5_internal_param_X86IntSinkPin(
    "m5/internal/param_X86IntSinkPin.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_X86IntSinkPin.py",
    "m5.internal.param_X86IntSinkPin",
    data_m5_internal_param_X86IntSinkPin,
    2356,
    6931);

} // anonymous namespace