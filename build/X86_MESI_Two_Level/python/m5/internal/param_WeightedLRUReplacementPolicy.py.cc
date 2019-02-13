#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_WeightedLRUReplacementPolicy[] = {
    120,156,205,89,123,115,220,72,17,239,145,246,225,93,123,237,
    117,252,202,195,137,117,73,76,246,224,98,3,87,129,131,11,
    41,114,33,80,87,117,231,75,201,71,37,89,168,82,201,210,
    236,90,182,86,90,164,113,156,61,214,69,21,78,29,124,24,
    254,227,211,240,105,160,187,71,146,229,23,152,130,202,158,237,
    157,29,141,230,209,211,191,95,63,102,236,65,246,179,130,159,
    95,90,0,233,63,4,128,143,127,2,246,1,66,1,93,3,
    132,52,192,95,128,189,42,196,55,64,248,85,120,7,208,53,
    65,154,112,140,149,10,252,206,132,232,99,221,107,177,232,85,
    191,168,87,11,95,224,220,83,176,95,225,38,3,70,77,144,
    85,232,214,224,101,180,0,21,89,135,189,38,196,117,16,248,
    19,225,202,175,70,109,200,70,76,65,183,129,189,214,176,87,
    147,123,45,112,175,236,109,131,222,242,8,191,1,126,19,222,
    161,228,211,224,79,179,20,51,224,207,112,165,5,126,139,43,
    179,224,207,114,101,46,159,190,13,221,249,188,126,173,84,95,
    40,213,23,75,245,165,82,125,185,84,95,41,213,175,151,234,
    55,74,245,155,165,250,45,174,207,129,156,135,96,21,130,219,
    16,220,129,158,0,191,77,226,161,230,94,119,215,64,86,32,
    176,160,107,129,196,191,53,56,22,168,198,249,210,136,15,120,
    196,181,98,196,93,30,113,15,186,247,64,226,223,93,61,98,
    10,182,59,75,8,115,240,79,252,233,32,204,160,102,176,120,
    35,147,52,136,35,39,136,122,113,96,208,251,58,21,68,10,
    143,10,19,63,53,252,60,35,118,36,192,212,64,217,145,29,
    71,56,131,0,28,227,27,180,130,111,194,141,35,65,15,129,
    9,99,172,84,160,199,47,130,74,214,227,8,241,158,135,49,
    206,94,133,49,183,108,191,140,110,67,69,213,24,208,121,6,
    84,191,198,193,244,26,225,4,20,187,138,203,110,177,220,138,
    228,222,96,233,212,61,44,156,161,155,184,3,231,165,12,250,
    187,74,250,95,216,191,181,229,48,116,61,57,144,145,122,17,
    135,129,55,234,208,126,84,131,54,53,24,198,137,10,131,29,
    53,69,67,157,200,29,72,199,81,77,124,72,112,30,21,40,
    84,132,170,224,227,94,28,68,138,118,29,166,42,9,134,170,
    85,140,118,6,177,127,16,74,53,141,45,159,115,203,243,36,
    137,147,14,169,201,166,66,81,49,220,239,43,18,122,64,75,
    116,72,90,46,210,30,22,155,187,241,64,98,17,245,71,7,
    155,125,57,120,244,176,55,218,220,57,8,66,127,243,213,39,
    63,113,190,124,190,253,185,243,245,97,236,124,33,223,200,112,
    115,56,82,216,117,115,240,104,19,37,146,73,228,98,211,127,
    220,242,6,142,186,70,235,29,6,125,39,147,123,87,134,67,
    153,144,26,210,89,146,69,204,136,5,113,71,152,98,94,204,
    138,160,150,195,77,202,106,229,112,255,45,131,219,200,156,1,
    34,46,50,248,13,56,226,10,97,218,33,184,9,101,147,192,
    197,141,35,116,125,1,199,6,252,222,164,14,71,88,86,208,
    118,173,2,234,69,109,187,122,170,58,28,33,31,170,132,246,
    55,171,60,213,20,79,101,192,24,75,36,66,5,142,208,65,
    96,87,108,194,114,175,1,241,44,8,124,8,26,68,120,17,
    33,189,95,141,107,72,148,74,65,20,77,112,218,141,31,36,
    132,130,77,220,238,52,243,214,56,221,24,186,106,215,110,229,
    144,161,154,24,250,173,56,210,232,246,130,200,207,209,214,124,
    233,5,33,242,197,38,29,242,108,220,45,140,221,162,27,65,
    238,133,113,42,153,115,60,183,61,71,29,169,119,111,200,211,
    208,170,36,15,15,246,101,234,17,191,144,119,122,70,146,128,
    102,155,8,103,108,242,7,139,180,230,77,102,72,27,57,82,
    67,134,116,144,33,186,182,106,180,196,156,216,10,72,185,94,
    53,243,12,149,156,46,127,7,13,145,128,61,131,205,121,204,
    142,4,123,35,144,108,206,99,118,22,244,246,35,16,202,200,
    218,209,95,32,222,212,122,13,199,48,137,144,77,216,247,49,
    89,63,195,75,172,168,2,210,84,83,0,169,165,57,195,68,
    168,210,8,154,202,160,37,42,48,92,193,201,167,136,29,99,
    200,104,116,108,34,77,80,34,52,118,116,45,216,188,140,235,
    254,153,249,151,185,23,102,133,218,13,210,248,80,251,0,170,
    179,135,220,70,43,122,49,250,106,103,79,122,42,93,195,134,
    215,241,129,229,185,81,20,43,203,245,125,203,85,232,35,118,
    14,148,76,45,21,91,235,105,135,144,181,111,230,196,42,230,
    27,13,165,205,21,205,38,63,240,20,122,159,5,126,96,75,
    77,165,66,94,236,198,126,138,237,52,180,47,149,221,166,17,
    164,230,152,5,96,218,56,212,149,150,197,126,100,204,79,115,
    9,180,47,170,229,76,74,101,216,99,247,230,133,110,154,58,
    36,1,183,51,255,104,215,111,220,240,64,242,236,41,206,135,
    2,81,85,203,48,25,175,117,157,118,151,43,131,119,24,197,
    145,63,66,129,3,239,99,146,229,58,51,179,133,94,171,37,
    150,241,211,16,75,162,142,252,172,139,21,195,171,100,108,44,
    226,213,50,105,2,152,6,34,99,2,178,243,24,125,77,199,
    96,87,193,155,36,54,219,223,167,26,13,182,239,83,177,78,
    197,247,168,120,144,235,225,189,43,163,117,86,25,207,72,0,
    131,53,224,153,217,94,11,235,115,78,89,223,108,201,250,142,
    201,138,198,28,170,3,179,100,65,38,233,35,158,206,109,142,
    45,20,105,129,22,74,157,217,214,48,130,151,45,133,22,221,
    178,111,144,24,31,96,241,96,61,125,96,105,94,90,187,110,
    106,69,241,137,49,88,244,82,251,65,50,5,123,149,160,40,
    145,189,95,34,187,109,81,15,98,186,77,65,157,173,228,66,
    44,62,252,14,96,209,215,88,252,134,4,152,201,216,56,203,
    44,156,22,30,81,137,0,170,231,168,108,99,101,180,66,168,
    148,225,88,193,224,249,50,90,197,120,200,144,80,72,108,233,
    144,200,113,85,39,178,185,35,12,170,121,165,70,192,244,76,
    88,206,34,93,74,161,104,152,196,111,71,86,220,179,20,228,
    34,61,94,79,55,214,211,79,209,23,89,79,78,32,200,252,
    78,34,135,228,55,180,31,33,69,169,32,194,103,154,234,249,
    91,79,114,48,226,39,199,209,110,67,103,72,78,22,228,16,
    45,134,199,200,225,97,199,137,105,18,249,203,201,96,211,44,
    176,161,189,189,160,213,155,12,140,41,86,208,81,148,96,161,
    143,73,176,16,17,255,2,156,55,11,248,22,72,233,168,218,
    204,43,176,109,229,246,181,64,221,41,53,26,139,11,35,155,
    145,217,141,145,121,25,52,172,97,139,3,86,22,233,48,215,
    249,107,201,5,21,145,200,204,242,165,178,125,85,10,251,98,
    196,174,20,109,42,167,77,140,208,64,91,164,110,108,76,58,
    51,189,127,218,157,113,114,100,114,132,80,239,29,174,41,189,
    174,67,34,190,62,1,139,124,250,109,177,104,104,14,49,189,
    126,74,197,39,133,205,139,188,237,125,74,187,118,214,9,151,
    34,146,163,61,216,43,18,169,194,155,152,171,171,121,252,46,
    77,170,103,226,220,154,126,40,234,126,70,148,250,49,86,36,
    158,64,5,72,118,200,239,56,213,166,210,32,98,28,27,2,
    79,207,152,171,188,227,211,179,62,36,219,58,87,97,58,231,
    31,246,50,228,157,78,185,251,146,18,11,106,104,212,169,120,
    59,25,59,37,224,31,135,238,96,199,119,159,196,180,54,9,
    224,229,118,105,228,155,105,151,55,67,22,37,46,217,15,63,
    126,154,111,234,205,100,114,230,199,184,84,177,25,182,41,63,
    246,216,191,124,189,43,173,129,28,236,224,1,123,55,24,90,
    189,208,237,51,114,102,182,217,175,242,205,42,134,190,228,6,
    216,11,165,148,145,108,197,150,23,71,232,93,15,60,21,39,
    150,47,241,84,34,125,235,161,197,174,217,10,82,203,221,193,
    183,174,167,180,117,156,182,120,78,246,220,164,159,114,94,183,
    127,72,213,201,65,239,56,65,20,96,202,251,7,40,178,24,
    29,156,216,131,81,118,199,201,172,54,54,140,106,120,92,85,
    35,237,12,159,82,241,136,138,77,40,103,0,239,29,237,159,
    227,82,17,173,73,10,173,137,91,70,195,80,119,79,27,252,
    185,113,47,104,230,244,188,7,216,185,138,7,144,21,232,86,
    115,63,80,163,158,178,78,7,100,42,27,20,108,186,120,162,
    209,87,114,211,220,56,195,215,92,181,236,154,11,61,70,253,
    127,244,24,108,97,147,179,173,183,255,79,71,97,255,226,187,
    177,23,251,9,100,73,200,101,78,66,148,55,218,210,78,34,
    16,121,154,206,192,108,233,125,241,189,193,135,87,226,160,227,
    37,210,85,82,195,122,127,82,170,96,103,164,37,249,227,137,
    43,40,114,180,106,190,235,95,23,187,62,230,4,109,180,200,
    104,231,247,139,116,169,201,247,193,138,83,100,202,161,219,250,
    6,145,213,228,24,89,26,13,133,186,106,133,186,40,19,138,
    228,225,191,149,84,171,76,103,206,52,210,29,14,101,228,219,
    63,164,73,126,4,229,12,152,251,76,134,85,228,24,255,4,
    69,14,53,131,41,239,34,230,81,231,237,157,124,108,73,21,
    204,128,118,97,226,19,227,2,155,197,183,185,89,116,232,178,
    236,36,28,216,159,81,193,1,160,240,253,246,243,2,196,143,
    174,200,121,215,219,149,116,106,251,239,6,96,182,167,239,243,
    232,137,245,204,70,230,203,80,42,121,5,226,40,210,110,118,
    214,245,37,198,232,120,132,39,169,58,55,226,36,142,51,193,
    40,70,247,8,135,144,221,4,99,20,19,53,140,99,75,70,
    163,214,16,156,60,156,249,63,64,169,173,86,180,113,126,193,
    71,136,81,106,83,139,34,160,178,224,205,130,57,229,127,45,
    240,221,162,198,141,111,65,243,240,78,16,243,105,115,203,29,
    232,235,43,126,159,157,75,83,109,110,124,227,74,233,144,253,
    3,42,30,22,140,248,25,141,190,133,197,224,209,70,174,131,
    13,173,3,251,96,103,244,140,176,227,203,215,193,35,254,119,
    193,5,221,206,234,231,146,233,182,131,129,190,1,228,252,190,
    252,222,79,92,172,47,157,105,77,101,18,184,97,240,141,84,
    171,151,138,183,61,74,149,28,168,59,151,45,56,12,229,151,
    114,16,39,35,101,93,216,229,105,150,250,101,157,46,22,28,
    95,102,130,175,93,248,254,89,24,123,251,210,207,250,220,190,
    188,207,175,226,1,109,148,208,201,95,43,250,183,225,101,122,
    36,58,228,18,158,123,203,137,20,239,252,220,81,137,41,148,
    200,126,128,202,73,120,133,203,92,51,209,88,109,94,205,168,
    203,147,78,206,242,244,17,72,95,164,60,225,123,19,186,173,
    104,211,61,230,84,67,212,233,123,14,191,13,244,227,134,41,
    154,98,86,84,241,187,141,223,243,198,76,187,81,105,52,176,
    223,244,140,184,232,119,13,173,183,105,172,181,27,226,95,99,
    208,0,127,
};

EmbeddedPython embedded_m5_internal_param_WeightedLRUReplacementPolicy(
    "m5/internal/param_WeightedLRUReplacementPolicy.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_WeightedLRUReplacementPolicy.py",
    "m5.internal.param_WeightedLRUReplacementPolicy",
    data_m5_internal_param_WeightedLRUReplacementPolicy,
    2451,
    7638);

} // anonymous namespace
