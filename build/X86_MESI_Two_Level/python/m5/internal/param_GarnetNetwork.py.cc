#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetNetwork[] = {
    120,156,197,88,235,111,27,185,17,31,174,94,150,109,217,114,
    252,202,195,137,55,77,124,209,61,98,231,146,166,189,246,210,
    160,73,154,28,2,92,124,193,250,128,36,110,129,197,90,75,
    201,107,75,187,194,46,29,71,7,187,69,235,160,119,64,191,
    244,91,209,255,161,223,250,7,182,51,195,221,13,45,75,64,
    250,136,206,182,232,17,57,36,231,241,155,225,144,77,72,127,
    110,224,231,215,54,64,242,119,11,192,199,63,1,251,0,29,
    1,219,22,8,105,129,63,15,123,37,136,46,128,240,75,240,
    22,96,187,0,178,0,39,72,20,225,183,5,8,239,104,174,
    133,156,171,50,140,171,134,3,184,246,4,236,23,185,203,130,
    254,36,200,18,108,151,225,69,56,15,69,89,129,189,73,136,
    42,32,240,39,196,157,95,246,235,144,206,152,128,237,42,114,
    173,34,215,36,115,205,51,87,58,90,165,81,158,225,87,193,
    159,132,183,40,249,20,248,83,44,197,52,248,211,76,212,192,
    175,49,49,3,254,12,19,179,217,242,117,216,158,203,232,115,
    6,61,111,208,11,6,189,104,208,75,6,189,108,208,231,13,
    250,130,65,95,52,232,75,6,189,98,208,151,13,250,138,65,
    175,26,180,109,208,87,13,250,39,6,125,205,160,175,27,244,
    154,65,127,100,208,55,12,186,97,208,31,27,244,39,6,253,
    41,211,179,32,231,32,248,12,130,155,16,172,67,75,128,95,
    39,243,162,231,95,109,111,128,44,66,112,11,182,111,129,196,
    191,13,56,17,8,131,57,99,198,231,60,227,92,62,227,54,
    207,184,3,219,119,64,226,223,109,61,99,2,182,26,139,8,
    211,224,95,248,211,16,72,169,105,108,94,203,56,9,162,208,
    13,194,86,20,88,52,94,161,134,64,221,164,166,128,159,50,
    126,30,17,186,99,96,104,163,236,136,238,99,92,65,0,206,
    241,45,218,193,47,192,133,99,65,95,130,2,28,33,81,132,
    22,15,4,197,148,227,24,241,58,7,71,184,122,9,142,184,
    103,235,69,120,25,138,170,204,128,156,99,64,234,97,156,76,
    195,8,71,64,177,75,184,237,38,203,173,72,238,117,150,78,
    45,96,227,246,188,216,235,186,95,121,113,40,213,166,84,135,
    81,188,223,32,5,84,149,180,232,246,162,88,117,130,29,53,
    65,188,110,232,117,165,235,170,73,252,18,227,68,21,40,212,
    92,21,241,235,94,20,132,138,212,236,36,42,14,122,170,150,
    207,118,187,145,127,208,145,106,10,123,158,114,207,227,56,142,
    226,6,217,197,161,70,81,211,219,111,43,146,178,75,91,52,
    72,60,110,146,23,216,108,236,70,93,137,77,216,238,31,108,
    180,101,247,238,205,86,127,99,231,32,232,248,27,47,191,248,
    153,251,236,241,214,83,247,219,195,200,253,90,190,150,157,141,
    94,95,33,235,70,247,238,6,74,36,227,208,195,174,179,58,
    174,35,219,57,218,224,48,104,187,169,160,187,178,211,147,49,
    233,157,204,208,230,98,90,204,139,43,162,32,230,196,140,8,
    202,153,67,201,58,181,204,161,255,72,29,106,165,233,10,125,
    42,82,7,91,112,204,4,121,173,65,14,37,63,22,200,125,
    168,41,58,167,45,224,196,130,223,21,136,225,24,219,34,102,
    23,59,119,230,130,206,46,122,169,10,28,163,199,75,228,207,
    239,86,120,169,9,94,202,130,35,108,209,213,69,56,198,20,
    134,172,216,133,237,94,21,162,25,16,248,37,168,18,164,69,
    136,0,126,121,84,70,40,20,115,40,104,8,147,54,126,16,
    147,217,29,66,111,99,50,235,141,146,245,158,167,118,157,90,
    230,35,52,19,251,122,51,10,181,59,91,65,232,103,238,213,
    0,105,5,29,4,136,67,54,228,213,152,173,19,121,57,27,
    249,184,217,137,18,201,32,227,181,157,89,98,36,238,86,143,
    151,161,93,73,30,158,236,203,164,73,128,66,160,233,21,73,
    2,90,109,60,32,113,40,196,41,80,146,139,12,137,58,130,
    162,140,144,104,32,36,52,181,98,213,196,172,216,12,200,154,
    205,82,26,236,197,12,31,255,4,237,19,1,123,22,71,232,
    17,231,6,228,70,207,113,132,30,113,252,211,232,103,32,148,
    149,246,99,10,64,7,83,239,57,156,195,168,65,248,32,239,
    61,10,104,246,39,193,160,4,136,75,237,115,196,146,6,9,
    123,190,68,51,104,41,139,182,40,66,111,25,23,159,32,56,
    28,65,138,155,147,2,226,2,37,194,112,198,108,129,221,75,
    184,239,159,24,112,105,198,96,24,168,221,32,137,14,117,148,
    19,205,73,111,11,195,230,121,255,155,157,61,217,84,201,42,
    118,188,138,14,236,166,23,134,145,178,61,223,183,61,133,89,
    96,231,64,201,196,86,145,189,150,52,200,149,206,197,12,73,
    249,122,253,158,116,152,208,240,241,131,166,194,252,50,207,95,
    56,52,19,169,16,8,187,145,159,96,63,77,109,75,229,212,
    105,6,153,57,98,1,24,39,46,177,210,182,200,71,209,251,
    32,147,64,103,155,114,6,157,68,118,90,156,192,154,29,47,
    73,92,146,128,251,25,112,164,245,107,175,115,32,121,245,4,
    215,67,129,136,212,50,140,41,47,157,39,117,50,237,89,165,
    48,10,253,62,74,24,52,239,208,230,231,25,138,53,204,75,
    53,177,132,159,170,88,20,21,4,100,69,44,91,205,98,10,
    191,252,204,89,34,213,129,253,46,82,215,35,28,79,48,155,
    52,44,78,6,172,21,193,215,249,132,40,154,236,92,167,102,
    141,154,143,168,185,145,41,254,225,181,175,13,106,255,136,118,
    180,88,229,102,33,85,46,143,47,247,84,124,205,24,241,117,
    66,113,114,196,231,107,80,48,98,164,64,6,136,166,178,168,
    226,24,68,199,99,12,18,51,71,19,30,187,102,44,208,166,
    155,206,5,18,227,42,54,55,214,146,27,182,70,158,189,235,
    37,118,24,189,131,187,77,131,58,181,17,216,157,21,178,189,
    1,231,182,1,103,199,38,14,194,178,115,141,154,226,40,227,
    127,252,99,24,191,173,141,255,21,237,56,157,226,109,134,113,
    54,37,154,4,22,242,72,37,115,195,22,18,253,101,114,131,
    105,255,101,60,0,95,132,43,120,166,177,15,232,88,171,233,
    99,141,207,70,93,46,103,185,45,40,101,68,153,60,209,42,
    192,82,122,90,37,116,156,244,226,232,77,223,142,90,182,130,
    76,164,123,107,201,250,90,242,37,166,23,251,254,59,155,167,
    169,36,150,61,74,5,58,53,144,101,84,16,226,119,90,234,
    241,155,166,228,3,133,191,185,174,206,4,186,172,113,211,131,
    10,221,195,254,176,50,127,112,46,196,218,134,82,224,152,156,
    49,153,59,131,148,121,78,219,77,178,39,10,98,25,99,223,
    240,3,125,10,228,7,130,218,247,192,229,172,128,63,3,89,
    25,109,153,6,58,71,79,22,65,243,196,78,245,204,145,24,
    122,58,89,105,100,88,105,226,192,208,233,213,248,208,73,79,
    43,44,80,126,48,178,74,126,154,20,210,34,199,140,160,98,
    30,65,236,162,247,58,49,138,167,131,136,204,143,209,70,108,
    28,46,186,126,188,126,58,67,113,69,83,224,44,175,62,188,
    127,38,244,70,46,201,244,234,157,119,40,47,95,22,11,150,
    70,9,3,232,231,212,124,145,135,177,200,250,62,168,120,171,
    131,137,212,56,70,92,157,133,94,146,12,69,150,122,182,194,
    193,127,106,21,46,119,233,135,206,197,135,4,152,219,72,72,
    188,182,10,144,156,80,223,114,245,75,173,69,110,63,177,4,
    94,185,177,154,120,203,87,110,125,179,118,116,53,193,96,205,
    62,156,52,104,191,83,233,218,176,88,238,120,237,83,106,222,
    140,41,236,200,173,247,58,94,119,199,247,238,255,129,54,163,
    29,155,89,152,89,153,244,117,83,122,10,16,49,66,1,254,
    250,101,166,197,235,49,213,173,247,112,237,92,122,142,9,63,
    106,114,126,248,118,87,218,93,217,221,193,123,235,110,208,179,
    91,29,175,205,190,41,164,218,125,147,105,167,216,185,70,24,
    115,22,73,168,72,216,140,236,102,20,98,58,60,104,170,40,
    182,125,137,87,1,233,219,55,109,206,165,118,144,216,222,14,
    142,122,77,165,193,126,58,98,185,224,242,226,118,194,181,213,
    254,33,145,99,116,174,139,119,245,0,235,204,63,66,94,88,
    232,227,131,83,14,85,88,92,65,234,216,193,115,7,47,133,
    170,175,179,215,3,106,238,82,179,1,230,161,252,225,253,249,
    75,92,251,247,180,9,153,172,44,46,89,85,139,11,139,83,
    140,207,105,110,114,54,108,15,223,39,108,101,17,182,75,89,
    240,150,137,83,86,232,162,73,109,149,242,255,246,100,214,57,
    197,237,52,119,214,32,125,145,155,225,206,89,216,174,131,95,
    230,158,57,138,253,202,255,24,251,28,58,99,12,154,31,254,
    159,33,239,252,234,71,18,222,185,15,105,57,48,42,220,133,
    169,89,77,135,123,32,178,146,152,77,191,169,21,225,107,247,
    197,225,88,115,155,177,244,148,212,158,186,62,54,101,57,113,
    232,173,255,242,46,138,243,122,168,148,233,245,36,215,235,132,
    139,161,254,2,59,48,123,98,163,119,61,126,210,85,92,127,
    82,129,90,215,143,104,108,8,215,74,107,84,200,13,82,206,
    13,178,140,77,40,15,221,33,70,209,117,40,177,122,189,158,
    12,125,231,22,205,250,28,204,122,146,121,198,132,12,202,90,
    127,133,188,64,153,198,2,114,1,139,148,179,81,73,9,208,
    80,150,157,90,207,3,113,124,238,101,44,255,45,195,114,131,
    30,234,222,37,103,231,33,53,156,142,243,76,236,60,206,253,
    114,109,4,80,119,14,90,45,25,187,73,240,157,164,203,205,
    123,241,97,225,196,55,8,163,79,221,28,49,47,60,160,24,
    115,163,150,219,11,122,56,85,121,109,153,240,78,255,217,12,
    218,147,158,153,135,142,178,43,57,22,125,217,145,74,14,67,
    159,34,143,165,247,77,95,226,41,28,245,241,114,83,225,78,
    156,229,186,227,60,182,232,242,254,61,164,185,19,143,45,81,
    198,131,107,81,44,90,213,114,85,112,69,48,240,102,110,244,
    149,243,190,159,66,86,215,247,19,135,122,20,185,63,61,160,
    89,22,215,124,134,231,71,59,141,6,126,79,204,142,112,2,
    14,223,249,54,189,174,126,23,226,241,244,118,152,232,48,229,
    183,75,170,113,156,79,169,185,153,227,236,23,25,186,186,119,
    215,51,181,215,181,218,15,189,68,158,82,157,159,51,187,119,
    213,202,80,246,39,222,65,71,61,139,208,25,252,214,99,50,
    60,233,68,158,66,101,168,172,82,75,3,131,79,195,124,232,
    210,208,133,183,130,174,126,147,83,115,3,227,126,236,33,189,
    56,208,155,200,56,240,58,132,234,203,67,215,115,14,118,250,
    153,70,171,3,28,168,115,208,124,252,70,125,29,132,251,153,
    84,87,70,89,39,231,84,246,200,141,30,225,133,60,142,58,
    29,116,213,112,179,17,211,86,63,81,178,59,98,35,84,191,
    215,145,207,100,55,138,251,35,54,122,144,150,165,41,211,112,
    51,226,96,106,198,65,165,245,248,163,78,212,220,151,126,202,
    51,220,116,204,243,155,168,75,102,31,116,114,42,173,86,101,
    80,4,137,129,239,106,241,8,34,103,108,241,192,247,99,199,
    11,219,50,51,250,213,65,134,83,42,102,92,195,165,100,215,
    56,17,94,187,71,65,138,57,216,115,67,1,128,144,124,79,
    0,164,156,103,252,114,202,152,163,214,49,228,204,88,40,114,
    179,113,62,140,71,133,34,133,194,153,94,174,167,207,22,53,
    156,82,98,217,14,18,178,200,242,176,153,233,17,79,137,141,
    117,25,150,217,205,85,198,152,109,245,213,85,63,96,221,231,
    247,170,30,54,117,122,33,158,168,138,10,253,159,197,255,22,
    22,0,86,65,76,138,25,81,194,255,117,252,63,103,77,215,
    171,197,106,21,249,166,166,197,127,243,187,138,249,124,210,90,
    157,171,138,127,3,79,129,114,100,
};

EmbeddedPython embedded_m5_internal_param_GarnetNetwork(
    "m5/internal/param_GarnetNetwork.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_GarnetNetwork.py",
    "m5.internal.param_GarnetNetwork",
    data_m5_internal_param_GarnetNetwork,
    2649,
    8148);

} // anonymous namespace
