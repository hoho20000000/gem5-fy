#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetExtLink[] = {
    120,156,197,89,235,111,220,198,17,159,229,189,116,146,78,58,
    189,253,144,45,186,177,162,139,29,75,109,3,183,73,227,26,
    181,93,53,8,16,43,6,21,192,246,165,0,75,145,123,39,
    74,60,242,64,174,44,95,112,66,139,202,104,250,169,127,73,
    191,245,15,108,103,102,73,138,146,78,128,129,198,151,179,110,
    111,184,156,221,157,199,111,102,103,215,46,164,159,53,252,254,
    193,4,72,190,48,0,60,252,19,112,8,16,8,104,27,32,
    164,1,222,2,28,84,32,186,14,194,171,192,59,128,118,9,
    100,9,78,145,40,195,247,37,8,63,211,92,139,57,87,109,
    20,87,3,95,224,220,19,112,88,230,46,3,6,147,32,43,
    208,174,194,203,112,1,202,178,6,7,147,16,213,64,224,39,
    196,149,95,13,154,144,142,152,128,118,29,185,214,144,107,146,
    185,22,152,43,125,91,167,183,60,194,171,131,55,9,239,80,
    242,41,240,166,88,138,105,240,166,153,104,128,215,96,98,6,
    188,25,38,102,179,233,155,208,158,203,232,249,2,189,80,160,
    23,11,244,82,129,94,46,208,43,5,250,90,129,190,94,160,
    111,20,232,155,5,122,181,64,223,42,208,183,11,244,90,129,
    54,11,244,157,2,253,139,2,253,17,211,179,32,231,192,191,
    11,254,58,248,31,67,71,128,215,36,245,209,51,175,219,27,
    32,203,224,183,160,221,2,137,127,27,112,42,208,77,115,133,
    17,159,240,136,249,124,196,61,30,113,31,218,247,65,226,223,
    61,61,98,2,118,91,75,8,35,255,191,248,105,9,164,212,
    52,54,111,100,156,248,81,104,251,97,39,242,13,122,95,163,
    134,64,231,82,83,194,111,21,191,207,8,125,49,48,244,80,
    118,68,223,9,206,32,0,199,120,6,173,224,149,224,250,137,
    160,7,191,4,67,36,202,208,225,23,126,57,229,56,65,60,
    205,193,16,103,175,192,144,123,118,95,134,183,160,172,170,12,
    152,57,6,140,126,141,131,233,53,194,5,80,236,10,46,187,
    195,114,43,146,123,147,165,83,139,216,216,125,39,118,122,246,
    87,78,28,74,181,253,86,125,227,135,135,45,82,64,213,73,
    139,94,63,138,85,224,239,169,9,226,181,67,167,39,109,91,
    77,226,67,140,3,149,175,80,115,85,198,199,131,200,15,21,
    169,25,36,42,246,251,170,145,143,182,123,145,119,20,72,53,
    133,61,95,115,207,118,28,71,113,139,236,98,81,163,168,233,
    31,118,21,73,217,163,37,90,36,30,55,201,75,108,182,246,
    163,158,196,38,236,14,142,182,186,178,247,240,65,103,176,181,
    119,228,7,222,214,171,207,127,99,63,223,222,253,218,254,238,
    56,178,191,145,111,100,176,213,31,40,100,221,234,61,220,66,
    137,100,28,58,216,117,89,199,77,100,155,167,5,142,253,174,
    157,10,186,47,131,190,140,73,239,100,134,22,23,211,98,65,
    220,22,37,49,39,102,132,95,205,28,74,214,105,100,14,253,
    119,234,80,35,77,39,232,83,145,58,216,128,19,38,200,107,
    45,114,40,249,177,68,238,67,77,209,57,93,1,167,6,252,
    185,68,12,39,216,150,49,250,205,220,153,139,58,250,245,84,
    53,56,65,143,87,200,159,63,172,242,84,19,60,149,1,67,
    108,209,213,101,56,193,20,131,172,216,133,237,65,29,162,25,
    16,248,224,215,9,210,34,68,0,191,26,86,17,10,229,28,
    10,26,194,164,141,231,199,100,118,139,208,219,154,204,122,163,
    100,179,239,168,125,171,145,249,8,205,196,190,222,137,66,237,
    206,142,31,122,153,123,53,64,58,126,128,0,177,200,134,60,
    27,179,5,145,147,179,145,143,221,32,74,36,131,140,231,182,
    102,137,145,184,59,125,158,134,86,37,121,120,176,39,19,151,
    0,133,64,211,51,146,4,52,219,120,64,98,81,136,83,160,
    36,55,24,18,77,4,69,21,33,209,66,72,104,106,213,104,
    136,89,177,227,147,53,221,74,26,236,229,12,31,255,1,237,
    19,1,7,6,71,232,144,115,3,114,163,231,56,66,135,28,
    255,244,246,83,16,202,72,251,49,5,160,131,169,119,30,199,
    48,106,16,62,200,251,136,2,154,253,73,48,168,0,226,82,
    251,28,177,164,65,194,158,175,208,8,154,202,160,37,202,208,
    95,193,201,39,8,14,67,72,113,115,90,66,92,160,68,24,
    206,152,45,176,123,25,215,253,59,3,46,205,24,12,3,181,
    239,39,209,177,142,114,162,57,233,237,98,216,188,24,124,187,
    119,32,93,149,208,222,250,58,58,50,93,39,12,35,101,58,
    158,103,58,10,179,192,222,145,146,137,169,34,115,61,105,145,
    43,173,27,25,146,242,249,6,125,105,49,161,225,227,249,174,
    194,252,178,192,15,28,154,137,84,8,132,253,200,75,176,159,
    134,118,165,178,154,52,130,204,28,177,0,140,19,155,88,105,
    89,228,163,232,125,146,73,160,179,77,53,131,78,34,131,14,
    39,48,55,112,146,196,38,9,184,159,1,71,90,191,113,130,
    35,201,179,39,56,31,10,68,164,150,97,76,121,233,26,169,
    147,105,207,42,133,81,232,13,80,66,223,253,140,22,191,198,
    80,108,96,94,106,136,101,252,214,197,146,168,33,32,107,98,
    197,112,203,41,252,242,61,103,153,84,7,246,187,72,93,143,
    112,60,197,108,210,50,56,25,176,86,4,95,235,30,81,52,
    216,186,75,205,58,53,31,83,179,145,41,254,225,181,111,92,
    212,254,25,173,104,176,202,110,41,85,46,143,47,251,92,124,
    205,20,226,235,148,226,100,200,251,171,95,42,196,72,137,12,
    16,77,101,81,197,49,136,142,199,24,36,102,142,38,220,118,
    139,177,64,139,238,88,215,73,140,59,216,108,172,39,27,166,
    70,158,185,239,36,102,24,157,193,221,164,151,58,181,17,216,
    173,85,178,125,1,206,221,2,156,45,147,56,8,203,214,71,
    212,148,175,50,254,39,63,135,241,187,218,248,95,209,138,211,
    41,222,102,24,103,83,194,37,176,144,71,106,153,27,118,145,
    24,172,144,27,138,246,95,193,13,240,101,184,138,123,26,251,
    128,182,181,134,222,214,120,111,212,229,108,150,219,252,74,70,
    84,201,19,157,18,44,167,187,85,66,219,73,63,142,222,14,
    204,168,99,42,200,68,122,180,158,108,174,39,95,98,122,49,
    31,159,217,60,77,37,177,236,83,42,208,169,129,44,163,252,
    16,159,105,170,237,183,174,228,13,133,159,108,91,103,2,93,
    214,216,233,70,133,238,97,127,24,153,63,56,23,98,109,67,
    41,112,76,206,152,204,157,65,202,188,160,229,38,217,19,37,
    177,130,177,95,240,3,125,75,228,7,130,218,143,192,229,172,
    128,127,0,89,25,109,153,6,58,71,79,22,65,11,196,78,
    245,204,80,140,220,157,140,52,50,140,52,113,96,232,244,27,
    188,233,164,187,21,22,40,255,44,100,149,124,55,41,165,69,
    78,49,130,202,121,4,177,139,222,107,199,40,159,15,34,50,
    63,70,27,177,113,184,232,250,241,238,249,12,197,21,77,137,
    179,188,250,240,254,153,208,11,217,36,211,235,51,239,80,94,
    190,37,22,13,141,18,6,208,111,169,249,60,15,99,145,245,
    125,80,241,214,46,38,210,194,54,98,235,44,244,138,100,40,
    179,212,179,53,14,254,115,179,112,185,75,31,218,23,159,18,
    96,126,141,132,196,99,165,0,201,9,245,29,87,191,212,26,
    228,246,83,67,224,145,24,171,137,119,124,36,214,39,95,75,
    87,19,12,214,236,203,73,131,214,59,151,174,11,22,203,29,
    175,125,74,205,219,49,133,29,185,245,81,224,244,246,60,231,
    241,49,45,70,43,186,89,152,25,153,244,205,162,244,20,32,
    226,10,5,248,241,203,76,139,55,99,170,91,31,225,220,185,
    244,28,19,94,228,114,126,248,110,95,154,61,217,219,195,115,
    235,190,223,55,59,129,211,101,223,148,82,237,190,205,180,83,
    236,220,66,24,115,22,73,168,72,216,137,76,55,10,49,29,
    30,185,42,138,77,79,226,81,64,122,230,3,147,115,169,233,
    39,166,179,135,111,29,87,105,176,159,143,88,46,184,156,184,
    155,112,109,117,120,76,228,24,157,107,227,89,221,199,58,115,
    0,121,97,161,183,15,78,57,84,97,113,5,169,99,7,247,
    29,60,20,170,129,206,94,79,168,121,72,205,22,20,55,229,
    15,239,207,223,17,118,104,17,50,89,85,220,52,234,6,23,
    22,231,24,95,208,216,228,114,216,238,189,79,216,202,50,180,
    43,89,240,86,137,83,214,232,160,73,109,157,242,127,27,15,
    10,250,114,108,138,59,167,249,194,169,154,94,56,97,152,215,
    254,207,48,231,40,25,99,124,252,237,167,140,110,235,247,63,
    147,240,214,99,72,119,254,171,34,91,20,53,107,232,200,246,
    69,86,253,178,233,119,180,34,124,194,190,49,26,86,182,27,
    75,71,73,237,169,187,99,83,150,115,132,94,250,244,44,96,
    243,210,167,146,233,245,167,92,175,83,174,123,6,139,236,192,
    236,54,141,174,240,248,118,85,113,169,73,181,104,83,223,151,
    177,33,108,35,45,71,33,55,72,53,55,200,10,54,161,60,
    182,71,24,69,151,156,196,234,244,251,50,244,172,95,210,168,
    95,65,177,116,100,158,49,33,131,18,212,143,144,215,34,211,
    88,43,46,98,61,114,57,42,41,215,21,148,101,167,54,243,
    64,28,159,123,25,203,255,202,176,220,162,187,160,179,60,108,
    61,165,134,51,111,158,116,173,237,220,47,235,87,0,21,59,
    142,163,248,208,14,176,43,161,147,204,123,114,98,157,196,69,
    208,185,94,54,41,199,132,39,3,169,228,40,20,40,178,92,
    122,196,243,36,110,124,209,0,207,19,53,238,196,81,182,61,
    206,157,130,206,203,127,133,244,18,19,119,10,81,197,189,98,
    201,168,87,235,130,183,224,11,151,212,133,190,106,222,247,41,
    100,133,244,32,177,168,71,145,19,210,29,145,37,177,139,247,
    222,124,75,166,125,194,23,120,217,158,73,238,227,67,214,142,
    211,211,23,49,252,62,61,142,37,58,88,248,178,144,138,10,
    235,62,53,15,114,111,127,65,163,111,99,211,123,184,153,41,
    189,185,163,125,67,202,162,8,84,125,240,213,97,239,161,186,
    117,129,83,155,167,192,207,21,241,101,142,103,65,228,30,74,
    79,95,102,93,49,11,243,252,49,234,57,216,127,115,36,199,
    174,223,75,103,152,187,240,222,139,105,212,210,133,222,68,198,
    190,19,248,63,200,75,26,234,249,158,58,137,239,166,94,85,
    230,72,22,235,104,111,240,12,79,177,113,20,4,104,238,213,
    43,153,118,7,137,146,189,43,22,66,193,251,129,124,46,123,
    81,60,184,98,161,39,105,45,151,50,141,54,0,190,76,13,
    112,109,244,58,90,136,139,131,101,120,196,99,113,226,231,145,
    39,47,105,241,196,243,98,203,9,187,50,243,246,157,139,12,
    231,132,203,184,70,187,145,141,106,69,120,202,140,175,208,130,
    57,216,230,4,212,236,37,255,87,193,8,191,16,236,139,29,
    92,165,93,222,63,57,110,98,217,245,19,90,120,254,194,160,
    116,35,161,176,101,251,143,202,83,197,9,198,152,75,244,89,
    72,223,136,60,230,11,144,191,96,211,164,43,199,137,186,168,
    209,239,44,254,26,184,205,24,37,49,41,102,68,5,127,155,
    248,59,103,76,55,235,229,122,29,249,166,166,197,251,252,91,
    195,252,52,105,172,53,235,226,127,65,178,201,7,
};

EmbeddedPython embedded_m5_internal_param_GarnetExtLink(
    "m5/internal/param_GarnetExtLink.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_GarnetExtLink.py",
    "m5.internal.param_GarnetExtLink",
    data_m5_internal_param_GarnetExtLink,
    2525,
    7605);

} // anonymous namespace
