#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_LocalBP[] = {
    120,156,189,88,251,111,219,200,17,158,37,41,201,146,45,91,
    242,51,78,156,51,139,198,141,250,136,221,246,224,246,218,75,
    131,158,131,92,113,192,213,231,163,175,72,162,22,32,104,114,
    37,209,145,72,149,92,199,209,193,6,138,58,125,252,49,253,
    173,127,96,59,51,75,210,180,227,160,1,122,178,108,173,150,
    203,217,221,217,253,190,121,236,250,144,125,90,248,253,173,13,
    144,254,77,0,4,248,47,224,21,192,80,64,215,0,33,13,
    8,150,224,184,2,241,58,136,160,2,111,1,186,38,72,19,
    46,176,98,193,31,77,136,62,214,82,203,133,84,237,38,169,
    38,190,192,177,103,224,149,197,77,6,76,26,32,43,208,173,
    194,243,104,9,44,89,131,227,6,196,53,16,248,137,112,230,
    23,147,22,100,61,102,160,91,71,169,77,148,106,176,212,18,
    75,101,111,235,244,150,123,4,117,8,26,240,22,53,159,133,
    96,150,181,152,131,96,142,43,77,8,154,92,153,135,96,158,
    43,11,249,240,45,232,182,243,250,98,169,190,84,170,47,115,
    125,1,100,27,194,21,8,87,33,92,131,158,128,160,69,67,
    225,42,95,118,239,128,180,32,92,135,238,58,72,252,191,3,
    23,2,151,220,46,245,184,203,61,22,139,30,247,184,199,6,
    116,55,64,226,255,61,221,99,6,14,59,43,8,73,248,31,
    252,116,16,18,80,115,88,188,150,73,26,198,145,27,70,189,
    56,52,232,125,141,10,2,208,167,194,196,111,21,191,79,9,
    201,4,24,70,212,29,145,60,199,17,4,96,159,192,160,25,
    2,19,214,207,5,61,132,38,156,97,197,130,30,191,8,173,
    76,226,28,177,105,195,25,142,94,129,51,110,57,124,30,221,
    7,75,85,121,243,219,188,249,250,53,118,166,215,184,245,128,
    106,87,112,218,125,214,91,145,222,219,172,157,154,199,194,29,
    123,137,55,114,191,140,125,111,184,119,208,33,213,85,157,244,
    31,141,227,68,13,195,35,53,67,82,110,228,141,164,235,170,
    6,62,36,216,69,133,10,215,172,44,124,60,142,195,72,209,
    2,135,169,74,194,177,106,22,189,221,81,28,156,12,165,154,
    197,150,47,184,229,89,146,196,73,135,118,196,161,66,81,49,
    126,213,87,164,223,136,166,232,144,98,92,164,95,99,177,51,
    136,71,18,139,168,63,57,217,233,203,209,238,163,222,100,231,
    232,36,28,6,59,47,62,249,133,251,251,103,135,95,184,223,
    156,198,238,151,242,181,28,238,140,39,10,69,119,70,187,59,
    168,145,76,34,15,155,202,171,219,70,129,69,26,250,52,236,
    187,153,138,3,57,28,203,132,86,156,210,118,128,152,19,75,
    226,35,97,138,182,152,23,97,53,7,145,246,165,153,131,248,
    175,12,68,35,51,71,196,81,100,160,26,112,206,21,66,170,
    67,32,18,118,38,65,134,107,68,64,250,2,46,12,248,147,
    73,2,231,88,90,104,61,118,1,224,178,182,30,61,84,13,
    206,17,229,10,97,248,237,6,15,53,195,67,25,112,134,37,
    194,107,193,57,154,40,138,98,19,150,199,117,136,231,65,224,
    67,88,39,26,139,8,73,251,226,172,138,240,91,5,252,154,
    182,180,154,32,76,104,195,29,98,108,167,145,183,198,233,246,
    216,83,3,167,153,163,131,219,196,40,239,199,145,6,178,23,
    70,65,14,172,166,70,47,28,34,53,28,218,67,30,141,197,
    134,177,87,136,17,186,254,48,78,37,211,139,199,118,22,72,
    144,164,123,99,30,134,102,37,125,184,115,32,83,159,168,132,
    20,211,35,146,6,52,218,180,233,225,144,65,47,211,240,119,
    153,12,45,164,67,21,201,208,65,50,232,218,134,209,20,11,
    98,63,164,125,244,43,153,105,91,57,51,254,13,26,13,1,
    199,6,219,227,25,123,2,148,70,204,216,30,207,216,218,233,
    237,79,64,40,35,107,71,131,71,104,169,117,17,251,48,95,
    144,56,40,251,152,204,151,145,36,2,84,0,25,169,209,70,
    22,105,122,48,230,21,234,65,67,25,52,133,5,227,53,28,
    124,134,136,112,6,25,99,46,76,100,4,106,132,38,140,190,
    1,155,87,113,222,191,50,213,50,255,192,4,80,131,48,141,
    79,181,101,83,157,93,220,33,26,204,193,228,171,163,99,233,
    171,116,19,27,94,198,39,182,239,69,81,172,108,47,8,108,
    79,161,229,31,157,40,153,218,42,182,183,210,14,129,232,220,
    205,57,84,140,55,25,75,135,43,154,56,65,232,43,244,41,
    75,252,192,70,153,74,133,20,24,196,65,138,237,212,181,47,
    149,67,97,144,29,76,204,10,48,67,92,18,165,105,81,142,
    236,246,179,92,3,237,97,170,57,105,82,57,236,177,211,242,
    135,94,154,186,164,1,183,51,213,104,213,175,189,225,137,228,
    209,83,28,15,21,162,170,214,97,234,190,232,14,45,36,95,
    55,47,38,138,163,96,130,186,133,254,199,52,237,29,38,97,
    19,125,81,83,172,226,183,46,86,68,13,169,88,19,107,134,
    111,101,196,43,98,203,42,45,26,24,113,145,129,142,68,188,
    64,15,210,49,216,1,240,122,136,184,206,143,168,70,157,157,
    7,84,108,81,241,3,42,30,230,75,158,230,186,155,215,215,
    253,148,230,50,120,177,190,153,45,171,176,41,247,138,77,205,
    151,108,234,130,108,227,140,35,104,104,150,236,194,164,165,199,
    179,185,37,177,221,33,216,104,119,36,204,22,132,129,181,204,
    127,154,116,223,89,39,53,190,135,197,195,173,244,161,173,217,
    102,15,188,212,142,226,75,138,219,244,82,59,50,34,184,179,
    65,187,94,162,112,191,68,97,199,38,9,226,175,243,125,42,
    172,247,109,251,15,111,119,219,251,122,219,127,71,115,205,101,
    28,155,103,110,205,10,159,8,66,88,212,114,0,14,177,50,
    89,35,0,202,59,191,134,129,238,121,180,129,177,139,119,159,
    194,87,83,135,47,142,129,58,237,203,61,89,88,201,43,85,
    194,160,103,194,106,22,149,82,10,27,227,36,126,51,177,227,
    158,173,32,87,233,241,86,186,189,149,126,138,206,196,126,114,
    185,219,153,227,72,228,152,12,95,59,2,218,19,21,70,248,
    76,67,61,123,227,75,14,28,252,228,186,218,238,117,226,226,
    102,1,9,129,97,36,140,28,9,246,124,152,189,144,195,155,
    58,12,141,2,6,90,198,1,77,212,96,12,76,177,134,150,
    94,66,128,190,38,33,64,244,250,7,112,146,42,224,239,64,
    251,139,187,152,153,53,91,76,110,53,75,36,78,25,203,153,
    184,49,10,25,153,53,24,153,155,64,115,25,55,57,184,100,
    81,9,83,144,127,150,124,72,17,53,204,44,141,41,91,141,
    85,88,13,131,243,65,145,193,186,106,56,180,241,104,97,36,
    198,38,162,115,195,7,87,253,17,231,44,38,123,115,53,77,
    100,102,244,20,46,105,243,242,18,23,242,191,247,197,178,161,
    153,193,164,249,37,21,159,20,70,43,242,182,41,41,182,121,
    221,97,150,2,133,171,189,205,11,154,221,98,125,23,106,188,
    173,89,127,78,95,233,67,209,110,143,232,241,115,172,72,60,
    102,9,144,236,50,223,114,54,75,165,65,32,95,24,2,143,
    136,152,35,188,229,35,162,62,9,58,58,71,96,106,230,95,
    118,14,228,84,174,56,228,210,46,21,48,107,4,169,120,51,
    117,243,34,16,31,15,189,209,81,224,61,25,208,52,52,151,
    159,155,147,145,235,221,42,235,77,134,32,222,163,58,63,126,
    154,235,255,122,234,25,232,99,178,136,92,111,102,125,16,251,
    236,1,190,25,72,123,36,71,71,120,222,28,132,99,187,55,
    244,250,140,135,153,173,235,171,124,93,138,1,45,25,42,251,
    137,148,130,254,126,108,251,113,132,174,238,196,87,113,98,7,
    18,211,121,25,216,143,108,246,147,118,152,218,222,17,190,245,
    124,165,73,125,213,38,57,117,242,146,126,202,89,210,171,83,
    170,222,10,160,46,158,174,67,204,21,143,161,72,20,116,80,
    96,119,66,185,146,62,204,178,141,96,52,193,35,157,154,104,
    207,244,25,21,187,84,236,64,57,200,78,19,195,95,227,168,
    125,26,158,182,169,42,238,25,117,131,163,111,38,114,64,242,
    233,187,134,121,250,33,134,41,45,232,86,114,243,172,146,164,
    172,209,209,144,202,58,249,243,110,35,111,156,229,114,142,27,
    155,144,221,17,205,115,227,2,116,91,16,84,185,165,77,214,
    93,251,63,173,155,77,228,86,140,227,207,223,165,81,59,191,
    185,117,181,157,39,144,133,244,247,25,180,40,175,169,169,13,
    58,20,121,42,203,219,189,175,151,192,135,227,229,235,204,114,
    253,68,122,74,106,92,30,220,194,2,217,29,232,73,213,165,
    133,22,121,76,37,95,203,231,197,90,46,56,137,153,44,51,
    92,249,133,23,221,178,241,101,162,226,140,145,82,202,150,190,
    210,226,197,187,70,150,85,66,177,9,213,98,19,218,88,68,
    242,212,189,178,17,58,103,36,33,111,60,150,81,224,252,148,
    228,127,6,229,220,143,101,166,206,0,242,66,19,40,82,138,
    57,76,246,150,49,173,120,215,226,200,161,149,22,200,16,182,
    10,35,187,13,48,153,173,127,201,217,218,161,11,179,75,55,
    235,236,81,193,142,181,240,169,206,179,2,133,143,222,161,226,
    144,158,158,170,100,47,84,41,157,59,254,151,8,38,56,124,
    229,80,110,84,15,110,238,115,144,72,186,66,136,147,195,240,
    91,201,131,127,144,32,77,177,152,79,113,229,21,195,196,246,
    20,200,161,84,242,42,155,20,225,144,157,242,2,137,81,50,
    158,224,193,162,198,141,40,239,186,183,19,92,232,176,60,134,
    204,219,97,112,17,85,12,47,43,98,197,168,87,235,130,99,
    245,181,91,232,82,91,181,104,187,15,121,78,61,73,29,106,
    81,4,106,22,64,89,11,183,124,177,205,23,99,26,99,190,
    173,203,67,44,209,129,79,90,251,222,72,223,189,240,251,236,
    76,150,106,131,227,155,65,202,62,156,31,83,241,168,96,207,
    175,168,55,29,184,71,187,219,249,130,183,245,130,247,18,47,
    242,7,5,58,124,85,56,218,85,247,110,20,62,12,71,250,
    114,138,221,64,249,125,144,120,88,95,185,214,154,202,36,244,
    134,8,56,43,155,55,179,216,205,179,211,10,246,232,241,15,
    152,134,112,120,47,123,93,222,181,68,246,195,20,7,226,81,
    174,245,207,188,17,33,167,238,190,67,209,114,239,91,161,144,
    206,145,245,89,248,9,31,125,9,198,22,93,48,205,212,69,
    141,126,23,240,215,64,47,101,152,162,33,230,69,5,127,91,
    248,219,54,230,90,117,171,94,71,185,217,57,161,255,54,145,
    118,13,99,179,93,23,255,5,110,161,215,101,
};

EmbeddedPython embedded_m5_internal_param_LocalBP(
    "m5/internal/param_LocalBP.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_LocalBP.py",
    "m5.internal.param_LocalBP",
    data_m5_internal_param_LocalBP,
    2364,
    6841);

} // anonymous namespace
