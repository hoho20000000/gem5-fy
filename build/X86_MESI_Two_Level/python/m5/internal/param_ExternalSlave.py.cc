#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ExternalSlave[] = {
    120,156,197,89,109,83,28,199,17,238,217,123,227,14,14,142,
    119,9,33,177,46,139,232,242,34,72,236,34,113,98,69,21,
    89,38,177,171,98,172,90,92,37,233,146,170,173,101,119,238,
    88,184,219,189,218,29,64,231,130,124,8,202,203,223,200,199,
    84,229,91,126,96,210,221,179,179,44,8,108,149,19,157,129,
    155,155,157,237,153,233,158,231,233,158,158,193,135,236,103,30,
    63,191,177,1,210,127,10,128,0,255,4,28,2,244,5,116,
    44,16,210,130,96,30,14,42,16,223,6,17,84,224,53,64,
    167,4,178,4,231,88,41,195,31,74,16,125,168,165,22,114,
    169,218,117,82,77,124,129,99,79,192,97,153,155,44,24,53,
    64,86,160,83,133,231,209,60,148,101,13,14,26,16,215,64,
    224,79,132,51,191,24,181,32,235,49,1,157,58,74,173,161,
    84,131,165,230,89,42,123,91,167,183,220,35,168,67,208,128,
    215,168,249,36,4,147,172,197,20,4,83,92,105,66,208,228,
    202,52,4,211,92,153,49,195,183,160,51,107,234,115,133,250,
    124,161,190,80,168,47,22,234,75,133,250,50,215,103,64,206,
    66,120,11,194,219,16,174,64,87,64,208,162,233,112,37,94,
    118,238,128,44,67,184,10,157,85,144,248,119,7,206,5,46,
    203,108,161,199,93,238,49,151,247,184,199,61,214,160,179,6,
    18,255,238,233,30,19,176,219,94,68,216,194,255,224,79,27,
    97,3,53,133,197,177,76,210,48,142,220,48,234,198,161,69,
    239,107,84,16,200,62,21,37,252,84,241,243,148,208,78,128,
    161,70,221,17,237,51,28,65,0,246,9,44,154,33,40,193,
    237,51,65,15,97,9,78,177,82,134,46,191,8,203,153,196,
    25,226,55,11,167,56,122,5,78,185,101,247,121,116,23,202,
    170,202,0,205,50,64,250,53,118,166,215,8,15,160,218,21,
    156,118,135,245,86,164,247,6,107,167,22,176,112,135,94,226,
    13,220,237,87,74,38,145,215,223,237,123,199,178,77,6,168,
    58,89,49,24,198,137,234,135,123,106,130,100,221,200,27,72,
    215,85,13,124,72,176,163,10,21,90,174,202,248,120,16,135,
    145,34,51,251,169,74,194,161,106,230,189,221,65,28,28,245,
    165,154,196,150,207,185,101,59,73,226,164,77,235,226,80,161,
    168,24,30,246,20,105,57,160,41,218,164,30,23,233,115,44,
    54,247,227,129,196,34,234,141,142,54,123,114,176,245,176,59,
    218,220,59,10,251,193,230,139,143,126,238,126,177,189,251,185,
    251,213,73,236,254,94,30,203,254,230,112,164,80,116,115,176,
    181,137,26,177,81,155,215,216,184,129,98,115,52,193,73,216,
    115,51,69,247,101,127,40,19,178,59,157,166,201,197,148,152,
    23,247,68,73,204,138,105,17,86,13,160,180,58,77,3,232,
    191,50,64,173,204,125,17,83,145,1,108,193,25,87,8,181,
    54,1,74,56,150,8,62,180,20,193,233,9,56,183,224,143,
    37,18,56,195,178,140,222,102,231,96,46,104,111,211,67,213,
    224,12,17,175,16,158,95,175,242,80,19,60,148,5,167,88,
    34,212,101,56,67,151,70,81,108,194,242,160,14,241,52,8,
    124,8,235,68,105,17,33,129,95,156,86,145,10,229,156,10,
    154,194,100,77,16,38,180,236,14,177,183,221,48,173,113,186,
    49,244,212,190,211,52,24,225,50,49,214,59,113,164,225,236,
    134,81,96,224,213,4,233,134,125,36,136,67,107,200,163,177,
    88,63,246,114,49,194,216,239,199,169,38,25,143,237,204,144,
    32,73,119,135,60,12,205,74,250,112,231,64,166,62,17,10,
    137,166,71,36,13,104,180,241,144,196,33,23,39,71,73,87,
    152,18,45,36,69,21,41,209,70,74,232,218,170,213,20,51,
    98,39,164,213,244,43,153,179,151,13,63,254,13,26,19,1,
    7,22,123,232,41,199,6,148,70,228,216,67,79,217,255,233,
    237,79,64,40,43,107,199,16,128,0,83,235,28,246,97,214,
    32,125,80,246,17,57,52,227,73,52,168,0,242,82,99,142,
    92,210,36,97,228,43,212,131,134,178,104,138,50,12,151,113,
    240,9,162,195,41,100,188,57,47,33,47,80,35,116,103,140,
    22,216,188,132,243,254,153,9,151,69,12,166,129,218,15,211,
    248,68,123,57,213,57,232,237,162,219,60,27,125,185,119,32,
    125,149,174,97,195,203,248,200,246,189,40,138,149,237,5,129,
    237,41,140,2,123,71,74,166,182,138,237,245,180,77,80,58,
    43,134,73,249,120,163,161,116,184,162,233,19,132,190,194,248,
    50,207,15,236,154,169,84,72,132,253,56,72,177,157,186,246,
    164,114,90,212,131,150,57,102,5,152,39,46,137,210,180,40,
    71,222,251,196,104,160,163,77,213,80,39,149,253,46,7,48,
    191,239,165,169,75,26,112,59,19,142,172,62,246,250,71,146,
    71,79,113,60,84,136,170,90,135,49,197,165,91,100,142,177,
    158,77,138,226,40,24,161,134,161,255,33,77,126,139,169,216,
    196,184,212,20,75,248,169,139,69,81,67,66,214,196,178,229,
    151,51,250,229,123,206,18,153,14,140,187,200,160,71,58,158,
    99,52,105,91,28,12,216,42,162,175,243,35,170,81,103,231,
    62,21,235,84,252,128,138,7,198,240,119,111,125,243,170,245,
    79,105,70,139,77,246,75,153,113,185,127,185,151,252,107,186,
    224,95,231,228,39,167,188,191,134,165,130,143,148,104,1,226,
    73,227,85,236,131,8,60,250,32,9,179,55,225,182,91,244,
    5,154,116,199,185,77,106,188,135,197,131,245,244,129,173,153,
    103,239,123,169,29,197,23,116,183,233,165,14,109,68,118,103,
    149,214,190,64,231,94,129,206,142,77,18,196,101,231,125,42,
    202,55,45,254,15,191,143,197,239,233,197,255,29,205,56,149,
    241,109,154,121,54,41,124,34,11,33,82,51,48,236,98,101,
    180,76,48,20,215,127,25,55,192,231,209,42,238,105,140,1,
    109,107,77,189,173,241,222,168,211,71,19,219,194,138,169,84,
    9,137,110,9,150,178,221,42,165,237,100,152,196,175,70,118,
    220,181,21,24,149,30,173,167,27,235,233,199,24,94,236,199,
    23,107,158,133,146,68,14,41,20,232,208,64,43,163,194,8,
    159,105,168,237,87,190,228,13,133,159,92,87,71,2,157,214,
    184,217,70,133,240,48,30,150,193,131,99,33,230,54,20,2,
    199,4,70,35,7,131,140,121,70,211,53,24,137,146,88,70,
    223,47,224,64,159,18,225,64,84,251,27,112,58,43,224,175,
    64,171,140,107,153,57,58,123,143,241,160,121,18,167,124,230,
    84,92,187,59,89,153,103,88,89,224,64,215,25,54,121,211,
    201,118,43,76,80,254,94,136,42,249,110,82,202,146,156,162,
    7,149,115,15,98,136,222,106,199,40,95,118,34,90,126,244,
    54,18,99,119,209,249,227,253,203,17,138,51,154,18,71,121,
    245,238,241,153,208,19,185,164,211,203,11,116,40,46,223,21,
    11,150,102,9,19,232,23,84,124,148,187,177,48,109,239,84,
    189,181,171,129,180,176,141,184,58,10,189,32,29,202,172,245,
    76,141,157,255,210,40,156,238,210,15,237,139,159,16,97,62,
    192,138,196,99,156,0,201,1,245,53,103,191,84,90,4,251,
    185,37,240,8,138,217,196,107,62,130,234,147,166,163,179,9,
    38,171,249,112,208,160,249,46,133,235,194,138,229,192,107,76,
    169,120,53,38,183,35,88,31,245,189,193,94,224,61,62,164,
    201,104,70,223,184,153,101,180,111,21,181,39,7,17,55,24,
    192,143,31,27,43,142,199,148,183,62,2,62,99,106,237,217,
    39,130,216,231,248,240,213,190,180,7,114,176,135,231,214,253,
    112,104,119,251,94,143,177,41,101,214,125,105,172,83,12,110,
    193,141,57,138,164,148,36,236,196,182,31,71,24,14,143,124,
    21,39,118,32,241,40,32,3,251,161,205,177,212,14,83,219,
    219,195,183,158,175,52,217,47,123,44,39,92,94,210,75,57,
    183,58,60,161,234,24,193,117,241,172,30,98,158,57,128,60,
    177,208,219,7,135,28,202,176,56,131,212,190,131,251,14,30,
    10,213,72,71,175,39,84,108,81,177,9,197,77,249,221,227,
    249,43,28,251,128,38,161,37,171,138,59,86,221,226,196,226,
    146,224,51,234,155,190,233,182,255,120,27,183,149,101,232,84,
    140,243,86,73,82,214,232,160,73,101,157,226,127,167,97,26,
    39,185,156,226,198,166,105,156,230,114,134,27,91,166,113,150,
    203,57,110,156,135,236,46,107,129,27,23,161,179,4,65,149,
    91,150,41,74,212,254,199,40,193,78,54,70,247,82,255,207,
    224,224,252,250,123,82,222,121,12,89,226,112,83,96,16,69,
    203,154,186,111,40,76,242,204,75,191,163,13,225,3,250,202,
    245,172,116,253,68,122,74,106,164,238,143,205,88,14,49,122,
    234,147,11,127,207,51,167,138,177,235,183,185,93,231,156,54,
    141,22,24,64,115,25,71,55,128,124,25,170,56,83,165,84,
    182,165,175,219,120,33,92,43,203,102,33,95,144,106,190,32,
    203,88,68,242,196,189,102,81,116,198,74,162,222,112,40,163,
    192,249,41,245,250,25,20,51,79,150,25,19,51,40,190,253,
    9,242,84,102,10,83,205,5,76,103,222,244,74,10,149,5,
    99,25,212,86,238,136,227,131,151,185,252,23,195,229,54,157,
    140,47,194,184,243,9,21,28,184,243,152,237,108,231,184,188,
    127,3,81,49,29,77,220,196,139,122,50,165,99,208,91,201,
    97,138,197,103,141,66,155,122,239,134,126,124,217,24,120,202,
    227,209,191,93,138,198,230,35,144,105,249,230,62,116,165,241,
    237,35,179,212,165,145,249,42,228,131,111,234,195,5,238,251,
    17,30,125,233,202,219,143,143,34,197,83,125,135,110,52,247,
    138,153,251,90,17,102,35,203,4,178,47,149,188,206,129,20,
    145,46,59,92,7,184,230,73,60,194,147,92,141,27,177,151,
    235,142,115,143,126,154,241,48,165,11,67,220,163,69,21,119,
    233,69,193,191,86,189,90,23,156,2,93,249,39,65,161,173,
    154,183,217,96,14,50,163,212,161,22,69,44,206,50,18,214,
    199,45,254,223,129,111,41,53,169,249,2,213,228,44,196,127,
    6,120,199,27,232,139,48,126,159,29,135,83,29,109,248,178,
    150,146,58,231,199,84,60,204,221,229,151,212,155,118,169,193,
    214,134,49,125,227,9,18,220,33,126,163,2,148,251,241,197,
    237,96,75,221,185,34,167,151,232,11,57,208,151,132,124,26,
    121,243,253,211,126,236,31,202,32,147,185,123,179,204,167,241,
    192,195,246,235,103,217,13,205,44,179,87,222,7,9,245,90,
    188,210,154,202,36,244,250,225,215,250,214,218,52,43,186,135,
    190,170,54,45,78,254,196,73,216,155,251,27,195,146,200,94,
    152,98,35,143,146,247,200,162,60,17,67,217,55,248,72,177,
    247,24,217,170,207,57,250,182,227,49,95,110,124,134,69,139,
    174,19,39,234,162,70,223,51,248,109,225,30,96,149,68,67,
    76,139,10,126,183,240,123,214,154,106,213,203,245,58,202,77,
    78,137,226,239,26,114,188,97,173,205,215,197,127,1,178,6,
    160,238,
};

EmbeddedPython embedded_m5_internal_param_ExternalSlave(
    "m5/internal/param_ExternalSlave.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_ExternalSlave.py",
    "m5.internal.param_ExternalSlave",
    data_m5_internal_param_ExternalSlave,
    2466,
    7401);

} // anonymous namespace
