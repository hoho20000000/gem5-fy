#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CommMonitor[] = {
    120,156,197,26,219,86,27,201,177,122,116,67,128,184,152,155,
    47,216,140,141,177,217,139,193,151,245,174,119,237,117,214,246,
    122,55,123,78,204,250,12,155,99,155,228,156,57,131,166,17,
    3,210,140,162,105,140,181,129,151,224,147,228,57,111,249,135,
    188,229,107,242,25,249,130,164,170,122,122,24,36,129,113,18,
    43,128,74,61,213,213,85,213,93,151,174,238,161,10,201,207,
    12,126,190,177,1,226,127,8,0,31,255,4,108,3,212,5,
    172,89,32,164,5,254,4,108,21,32,58,7,194,47,192,91,
    128,181,28,200,28,28,96,35,15,191,201,65,120,71,83,77,
    166,84,165,94,84,21,236,64,222,3,176,157,103,148,5,237,
    65,144,5,88,43,194,139,112,2,242,178,4,91,131,16,149,
    64,224,79,136,146,95,182,199,32,25,49,0,107,101,164,154,
    67,170,65,166,154,96,170,164,183,76,189,60,194,47,131,63,
    8,111,81,243,33,240,135,88,139,97,240,135,185,81,1,191,
    194,141,17,240,71,184,49,106,216,143,193,218,184,105,159,201,
    180,39,50,237,201,76,123,42,211,158,206,180,103,50,237,179,
    153,246,185,76,251,124,166,125,129,219,163,32,199,33,152,133,
    224,34,4,151,96,67,128,63,70,234,225,202,189,90,155,3,
    153,135,192,134,53,27,36,254,205,193,129,192,101,28,207,140,
    184,204,35,206,164,35,174,240,136,121,88,155,7,137,127,87,
    244,136,1,88,93,156,66,51,7,255,194,159,69,52,51,168,
    97,4,175,101,43,14,162,208,13,194,141,40,176,168,191,68,
    128,156,162,74,32,135,159,34,126,158,144,119,180,128,93,3,
    117,71,239,216,71,14,2,112,140,111,145,4,63,7,231,246,
    5,61,4,57,216,195,70,30,54,184,35,200,39,20,251,104,
    239,113,216,67,238,5,216,99,204,234,139,240,34,228,85,145,
    13,58,206,6,213,221,56,152,186,209,156,128,106,23,80,236,
    10,235,173,72,239,37,214,78,157,65,224,54,189,150,215,112,
    159,68,141,198,179,40,12,84,212,90,36,245,85,153,230,208,
    104,70,45,85,15,214,213,0,81,186,161,215,144,174,171,6,
    241,161,133,195,84,160,112,222,42,143,143,91,81,16,42,154,
    100,61,86,173,160,169,42,233,104,183,17,249,59,117,169,134,
    16,243,3,99,158,182,90,40,132,86,197,33,160,8,52,183,
    107,138,116,108,144,136,69,82,142,65,252,107,4,203,155,81,
    67,34,8,107,237,157,229,154,108,220,189,177,209,94,94,223,
    9,234,254,242,203,123,159,187,207,158,174,254,224,254,180,27,
    185,191,146,175,101,125,185,217,86,72,186,220,184,187,140,26,
    201,86,232,33,170,115,134,75,72,68,115,143,119,131,154,155,
    168,185,41,235,77,217,162,89,199,35,36,90,12,139,9,113,
    73,228,196,184,24,17,65,209,24,147,214,166,98,140,249,183,
    196,152,86,18,234,104,79,145,24,215,130,125,110,144,197,22,
    201,152,100,195,28,153,14,231,137,134,169,9,56,176,224,183,
    57,34,216,71,152,199,200,180,83,67,78,234,200,212,172,74,
    176,143,214,46,144,45,127,158,101,86,3,204,202,130,61,132,
    104,230,60,236,99,248,35,41,162,16,110,149,33,26,1,129,
    15,65,153,220,89,132,232,188,47,247,138,232,6,249,212,13,
    180,251,210,108,252,160,69,139,238,144,231,46,14,26,108,20,
    47,53,61,181,233,84,140,133,112,153,216,210,43,81,168,141,
    185,17,132,190,49,174,118,143,141,160,142,238,225,208,26,50,
    55,38,171,71,94,74,70,22,174,214,163,88,178,139,49,111,
    103,148,8,137,122,163,201,108,72,42,233,195,131,125,25,87,
    201,157,208,205,52,71,210,128,184,245,195,69,28,10,238,73,
    18,113,158,29,98,12,93,162,136,14,177,136,14,161,91,179,
    86,69,140,138,149,128,214,178,90,72,194,60,111,188,227,239,
    160,45,34,96,203,226,216,220,227,172,128,212,104,55,142,205,
    61,142,124,234,253,20,132,178,18,60,6,63,154,151,176,103,
    112,12,251,12,58,15,210,62,160,80,102,107,146,19,20,0,
    189,82,91,28,61,73,187,8,219,189,64,35,136,149,69,34,
    242,208,156,65,230,3,228,12,123,144,120,205,65,14,189,2,
    53,194,80,198,60,129,232,105,148,251,7,118,183,36,87,176,
    19,168,205,32,142,118,117,132,83,155,211,221,42,6,205,243,
    246,143,235,91,178,170,226,57,68,188,138,118,236,170,23,134,
    145,178,61,223,183,61,133,25,96,125,71,201,216,86,145,189,
    16,47,146,33,157,243,198,143,82,126,237,166,116,184,161,157,
    199,15,170,10,115,203,4,63,112,96,198,82,161,27,108,70,
    126,140,120,26,90,147,202,25,163,17,180,204,17,43,192,94,
    226,18,41,137,69,58,138,221,71,70,3,157,105,138,198,113,
    98,89,223,224,228,85,173,123,113,236,146,6,140,103,119,163,
    89,191,246,234,59,146,185,199,200,15,21,162,166,214,161,47,
    57,233,44,77,198,204,157,39,20,70,161,223,70,253,130,234,
    29,18,125,150,29,177,130,57,169,34,166,241,83,22,83,162,
    132,238,88,18,51,86,53,159,56,95,186,215,76,211,196,129,
    173,46,18,195,163,51,30,96,38,89,180,56,17,240,156,200,
    121,157,143,169,69,131,157,171,4,22,8,92,35,112,221,76,
    251,67,207,189,210,57,247,39,36,207,226,9,87,115,201,212,
    210,216,114,143,196,214,72,38,182,14,40,70,246,120,87,13,
    114,153,248,200,209,244,163,33,19,81,28,127,104,116,140,63,
    34,230,72,194,205,54,27,7,36,116,197,57,71,106,92,70,
    112,125,33,190,110,107,175,179,55,189,216,14,163,67,87,183,
    169,83,39,53,114,116,103,150,86,62,227,202,181,140,43,59,
    54,81,144,31,59,243,4,242,199,45,253,71,253,95,250,154,
    94,250,239,73,222,112,226,107,35,236,99,67,162,74,142,66,
    246,40,25,35,172,98,163,61,67,70,200,174,254,12,110,124,
    47,194,89,220,203,216,2,180,157,85,244,118,198,123,162,46,
    49,77,86,11,10,166,81,36,59,108,228,96,58,217,165,98,
    218,70,154,173,232,77,219,142,54,108,5,70,165,7,11,241,
    210,66,124,31,19,139,253,240,112,197,147,36,210,146,77,74,
    2,58,41,208,186,168,32,196,103,98,245,244,77,85,242,70,
    194,79,174,171,115,128,46,102,220,100,131,66,227,176,53,44,
    99,13,206,130,88,209,80,242,235,139,41,6,83,83,208,84,
    158,147,176,65,182,67,78,204,96,212,103,172,64,159,28,89,
    129,220,236,79,192,5,172,128,63,2,173,49,174,100,18,226,
    28,57,38,122,38,136,156,170,152,61,209,115,87,178,146,168,
    176,146,148,129,97,211,172,240,102,147,236,82,88,150,252,57,
    147,79,210,93,36,151,148,54,217,232,201,167,209,195,6,58,
    213,78,145,63,26,64,180,248,24,105,68,198,161,162,107,198,
    171,71,115,19,215,49,57,206,238,234,67,91,103,64,139,113,
    73,163,87,135,182,161,124,124,81,76,90,218,67,216,121,190,
    32,112,47,13,96,97,112,31,80,185,185,206,4,154,217,60,
    92,157,125,94,146,6,121,214,121,180,196,81,146,225,193,229,
    45,253,208,78,248,152,92,229,54,54,36,30,241,4,72,78,
    163,111,185,218,37,104,145,193,15,44,129,199,83,172,31,222,
    242,241,84,159,66,29,93,63,176,155,154,15,39,11,74,50,
    71,146,116,102,181,82,147,107,107,18,120,211,151,112,35,131,
    62,168,123,141,117,223,123,24,145,40,146,87,53,225,101,25,
    221,199,178,186,83,96,136,99,212,231,199,251,102,14,175,251,
    82,165,62,64,206,169,238,28,9,126,84,229,172,240,211,166,
    180,27,178,177,142,231,211,205,160,105,111,212,189,26,219,37,
    151,204,237,71,51,55,197,134,205,4,47,231,142,152,138,130,
    149,200,174,70,33,166,192,157,42,202,179,125,137,101,191,244,
    237,27,54,231,79,59,136,109,111,29,123,189,170,210,78,126,
    52,78,185,188,242,90,181,152,43,169,237,93,106,246,205,176,
    46,158,200,3,172,41,127,7,105,33,161,55,12,78,51,84,
    79,113,181,168,99,6,119,26,60,254,169,182,206,88,143,8,
    220,37,176,12,217,77,248,67,219,242,43,228,28,146,8,90,
    174,162,184,96,149,45,53,126,52,76,159,211,184,184,59,88,
    255,41,78,17,172,50,15,107,5,19,178,69,162,148,37,58,
    78,18,44,83,190,95,27,52,200,33,134,195,140,172,24,228,
    8,195,81,70,142,25,228,56,195,51,140,156,48,200,73,134,
    83,140,156,54,200,25,134,103,25,121,206,32,207,51,188,192,
    200,89,131,188,200,240,18,35,231,12,210,102,120,153,145,87,
    12,114,158,225,85,70,46,24,228,53,134,215,25,185,104,144,
    31,49,252,152,145,159,24,228,167,12,111,48,114,201,32,151,
    25,222,100,228,45,131,188,205,240,14,35,63,51,200,187,12,
    63,103,228,23,6,121,143,225,151,140,252,202,32,239,51,124,
    192,200,175,13,242,33,195,95,48,242,27,131,124,196,240,49,
    35,159,64,114,91,248,45,35,159,194,218,119,224,23,25,243,
    61,229,218,210,127,153,107,57,89,245,45,77,189,249,95,166,
    88,231,235,255,139,234,206,67,72,138,174,227,210,171,200,206,
    171,162,211,107,32,204,161,131,151,125,69,79,131,175,52,206,
    246,138,111,183,218,146,158,146,218,70,87,251,52,81,78,210,
    90,240,239,15,115,102,90,113,22,204,156,190,75,231,116,192,
    229,102,123,146,77,103,174,45,233,174,148,175,153,21,215,247,
    116,0,24,211,23,147,188,8,174,149,156,1,32,93,140,98,
    186,24,116,189,26,202,93,183,107,65,116,149,79,132,94,179,
    41,67,223,185,73,99,110,65,182,90,103,154,190,120,4,237,
    15,127,129,180,0,28,198,242,124,18,139,192,238,72,164,173,
    38,51,81,54,231,88,26,124,253,50,44,123,240,95,141,7,
    47,254,18,178,155,160,243,152,0,111,123,233,142,231,60,77,
    45,114,181,167,123,174,123,161,191,27,248,106,211,93,15,194,
    152,206,141,167,35,196,210,148,55,221,163,104,117,189,247,216,
    157,86,172,220,186,12,107,89,57,167,165,37,81,180,119,118,
    245,240,49,161,155,131,31,196,222,58,158,1,241,100,210,162,
    7,165,197,157,154,152,228,209,165,114,119,151,186,113,34,143,
    195,181,216,76,165,190,223,8,18,61,147,17,221,209,175,110,
    158,204,45,187,64,135,42,188,247,32,210,226,124,86,139,46,
    146,99,108,103,6,4,74,101,22,254,180,180,198,206,93,61,
    234,147,19,57,212,49,205,133,213,118,102,198,239,67,79,82,
    167,50,82,143,244,170,229,19,57,69,59,72,130,38,10,194,
    90,70,250,251,142,33,13,206,101,52,232,162,120,7,71,44,
    218,195,24,235,118,122,117,117,90,45,186,199,116,106,209,69,
    161,46,245,228,72,86,74,67,250,29,36,36,131,10,122,131,
    80,151,143,165,111,120,111,136,132,185,190,155,138,24,15,37,
    140,19,156,186,210,115,148,49,111,170,242,41,200,136,59,221,
    88,101,145,234,90,207,113,89,219,165,34,78,73,74,98,104,
    75,233,236,56,38,33,227,246,238,235,220,212,240,226,237,19,
    50,119,7,161,201,220,71,209,106,190,231,216,216,107,52,209,
    25,240,68,21,68,62,203,56,13,29,137,160,122,233,8,86,
    205,246,30,217,142,149,108,48,235,19,9,136,39,95,232,243,
    227,49,107,154,117,218,119,44,127,23,169,89,254,206,14,181,
    208,115,252,110,43,80,178,99,253,79,71,73,130,232,101,89,
    7,94,221,234,57,154,223,105,198,117,239,181,116,241,252,30,
    74,173,88,53,218,9,21,203,124,255,81,36,255,2,142,58,
    129,70,221,62,158,43,234,138,21,74,111,101,254,131,97,113,
    98,248,147,136,184,76,227,250,218,151,117,137,139,214,37,131,
    45,151,220,209,251,50,86,173,168,237,186,124,239,232,226,115,
    221,117,251,119,244,167,215,29,187,36,226,51,224,163,191,40,
    226,225,127,74,156,234,215,42,23,203,130,111,93,58,254,255,
    32,131,43,166,56,190,152,201,233,152,112,8,195,9,60,185,
    6,97,109,221,236,191,52,240,107,80,93,11,242,251,89,115,
    81,66,101,35,223,165,175,120,13,253,166,141,251,147,91,247,
    88,23,232,252,46,152,238,145,28,218,92,157,27,105,149,249,
    165,49,77,227,238,146,89,152,37,189,48,171,58,84,45,238,
    100,151,203,210,200,112,167,225,62,147,141,168,213,126,22,249,
    146,157,32,219,255,8,3,195,241,194,154,196,73,208,149,21,
    111,3,71,8,146,251,42,205,195,80,217,61,85,57,74,219,
    165,139,38,194,78,253,54,148,175,96,187,251,159,212,163,234,
    182,244,19,154,139,199,211,124,27,53,60,196,247,150,178,26,
    24,41,227,29,253,126,139,70,77,117,96,99,204,158,94,61,
    248,89,191,156,55,104,206,32,157,106,147,145,210,39,190,131,
    234,60,148,178,115,180,100,45,160,56,99,30,41,125,114,60,
    35,247,61,102,31,207,142,237,91,60,233,171,93,253,90,231,
    33,191,197,161,151,41,99,244,206,116,160,44,74,244,61,138,
    223,22,30,221,172,156,24,20,35,162,128,223,99,248,61,110,
    13,143,149,243,229,50,210,13,13,139,94,191,115,24,109,131,
    214,220,124,89,252,27,226,211,159,123,
};

EmbeddedPython embedded_m5_internal_param_CommMonitor(
    "m5/internal/param_CommMonitor.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_CommMonitor.py",
    "m5.internal.param_CommMonitor",
    data_m5_internal_param_CommMonitor,
    2970,
    9726);

} // anonymous namespace
