#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimObject[] = {
    120,156,197,89,109,115,27,73,17,238,89,189,89,182,101,203,
    47,177,227,196,33,162,72,136,224,136,13,117,21,56,184,144,
    226,56,114,16,42,248,82,235,20,73,12,85,91,178,118,36,
    175,35,237,138,221,113,18,29,54,85,224,20,199,7,168,226,
    27,127,130,111,252,64,232,167,103,119,179,114,156,226,170,76,
    132,108,181,102,103,123,102,186,167,159,238,153,158,233,82,250,
    89,224,239,79,90,68,201,72,17,249,252,175,232,57,209,64,
    209,158,67,74,59,228,175,208,97,133,162,13,82,126,133,94,
    19,237,149,72,151,232,148,11,101,250,77,137,194,15,45,215,
    106,206,85,59,143,171,193,47,184,239,25,122,94,150,42,135,
    198,179,164,43,180,87,165,39,225,10,149,117,141,14,103,41,
    170,145,226,79,200,35,63,29,55,41,109,49,67,123,117,230,
    186,206,92,179,194,181,34,92,233,219,58,222,74,11,191,78,
    254,44,189,102,201,231,200,159,19,41,230,201,159,151,66,131,
    252,134,20,22,200,95,144,194,98,214,125,147,246,150,178,242,
    178,148,23,73,47,81,176,66,193,42,5,151,178,242,26,5,
    235,212,99,77,155,104,206,154,61,219,187,76,186,76,193,6,
    237,109,144,230,255,203,116,170,88,205,37,210,87,168,167,200,
    95,206,25,175,10,227,38,237,109,146,230,255,171,150,113,134,
    118,219,151,120,246,131,127,243,167,205,179,79,102,158,201,11,
    29,39,65,20,122,65,216,139,2,7,239,107,32,176,85,23,
    164,196,223,42,127,63,133,209,98,18,139,177,248,108,180,19,
    238,65,17,183,241,29,140,224,151,104,227,68,225,33,40,209,
    49,23,202,144,159,95,4,229,148,227,132,205,176,68,199,220,
    123,133,142,165,102,247,73,120,141,202,166,42,243,188,36,243,
    108,95,115,99,188,230,89,38,22,187,194,195,238,136,220,6,
    114,111,137,116,166,201,196,27,117,226,206,208,219,13,134,159,
    239,31,234,174,105,67,120,83,135,6,195,81,20,155,65,176,
    111,102,192,231,133,157,161,246,60,51,203,15,49,55,50,129,
    97,173,77,153,31,15,163,32,52,80,113,144,152,56,24,153,
    70,222,218,27,70,254,209,64,155,57,174,121,32,53,247,227,
    56,138,219,152,19,23,196,128,140,158,247,13,36,28,98,136,
    54,68,19,146,236,50,217,62,136,134,154,73,216,31,31,109,
    247,245,240,206,237,222,120,123,255,40,24,248,219,79,63,250,
    190,247,171,251,187,15,188,199,47,35,239,161,126,161,7,219,
    163,177,97,214,237,225,157,109,150,72,199,97,135,171,38,245,
    219,98,150,101,116,254,50,232,123,169,144,7,122,48,210,49,
    116,78,224,93,164,230,213,138,250,154,42,169,37,181,160,130,
    106,102,72,204,76,35,51,228,63,83,67,58,169,247,177,45,
    85,106,88,135,78,164,0,107,181,97,72,216,175,4,179,177,
    150,108,148,190,162,83,135,126,91,2,195,9,211,50,59,75,
    43,55,226,170,117,22,219,85,141,78,216,210,21,216,241,139,
    77,233,106,70,186,114,232,152,41,155,184,76,39,236,145,204,
    202,85,76,15,235,20,45,144,226,135,160,14,40,171,144,129,
    251,244,184,202,16,40,231,16,176,208,133,54,126,16,99,202,
    93,160,182,61,155,213,70,201,214,168,99,14,220,70,102,31,
    158,38,177,243,78,20,90,83,246,130,208,207,76,107,193,209,
    11,6,12,14,23,115,40,189,9,219,32,234,228,108,176,111,
    119,16,37,90,0,38,125,187,139,96,4,119,111,36,221,96,
    84,200,35,141,125,157,116,1,38,6,153,237,17,18,160,183,
    247,15,16,23,110,189,138,1,174,8,28,154,12,136,42,195,
    161,205,112,176,165,77,167,161,22,213,78,128,153,236,86,82,
    7,47,103,216,248,23,89,123,40,58,116,196,43,143,37,30,
    48,55,91,77,188,242,88,124,30,111,191,67,202,56,105,61,
    187,61,27,23,181,203,220,70,16,195,208,97,222,187,112,98,
    177,37,32,80,33,198,164,181,55,227,200,2,68,172,94,65,
    11,116,229,96,136,50,141,214,185,243,25,64,225,152,82,204,
    156,150,24,19,44,17,187,49,71,8,174,94,227,113,255,36,
    96,75,163,132,64,192,28,4,73,244,210,122,55,202,18,232,
    118,217,101,30,141,237,44,37,215,185,226,89,116,212,234,118,
    194,48,50,173,142,239,183,58,134,189,127,255,200,232,164,101,
    162,214,205,164,13,51,186,87,50,20,229,253,141,71,218,149,
    130,133,142,31,116,13,199,149,21,121,16,183,76,180,97,16,
    28,68,126,194,245,104,218,215,198,69,176,146,32,19,137,0,
    130,17,15,172,24,150,249,224,185,159,100,18,216,40,83,205,
    96,147,232,65,79,2,87,119,208,73,18,15,18,72,189,128,
    13,90,191,232,12,142,180,244,158,112,127,44,16,138,86,134,
    41,196,163,203,80,37,211,92,212,9,163,208,31,179,116,65,
    247,67,12,124,89,96,216,224,120,212,80,107,252,173,171,75,
    170,198,96,172,169,117,167,91,78,161,151,175,49,107,80,155,
    196,230,42,53,59,67,241,148,163,72,219,145,32,32,26,1,
    186,238,183,81,66,99,247,6,200,77,144,111,130,220,202,148,
    126,191,154,55,206,106,254,41,70,115,68,221,110,41,85,44,
    247,43,111,194,175,22,10,126,117,10,255,56,150,181,52,40,
    21,124,163,4,229,163,185,204,155,196,247,216,224,236,123,96,
    22,47,226,37,182,232,3,24,116,199,221,128,24,95,103,114,
    235,102,114,171,101,17,215,58,232,36,173,48,122,3,243,22,
    94,218,112,6,144,187,155,152,247,2,140,251,5,24,187,45,
    112,0,195,238,55,64,202,239,154,248,111,77,123,226,251,118,
    226,127,142,209,230,83,156,45,8,190,230,84,23,32,129,53,
    106,153,9,32,207,120,29,38,40,206,253,58,47,120,79,194,
    77,94,195,100,254,177,140,53,236,50,38,107,161,221,237,101,
    241,44,168,100,133,42,172,208,43,209,90,186,58,37,88,62,
    70,113,244,106,220,138,122,45,67,153,72,119,111,38,91,55,
    147,143,57,164,180,238,189,153,239,52,124,196,122,4,247,183,
    225,0,179,98,130,144,159,209,213,253,87,93,45,11,136,60,
    121,158,245,126,187,133,241,210,133,137,77,35,182,112,50,91,
    72,252,227,125,12,194,222,20,12,49,155,27,2,138,60,194,
    80,179,98,133,146,90,103,127,47,216,0,223,18,108,0,136,
    125,73,178,101,85,244,103,194,12,243,60,166,206,45,94,147,
    121,206,10,216,177,119,57,86,231,174,70,78,234,17,78,26,
    44,216,101,70,13,89,100,210,213,137,55,35,127,41,68,146,
    124,245,40,165,27,154,162,231,148,115,207,17,243,124,165,21,
    162,60,233,60,152,122,246,50,176,137,155,216,125,226,141,201,
    168,36,187,151,146,68,117,243,126,109,51,99,7,241,32,207,
    179,55,150,65,28,190,166,86,29,139,14,1,206,15,64,62,
    202,93,87,101,117,239,77,180,235,103,3,103,97,201,240,108,
    212,121,138,241,203,34,241,98,77,60,32,239,65,182,179,248,
    96,237,251,41,64,242,87,46,104,206,178,20,105,9,158,175,
    101,119,11,234,192,212,167,142,226,12,145,119,12,175,37,67,
    180,137,96,154,95,214,200,175,74,129,183,166,54,151,172,35,
    55,67,129,55,25,117,41,204,73,166,103,19,188,185,44,193,
    155,207,18,188,70,150,224,217,76,175,73,238,110,27,123,67,
    129,126,246,149,240,131,176,53,17,244,11,54,200,97,100,17,
    2,242,106,10,14,12,144,220,29,116,134,251,126,231,94,15,
    3,97,180,110,230,176,78,38,121,179,40,57,92,77,189,67,
    120,121,252,56,211,224,197,20,118,187,119,185,223,92,114,241,
    44,63,234,74,148,121,124,160,91,67,61,220,231,12,247,32,
    24,181,122,131,78,95,108,82,74,53,251,60,211,204,8,92,
    10,193,64,98,81,130,237,197,78,212,234,70,33,7,212,163,
    174,137,226,150,175,57,121,208,126,235,118,75,162,113,43,72,
    90,157,125,126,219,225,212,83,220,102,210,239,101,155,214,137,
    251,137,236,200,158,191,68,113,74,70,245,56,163,15,120,103,
    122,64,111,182,36,25,24,115,179,54,172,242,129,202,182,23,
    162,196,142,181,162,164,45,11,69,199,147,46,173,158,55,104,
    42,11,61,230,15,131,14,10,90,228,171,73,17,156,185,22,
    118,29,120,91,145,149,9,69,144,219,237,114,228,209,133,149,
    19,165,238,104,10,74,33,152,229,2,68,23,179,207,164,90,
    152,42,171,214,52,141,84,79,141,36,35,199,23,211,103,125,
    66,31,246,222,7,33,103,55,129,63,109,157,32,233,196,232,
    71,23,211,107,237,172,94,79,226,192,232,253,78,247,249,84,
    213,154,183,106,229,131,191,186,152,86,203,19,90,197,186,15,
    8,36,83,213,8,177,46,27,248,247,23,211,102,245,140,54,
    188,55,153,190,62,114,64,153,15,253,135,139,105,116,249,172,
    125,30,197,209,190,126,132,3,207,233,106,181,96,173,84,24,
    254,143,23,211,236,234,185,154,61,12,18,163,67,94,239,167,
    170,220,82,65,185,92,130,215,23,211,111,105,66,191,196,116,
    98,115,52,154,170,86,54,145,148,113,191,124,163,75,27,130,
    73,206,233,226,108,71,12,107,119,242,156,249,142,116,108,198,
    54,135,250,4,228,14,200,54,8,14,70,220,207,64,126,1,
    242,75,144,135,32,59,32,200,27,93,23,228,49,200,175,39,
    20,124,191,187,199,31,145,100,14,246,172,180,170,174,58,117,
    167,234,212,75,103,255,204,98,209,30,143,208,79,242,118,26,
    114,74,95,33,13,209,101,218,171,100,201,72,149,116,13,167,
    226,72,58,42,105,210,193,109,81,57,39,116,30,187,25,78,
    55,210,202,5,161,139,82,217,204,42,151,132,46,75,229,10,
    178,15,57,243,191,64,246,33,27,248,41,109,221,255,70,255,
    195,164,195,253,241,255,65,112,247,30,165,199,26,239,74,56,
    156,20,36,162,213,103,185,239,159,202,225,199,120,85,148,204,
    174,205,112,87,39,183,143,70,206,154,112,24,213,180,23,99,
    18,44,60,39,61,143,162,60,104,84,243,160,1,25,66,253,
    210,59,3,84,123,222,4,182,206,104,164,67,223,253,46,90,
    124,47,159,185,27,217,108,78,97,230,16,23,254,78,249,97,
    196,188,42,169,85,181,164,222,70,43,66,76,65,73,129,101,
    51,7,232,116,98,160,216,249,31,153,157,219,171,19,161,207,
    125,2,178,49,25,231,62,201,109,129,13,159,175,7,218,232,
    179,230,176,23,151,54,104,250,154,147,199,104,236,121,18,110,
    61,126,30,112,121,98,217,182,141,236,253,101,95,155,119,191,
    228,61,131,156,51,153,141,115,56,70,227,104,255,80,218,191,
    251,45,119,32,215,9,242,100,90,231,240,241,212,133,230,119,
    156,102,248,250,149,116,246,95,153,208,39,54,157,197,202,105,
    197,118,28,33,225,100,72,2,9,199,118,197,145,189,90,151,
    235,135,75,74,146,244,51,23,222,133,186,106,94,119,141,178,
    3,187,113,130,53,202,206,111,186,230,137,28,94,241,14,93,
    110,223,44,4,228,82,48,91,21,129,22,201,148,118,216,86,
    114,193,35,239,211,35,223,196,250,164,92,64,226,216,193,253,
    0,228,118,14,174,31,82,186,39,24,222,217,202,84,222,242,
    227,14,151,29,169,53,151,206,188,76,116,28,112,234,242,133,
    189,226,204,170,197,190,182,29,198,250,25,74,157,125,70,169,
    92,31,231,77,228,190,44,125,194,107,89,38,207,228,48,152,
    0,222,245,96,191,19,187,184,108,144,249,54,155,231,32,162,
    200,58,37,227,219,131,45,123,72,126,79,182,50,136,210,77,
    220,62,205,212,85,13,191,139,252,235,112,0,114,74,106,86,
    45,168,10,255,54,249,119,201,153,111,214,203,245,58,243,205,
    205,115,128,250,224,70,93,205,58,107,204,253,31,181,128,191,
    98,
};

EmbeddedPython embedded_m5_internal_param_SimObject(
    "m5/internal/param_SimObject.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_SimObject.py",
    "m5.internal.param_SimObject",
    data_m5_internal_param_SimObject,
    2641,
    8901);

} // anonymous namespace
