#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NSGigE[] = {
    120,156,189,89,251,79,28,201,17,174,158,125,177,11,11,203,
    203,248,1,102,156,51,246,58,137,33,201,201,201,37,231,88,
    241,131,92,78,138,57,107,56,201,246,230,164,209,48,211,187,
    12,222,157,89,205,52,198,123,130,72,9,86,46,63,68,249,
    75,242,91,254,192,92,85,245,204,208,96,136,79,74,22,204,
    54,189,221,213,221,213,253,125,245,232,182,15,217,207,10,126,
    126,103,3,164,183,44,128,0,127,5,188,1,232,11,232,88,
    32,164,5,193,60,236,85,32,190,6,34,168,192,123,128,78,
    9,100,9,142,177,82,134,63,149,32,250,84,75,45,20,82,
    181,243,164,154,216,129,115,79,192,155,50,55,89,48,106,128,
    172,64,167,10,47,163,121,40,203,26,236,53,32,174,129,192,
    159,8,87,126,53,106,65,54,98,2,58,117,148,90,69,169,
    6,75,205,179,84,214,91,167,94,30,17,212,33,104,192,123,
    212,124,18,130,73,214,98,10,130,41,174,52,33,104,114,101,
    26,130,105,174,204,228,211,183,160,51,155,215,231,140,250,188,
    81,95,48,234,139,70,253,138,81,95,50,234,87,141,250,53,
    163,126,221,168,223,48,234,203,70,125,197,168,223,52,234,171,
    70,221,54,234,183,184,62,3,114,22,194,31,65,248,9,132,
    183,161,43,32,104,209,54,17,129,215,157,53,144,101,8,239,
    64,231,14,72,252,93,131,99,129,112,204,26,35,238,242,136,
    185,98,68,155,71,220,131,206,61,144,248,219,214,35,38,96,
    187,189,136,116,9,255,131,63,109,129,53,53,133,197,91,153,
    164,97,28,185,97,212,141,67,139,250,107,84,16,185,124,42,
    74,248,169,226,231,41,177,44,1,166,24,234,142,44,59,194,
    25,4,224,152,192,162,21,130,18,92,59,18,244,37,44,193,
    33,86,202,208,229,142,176,156,73,28,33,111,102,225,16,103,
    175,192,33,183,108,191,140,86,160,172,170,76,140,89,38,134,
    238,198,193,212,141,180,0,84,187,130,203,110,177,222,138,244,
    94,103,237,84,19,11,119,232,37,222,192,221,218,254,34,236,
    109,182,73,115,85,39,245,7,195,56,81,253,112,71,77,144,
    144,27,121,3,233,186,170,129,95,18,28,161,66,133,91,86,
    101,252,186,23,135,145,162,253,245,83,149,132,67,158,84,143,
    118,7,113,176,223,151,106,18,91,190,228,150,205,36,137,147,
    54,29,136,67,133,162,98,248,166,167,72,189,1,45,209,38,
    189,184,72,95,96,177,177,27,15,36,22,81,111,180,191,209,
    147,131,7,247,187,163,141,157,253,176,31,108,188,250,236,151,
    238,243,205,237,47,221,175,15,98,247,143,242,173,236,111,12,
    71,10,69,55,6,15,54,80,35,153,68,30,54,25,155,91,
    199,254,57,154,249,32,236,185,153,134,187,178,63,148,9,109,
    56,157,166,85,197,148,152,23,55,69,73,204,138,105,17,86,
    115,8,233,88,154,57,132,255,202,32,180,50,71,129,40,138,
    12,82,11,142,184,66,56,181,9,66,66,174,68,128,225,22,
    17,142,158,128,99,11,190,41,145,192,17,150,101,180,107,187,
    128,111,65,219,181,158,170,6,71,136,113,133,16,252,118,153,
    167,154,224,169,44,56,196,18,193,45,195,17,58,15,20,197,
    38,44,247,234,16,79,131,192,47,97,157,72,44,34,164,236,
    171,195,42,130,95,46,192,215,164,165,221,4,97,66,231,237,
    16,95,219,141,188,53,78,215,135,158,218,117,154,57,56,120,
    76,12,242,86,28,105,28,187,97,20,228,184,106,102,116,195,
    62,50,195,161,51,228,217,88,172,31,123,133,24,129,235,247,
    227,84,50,187,120,110,103,134,4,73,186,59,228,105,104,85,
    210,135,7,7,50,245,137,73,200,48,61,35,105,64,179,141,
    153,29,14,89,243,2,205,126,157,185,208,66,54,84,145,11,
    109,228,130,174,45,91,77,49,35,182,66,58,70,191,146,217,
    117,57,39,198,191,65,131,33,96,207,98,99,60,100,55,128,
    210,8,25,27,227,33,155,58,245,254,20,132,178,178,118,180,
    118,68,150,90,231,112,12,211,5,121,131,178,15,201,118,25,
    72,194,191,2,72,72,13,54,146,72,179,131,33,175,208,8,
    154,202,162,37,202,48,92,194,201,39,136,7,135,144,17,230,
    184,132,132,64,141,208,128,209,49,96,243,21,92,247,175,204,
    180,204,57,48,254,106,55,76,227,3,109,215,84,103,255,182,
    141,246,242,98,244,213,206,158,244,85,186,138,13,175,227,125,
    219,247,162,40,86,182,23,4,182,167,208,238,119,246,149,76,
    109,21,219,107,105,155,48,116,174,231,20,42,230,27,13,165,
    195,21,205,155,32,244,21,122,148,121,254,194,54,153,74,133,
    12,216,141,131,20,219,105,104,79,42,167,69,35,232,152,99,
    86,128,9,226,146,40,45,139,114,100,182,143,115,13,180,127,
    169,230,156,73,101,191,203,46,203,239,123,105,234,146,6,220,
    206,76,163,93,191,245,250,251,146,103,79,113,62,84,136,170,
    90,135,113,123,162,171,180,143,124,219,188,151,40,142,130,17,
    170,22,250,159,210,170,87,153,131,77,244,68,77,113,5,63,
    117,177,40,106,200,196,154,88,178,252,114,198,187,34,174,92,
    161,61,3,3,46,50,204,145,135,199,232,63,218,22,155,63,
    111,135,120,235,252,152,106,52,216,185,77,197,26,21,119,168,
    184,155,239,120,140,219,110,158,221,246,83,90,202,226,189,250,
    165,108,87,133,69,185,167,44,106,218,176,168,99,178,140,67,
    14,158,97,201,176,138,18,237,60,158,204,237,136,173,14,161,
    70,171,35,97,182,31,140,169,38,251,105,209,45,231,26,169,
    113,11,139,187,107,233,93,91,115,205,222,245,82,59,138,79,
    8,110,83,167,246,98,68,111,103,153,14,221,32,112,207,32,
    176,99,147,4,177,215,249,132,138,242,69,167,126,239,82,79,
    189,167,79,253,11,90,106,42,99,216,52,51,107,82,248,68,
    15,130,162,150,159,255,54,86,70,75,116,254,230,193,47,97,
    144,123,25,45,99,220,226,195,167,208,213,212,161,139,227,159,
    78,70,115,55,22,86,242,74,149,32,232,150,224,74,22,145,
    82,10,25,195,36,126,55,178,227,174,173,32,87,233,225,90,
    186,190,150,126,142,158,196,126,116,114,216,153,215,72,228,144,
    172,94,123,1,58,18,21,70,248,157,166,218,124,231,75,14,
    26,252,205,117,181,209,235,156,197,205,130,17,226,194,64,88,
    57,16,236,246,48,113,33,111,55,110,20,26,5,10,180,11,
    90,34,109,48,4,37,177,132,102,110,0,64,159,18,1,64,
    228,250,14,56,59,21,240,55,160,227,197,67,204,108,154,237,
    37,183,153,121,18,167,100,229,80,156,27,129,172,204,22,172,
    204,71,160,177,12,155,28,88,178,136,132,217,199,223,13,7,
    82,68,140,82,150,193,152,54,83,46,108,134,177,249,65,81,
    161,124,218,108,232,220,209,190,72,140,13,68,103,133,183,79,
    59,35,78,87,74,236,201,213,24,129,153,208,43,184,164,204,
    235,19,88,200,247,174,136,5,75,243,130,41,243,43,42,62,
    43,44,86,228,109,227,209,107,245,172,179,52,98,132,171,61,
    205,43,90,188,204,234,206,212,56,124,233,225,156,182,210,15,
    133,185,39,196,141,95,96,69,226,197,79,128,100,111,249,158,
    179,88,42,45,66,248,216,18,120,105,197,228,224,61,95,90,
    245,221,212,209,201,1,243,50,255,176,99,32,135,114,202,23,
    27,103,84,96,172,225,163,226,221,184,77,139,16,124,216,247,
    6,59,129,247,104,159,86,161,165,252,220,148,172,92,237,150,
    169,54,25,129,184,64,115,254,250,121,174,254,219,113,39,158,
    15,113,210,66,109,38,124,16,251,108,252,95,239,74,123,32,
    7,59,120,199,220,13,135,118,183,239,245,24,141,82,182,173,
    175,242,109,41,134,211,176,81,118,17,41,5,251,173,216,246,
    227,8,157,220,190,175,226,196,14,36,38,241,50,176,239,219,
    236,33,237,48,181,189,29,236,245,124,165,9,125,218,28,57,
    99,242,146,94,202,236,122,115,64,213,203,128,211,197,11,117,
    136,25,226,1,20,9,130,142,6,236,72,40,69,226,220,79,
    219,7,134,17,188,199,169,145,246,73,143,169,120,64,197,6,
    152,193,117,140,8,254,70,67,0,41,29,82,85,220,176,234,
    22,39,207,90,226,5,73,167,31,218,228,63,126,136,77,202,
    50,116,42,185,101,86,73,82,214,232,54,72,101,157,252,120,
    167,145,55,78,114,57,197,141,205,188,113,154,203,25,110,108,
    65,246,138,53,203,141,115,208,153,135,160,202,45,11,100,237,
    181,255,209,218,217,102,46,195,90,254,252,255,52,114,231,183,
    151,173,181,243,8,178,232,126,145,129,11,115,75,77,205,174,
    80,228,57,45,31,246,150,222,1,95,145,231,207,112,205,245,
    19,233,41,169,65,185,61,254,237,177,115,208,107,254,229,196,
    96,139,132,166,146,239,228,247,197,78,142,57,155,25,45,48,
    86,249,147,23,189,179,241,83,167,226,204,145,82,203,150,126,
    212,226,173,187,86,150,93,66,113,4,213,226,8,8,247,72,
    30,184,230,49,232,212,145,100,188,225,80,70,129,243,51,18,
    255,57,152,41,32,203,140,27,125,114,73,223,65,145,90,76,
    97,206,183,128,233,197,135,182,70,222,205,216,30,227,215,42,
    204,235,18,144,100,162,254,51,39,42,63,120,158,184,92,231,
    9,21,236,100,11,255,234,108,22,16,220,60,203,194,96,224,
    185,129,167,60,183,155,72,73,151,143,143,137,96,162,195,183,
    149,83,173,23,12,146,169,255,177,121,11,145,83,243,230,173,
    202,62,111,80,20,187,94,191,31,251,72,101,158,249,163,66,
    52,247,76,54,183,209,206,152,179,97,6,178,47,81,206,156,
    132,217,154,93,27,81,31,149,196,35,188,170,212,184,17,197,
    93,247,82,162,22,93,190,143,104,118,122,23,197,168,37,170,
    24,183,22,241,58,184,104,213,171,117,193,73,192,153,39,109,
    163,173,90,180,81,150,161,243,244,81,234,80,139,34,138,100,
    161,153,213,112,205,87,114,126,104,211,140,225,199,191,60,120,
    19,185,248,242,182,229,13,244,91,14,247,103,215,188,84,27,
    47,63,52,210,130,206,79,168,184,95,112,241,215,57,3,7,
    15,214,243,29,175,235,29,111,170,93,153,60,147,111,159,120,
    136,149,197,34,106,229,191,74,134,190,84,55,206,149,120,225,
    135,89,255,181,139,250,255,16,167,234,162,209,97,156,141,190,
    122,110,255,246,40,85,114,240,193,96,25,237,15,220,231,114,
    16,39,163,231,113,32,213,242,153,254,199,65,144,56,94,212,
    147,120,206,148,228,169,91,103,5,178,12,79,207,145,75,217,
    231,234,112,90,246,130,141,96,167,126,18,228,91,202,135,253,
    79,209,8,222,200,32,147,57,255,176,89,230,89,60,240,176,
    253,252,85,182,195,124,149,217,51,253,65,66,163,22,207,180,
    166,50,9,189,126,248,237,69,224,61,27,120,217,241,19,177,
    242,78,254,111,129,115,152,66,52,53,27,116,150,119,18,106,
    153,224,137,236,133,136,89,194,147,152,210,89,4,122,154,155,
    195,41,31,98,142,188,12,83,215,55,36,253,8,242,136,223,
    60,190,193,162,69,239,138,19,117,81,163,191,51,248,215,194,
    192,100,149,68,67,76,139,10,254,109,225,223,89,107,170,85,
    47,215,235,40,55,57,37,62,246,111,21,221,70,195,90,157,
    171,139,239,1,136,11,143,187,
};

EmbeddedPython embedded_m5_internal_param_NSGigE(
    "m5/internal/param_NSGigE.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_NSGigE.py",
    "m5.internal.param_NSGigE",
    data_m5_internal_param_NSGigE,
    2536,
    7522);

} // anonymous namespace