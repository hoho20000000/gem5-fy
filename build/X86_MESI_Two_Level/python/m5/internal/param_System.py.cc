#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_System[] = {
    120,156,189,26,107,83,28,199,177,103,239,56,56,224,120,8,
    4,122,32,177,146,133,117,126,8,252,136,252,84,20,203,178,
    252,138,133,149,197,85,150,73,170,182,150,221,185,99,197,221,
    238,213,238,32,116,46,168,74,5,85,146,255,144,111,249,156,
    111,249,29,249,77,73,119,207,206,178,247,0,225,148,1,184,
    190,217,158,158,158,158,233,231,204,226,67,246,179,128,159,207,
    108,128,244,63,2,32,192,63,1,59,0,45,1,155,22,8,
    105,65,48,7,207,70,32,190,12,34,24,129,151,0,155,37,
    144,37,56,196,70,25,254,88,130,232,125,77,53,159,83,141,
    14,163,170,97,7,242,30,131,157,50,163,44,232,142,131,28,
    129,205,10,252,24,205,65,89,142,194,179,113,136,71,65,224,
    79,132,51,63,237,206,64,54,98,12,54,171,72,181,140,84,
    227,76,53,199,84,89,111,149,122,121,68,80,133,96,28,94,
    162,228,19,16,76,176,20,147,16,76,114,163,6,65,141,27,
    83,16,76,113,99,218,176,159,129,205,89,211,190,80,104,207,
    21,218,243,133,246,197,66,123,161,208,94,44,180,47,21,218,
    151,11,237,43,220,158,6,57,11,225,85,8,151,32,188,6,
    13,1,193,12,137,132,187,245,211,230,117,144,101,8,151,97,
    115,25,36,254,93,135,67,129,91,55,91,24,97,243,136,11,
    249,136,27,60,226,38,108,222,4,137,127,55,244,136,49,216,
    168,95,68,213,134,255,197,159,58,170,22,212,36,130,231,50,
    73,195,56,114,195,168,17,135,22,245,143,18,32,67,240,9,
    148,240,83,193,207,67,178,136,4,216,28,80,118,180,136,3,
    228,32,0,199,4,22,205,16,148,224,242,129,160,135,176,4,
    251,216,40,67,131,59,194,114,70,113,128,58,158,133,125,228,
    62,2,251,140,217,248,49,186,6,101,85,97,37,206,178,18,
    117,55,14,166,110,84,33,160,216,35,56,237,58,203,173,72,
    238,85,150,78,213,16,184,29,47,241,218,238,70,55,85,178,
    93,39,201,85,149,196,111,119,226,68,181,194,45,53,70,68,
    110,228,181,165,235,170,113,124,72,112,132,10,21,46,89,149,
    241,241,89,28,70,138,214,215,74,85,18,118,152,169,30,237,
    182,227,96,183,37,213,4,98,190,97,204,163,36,137,147,58,
    109,136,67,64,17,232,236,52,21,137,215,166,41,234,36,23,
    131,244,9,130,181,237,184,45,17,68,205,238,238,90,83,182,
    239,222,105,116,215,182,118,195,86,176,246,244,163,15,220,199,
    143,54,190,113,127,216,139,221,239,228,115,217,90,235,116,21,
    146,174,181,239,174,161,68,50,137,60,68,21,22,183,138,253,
    23,136,243,94,216,116,51,9,183,101,171,35,19,90,112,58,
    69,179,138,73,49,39,174,139,146,152,21,83,34,172,24,21,
    210,182,212,140,10,255,149,169,208,202,156,26,181,40,50,149,
    90,112,192,13,210,83,157,84,72,154,43,145,194,112,137,168,
    142,166,128,67,11,254,84,34,130,3,132,101,244,65,59,87,
    223,188,246,65,205,106,20,14,80,199,35,164,193,159,151,152,
    213,24,179,178,96,31,33,42,183,12,7,232,232,72,138,40,
    132,207,170,16,79,129,192,135,176,74,70,44,34,52,217,167,
    251,21,84,126,57,87,190,54,90,90,77,16,38,180,223,14,
    217,107,125,220,96,227,116,181,227,169,109,167,102,148,131,219,
    196,74,94,143,35,173,199,70,24,5,70,175,218,50,26,97,
    11,45,195,161,61,100,110,76,214,138,189,156,140,148,235,183,
    226,84,178,117,49,111,103,154,8,137,186,209,97,54,52,43,
    201,195,131,3,153,250,100,73,104,97,154,35,73,64,220,206,
    216,58,28,242,230,121,226,126,133,109,97,6,173,161,130,182,
    80,71,91,208,173,37,171,38,166,197,122,72,219,232,143,100,
    126,93,54,134,241,111,208,202,16,240,204,98,103,220,231,48,
    128,212,168,50,118,198,125,118,117,234,125,27,132,178,50,60,
    122,59,106,150,176,23,112,12,155,11,218,13,210,222,35,223,
    101,69,146,254,71,0,13,82,43,27,141,72,91,7,171,124,
    132,70,16,43,139,166,40,67,103,17,153,143,145,29,236,67,
    102,48,135,37,52,8,148,8,29,24,3,3,162,23,112,222,
    191,176,165,101,193,129,245,175,182,195,52,222,211,126,77,109,
    142,111,27,232,47,79,186,223,111,61,147,190,74,151,17,241,
    83,188,107,251,94,20,197,202,246,130,192,246,20,250,253,214,
    174,146,169,173,98,123,37,173,147,14,157,43,198,132,114,126,
    221,142,116,184,161,237,38,8,125,133,17,101,142,31,216,39,
    83,169,208,2,182,227,32,69,60,13,109,74,229,204,208,8,
    218,230,152,5,96,3,113,137,148,166,69,58,114,219,7,70,
    2,29,95,42,198,102,82,217,106,112,200,242,91,94,154,186,
    36,1,227,217,210,104,213,207,189,214,174,100,238,41,242,67,
    129,168,169,101,56,235,72,116,137,214,97,150,205,107,137,226,
    40,232,162,104,161,255,62,205,122,137,109,176,134,145,168,38,
    22,240,83,21,23,197,40,90,226,168,88,180,252,114,102,119,
    121,94,161,146,67,1,43,92,100,58,71,59,60,196,248,81,
    183,216,253,121,57,100,183,206,155,212,162,193,206,45,2,43,
    4,94,39,112,219,172,248,12,151,93,235,95,246,67,154,202,
    226,181,250,165,108,85,185,71,185,61,30,53,85,240,168,67,
    242,140,125,78,158,97,169,224,21,37,90,121,60,97,252,136,
    189,14,85,141,94,71,196,236,63,152,83,139,214,79,147,174,
    59,151,73,140,27,8,110,175,164,183,109,109,107,246,182,151,
    218,81,124,100,224,54,117,234,40,70,230,237,44,209,166,23,
    12,184,89,48,96,199,38,10,178,94,231,53,2,229,227,118,
    253,141,115,221,245,166,222,245,175,104,170,201,204,194,166,216,
    178,38,132,79,230,65,170,24,53,251,191,129,141,238,34,237,
    127,113,227,23,49,201,253,24,45,97,222,226,205,167,212,85,
    211,169,139,243,159,46,28,77,24,11,71,76,163,66,42,104,
    148,96,33,203,72,41,165,140,78,18,191,232,218,113,195,86,
    96,68,186,183,146,174,174,164,159,98,36,177,239,31,109,118,
    22,53,18,217,33,175,215,81,128,182,68,133,17,62,19,171,
    71,47,124,201,73,131,159,92,87,59,189,174,89,220,44,25,
    161,94,88,17,150,81,4,135,61,44,92,40,218,157,181,22,
    198,115,45,208,42,104,138,116,156,85,80,18,139,232,230,5,
    5,208,167,68,10,32,227,250,27,112,117,42,224,175,64,219,
    139,155,152,249,52,251,139,241,153,57,34,167,98,101,95,12,
    205,64,86,230,11,86,22,35,208,89,58,53,78,44,89,70,
    194,234,227,239,133,0,146,103,140,82,86,193,20,125,166,156,
    251,12,235,230,84,89,161,220,235,54,180,239,232,95,68,198,
    14,162,171,194,91,189,193,136,203,149,18,71,114,117,134,138,
    25,211,51,184,36,204,79,71,106,161,216,123,77,204,91,218,
    46,216,100,62,36,240,81,238,177,194,224,206,70,174,229,254,
    96,89,200,17,174,142,52,79,105,242,50,139,59,61,202,233,
    75,15,231,178,149,126,40,205,125,78,182,241,5,54,36,30,
    210,4,72,142,150,47,185,138,37,104,145,134,15,45,129,7,
    76,44,14,94,242,1,83,159,35,179,227,233,40,4,21,110,
    140,129,179,193,46,201,150,106,62,28,42,40,196,244,68,231,
    194,174,229,90,215,10,37,240,226,172,157,141,116,122,175,229,
    181,183,2,239,126,68,179,208,84,190,113,46,203,136,61,83,
    20,155,220,66,28,35,57,63,126,106,196,127,126,214,165,232,
    61,100,154,139,205,46,16,196,62,135,131,31,182,165,221,150,
    237,45,60,117,110,135,29,187,209,242,154,172,141,82,182,172,
    239,205,178,20,43,184,224,181,28,52,82,74,255,235,177,237,
    199,17,134,189,93,95,197,137,29,72,44,235,101,96,223,177,
    57,102,218,97,106,123,91,216,235,249,74,155,120,175,131,114,
    13,229,37,205,148,237,109,103,143,154,231,161,78,23,143,216,
    33,214,140,29,56,42,25,140,13,230,10,173,233,149,135,194,
    164,127,94,193,186,214,31,159,38,230,115,39,161,108,248,88,
    182,227,164,251,56,14,164,94,234,45,56,159,116,220,51,181,
    42,172,40,143,255,69,19,205,87,164,35,247,137,139,74,123,
    22,117,148,233,72,107,109,66,157,195,234,122,100,216,59,90,
    93,157,143,137,156,10,168,200,229,234,93,71,56,44,4,240,
    36,174,186,58,171,60,32,112,151,192,26,1,42,18,157,47,
    123,52,115,134,190,247,9,109,20,100,105,160,34,174,90,85,
    171,98,85,75,250,48,196,84,79,104,68,58,24,99,31,89,
    167,136,177,178,12,155,35,38,210,86,136,82,142,210,233,158,
    96,149,180,187,57,110,144,19,12,39,25,89,51,200,41,134,
    211,140,156,49,200,89,134,23,24,57,103,144,243,12,47,50,
    114,193,32,23,25,94,98,228,101,131,188,194,240,42,35,151,
    12,242,26,195,235,140,92,54,72,155,225,13,70,222,52,200,
    215,24,222,98,228,138,65,190,206,240,54,35,235,6,249,6,
    195,55,25,249,150,65,190,205,240,14,35,87,13,114,141,225,
    59,140,124,215,32,223,99,248,62,35,127,99,144,119,25,126,
    192,200,15,13,242,35,134,31,51,242,19,131,252,148,225,61,
    70,254,214,32,239,51,252,29,35,63,51,200,7,12,63,103,
    228,67,131,252,130,225,35,70,126,105,144,95,49,252,154,145,
    223,24,228,183,12,127,207,200,239,12,242,49,195,117,70,126,
    111,114,235,19,70,254,1,54,29,147,100,55,126,141,36,203,
    169,234,60,146,212,1,252,138,185,213,249,237,121,75,237,220,
    135,172,204,62,46,175,254,194,236,50,215,23,36,92,63,145,
    158,58,199,228,194,151,150,60,231,159,161,55,79,90,89,168,
    226,149,124,153,175,228,144,143,21,221,121,214,149,185,123,166,
    11,111,126,63,160,248,8,71,103,188,25,125,187,204,75,119,
    173,236,152,7,249,22,84,242,45,32,189,71,114,207,45,110,
    131,62,195,17,141,215,233,200,40,112,222,33,242,119,161,120,
    22,99,154,179,214,62,101,150,127,152,224,78,247,189,37,49,
    143,117,254,160,175,81,146,42,44,143,245,55,147,187,215,57,
    104,146,13,245,159,198,80,235,63,64,49,115,58,116,130,215,
    185,242,40,77,126,155,171,224,90,191,21,110,197,177,114,227,
    148,172,58,165,178,231,21,20,152,191,57,221,21,145,202,30,
    48,109,207,223,150,110,11,107,71,55,13,127,150,204,247,149,
    68,196,154,174,127,251,240,234,181,254,129,242,5,22,123,113,
    228,238,197,201,142,27,34,94,11,126,26,58,154,131,174,250,
    7,187,212,213,254,225,92,83,234,173,39,246,39,245,19,91,
    50,155,35,148,90,236,39,223,65,93,202,22,179,58,174,143,
    216,112,229,204,143,234,230,49,100,120,138,78,92,220,35,127,
    135,185,157,130,140,24,207,230,140,11,61,124,146,236,25,204,
    23,244,76,208,246,82,61,193,171,104,136,59,213,107,189,104,
    181,52,116,88,220,104,208,137,154,248,158,72,64,76,243,23,
    6,26,167,46,247,15,192,176,76,247,55,218,192,142,239,165,
    177,116,78,48,136,65,93,82,79,226,69,77,153,14,215,117,
    161,223,232,250,8,53,116,230,56,9,51,102,199,247,22,228,
    98,132,90,25,32,109,123,29,119,55,13,163,38,158,240,19,
    153,202,228,185,94,236,233,40,105,2,58,0,12,235,28,116,
    244,246,110,75,133,174,218,198,28,17,12,15,5,61,20,38,
    20,20,145,131,67,162,221,118,230,101,193,49,241,165,135,194,
    48,45,34,7,119,144,166,226,215,75,67,247,55,239,53,251,
    107,16,131,122,77,187,237,173,184,149,179,58,169,223,232,253,
    8,165,94,239,39,103,137,183,100,51,140,92,127,167,163,92,
    63,222,141,180,173,159,146,148,38,161,55,201,67,123,213,237,
    147,152,116,118,113,175,116,204,163,9,79,75,75,51,46,244,
    205,120,212,125,162,220,60,254,116,75,44,144,14,89,226,81,
    239,160,93,51,25,74,148,246,239,232,233,40,141,7,12,235,
    84,183,134,178,192,34,164,127,174,83,17,210,84,115,102,170,
    222,190,19,24,244,109,226,169,8,7,102,42,108,224,128,123,
    229,41,142,116,58,212,1,123,40,140,3,22,145,234,189,254,
    33,252,142,60,213,215,10,220,246,227,40,146,62,93,178,23,
    22,243,127,12,163,233,233,109,203,43,41,185,94,227,93,8,
    36,186,162,236,41,42,185,210,204,222,189,4,24,87,147,184,
    235,186,124,179,236,226,115,203,117,207,229,186,224,107,224,99,
    14,164,84,175,85,196,85,81,177,170,214,69,241,139,126,173,
    106,165,42,248,134,173,239,63,72,10,184,74,142,163,18,72,
    95,139,119,83,135,48,28,28,179,123,20,22,216,45,254,83,
    10,191,215,214,117,33,191,107,55,55,45,84,66,242,187,146,
    117,175,173,95,157,114,127,246,86,37,213,37,58,95,216,208,
    157,161,243,22,129,59,121,197,249,49,141,166,72,218,190,187,
    106,246,102,85,82,64,47,220,107,89,220,207,37,64,145,236,
    1,86,15,14,37,85,148,147,110,32,217,22,122,8,178,235,
    71,205,202,80,217,125,84,90,19,189,180,3,34,105,34,236,
    212,111,176,185,204,25,236,127,216,138,253,29,25,100,52,215,
    142,167,249,34,110,123,136,31,62,203,70,104,102,153,237,235,
    15,18,26,117,177,15,139,25,58,244,90,84,253,142,113,89,
    169,209,92,30,247,139,77,122,200,159,248,138,170,112,212,100,
    213,39,24,100,241,33,225,225,57,105,118,252,250,218,88,73,
    111,222,43,12,59,15,95,209,183,242,250,85,220,125,126,243,
    182,142,96,134,222,110,143,85,197,40,125,79,227,183,133,167,
    50,171,36,198,197,148,24,193,239,25,252,158,181,38,103,170,
    229,106,21,233,38,38,197,224,239,242,100,85,140,91,203,183,
    171,226,127,236,247,210,105,
};

EmbeddedPython embedded_m5_internal_param_System(
    "m5/internal/param_System.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_System.py",
    "m5.internal.param_System",
    data_m5_internal_param_System,
    3111,
    10118);

} // anonymous namespace