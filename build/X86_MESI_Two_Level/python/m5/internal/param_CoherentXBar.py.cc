#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CoherentXBar[] = {
    120,156,197,89,109,111,27,185,17,30,174,222,44,217,178,229,
    248,45,47,206,121,115,137,47,186,182,177,219,30,210,94,123,
    105,208,36,205,21,7,52,190,96,29,52,142,90,96,177,222,
    165,228,181,165,93,117,151,78,162,192,254,82,7,109,129,254,
    138,126,239,183,254,178,254,130,222,204,112,185,94,219,202,33,
    135,94,116,142,69,83,228,144,156,225,243,204,112,200,248,144,
    253,92,193,207,111,109,128,244,191,2,32,192,95,1,7,0,
    125,1,29,11,132,180,32,88,128,253,10,196,87,64,4,21,
    120,11,208,41,129,44,193,9,86,202,240,167,18,68,159,105,
    169,197,92,170,54,78,170,137,29,56,247,20,28,148,185,201,
    130,81,3,100,5,58,85,120,30,45,64,89,214,96,191,1,
    113,13,4,254,68,184,242,206,168,5,217,136,41,232,212,81,
    106,13,165,26,44,181,192,82,89,111,157,122,121,68,80,135,
    160,1,111,81,243,105,8,166,89,139,25,8,102,184,210,132,
    160,201,149,89,8,102,185,50,103,166,111,65,103,222,212,47,
    21,234,11,133,250,98,161,190,84,168,47,23,234,43,133,250,
    229,66,253,74,161,126,181,80,191,86,168,175,22,234,215,185,
    62,7,114,30,194,143,32,92,131,208,134,174,128,160,69,106,
    227,142,190,232,220,0,89,134,240,99,232,124,12,18,127,111,
    192,137,192,237,157,47,140,184,201,35,46,229,35,110,241,136,
    117,232,172,131,196,223,91,122,196,20,108,183,151,16,254,240,
    127,248,211,70,248,65,205,96,241,82,38,105,24,71,110,24,
    117,227,208,162,254,26,21,68,22,159,138,18,126,170,248,121,
    68,172,73,128,41,131,186,35,107,142,113,6,1,56,38,176,
    104,133,160,4,87,142,5,125,9,75,112,132,149,50,116,185,
    35,44,103,18,199,200,131,121,56,194,217,43,112,196,45,219,
    207,163,235,80,86,85,6,122,158,129,214,221,56,152,186,17,
    102,64,181,43,184,236,22,235,173,72,239,13,214,78,45,96,
    225,14,189,196,27,184,143,226,61,153,200,72,237,60,244,146,
    54,233,175,234,100,196,96,24,39,170,31,238,170,41,18,117,
    35,111,32,93,87,53,240,75,130,227,84,168,208,112,85,198,
    175,251,113,24,41,178,178,159,170,36,28,170,102,62,218,29,
    196,193,97,95,170,105,108,249,138,91,30,39,73,156,180,105,
    91,28,42,20,21,195,131,158,34,37,7,180,68,155,180,227,
    34,253,35,22,155,123,241,64,98,17,245,70,135,155,61,57,
    184,123,167,59,218,220,61,12,251,193,230,206,231,191,112,159,
    60,222,254,202,125,246,42,118,255,32,95,202,254,230,112,164,
    80,116,115,112,119,19,53,146,73,228,97,211,5,19,55,80,
    234,18,205,255,42,236,185,153,158,123,178,63,148,9,153,157,
    206,210,218,98,70,44,136,143,68,73,204,139,89,17,86,13,
    156,180,57,77,3,231,191,51,56,173,44,8,32,162,34,131,
    215,130,99,174,16,102,109,130,147,80,44,17,120,104,40,66,
    211,19,112,98,193,159,75,36,112,140,101,25,125,214,206,161,
    92,212,62,171,167,170,193,49,226,93,33,52,223,172,242,84,
    83,60,149,5,71,88,34,208,101,56,198,192,128,162,216,132,
    229,126,29,226,89,16,248,37,172,19,161,69,132,244,221,57,
    170,34,17,202,57,17,52,129,201,154,32,76,104,215,29,226,
    110,187,97,90,227,116,99,232,169,61,167,105,32,194,109,98,
    168,183,226,72,163,217,13,163,192,160,171,249,209,13,251,200,
    15,135,246,144,103,99,177,126,236,229,98,4,177,223,143,83,
    201,28,227,185,157,57,18,36,233,238,144,167,161,85,73,31,
    30,28,200,212,39,62,33,207,244,140,164,1,205,54,17,142,
    56,228,223,139,180,198,85,102,68,11,57,81,69,70,180,145,
    17,186,182,106,53,197,156,216,10,105,51,253,74,230,233,101,
    67,143,255,128,134,68,192,190,197,238,121,196,129,1,165,17,
    56,118,207,35,118,126,234,253,9,8,101,101,237,232,255,136,
    47,181,94,194,49,76,26,100,15,202,222,35,111,102,56,137,
    5,21,64,90,106,200,145,74,154,35,12,124,133,70,208,84,
    22,45,81,134,225,10,78,62,69,108,56,130,140,54,39,37,
    164,5,106,132,206,140,161,2,155,151,113,221,191,50,223,178,
    112,193,44,80,123,97,26,191,210,62,78,117,142,120,219,232,
    53,79,71,95,239,238,75,95,165,107,216,240,34,62,180,125,
    47,138,98,101,123,65,96,123,10,99,192,238,161,146,169,173,
    98,123,61,109,19,146,206,85,67,164,124,190,209,80,58,92,
    209,236,9,66,95,97,116,225,168,228,178,103,166,82,33,15,
    246,226,32,197,118,26,218,147,202,105,209,8,218,230,152,21,
    96,154,184,36,74,203,162,28,57,239,3,163,129,142,53,85,
    195,156,84,246,187,28,190,252,190,151,166,46,105,192,237,204,
    55,178,250,165,215,63,148,60,123,138,243,161,66,84,213,58,
    76,38,42,93,38,107,140,241,108,81,20,71,193,8,21,12,
    253,207,104,237,203,204,196,38,70,165,166,88,198,79,93,44,
    137,26,242,177,38,86,44,191,156,177,47,63,111,150,201,114,
    96,216,69,134,60,178,241,4,99,73,219,226,80,192,70,17,
    123,157,31,81,141,6,59,183,168,88,167,226,19,42,110,27,
    187,63,184,241,205,243,198,63,162,5,45,182,216,47,101,182,
    229,222,229,158,241,174,217,130,119,157,144,151,28,241,209,26,
    150,10,30,82,34,251,227,105,227,83,236,129,8,59,122,32,
    9,179,47,225,137,91,244,4,90,116,203,161,164,47,189,129,
    197,237,245,244,182,173,121,103,239,121,169,29,197,167,100,183,
    169,83,199,53,162,186,179,10,230,136,213,38,245,10,100,118,
    108,146,32,38,59,55,169,40,191,107,239,63,253,1,246,190,
    167,247,254,247,180,224,76,198,182,89,102,217,180,240,137,42,
    4,72,205,160,176,141,149,209,10,161,80,220,254,21,60,252,
    158,71,171,120,158,49,4,116,164,53,245,145,198,231,162,78,
    64,77,96,11,43,166,82,37,32,186,37,88,206,78,170,148,
    142,146,97,18,191,30,217,113,215,86,96,84,186,183,158,110,
    172,167,95,96,108,177,239,159,110,121,22,71,18,57,164,56,
    160,227,2,109,140,10,35,252,78,83,61,126,237,75,62,76,
    248,155,235,234,48,160,51,26,55,59,164,16,29,134,195,50,
    112,112,32,196,180,134,226,223,100,176,104,228,88,144,45,79,
    105,181,6,3,81,18,43,232,248,5,24,232,83,34,24,136,
    104,127,7,206,99,5,252,13,104,147,113,43,51,47,103,223,
    49,254,179,64,226,148,202,28,137,177,39,147,149,249,133,149,
    69,13,116,156,97,147,15,156,236,164,194,220,228,31,133,144,
    146,159,36,165,44,191,41,250,79,57,247,31,70,232,189,78,
    139,242,89,23,162,221,71,95,35,49,118,22,157,57,222,58,
    27,158,56,153,41,113,132,87,31,28,158,41,189,142,75,42,
    189,56,5,135,98,242,117,177,104,105,142,48,125,126,73,197,
    231,185,15,11,211,246,33,181,91,59,31,68,11,39,136,171,
    35,208,14,169,80,102,165,231,106,124,164,23,39,225,52,151,
    126,232,64,124,72,108,249,57,86,36,94,2,5,72,142,165,
    111,57,235,165,210,34,204,79,44,129,23,88,76,35,222,242,
    5,86,223,83,29,157,70,48,83,205,135,3,6,5,154,51,
    145,186,176,95,57,234,26,80,42,94,79,198,229,8,211,123,
    125,111,176,27,120,247,255,66,107,209,130,190,113,49,203,40,
    223,42,42,79,206,33,222,161,63,127,253,194,24,241,114,50,
    233,234,61,156,58,87,158,221,33,136,125,14,13,207,246,164,
    61,144,131,93,188,171,238,133,67,187,219,247,122,140,76,41,
    51,238,107,99,156,98,104,11,30,204,1,36,165,228,96,43,
    182,253,56,194,64,120,232,171,56,177,3,137,23,0,25,216,
    119,108,142,162,118,152,218,222,46,246,122,190,210,68,63,235,
    172,156,103,121,73,47,229,148,234,224,21,85,39,7,173,139,
    215,243,16,179,75,218,153,44,161,208,231,6,7,27,74,172,
    56,111,212,126,131,7,14,222,4,213,72,199,173,7,84,220,
    165,98,19,138,135,241,7,71,243,215,56,245,144,214,160,13,
    171,138,107,86,221,226,75,107,81,238,41,141,76,47,122,236,
    191,222,199,99,101,25,58,21,227,183,85,146,148,53,186,91,
    82,89,167,184,223,105,152,198,105,46,103,184,177,105,26,103,
    185,156,227,198,150,105,156,231,242,18,55,46,64,246,8,182,
    200,141,75,208,89,134,160,202,45,43,20,32,106,255,103,128,
    96,7,155,156,107,189,249,62,227,130,243,155,31,70,119,231,
    62,100,233,194,187,98,130,40,26,214,212,49,33,20,38,97,
    230,141,223,210,118,240,141,252,202,88,74,186,126,34,61,37,
    53,76,183,38,101,42,199,22,189,242,241,169,167,231,217,82,
    197,88,245,101,110,213,9,167,74,163,69,70,207,188,188,209,
    115,31,191,160,42,78,78,41,123,109,233,183,53,222,6,215,
    202,18,88,200,183,163,154,111,7,221,184,34,249,202,189,184,
    37,58,71,37,73,111,56,148,81,224,252,148,6,253,12,138,
    185,38,203,76,134,21,20,215,222,66,158,189,204,96,114,185,
    136,25,204,69,127,164,16,89,48,149,17,109,229,46,56,49,
    108,153,198,255,52,52,110,211,61,248,52,122,59,15,169,224,
    120,157,135,106,231,113,14,202,167,227,57,58,164,87,75,55,
    238,186,190,238,243,71,116,249,249,14,210,152,97,113,72,190,
    216,165,110,142,159,36,141,226,120,72,15,101,104,42,47,246,
    62,114,180,12,101,105,197,70,117,231,219,6,38,50,29,226,
    89,45,221,62,186,130,177,235,187,141,160,69,151,243,69,207,
    119,171,235,239,152,108,148,42,57,224,229,190,93,130,166,231,
    119,22,254,202,108,228,80,18,200,190,84,114,140,251,40,226,
    92,118,151,14,36,38,26,241,8,111,110,53,110,196,65,174,
    59,193,163,153,222,37,70,180,6,61,14,226,209,44,170,120,
    56,47,9,254,103,213,171,117,193,121,207,185,255,13,40,180,
    85,243,54,186,194,232,139,203,40,117,192,108,66,150,135,176,
    58,110,241,63,24,248,69,82,115,154,223,74,77,166,66,244,
    231,59,237,150,55,208,143,94,220,159,221,126,83,29,106,248,
    93,150,50,57,231,199,84,220,201,189,229,87,52,154,224,26,
    220,221,48,150,111,104,203,183,9,253,47,53,227,44,150,224,
    39,170,49,130,140,163,186,118,174,83,70,135,3,247,137,28,
    196,201,232,73,28,72,181,122,174,255,65,16,36,142,23,245,
    36,154,73,105,165,186,113,94,32,203,41,245,28,70,202,30,
    171,195,89,217,11,186,104,33,236,212,79,151,124,83,186,216,
    255,168,31,251,7,50,200,100,198,239,10,203,252,46,30,120,
    216,62,126,149,237,208,172,50,127,174,63,72,104,212,210,185,
    214,84,38,161,215,15,223,72,117,117,236,124,15,189,84,18,
    251,24,86,211,199,57,235,152,126,243,133,83,200,11,7,52,
    147,43,145,189,48,37,80,103,11,242,217,57,69,236,230,205,
    25,231,189,133,177,147,115,56,125,61,211,239,51,247,249,57,
    230,25,22,45,122,254,156,170,139,26,253,157,195,191,22,30,
    98,86,73,52,196,172,168,224,223,22,254,157,183,102,90,245,
    114,189,142,114,211,51,226,93,255,214,208,101,27,214,218,66,
    93,124,3,22,132,223,186,
};

EmbeddedPython embedded_m5_internal_param_CoherentXBar(
    "m5/internal/param_CoherentXBar.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_CoherentXBar.py",
    "m5.internal.param_CoherentXBar",
    data_m5_internal_param_CoherentXBar,
    2551,
    7657);

} // anonymous namespace
