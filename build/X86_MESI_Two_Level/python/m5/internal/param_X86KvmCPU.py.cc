#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86KvmCPU[] = {
    120,156,197,89,221,111,220,198,17,159,229,125,233,36,157,116,
    178,190,252,33,91,116,99,197,151,15,75,78,92,183,105,227,
    26,181,21,167,16,98,203,42,229,198,182,90,128,160,200,149,
    68,233,142,60,144,123,178,47,144,90,180,114,219,0,1,10,
    20,232,75,10,244,161,111,125,232,91,255,192,118,102,150,228,
    81,39,41,8,234,248,34,233,86,115,187,179,59,51,59,191,
    153,157,37,93,72,126,174,227,231,231,38,64,252,181,1,224,
    225,159,128,61,128,166,128,13,3,132,52,192,155,132,221,18,
    132,23,64,120,37,120,5,176,81,0,89,128,35,36,138,240,
    235,2,4,183,52,215,84,198,85,57,141,171,134,3,184,246,
    16,236,21,185,203,128,238,48,200,18,108,148,225,105,48,9,
    69,89,129,221,97,8,43,32,240,39,64,201,207,186,117,72,
    102,12,193,70,21,185,230,145,107,152,185,38,153,43,25,173,
    210,40,207,240,170,224,13,195,43,212,124,4,188,17,214,98,
    20,188,81,38,106,224,213,152,24,3,111,140,137,241,116,249,
    58,108,76,164,244,185,28,61,153,163,167,114,244,116,142,158,
    201,209,179,57,250,124,142,190,144,163,47,230,232,75,57,122,
    46,71,95,206,209,87,114,244,124,142,54,115,244,213,28,253,
    131,28,253,86,142,190,150,163,23,114,244,219,57,250,122,142,
    110,228,232,119,114,244,187,57,250,61,166,199,65,78,128,255,
    62,248,55,192,95,132,45,1,94,157,182,23,61,255,124,99,
    9,100,17,252,155,176,113,19,36,254,45,193,145,64,24,76,
    228,102,124,192,51,206,101,51,62,228,25,183,96,227,22,72,
    252,251,80,207,24,130,245,198,52,194,212,255,47,254,52,4,
    82,106,20,155,125,25,197,126,24,216,126,176,21,250,6,141,
    87,168,33,80,187,212,20,240,83,198,207,50,161,59,2,134,
    54,234,142,232,62,196,21,4,224,28,207,32,9,94,1,46,
    28,10,250,226,23,224,0,137,34,108,241,128,95,76,56,14,
    17,175,19,112,128,171,151,224,128,123,214,159,6,151,161,168,
    202,12,200,9,6,164,30,198,201,52,140,112,4,84,187,132,
    98,87,89,111,69,122,47,178,118,170,142,141,221,118,34,167,
    101,63,251,232,71,159,237,183,150,215,126,213,32,229,85,149,
    44,104,181,195,72,53,253,77,53,68,124,118,224,180,164,109,
    171,97,252,18,225,36,229,43,180,90,21,241,235,110,232,7,
    138,76,108,198,42,242,219,170,150,205,182,91,161,215,105,74,
    53,130,61,43,220,243,32,138,194,168,65,123,98,81,163,168,
    105,239,109,43,210,176,69,34,26,164,26,55,241,58,54,75,
    59,97,75,98,19,108,119,59,75,219,178,117,251,198,86,119,
    105,179,227,55,189,37,212,217,126,244,96,125,197,126,242,34,
    180,31,202,125,217,92,106,119,21,178,46,181,110,47,161,70,
    50,10,28,236,58,110,223,34,178,156,163,197,95,248,219,118,
    162,228,142,108,182,101,68,54,199,99,36,88,140,138,73,113,
    69,20,196,132,24,19,126,57,117,36,237,76,45,117,228,191,
    19,71,26,73,154,66,95,138,196,177,6,28,50,65,222,106,
    144,35,201,127,5,114,27,90,137,78,217,22,112,100,192,111,
    10,196,112,136,109,17,179,138,153,57,113,74,103,21,189,84,
    5,14,209,211,37,242,227,23,115,188,212,16,47,101,192,1,
    182,232,226,34,28,98,234,66,86,236,194,118,183,10,225,24,
    8,252,226,87,9,202,34,64,224,62,59,40,35,4,138,25,
    4,52,116,201,26,207,143,104,203,45,66,109,99,56,237,13,
    227,197,182,163,118,172,90,234,31,220,38,246,243,106,24,104,
    87,110,249,129,151,186,86,131,99,203,111,34,56,44,218,67,
    94,141,217,154,161,147,177,145,127,221,102,24,75,6,24,175,
    109,141,19,35,113,111,181,121,25,146,74,250,240,100,79,198,
    46,129,9,65,166,87,36,13,104,181,55,15,16,139,194,122,
    138,4,92,100,56,212,17,16,101,132,67,3,225,160,169,57,
    163,38,198,197,170,79,59,233,150,146,0,47,166,216,248,15,
    104,127,8,216,53,56,42,15,56,31,32,55,122,141,163,242,
    128,99,158,70,223,7,161,140,164,31,195,30,157,75,189,231,
    112,14,35,6,161,131,188,119,40,136,217,151,4,129,18,32,
    38,181,191,17,71,26,32,236,245,18,205,160,165,12,18,81,
    132,246,44,46,62,68,80,56,128,4,51,71,5,196,4,106,
    132,97,140,25,2,187,103,80,238,31,24,108,73,150,96,8,
    168,29,63,14,95,232,232,38,154,19,221,58,134,204,90,247,
    241,230,174,116,85,60,143,29,207,195,142,233,58,65,16,42,
    211,241,60,211,81,24,253,155,29,37,99,83,133,230,66,220,
    32,55,90,23,83,20,101,235,117,219,210,98,66,67,199,243,
    93,133,121,101,146,191,112,88,198,82,33,8,118,66,47,198,
    126,154,186,45,149,69,201,138,147,76,200,10,48,70,108,98,
    37,177,200,71,145,123,47,213,64,103,153,114,10,155,88,54,
    183,56,113,185,77,39,142,109,210,128,251,25,108,100,245,190,
    211,236,72,94,61,198,245,80,33,34,181,14,3,200,71,231,
    201,148,212,114,54,39,8,3,175,139,218,249,238,45,18,124,
    158,97,88,195,124,84,19,51,248,169,138,105,81,65,48,86,
    196,172,225,22,19,232,101,103,204,12,153,13,236,115,145,184,
    29,161,120,132,89,164,97,112,18,96,139,8,186,214,187,68,
    209,100,235,26,53,11,212,188,77,205,245,212,232,55,107,121,
    173,223,242,101,146,102,176,185,110,33,49,44,139,43,251,88,
    92,141,229,226,234,136,226,227,128,207,82,191,144,139,141,2,
    25,31,142,164,209,196,177,135,14,199,216,35,102,142,34,60,
    98,243,49,64,66,87,173,11,164,198,85,108,174,47,196,215,
    77,141,56,115,199,137,205,32,236,193,220,164,65,157,206,8,
    228,214,28,237,123,14,198,219,57,24,91,38,113,16,134,173,
    183,168,41,158,181,241,239,12,122,227,183,245,198,255,130,164,
    141,38,56,27,99,124,141,8,151,64,66,222,168,164,46,32,
    125,186,179,228,130,252,222,207,226,129,247,52,152,195,51,140,
    247,159,142,177,154,62,198,248,44,212,101,113,154,207,252,82,
    74,148,201,11,91,5,152,73,78,167,152,142,143,118,20,190,
    236,154,225,150,169,32,85,233,206,66,188,184,16,127,140,41,
    197,188,219,219,239,36,125,68,178,77,225,175,211,1,237,138,
    242,3,252,78,75,61,120,233,74,62,64,248,155,109,235,232,
    215,37,140,157,28,76,232,26,246,133,145,250,130,243,31,214,
    49,148,246,6,224,136,225,204,17,100,200,26,137,26,102,47,
    20,196,44,198,123,206,7,244,41,144,15,8,98,127,6,46,
    89,5,252,9,104,135,113,31,147,224,230,168,73,35,103,146,
    216,169,118,57,16,167,158,70,70,18,17,70,146,44,48,100,
    218,53,62,100,146,211,9,139,145,47,115,153,36,59,61,10,
    73,65,147,143,156,98,22,57,236,158,111,117,66,20,143,7,
    15,109,61,70,25,177,113,152,232,58,241,218,241,172,196,213,
    75,129,179,186,122,179,190,25,210,66,108,210,231,121,207,51,
    148,135,47,139,41,67,163,131,129,243,99,106,62,202,66,87,
    164,125,111,76,181,249,254,196,153,59,50,108,157,117,158,145,
    252,34,107,60,94,225,8,200,86,224,114,150,126,232,236,187,
    79,32,217,65,66,226,117,84,128,228,228,249,138,171,91,106,
    13,114,245,145,33,240,42,141,21,195,43,190,74,235,27,115,
    114,17,175,128,87,102,2,75,83,125,233,174,210,197,140,8,
    44,50,170,76,140,240,149,152,111,194,214,58,215,5,12,235,
    244,195,169,133,82,210,177,132,158,219,223,12,34,218,251,212,
    188,28,64,112,18,0,238,52,157,214,166,231,220,253,29,9,
    34,105,110,26,140,70,170,121,61,175,57,133,145,56,67,121,
    254,250,113,106,193,254,0,42,217,59,184,110,166,57,71,141,
    23,186,156,65,158,236,72,179,37,91,155,120,123,221,241,219,
    230,86,211,217,102,159,20,18,203,30,167,150,41,134,66,46,
    208,57,207,196,84,58,172,134,166,27,6,152,44,59,174,10,
    35,211,147,120,49,144,158,121,195,228,76,107,250,177,233,108,
    226,168,227,42,29,18,199,99,154,75,48,39,218,142,185,218,
    218,123,65,228,128,156,106,227,109,221,199,170,243,247,208,43,
    55,82,48,102,110,173,105,227,125,145,150,14,108,196,170,246,
    34,95,73,166,243,65,101,123,157,86,251,211,118,199,146,104,
    134,72,141,28,128,65,124,91,234,201,254,227,119,109,211,74,
    160,190,55,155,18,217,95,190,158,77,51,39,108,90,111,75,
    119,224,70,141,38,70,165,194,191,122,61,171,206,157,176,234,
    217,178,53,88,139,134,18,139,72,240,95,94,207,154,201,147,
    214,172,59,251,114,160,230,84,83,115,72,242,95,95,207,158,
    243,39,236,249,124,185,221,121,176,47,3,53,88,31,141,37,
    70,245,196,255,173,103,89,131,31,196,112,25,70,55,77,102,
    214,117,5,214,225,109,25,169,174,174,232,238,81,115,155,154,
    37,106,232,154,102,61,160,134,238,13,214,10,53,159,81,243,
    232,152,77,111,246,108,251,41,174,251,91,18,64,129,80,22,
    151,140,170,81,54,170,133,244,87,141,231,61,176,70,243,227,
    147,133,207,38,124,139,194,71,22,97,163,148,150,63,101,226,
    148,21,122,20,71,109,149,170,102,170,116,74,73,165,67,157,
    163,252,168,191,156,60,234,199,146,135,42,219,215,41,121,184,
    106,24,80,189,240,119,248,14,43,29,235,103,223,131,226,214,
    93,72,238,73,103,85,57,175,115,128,104,40,217,110,36,29,
    53,216,252,196,143,162,89,236,63,250,146,147,145,96,154,237,
    249,52,179,231,136,111,135,221,41,118,90,250,94,129,94,102,
    240,123,44,197,151,113,186,173,215,245,155,3,222,0,219,72,
    46,236,144,109,68,25,242,89,58,144,47,236,190,205,208,23,
    114,98,115,218,109,25,120,214,77,154,241,65,134,132,107,41,
    58,6,128,4,74,85,255,132,236,182,54,138,55,233,41,188,
    177,157,140,62,202,122,57,35,217,145,245,44,224,6,227,82,
    198,237,191,82,220,54,40,101,245,178,177,181,74,13,231,223,
    94,234,253,101,230,139,185,83,64,217,137,37,31,94,244,88,
    231,155,25,240,222,200,199,119,218,193,251,198,64,247,100,83,
    42,217,239,98,253,182,72,159,13,158,196,170,62,236,218,54,
    223,216,109,252,222,180,237,65,165,253,199,184,238,215,144,188,
    171,193,180,47,48,233,27,211,70,181,92,21,124,183,232,123,
    7,151,235,43,103,125,63,132,244,25,66,55,182,168,71,209,
    46,39,7,31,107,97,231,95,235,241,11,1,189,233,252,158,
    34,61,26,201,63,92,52,172,58,45,253,204,153,199,147,167,
    80,177,142,2,126,39,66,183,37,235,61,106,110,100,238,252,
    73,234,196,214,237,197,212,224,69,109,240,125,39,150,218,98,
    126,63,210,186,173,102,79,229,67,158,207,31,157,88,227,158,
    231,69,150,19,108,75,52,130,46,102,92,139,156,156,188,222,
    141,149,108,169,75,125,131,50,232,180,236,71,178,21,70,221,
    71,161,39,213,213,254,213,147,43,157,102,73,69,152,167,138,
    56,206,123,66,148,102,194,65,253,82,129,159,106,156,28,95,
    110,134,238,158,244,18,158,203,103,243,124,18,182,28,236,63,
    93,202,186,159,74,153,232,27,247,34,154,53,221,215,27,203,
    200,119,154,254,23,146,161,113,186,139,200,63,167,239,45,34,
    246,201,195,251,234,218,89,131,107,14,61,119,221,108,202,167,
    78,115,15,177,116,182,12,90,166,127,95,112,129,135,161,235,
    52,239,181,125,55,117,192,149,179,68,101,156,103,248,8,133,
    248,238,154,31,126,34,247,125,87,158,177,123,189,241,126,77,
    81,194,202,250,189,111,70,154,230,81,23,251,6,151,195,14,
    145,233,220,211,67,97,37,136,213,19,196,16,110,82,255,252,
    181,40,116,101,28,167,243,79,223,195,132,137,3,51,29,226,
    92,118,34,210,232,188,232,125,229,242,178,239,230,72,249,33,
    146,219,62,198,77,196,107,244,216,147,115,240,241,89,137,57,
    63,117,64,153,82,63,190,210,143,185,239,242,83,237,54,54,
    117,122,127,52,84,21,21,250,63,142,255,13,60,33,141,130,
    24,22,99,162,132,255,235,248,127,194,24,173,87,139,213,42,
    242,141,140,138,255,231,119,254,124,85,12,27,243,245,170,248,
    31,107,165,16,85,
};

EmbeddedPython embedded_m5_internal_param_X86KvmCPU(
    "m5/internal/param_X86KvmCPU.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_X86KvmCPU.py",
    "m5.internal.param_X86KvmCPU",
    data_m5_internal_param_X86KvmCPU,
    2789,
    9186);

} // anonymous namespace