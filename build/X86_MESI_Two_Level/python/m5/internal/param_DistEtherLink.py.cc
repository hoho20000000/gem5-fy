#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DistEtherLink[] = {
    120,156,197,89,235,83,28,199,17,239,217,123,113,7,7,135,
    120,9,4,102,101,9,235,252,16,200,114,41,113,98,69,21,
    219,82,82,174,114,176,106,113,149,36,146,202,214,178,59,192,
    194,221,238,101,119,14,233,92,240,37,40,143,15,249,146,255,
    35,223,242,7,198,221,61,59,203,130,116,72,149,68,103,224,
    154,217,222,158,158,158,249,117,247,244,204,249,144,253,76,227,
    231,215,54,64,250,79,1,16,224,159,128,67,128,142,128,109,
    11,132,180,32,152,129,131,10,196,139,32,130,10,188,4,216,
    46,129,44,193,41,54,202,240,251,18,68,159,105,169,217,92,
    170,246,58,169,38,190,64,221,99,112,88,102,150,5,131,6,
    200,10,108,87,225,73,52,3,101,89,131,131,6,196,53,16,
    248,19,225,200,79,7,45,200,122,140,193,118,29,165,86,81,
    170,193,82,51,44,149,189,173,211,91,238,17,212,33,104,192,
    75,180,124,28,130,113,182,98,2,130,9,110,52,33,104,114,
    99,18,130,73,110,76,25,245,45,216,158,54,237,43,133,246,
    76,161,61,91,104,207,113,123,10,228,52,132,243,16,46,64,
    120,21,118,5,4,45,82,139,51,126,182,189,8,178,12,225,
    18,108,47,129,196,191,69,56,21,56,253,233,66,143,107,220,
    227,74,222,99,153,123,172,192,246,10,72,252,91,214,61,198,
    96,171,61,135,240,132,255,193,159,54,194,3,106,2,201,145,
    76,210,48,142,220,48,218,141,67,139,222,215,136,16,152,62,
    145,18,126,170,248,249,154,80,77,128,33,69,219,17,213,19,
    212,32,0,251,4,22,141,16,148,96,241,68,208,67,88,130,
    99,108,148,97,151,95,132,229,76,226,4,113,154,134,99,212,
    94,129,99,230,108,61,137,86,160,172,170,12,196,52,3,161,
    95,99,103,122,141,48,0,154,93,193,97,55,217,110,69,118,
    175,179,117,106,22,137,219,243,18,175,235,62,12,83,245,72,
    237,203,228,219,48,58,108,211,4,84,157,102,209,237,197,137,
    234,132,59,106,140,100,221,200,235,74,215,85,13,124,72,176,
    163,10,21,206,92,149,241,241,32,14,35,69,211,236,164,42,
    9,123,170,153,247,118,187,113,208,239,72,53,142,156,111,152,
    243,40,73,226,164,77,235,226,16,81,68,122,135,123,138,172,
    236,210,16,109,50,143,73,250,4,201,198,126,220,149,72,162,
    189,65,127,99,79,118,239,221,222,29,108,236,244,195,78,176,
    241,244,243,159,185,191,123,180,245,141,251,253,243,216,253,86,
    30,201,206,70,111,160,80,116,163,123,111,3,45,146,73,228,
    33,235,213,57,174,163,216,21,26,224,121,184,231,102,134,238,
    203,78,79,38,52,239,116,146,6,23,19,98,70,188,39,74,
    98,90,76,138,176,106,0,165,213,105,26,64,255,149,1,106,
    101,97,138,152,138,12,96,11,78,184,65,168,181,9,80,194,
    177,68,240,225,76,17,156,61,1,167,22,252,161,68,2,39,
    72,203,24,85,118,14,230,172,142,42,173,170,6,39,136,120,
    133,240,252,97,153,85,141,177,42,11,142,145,34,212,101,56,
    193,208,69,81,100,33,61,168,67,60,9,2,31,194,58,185,
    180,136,208,129,159,30,87,209,21,202,185,43,104,23,166,217,
    4,97,66,203,238,144,247,182,27,134,27,167,235,61,79,237,
    59,77,131,17,46,19,99,189,25,71,26,206,221,48,10,12,
    188,218,65,118,195,14,58,136,67,107,200,218,88,172,19,123,
    185,24,97,236,119,226,84,178,147,177,110,103,138,4,73,122,
    183,199,106,104,84,178,135,59,7,50,245,201,161,208,209,180,
    70,178,128,180,141,198,73,28,10,113,10,148,116,137,93,162,
    133,78,81,69,151,104,163,75,232,214,178,213,20,83,98,51,
    164,213,244,43,89,176,151,141,127,252,27,52,38,2,14,44,
    142,208,99,206,13,40,141,200,113,132,30,115,252,211,219,79,
    64,40,43,227,99,10,64,128,137,123,5,251,176,215,160,251,
    160,236,125,10,104,198,147,220,160,2,232,151,26,115,244,37,
    237,36,140,124,133,122,144,42,139,134,40,67,111,1,149,143,
    145,59,28,67,230,55,167,37,244,11,180,8,195,25,179,5,
    178,231,113,220,63,179,195,101,25,131,221,64,237,135,105,252,
    92,71,57,181,57,233,109,97,216,60,30,124,183,115,32,125,
    149,174,34,227,89,220,183,125,47,138,98,101,123,65,96,123,
    10,179,192,78,95,201,212,86,177,189,150,182,9,74,103,201,
    120,82,174,111,208,147,14,55,180,251,4,161,175,48,191,204,
    240,3,135,102,42,21,58,194,126,28,164,200,167,174,123,82,
    57,45,234,65,203,28,179,1,236,39,46,137,210,176,40,71,
    209,251,165,177,64,103,155,170,113,157,84,118,118,57,129,249,
    29,47,77,93,178,128,249,236,112,52,235,35,175,211,151,172,
    61,69,125,104,16,53,181,13,35,202,75,87,105,58,102,246,
    60,165,40,142,130,1,90,24,250,159,209,224,87,217,21,155,
    152,151,154,98,30,63,117,49,39,106,232,144,53,177,96,249,
    229,204,253,242,61,103,158,166,14,140,187,200,160,71,119,60,
    197,108,210,182,56,25,240,172,200,125,157,143,168,69,157,157,
    155,68,214,136,124,64,228,150,153,248,187,159,125,243,226,236,
    191,166,17,45,158,178,95,202,38,151,199,151,123,46,190,38,
    11,241,117,74,113,114,204,251,107,88,42,196,72,137,22,32,
    30,55,81,197,49,136,192,99,12,146,48,71,19,110,187,197,
    88,160,65,55,157,69,50,227,58,146,91,107,233,45,91,123,
    158,189,239,165,118,20,159,185,187,77,47,117,106,35,103,119,
    150,105,237,11,238,188,87,112,103,199,38,9,242,101,231,6,
    145,242,176,197,255,240,167,88,252,61,189,248,191,165,17,39,
    50,127,155,100,63,27,23,62,57,11,33,82,51,48,108,97,
    99,176,64,48,20,215,127,1,55,192,39,209,50,238,105,140,
    1,109,107,77,189,173,241,222,168,203,68,147,219,194,138,105,
    84,9,137,221,18,204,103,187,85,74,219,73,47,137,95,12,
    236,120,215,86,96,76,186,191,150,174,175,165,95,96,122,177,
    31,156,173,121,150,74,18,217,163,84,160,83,3,173,140,10,
    35,124,38,85,143,94,248,146,55,20,126,114,93,157,9,116,
    89,227,102,27,21,194,195,120,88,6,15,206,133,88,219,80,
    10,28,17,24,141,28,12,154,204,99,26,174,193,72,148,196,
    2,198,126,1,7,250,148,8,7,114,181,191,1,151,179,2,
    254,10,180,202,184,150,89,160,115,244,152,8,154,33,113,170,
    103,142,197,107,119,39,43,139,12,43,75,28,24,58,189,38,
    111,58,217,110,133,5,202,223,11,89,37,223,77,74,89,145,
    83,140,160,114,30,65,12,209,91,237,24,229,243,65,68,203,
    143,209,70,98,28,46,186,126,188,121,62,67,113,69,83,226,
    44,175,222,61,62,99,122,32,151,108,122,118,134,14,229,229,
    21,49,107,105,47,97,7,250,57,145,207,243,48,22,134,247,
    78,205,91,189,152,72,11,219,136,171,179,208,83,178,161,204,
    86,79,213,56,248,207,105,225,114,151,126,104,95,252,138,28,
    230,46,54,36,30,215,4,72,78,168,47,185,250,37,106,17,
    236,167,150,192,163,38,86,19,47,249,168,169,79,148,142,174,
    38,216,89,205,135,147,6,141,119,46,93,23,86,44,7,94,
    99,74,228,197,136,194,142,96,189,223,241,186,59,129,247,128,
    246,198,148,70,244,77,152,89,198,250,86,209,122,10,16,49,
    100,2,252,248,133,153,197,209,136,234,214,251,160,15,161,108,
    61,199,68,16,251,156,31,190,223,151,118,87,118,119,240,220,
    186,31,246,236,221,142,183,199,216,148,178,217,125,103,102,167,
    24,220,66,24,115,22,73,169,72,216,140,109,63,142,48,29,
    246,125,21,39,118,32,241,40,32,3,251,182,205,185,212,14,
    83,219,219,193,183,158,175,180,179,159,143,88,46,184,188,100,
    47,229,218,234,240,57,53,71,8,174,139,103,245,16,235,204,
    67,200,11,11,189,125,112,202,161,10,139,43,72,29,59,184,
    239,224,161,80,13,116,246,250,146,200,61,34,27,80,220,148,
    223,61,158,191,164,252,71,131,208,146,85,197,53,171,110,113,
    97,113,78,240,49,245,77,95,13,219,63,138,183,8,91,89,
    134,237,138,9,222,42,73,202,26,29,52,137,214,41,255,111,
    55,12,115,156,233,4,51,155,134,57,201,116,138,153,45,195,
    156,102,122,133,153,51,134,57,203,116,142,153,243,134,185,192,
    244,42,51,23,13,115,137,233,53,102,46,27,230,10,211,247,
    152,185,106,152,54,211,235,204,124,223,48,111,48,189,201,204,
    53,195,252,128,233,45,102,182,13,243,67,166,31,49,243,99,
    195,252,132,233,109,102,174,67,118,225,182,193,204,59,176,253,
    41,4,85,230,220,165,20,87,251,31,83,28,103,136,17,230,
    134,228,255,153,217,156,95,253,68,198,59,15,32,171,122,134,
    101,53,81,156,89,83,103,181,80,152,202,159,151,126,83,79,
    132,111,23,150,94,31,82,174,159,72,79,73,141,212,205,145,
    77,150,243,163,30,186,127,150,172,242,178,175,98,230,245,155,
    124,94,167,92,243,13,102,25,64,115,147,72,215,151,124,99,
    171,184,204,166,58,188,165,239,10,121,33,92,43,43,197,33,
    95,144,106,190,32,11,72,34,249,220,125,205,162,232,114,155,
    68,189,94,79,70,129,115,135,122,125,10,197,178,153,101,70,
    228,25,148,156,255,2,121,29,54,129,117,242,44,214,98,175,
    70,37,229,249,194,100,25,212,86,30,136,163,131,151,125,249,
    31,198,151,219,180,243,156,237,65,206,87,68,120,215,201,55,
    28,231,81,142,203,202,16,71,13,100,199,27,208,233,237,13,
    18,88,19,242,117,7,63,169,235,151,202,30,121,9,107,124,
    179,20,105,173,27,173,196,25,222,7,121,110,226,69,135,151,
    107,206,165,114,205,134,115,121,159,52,252,65,190,89,51,75,
    157,211,76,28,181,60,172,79,191,219,99,165,151,10,144,62,
    246,48,124,24,58,124,152,82,121,161,252,253,75,141,60,147,
    50,70,230,156,161,125,162,126,23,11,253,64,166,151,106,62,
    147,50,154,115,142,186,49,164,79,42,147,35,153,232,47,1,
    72,247,219,200,145,118,58,131,23,120,111,234,199,119,241,111,
    161,159,229,46,232,39,222,80,199,79,123,82,6,151,134,134,
    150,48,161,193,79,195,173,24,68,62,29,204,49,57,95,110,
    109,65,46,183,246,140,167,222,191,172,95,170,188,108,49,222,
    66,140,180,55,140,118,102,169,187,67,122,241,218,97,118,186,
    227,98,25,31,73,159,110,67,176,217,143,244,96,255,69,55,
    26,156,114,253,112,17,206,207,44,131,217,65,42,249,186,45,
    69,81,26,206,238,202,200,21,147,120,224,186,124,246,119,41,
    203,184,238,40,75,110,186,120,252,19,13,66,23,12,88,114,
    139,42,22,221,115,98,200,175,85,175,214,5,159,113,46,124,
    11,88,224,85,115,222,123,96,110,42,6,169,67,28,69,153,
    62,59,114,176,133,110,241,139,69,254,26,66,39,126,254,134,
    196,28,74,104,143,224,232,221,196,192,226,155,110,126,159,221,
    119,165,122,71,230,111,99,232,212,230,124,76,228,118,190,165,
    252,130,122,95,67,210,189,183,110,22,99,93,47,6,47,196,
    67,202,96,22,191,31,34,182,21,118,245,151,0,106,250,194,
    251,32,241,176,61,119,129,139,97,26,122,29,202,177,43,195,
    135,205,52,210,68,204,107,86,255,170,8,197,82,225,153,15,
    73,175,150,112,188,170,137,220,67,30,46,218,244,249,62,89,
    41,67,88,43,123,88,140,21,250,143,208,1,245,77,132,190,
    143,124,192,215,143,15,145,180,232,194,127,172,46,106,244,127,
    10,255,91,88,232,88,37,209,16,147,162,130,255,91,248,127,
    218,154,104,213,203,245,58,202,141,79,8,243,187,138,14,218,
    176,86,151,235,226,71,219,124,183,189,
};

EmbeddedPython embedded_m5_internal_param_DistEtherLink(
    "m5/internal/param_DistEtherLink.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_DistEtherLink.py",
    "m5.internal.param_DistEtherLink",
    data_m5_internal_param_DistEtherLink,
    2650,
    8303);

} // anonymous namespace
