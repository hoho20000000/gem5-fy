#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_I2CDevice[] = {
    120,156,197,88,109,111,219,200,17,158,37,41,201,146,45,91,
    142,223,226,36,87,243,208,184,81,95,98,183,57,184,189,246,
    210,224,114,185,180,8,208,250,2,250,128,36,106,1,130,38,
    87,242,58,18,41,144,107,59,186,202,95,234,160,237,143,233,
    183,254,192,118,102,150,100,104,231,82,28,112,181,42,91,171,
    229,114,95,102,246,121,230,101,55,132,252,179,132,223,207,93,
    128,108,34,0,34,252,23,240,26,96,40,160,103,129,144,22,
    68,43,112,92,131,100,19,68,84,131,183,0,61,27,164,13,
    23,88,113,224,79,54,196,159,152,94,171,101,175,198,183,245,
    106,227,11,156,123,14,94,59,220,100,193,164,5,178,6,189,
    58,188,136,87,192,145,13,56,110,65,210,0,129,159,24,87,
    126,57,233,64,62,98,14,122,77,236,181,133,189,90,220,107,
    133,123,229,111,155,244,150,71,68,77,136,90,240,22,37,159,
    135,104,158,165,88,128,104,129,43,109,136,218,92,89,132,104,
    145,43,75,197,244,29,232,45,23,245,27,149,250,10,215,151,
    64,46,131,90,5,181,6,106,29,250,2,162,14,13,71,205,
    94,245,54,64,58,160,110,66,239,38,72,252,223,128,11,129,
    106,46,87,70,108,242,136,27,229,136,91,60,226,54,244,110,
    131,196,255,91,102,196,28,28,116,215,16,6,245,111,252,116,
    17,6,208,11,88,156,202,52,83,73,236,171,184,159,40,139,
    222,55,168,32,208,66,42,108,252,214,241,251,132,208,75,129,
    161,67,217,17,189,115,156,65,0,142,137,44,90,33,178,97,
    243,92,208,131,178,97,138,21,7,250,252,66,57,121,143,115,
    196,99,25,166,56,123,13,166,220,114,240,34,254,8,28,93,
    231,13,95,230,13,55,175,113,48,189,198,237,6,20,187,134,
    203,238,179,220,154,228,222,97,233,116,7,11,127,28,164,193,
    200,127,246,224,201,151,242,84,133,178,75,194,235,38,105,48,
    26,39,169,30,170,67,61,71,253,252,56,24,73,223,215,45,
    124,72,113,144,86,26,181,214,14,62,30,39,42,214,164,226,
    48,211,169,26,235,118,57,218,31,37,209,201,80,234,121,108,
    121,198,45,79,211,52,73,187,180,39,30,21,154,138,241,235,
    129,38,9,71,180,68,151,68,227,34,59,192,98,247,40,25,
    73,44,226,193,228,100,119,32,71,123,247,251,147,221,195,19,
    53,140,118,95,126,250,75,255,143,79,15,158,249,95,159,37,
    254,31,228,169,28,238,142,39,26,187,238,142,246,118,81,34,
    153,198,1,54,93,214,111,7,187,220,160,201,207,212,192,207,
    133,60,146,195,177,76,73,231,108,145,22,22,11,98,69,252,
    64,216,98,89,44,10,85,47,128,164,157,105,23,64,254,51,
    7,210,202,205,16,177,20,57,176,22,156,115,133,208,234,18,
    144,132,159,77,176,161,150,8,202,64,192,133,5,127,182,169,
    195,57,150,14,90,141,91,130,184,106,172,198,76,213,128,115,
    68,186,70,56,126,115,135,167,154,227,169,44,152,98,137,16,
    59,112,142,166,137,93,177,9,203,227,38,36,139,32,240,65,
    53,137,202,34,70,226,190,156,214,145,2,78,73,1,67,93,
    210,38,82,41,109,185,71,172,237,182,138,214,36,219,25,7,
    250,200,107,23,248,224,54,49,206,251,73,108,160,236,171,56,
    42,160,53,228,232,171,33,146,195,163,61,228,217,184,219,48,
    9,202,110,132,111,56,76,50,67,48,158,219,35,159,166,169,
    119,127,204,211,208,170,36,15,15,142,100,22,18,153,144,100,
    102,70,146,128,102,187,126,130,120,100,214,171,180,192,45,166,
    67,7,9,81,71,58,116,145,14,166,118,199,106,139,37,177,
    175,104,39,195,90,110,224,78,193,141,127,129,193,67,192,177,
    197,86,57,101,127,128,189,17,53,182,202,41,219,60,189,253,
    25,8,109,229,237,104,246,8,46,181,222,192,49,204,24,164,
    14,246,125,72,70,204,88,18,5,106,128,156,52,120,35,143,
    12,65,24,245,26,141,160,169,44,90,194,129,241,6,78,62,
    71,84,152,66,206,153,11,27,57,129,18,161,25,163,135,192,
    230,117,92,247,175,76,182,220,75,48,5,244,145,202,146,51,
    99,221,84,103,71,119,128,38,243,124,242,213,225,177,12,117,
    182,133,13,175,146,19,55,12,226,56,209,110,16,69,110,160,
    209,250,15,79,180,204,92,157,184,219,89,151,96,244,110,21,
    44,42,231,155,140,165,199,21,67,157,72,133,26,253,202,10,
    63,176,89,102,82,35,9,142,146,40,195,118,26,58,144,218,
    35,103,197,78,38,97,1,152,35,62,117,165,101,177,31,89,
    238,227,66,2,227,101,234,5,109,50,57,236,179,227,10,135,
    65,150,249,36,1,183,51,217,72,235,211,96,120,34,121,246,
    12,231,67,129,168,106,100,152,129,63,186,73,170,20,154,179,
    58,113,18,71,19,148,78,133,159,208,194,55,153,134,109,244,
    71,109,177,142,223,166,88,19,13,36,99,67,108,88,161,147,
    83,175,140,49,235,164,54,48,230,34,135,29,169,120,129,94,
    164,107,177,19,96,141,136,186,222,79,168,70,131,189,187,84,
    108,83,241,35,42,238,21,74,95,175,230,237,171,154,63,161,
    213,44,86,55,180,115,197,74,187,242,47,217,213,98,197,174,
    46,200,62,166,28,75,149,93,177,13,155,148,79,230,11,107,
    98,219,67,192,209,246,168,51,91,17,134,216,170,13,208,162,
    251,222,38,137,241,49,22,247,182,179,123,174,97,156,123,20,
    100,110,156,188,163,185,75,47,141,59,35,146,123,119,104,223,
    43,52,30,84,104,236,185,212,131,56,236,253,144,10,231,67,
    27,255,227,89,111,252,192,108,252,239,105,181,133,156,103,139,
    204,175,121,17,18,73,8,141,70,1,1,201,51,217,32,8,
    170,123,191,129,1,239,69,124,7,99,24,239,63,133,177,182,
    9,99,28,11,77,218,87,248,51,85,43,42,117,66,161,111,
    195,122,30,157,50,10,31,227,52,121,51,113,147,190,171,161,
    16,233,225,118,182,179,157,125,134,46,197,125,244,110,191,115,
    247,145,202,49,153,191,113,7,180,43,90,197,248,76,83,61,
    125,19,74,14,32,252,228,251,198,250,77,10,227,231,129,9,
    161,97,44,172,2,11,246,127,152,199,144,219,155,1,16,173,
    18,8,82,228,57,45,213,98,20,108,177,129,246,94,193,128,
    190,54,97,64,20,251,59,112,202,42,224,111,64,59,140,251,
    152,27,55,91,77,97,57,43,212,157,114,151,169,248,214,104,
    100,229,22,97,229,206,2,77,102,220,230,32,147,71,39,76,
    70,254,81,241,36,101,244,176,243,132,166,106,57,78,105,57,
    12,207,119,138,16,206,101,227,161,173,71,43,163,110,108,38,
    38,79,188,123,217,43,113,246,98,179,87,215,215,139,205,156,
    89,196,39,121,94,189,67,134,252,240,71,98,213,50,236,96,
    226,252,138,138,79,75,211,21,69,219,181,137,182,117,213,113,
    86,66,134,111,188,206,75,90,223,97,137,151,26,108,1,229,
    12,156,206,210,135,98,223,23,68,146,7,88,145,120,220,18,
    32,217,121,190,229,236,150,74,139,160,190,176,4,30,21,49,
    99,120,203,71,69,115,34,244,76,198,192,4,45,190,236,36,
    200,185,92,114,205,149,157,42,193,54,56,82,241,102,6,102,
    70,80,62,28,6,163,195,40,120,52,160,133,104,181,176,48,
    43,171,144,188,83,149,156,12,66,124,64,120,126,252,172,208,
    224,116,6,57,233,67,156,183,148,156,249,31,37,33,251,130,
    175,143,164,59,146,163,67,60,135,30,169,177,219,31,6,3,
    198,196,206,53,251,170,208,76,51,168,21,147,101,143,145,81,
    18,176,159,184,97,18,163,219,59,9,117,146,186,145,196,20,
    95,70,238,125,151,125,166,171,50,55,56,196,183,65,168,13,
    185,47,91,39,39,83,65,58,200,56,111,122,125,70,213,25,
    129,234,227,185,91,97,254,72,73,77,158,56,152,16,193,174,
    133,178,39,206,12,141,173,96,108,193,131,158,158,24,47,245,
    152,138,61,42,118,161,26,116,175,23,199,223,224,188,125,90,
    128,182,170,46,110,91,77,75,47,85,141,243,57,141,201,222,
    55,209,87,223,197,68,165,3,189,26,117,144,117,186,135,160,
    114,142,220,122,175,89,88,111,139,27,231,249,210,165,150,95,
    186,160,37,215,191,167,37,179,49,204,200,12,198,255,75,3,
    246,126,251,127,16,220,123,4,121,32,255,144,241,90,57,244,
    172,213,239,140,241,26,12,48,220,79,86,89,201,226,162,136,
    110,167,248,226,77,115,118,69,233,87,199,92,5,113,154,230,
    91,121,6,70,248,209,220,251,140,182,57,85,147,12,177,60,
    243,175,208,207,100,88,212,45,24,143,101,28,121,63,167,17,
    191,128,106,166,196,125,102,176,115,143,141,246,69,248,93,192,
    212,104,21,67,240,251,108,37,147,175,40,201,180,236,148,4,
    189,59,59,156,255,82,224,220,93,188,228,138,188,47,168,216,
    188,228,119,12,12,119,222,247,0,190,122,16,250,152,53,165,
    148,162,255,247,14,152,3,176,51,44,26,204,150,209,57,48,
    146,67,169,229,85,116,205,205,159,241,137,145,68,191,158,76,
    48,45,110,112,35,142,240,253,89,57,67,58,238,37,144,167,
    249,232,12,69,93,172,89,205,122,83,112,108,185,114,155,90,
    105,171,151,109,156,55,114,54,56,201,60,106,209,180,189,185,
    187,103,25,252,234,5,45,95,237,152,45,231,27,167,34,32,
    16,48,156,35,237,7,35,115,123,192,239,243,243,68,102,232,
    207,183,91,20,45,189,159,82,113,191,196,241,215,52,250,54,
    22,163,189,157,66,221,29,163,238,129,26,153,27,19,190,232,
    26,237,233,229,43,221,162,52,192,250,218,149,214,76,166,42,
    24,170,111,204,253,90,209,204,129,226,234,188,36,85,249,196,
    225,133,145,47,247,153,247,34,149,3,149,225,36,60,67,217,
    59,183,245,39,31,98,96,117,228,140,40,97,50,53,115,54,
    123,196,71,177,207,177,232,208,165,199,92,19,15,165,248,187,
    132,191,22,122,1,203,22,45,60,170,214,240,183,131,191,203,
    214,66,167,233,52,155,216,111,126,65,208,223,22,18,169,101,
    109,181,155,226,63,196,238,114,204,
};

EmbeddedPython embedded_m5_internal_param_I2CDevice(
    "m5/internal/param_I2CDevice.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_I2CDevice.py",
    "m5.internal.param_I2CDevice",
    data_m5_internal_param_I2CDevice,
    2265,
    6471);

} // anonymous namespace
