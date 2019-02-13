#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86ISA[] = {
    120,156,189,88,255,111,219,198,21,127,71,82,146,37,91,182,
    28,59,118,190,181,230,176,184,81,183,197,222,86,120,235,214,
    44,104,26,164,67,128,214,9,232,2,73,212,2,4,77,158,
    228,115,36,82,32,207,118,84,200,191,204,193,214,63,166,191,
    245,15,236,222,123,71,210,180,155,0,5,54,89,182,78,199,
    227,187,187,247,222,231,125,187,11,33,255,44,225,247,115,23,
    32,155,8,128,8,255,5,188,6,24,10,232,89,32,164,5,
    209,10,28,214,32,185,9,34,170,193,91,128,158,13,210,134,
    51,236,56,240,173,13,241,39,134,106,181,164,106,188,139,170,
    141,47,112,237,57,120,237,240,144,5,147,22,200,26,244,234,
    240,34,94,1,71,54,224,176,5,73,3,4,126,98,220,249,
    229,164,3,249,140,57,232,53,145,106,3,169,90,76,181,194,
    84,249,219,38,189,229,25,81,19,162,22,188,69,206,231,33,
    154,103,46,22,32,90,224,78,27,162,54,119,22,33,90,228,
    206,82,177,124,7,122,203,69,255,90,165,191,194,253,37,144,
    203,160,86,65,93,7,181,6,125,1,81,135,166,163,100,175,
    122,235,32,29,80,55,160,119,3,36,254,175,195,153,64,49,
    151,43,51,110,242,140,107,229,140,91,60,227,54,244,110,131,
    196,255,91,102,198,28,236,117,175,35,12,234,103,252,116,17,
    6,208,11,216,28,203,52,83,73,236,171,184,159,40,139,222,
    55,168,33,208,66,106,108,252,214,241,251,152,208,75,129,161,
    67,222,17,189,83,92,65,0,206,137,44,218,33,178,225,230,
    169,160,7,101,195,20,59,14,244,249,133,114,114,138,83,196,
    99,25,166,184,122,13,166,60,178,247,34,254,0,28,93,103,
    133,47,179,194,205,107,156,76,175,81,221,128,108,215,112,219,
    93,230,91,19,223,91,204,157,110,99,227,143,131,52,24,249,
    47,63,253,203,211,189,71,93,226,92,55,137,253,209,56,73,
    245,80,237,235,57,34,242,227,96,36,125,95,183,240,33,197,
    25,90,105,20,89,59,248,120,152,168,88,147,124,195,76,167,
    106,204,139,154,217,254,40,137,142,134,82,207,227,200,83,30,
    121,146,166,73,218,37,133,120,212,104,106,198,175,7,154,216,
    27,209,22,93,226,139,155,236,57,54,219,7,201,72,98,19,
    15,38,71,219,3,57,218,185,223,159,108,239,31,169,97,180,
    141,12,251,95,63,217,123,234,127,115,146,248,95,201,99,57,
    220,30,79,52,146,110,143,118,182,145,35,153,198,1,14,85,
    132,219,194,247,215,104,229,19,53,240,115,14,15,228,112,44,
    83,18,56,91,164,93,197,130,88,17,31,10,91,44,139,69,
    161,234,5,132,164,150,118,1,225,143,57,132,86,238,128,136,
    162,200,33,181,224,148,59,132,83,151,32,36,228,108,2,12,
    69,68,56,6,2,206,44,248,206,38,130,83,108,29,244,23,
    183,132,111,213,248,139,89,170,1,167,136,113,141,16,252,254,
    14,47,53,199,75,89,48,197,22,193,117,224,20,157,18,73,
    113,8,219,195,38,36,139,32,240,65,53,201,136,69,140,38,
    251,114,90,71,240,157,18,124,99,180,36,77,164,82,210,183,
    71,246,218,109,21,163,73,182,53,14,244,129,215,46,192,65,
    53,49,200,187,73,108,112,236,171,56,42,112,53,150,209,87,
    67,180,12,143,116,200,171,49,217,48,9,74,50,2,55,28,
    38,153,100,235,226,181,61,138,102,154,168,251,99,94,134,118,
    37,126,120,114,36,179,144,44,9,45,204,172,72,28,208,106,
    51,182,14,143,188,121,149,86,191,197,182,208,65,107,168,163,
    45,116,209,22,76,239,142,213,22,75,98,87,145,26,195,90,
    238,215,78,97,24,63,129,1,67,192,161,197,206,56,229,48,
    128,212,8,25,59,227,148,93,157,222,254,1,132,182,242,113,
    244,118,68,150,70,175,225,28,54,23,180,27,164,125,64,190,
    203,64,18,254,53,64,131,52,96,163,17,25,235,96,200,107,
    52,131,150,178,104,11,7,198,235,184,248,28,217,193,20,114,
    131,57,179,209,32,144,35,116,96,12,12,56,188,134,251,254,
    139,45,45,15,14,140,191,62,80,89,114,98,252,154,250,28,
    223,246,208,95,158,79,158,237,31,202,80,103,27,56,240,42,
    57,114,195,32,142,19,237,6,81,228,6,26,253,126,255,72,
    203,204,213,137,187,153,117,9,67,239,86,97,66,229,122,147,
    177,244,184,99,236,38,82,161,198,136,178,194,15,236,147,153,
    212,104,1,7,73,148,225,56,77,29,72,237,117,104,6,169,
    57,97,6,216,64,124,34,165,109,145,142,220,246,81,193,129,
    137,47,245,194,102,50,57,236,115,200,10,135,65,150,249,196,
    1,143,179,165,145,212,199,193,240,72,242,234,25,174,135,12,
    81,215,240,48,235,72,116,131,228,40,196,102,89,226,36,142,
    38,200,154,10,63,161,93,111,176,13,182,49,18,181,197,26,
    126,155,226,186,104,160,37,54,196,186,21,58,185,221,149,121,
    101,141,100,6,6,92,228,152,163,29,158,97,252,232,90,236,
    254,44,14,217,173,247,59,234,209,100,239,46,53,155,212,124,
    68,205,189,66,226,25,138,221,190,44,246,99,218,202,98,89,
    67,59,151,170,244,40,255,130,71,45,86,60,234,140,60,99,
    202,201,83,217,21,175,176,73,242,100,190,240,35,246,58,132,
    26,189,142,136,217,127,48,167,86,173,159,54,221,245,110,18,
    27,191,193,230,222,102,118,207,53,182,230,30,4,153,27,39,
    231,6,238,210,75,19,197,200,188,189,59,164,244,138,1,15,
    42,6,236,185,68,65,214,235,253,150,26,231,125,90,255,248,
    74,181,62,48,90,255,39,109,181,144,91,216,34,91,214,188,
    8,201,60,8,138,70,161,255,61,236,76,214,73,255,85,197,
    175,99,146,123,17,223,193,188,197,202,167,212,213,54,169,139,
    243,159,41,242,138,48,166,106,69,167,78,16,244,109,88,203,
    51,82,70,41,99,156,38,111,38,110,210,119,53,20,44,61,
    216,204,182,54,179,207,48,146,184,15,207,149,157,71,141,84,
    142,201,235,77,20,32,149,104,21,227,51,45,245,228,77,40,
    57,105,240,147,239,27,167,55,53,139,159,39,35,196,133,129,
    176,10,32,56,236,97,225,66,209,110,214,40,180,74,20,72,
    10,218,34,107,49,4,182,88,71,55,175,0,64,95,155,0,
    32,227,250,15,112,117,42,224,223,64,234,69,37,230,62,205,
    254,82,248,204,10,145,83,177,50,21,239,204,64,86,238,11,
    86,30,35,208,89,198,109,78,44,121,70,194,234,227,135,74,
    0,41,51,134,157,87,48,85,159,113,74,159,97,108,126,85,
    86,112,46,186,13,233,29,253,139,200,216,65,76,85,120,247,
    98,48,226,114,197,230,72,174,103,8,204,156,217,193,39,102,
    94,157,195,66,177,247,3,177,106,25,187,96,147,249,43,53,
    159,150,30,43,138,177,217,240,181,113,57,88,86,114,132,111,
    34,205,75,218,220,97,118,151,26,122,25,127,205,116,255,241,
    179,175,158,237,238,249,216,229,10,150,62,148,241,190,32,51,
    249,51,118,36,158,173,4,72,14,156,111,185,160,165,214,34,
    176,207,44,129,231,66,172,19,222,242,185,208,28,255,60,83,
    39,176,137,22,95,142,17,20,91,46,132,229,138,186,74,184,
    13,146,212,188,153,181,151,17,152,15,134,193,104,63,10,30,
    14,104,23,218,42,44,188,202,42,216,238,84,217,38,127,16,
    239,225,156,31,63,43,216,63,158,117,13,250,0,23,45,217,
    102,219,143,146,144,227,192,55,7,210,29,201,209,62,30,55,
    15,212,216,237,15,131,1,163,97,231,98,61,43,196,210,12,
    103,197,93,57,90,100,148,247,119,19,55,76,98,140,119,71,
    161,78,82,55,146,88,207,203,200,189,239,114,176,116,85,230,
    6,251,248,54,8,181,177,237,139,158,201,197,83,144,14,50,
    174,147,94,159,80,247,42,224,244,241,108,173,176,88,164,34,
    38,175,21,76,98,224,152,66,213,18,151,129,198,85,48,163,
    224,145,78,79,76,120,122,68,205,14,53,219,80,205,179,51,
    68,240,239,184,104,159,86,39,37,213,197,109,171,105,113,29,
    109,40,158,19,117,246,75,159,252,250,215,248,164,116,160,87,
    43,60,179,14,249,77,79,3,36,87,251,61,44,238,235,60,
    50,79,238,218,248,31,221,149,141,254,42,204,125,252,255,244,
    82,239,31,87,205,181,247,16,242,76,253,62,15,21,85,145,
    218,198,67,149,40,234,83,86,246,174,145,128,143,187,43,151,
    140,197,15,83,25,104,105,64,185,59,123,241,216,187,205,158,
    217,185,199,149,197,73,173,144,228,203,82,146,51,174,76,38,
    171,140,85,113,125,69,119,102,124,29,168,185,10,164,50,177,
    99,46,168,88,116,223,202,43,69,40,85,80,47,85,64,184,
    199,242,196,175,170,193,148,129,68,19,140,199,50,142,188,63,
    18,249,159,160,90,206,49,205,172,209,167,152,114,12,101,153,
    176,128,245,219,42,150,10,191,244,53,10,79,21,241,24,191,
    78,233,94,87,128,36,27,234,105,97,168,93,138,66,231,49,
    211,251,130,26,142,146,101,128,244,158,64,17,52,75,83,140,
    228,80,106,121,1,10,198,39,63,244,68,18,19,70,50,193,
    66,187,193,131,72,238,251,87,18,104,233,232,152,64,126,106,
    192,64,43,234,86,211,110,214,155,130,51,214,165,171,216,202,
    88,189,28,227,74,148,235,203,73,230,209,136,38,117,228,121,
    132,25,240,171,183,187,124,65,100,20,195,151,86,69,166,33,
    69,242,161,99,55,24,153,59,8,126,159,31,79,50,99,168,
    124,65,70,57,216,251,61,53,247,75,189,255,141,102,223,198,
    102,180,179,85,200,186,101,100,221,83,35,115,239,194,119,101,
    163,29,46,240,170,100,81,26,96,255,250,165,209,76,166,42,
    24,170,239,205,21,93,49,172,233,210,237,242,186,196,85,249,
    196,169,75,127,8,239,40,34,89,39,169,28,168,12,23,227,
    149,202,89,185,119,62,46,212,119,33,116,85,167,93,133,81,
    152,242,207,28,246,30,242,217,238,115,108,58,116,127,50,215,
    196,83,46,254,46,225,175,133,78,107,217,162,133,103,223,26,
    254,118,240,119,217,90,232,52,157,102,19,233,230,23,4,253,
    109,160,41,181,172,13,164,255,47,212,85,105,41,
};

EmbeddedPython embedded_m5_internal_param_X86ISA(
    "m5/internal/param_X86ISA.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_X86ISA.py",
    "m5.internal.param_X86ISA",
    data_m5_internal_param_X86ISA,
    2285,
    6534);

} // anonymous namespace
