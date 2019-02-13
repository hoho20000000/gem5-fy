#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SubSystem[] = {
    120,156,197,88,109,111,27,199,17,158,189,59,146,34,37,74,
    148,37,75,126,81,170,11,98,197,108,19,75,73,3,181,105,
    226,26,121,129,19,4,104,20,227,20,192,54,91,224,112,186,
    91,82,39,147,119,196,221,74,50,3,234,75,101,180,253,49,
    253,214,31,216,206,204,222,158,78,178,13,4,72,196,82,226,
    114,111,111,95,102,230,121,102,118,118,67,40,62,75,248,253,
    194,5,200,39,2,32,194,127,1,47,0,134,2,122,22,8,
    105,65,180,2,71,53,72,111,131,136,106,240,10,160,103,131,
    180,225,28,43,14,252,213,134,228,19,221,107,181,236,213,120,
    83,175,54,190,192,185,231,224,133,195,77,22,76,90,32,107,
    208,171,195,211,100,5,28,217,128,163,22,164,13,16,248,73,
    112,229,103,147,14,20,35,230,160,215,196,94,155,216,171,197,
    189,86,184,87,241,182,73,111,121,68,212,132,168,5,175,80,
    242,121,136,230,89,138,5,136,22,184,210,134,168,205,149,69,
    136,22,185,178,100,166,239,64,111,217,212,111,84,234,43,92,
    95,2,185,12,241,42,196,55,33,94,131,190,128,168,67,195,
    81,179,231,189,117,144,14,196,183,160,119,11,36,254,175,195,
    185,64,53,151,43,35,110,243,136,27,229,136,59,60,226,46,
    244,238,130,196,255,59,122,196,28,236,119,111,34,12,241,127,
    241,211,69,24,64,45,96,113,34,179,60,78,19,63,78,250,
    105,108,209,251,6,21,4,90,72,133,141,223,58,126,191,38,
    244,50,96,232,80,118,68,239,12,103,16,128,99,34,139,86,
    136,108,184,125,38,232,33,182,97,138,21,7,250,252,34,118,
    138,30,103,136,199,50,76,113,246,26,76,185,101,255,105,242,
    14,56,170,206,6,95,102,131,235,215,56,152,94,163,185,1,
    197,174,225,178,123,44,183,34,185,183,89,58,213,193,194,31,
    7,89,48,242,247,143,15,246,39,185,146,163,46,9,175,154,
    164,193,104,156,102,106,24,31,168,57,234,231,39,193,72,250,
    190,106,225,67,134,131,84,172,80,107,229,224,227,81,26,39,
    138,84,28,230,42,139,199,170,93,142,246,71,105,116,60,148,
    106,30,91,190,227,150,199,89,150,102,93,178,137,71,133,162,
    98,252,98,160,72,194,17,45,209,37,209,184,200,247,177,216,
    57,76,71,18,139,100,48,57,222,25,200,209,238,131,254,100,
    231,224,56,30,70,59,207,62,253,131,255,253,227,253,239,252,
    31,79,83,255,47,242,68,14,119,198,19,133,93,119,70,187,
    59,40,145,204,146,0,155,46,235,183,141,93,110,208,228,167,
    241,192,47,132,60,148,195,177,204,72,231,124,145,22,22,11,
    98,69,252,70,216,98,89,44,138,184,110,128,36,203,180,13,
    144,255,46,128,180,10,55,68,44,69,1,172,5,103,92,33,
    180,186,4,36,225,103,19,108,168,37,130,50,16,112,110,193,
    223,108,234,112,134,165,131,94,227,150,32,174,106,175,209,83,
    53,224,12,145,174,17,142,63,109,240,84,115,60,149,5,83,
    44,17,98,7,206,208,53,177,43,54,97,121,212,132,116,17,
    4,62,196,77,162,178,72,144,184,207,166,117,164,128,83,82,
    64,83,151,180,137,226,140,76,238,17,107,187,45,211,154,230,
    219,227,64,29,122,109,131,15,154,137,113,222,75,19,13,101,
    63,78,34,3,173,38,71,63,30,34,57,60,178,33,207,198,
    221,134,105,80,118,35,124,195,97,154,75,38,24,207,237,81,
    76,83,212,187,63,230,105,104,85,146,135,7,71,50,15,137,
    76,72,50,61,35,73,64,179,93,63,65,60,114,235,85,90,
    224,14,211,161,131,132,168,35,29,186,72,7,93,219,176,218,
    98,73,236,197,100,201,176,86,56,184,99,184,241,31,208,120,
    8,56,178,216,43,167,28,15,176,55,162,198,94,57,101,159,
    167,183,31,130,80,86,209,142,110,143,224,82,235,13,28,195,
    140,65,234,96,223,135,228,196,140,37,81,160,6,200,73,141,
    55,242,72,19,132,81,175,209,8,154,202,162,37,28,24,175,
    227,228,115,68,133,41,20,156,57,183,145,19,40,17,186,49,
    70,8,108,94,195,117,255,206,100,43,162,4,83,64,29,198,
    121,122,170,189,155,234,28,232,246,209,101,158,76,126,56,56,
    146,161,202,55,177,225,121,122,236,134,65,146,164,202,13,162,
    200,13,20,122,255,193,177,146,185,171,82,119,43,239,18,140,
    222,29,195,162,114,190,201,88,122,92,209,212,137,226,80,97,
    92,89,225,7,118,203,92,42,36,193,97,26,229,216,78,67,
    7,82,121,20,172,56,200,164,44,0,115,196,167,174,180,44,
    246,35,207,253,210,72,160,163,76,221,208,38,151,195,62,7,
    174,112,24,228,185,79,18,112,59,147,141,180,62,9,134,199,
    146,103,207,113,62,20,136,170,90,134,25,196,163,91,164,138,
    209,156,213,73,210,36,154,160,116,113,248,9,45,124,139,105,
    216,198,120,212,22,107,248,109,138,155,162,129,100,108,136,117,
    43,116,10,234,149,123,204,26,169,13,140,185,40,96,71,42,
    158,99,20,233,90,28,4,88,35,162,174,247,59,170,209,96,
    239,30,21,91,84,188,79,197,125,163,244,245,106,222,190,170,
    249,215,180,154,197,234,134,118,161,88,233,87,254,37,191,90,
    172,248,213,57,249,199,148,247,210,216,174,248,134,77,202,167,
    243,198,155,216,247,16,112,244,61,234,204,94,132,91,108,213,
    7,104,209,61,239,54,137,241,46,22,247,183,242,251,174,102,
    156,123,24,228,110,146,94,208,220,165,151,58,156,17,201,189,
    13,178,123,133,198,131,10,141,61,151,122,16,135,189,247,168,
    112,222,102,248,223,206,218,240,3,109,248,111,105,181,133,130,
    103,139,204,175,121,17,18,73,8,141,134,129,128,228,153,172,
    19,4,85,219,175,227,134,247,52,217,192,61,140,237,79,219,
    88,91,111,99,188,23,234,180,207,196,179,184,102,42,117,66,
    161,111,195,90,177,59,229,180,125,140,179,244,229,196,77,251,
    174,2,35,210,195,173,124,123,43,255,28,67,138,251,232,194,
    222,69,248,200,228,152,220,95,135,3,178,138,138,19,124,166,
    169,30,191,12,37,111,32,252,228,251,218,251,117,10,227,23,
    27,19,66,195,88,88,6,11,142,127,152,199,80,216,155,1,
    16,173,18,8,82,228,9,45,213,98,20,108,177,142,254,94,
    193,128,190,54,97,64,20,251,39,112,202,42,224,31,64,22,
    70,59,22,206,205,94,99,60,103,133,186,83,238,50,21,111,
    220,141,172,194,35,172,34,88,160,203,140,219,188,201,20,187,
    19,38,35,255,170,68,146,114,247,176,139,132,166,234,57,78,
    233,57,12,207,207,218,33,156,203,206,67,166,71,47,163,110,
    236,38,58,79,188,119,57,42,113,246,98,115,84,87,215,139,
    205,156,94,196,39,121,158,95,32,67,113,248,29,177,106,105,
    118,48,113,254,72,197,167,165,235,10,211,118,109,162,109,94,
    13,156,149,45,195,215,81,231,25,173,239,176,196,75,13,246,
    128,114,6,78,103,233,67,123,223,87,68,146,223,99,69,226,
    113,75,128,228,224,249,138,179,91,42,45,130,250,220,18,120,
    84,196,140,225,21,31,21,245,137,208,211,25,3,19,212,124,
    57,72,80,112,185,20,154,43,150,42,193,214,56,82,241,114,
    6,110,70,80,62,28,6,163,131,40,120,52,160,133,104,181,
    208,184,149,101,36,239,84,37,39,135,16,111,17,158,31,63,
    55,26,156,204,32,39,125,136,243,150,146,51,255,163,52,228,
    88,240,227,161,116,71,114,116,128,231,208,195,120,236,246,135,
    193,128,49,177,11,205,126,48,154,41,6,181,226,178,28,49,
    114,74,2,246,82,55,76,19,12,123,199,161,74,51,55,146,
    152,226,203,200,125,224,114,204,116,227,220,13,14,240,109,16,
    42,77,238,203,222,201,201,84,144,13,114,206,155,94,156,82,
    117,70,160,250,120,238,142,49,127,164,164,166,72,28,244,22,
    193,161,133,178,39,206,12,181,175,224,222,130,7,61,53,209,
    81,234,75,42,118,169,216,129,234,166,123,189,56,126,134,243,
    246,105,1,50,85,93,220,181,154,150,90,170,58,231,19,26,
    147,191,238,162,223,255,28,23,149,14,244,106,198,81,235,80,
    220,5,53,64,242,49,160,135,89,127,157,91,230,201,123,27,
    191,208,123,217,1,102,68,253,241,175,233,180,222,159,255,15,
    130,123,143,160,216,188,223,230,176,162,170,85,91,59,108,44,
    76,226,202,38,223,211,74,240,129,120,237,117,214,248,97,38,
    3,37,53,58,247,102,162,36,187,188,94,54,191,240,193,50,
    107,169,25,125,190,41,245,57,231,148,101,178,202,160,153,203,
    46,186,97,227,203,67,197,25,34,165,144,29,125,157,197,6,
    240,173,34,139,132,210,16,245,210,16,100,211,68,158,250,87,
    140,161,179,68,234,22,140,199,50,137,188,143,104,196,199,80,
    205,246,184,207,12,152,64,177,230,4,202,20,98,1,211,187,
    85,76,35,94,247,62,10,91,21,37,25,200,78,233,112,179,
    129,148,121,123,102,120,219,165,20,252,34,156,122,95,81,193,
    1,180,140,157,222,99,48,241,180,100,102,36,135,82,201,171,
    152,232,59,71,29,141,35,137,59,74,58,193,132,188,193,141,
    56,194,247,103,21,134,233,160,153,66,113,192,192,48,44,234,
    86,211,110,214,155,130,119,181,43,247,184,149,182,122,217,198,
    25,43,231,161,147,220,163,22,69,70,41,54,26,150,193,175,
    94,13,243,165,146,54,15,223,117,153,173,136,204,201,217,217,
    94,48,210,247,22,252,190,56,201,228,154,180,124,175,70,251,
    180,247,1,21,15,74,235,255,137,70,223,197,98,180,187,109,
    212,221,46,212,141,71,250,174,134,175,216,70,187,106,249,74,
    183,40,11,176,126,243,74,107,46,179,56,24,198,63,233,155,
    61,211,204,91,212,213,121,57,167,52,79,188,177,93,142,73,
    108,139,76,14,98,124,200,244,38,103,122,23,30,74,40,168,
    141,55,196,177,234,200,25,81,66,231,136,250,84,248,136,15,
    129,95,96,209,161,235,150,185,38,30,135,241,119,9,127,45,
    244,93,203,22,45,60,36,215,240,183,131,191,203,214,66,167,
    233,52,155,216,111,126,65,208,223,38,18,169,101,109,98,255,
    255,1,85,148,153,214,
};

EmbeddedPython embedded_m5_internal_param_SubSystem(
    "m5/internal/param_SubSystem.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_SubSystem.py",
    "m5.internal.param_SubSystem",
    data_m5_internal_param_SubSystem,
    2278,
    6593);

} // anonymous namespace
