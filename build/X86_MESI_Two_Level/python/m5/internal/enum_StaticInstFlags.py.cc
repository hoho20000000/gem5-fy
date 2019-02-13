#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_StaticInstFlags[] = {
    120,156,197,89,109,127,19,199,17,159,59,61,216,178,45,91,
    198,198,230,193,96,17,112,80,30,192,73,41,132,4,74,131,
    141,73,221,130,33,39,40,112,73,115,61,223,173,228,51,167,
    59,245,110,109,80,126,246,155,154,95,218,183,125,215,15,209,
    119,253,22,253,82,237,204,236,173,44,57,231,180,47,90,87,
    160,245,236,220,236,238,236,204,127,102,118,79,30,100,159,9,
    252,126,89,7,72,47,27,0,62,254,55,224,53,64,104,128,
    109,130,33,76,240,167,97,187,4,241,89,48,252,18,188,3,
    176,11,32,10,112,128,68,17,190,41,64,116,67,73,157,234,
    75,141,228,73,85,241,1,206,61,10,175,139,204,50,161,55,
    6,162,4,118,25,94,68,51,80,20,35,176,61,6,241,8,
    24,248,137,112,229,151,189,26,100,35,70,193,174,160,212,34,
    74,141,177,212,12,75,101,79,43,244,148,71,248,21,240,199,
    224,29,106,62,14,254,56,107,49,1,254,4,19,85,240,171,
    76,76,130,63,201,196,20,248,83,32,106,208,50,192,175,17,
    7,149,125,101,79,131,40,66,112,10,236,83,32,240,255,52,
    28,24,184,63,100,205,128,61,67,235,53,27,51,104,176,224,
    159,248,105,160,193,64,146,253,118,69,146,6,113,228,4,81,
    43,14,76,122,62,66,13,153,215,163,166,128,223,50,126,87,
    201,206,9,176,145,81,125,180,243,62,206,96,0,142,241,77,
    90,202,47,192,217,125,131,58,65,1,246,144,40,66,139,31,
    4,197,76,98,31,45,55,13,123,56,123,9,246,152,211,124,
    17,93,128,162,44,179,105,166,217,52,234,49,14,166,199,104,
    24,64,181,75,184,236,6,235,45,73,239,235,172,157,60,141,
    141,35,162,157,142,211,148,174,12,188,245,40,149,15,67,183,
    157,54,104,7,178,66,219,232,116,227,68,134,193,166,28,37,
    97,39,114,59,194,113,228,24,118,146,174,155,200,64,226,214,
    101,17,187,219,113,16,73,218,103,152,202,36,232,202,106,127,
    180,211,137,253,157,80,200,113,228,172,51,103,45,73,226,164,
    65,134,177,168,145,212,116,95,183,37,169,217,161,37,26,164,
    31,55,233,75,108,150,183,226,142,192,38,106,247,118,150,219,
    162,115,243,90,171,183,188,185,19,132,254,242,203,219,183,156,
    199,107,205,117,231,217,155,216,121,36,118,69,184,220,237,73,
    20,93,238,220,92,70,141,68,18,185,225,114,222,38,175,163,
    220,41,90,225,77,208,118,50,77,183,68,216,21,9,109,60,
    157,164,213,141,9,99,198,184,104,20,140,105,99,210,8,202,
    218,165,100,158,170,118,233,223,50,151,154,89,232,160,87,141,
    204,197,38,236,51,65,126,107,144,75,201,147,5,114,32,110,
    21,221,211,54,224,192,132,111,11,36,176,143,109,17,145,94,
    239,187,115,86,33,93,77,53,2,251,232,243,18,121,244,251,
    5,158,106,148,167,50,97,15,91,116,118,17,246,49,156,80,
    20,89,216,110,87,32,158,4,3,59,65,133,208,109,68,136,
    229,151,123,101,4,67,177,15,6,5,98,218,141,31,36,100,
    119,139,240,219,24,211,220,24,141,228,202,45,171,170,157,132,
    102,98,103,111,196,145,242,103,43,136,124,237,95,133,144,86,
    16,34,66,44,178,33,207,198,98,97,236,246,197,200,201,94,
    24,167,130,81,198,115,91,83,36,72,210,173,46,79,67,171,
    146,62,60,216,23,169,71,136,66,164,169,25,73,3,154,237,
    132,80,98,81,148,207,210,42,231,24,19,53,68,69,25,49,
    209,64,76,40,106,193,172,26,83,198,70,64,230,244,74,89,
    188,23,53,64,254,14,202,41,6,108,155,28,164,123,156,30,
    80,26,93,199,65,186,199,41,128,158,126,12,134,52,51,62,
    102,1,244,48,113,79,225,24,134,13,226,7,101,239,82,76,
    179,67,9,7,37,64,96,42,167,35,152,20,74,216,245,37,
    26,65,83,153,180,68,17,186,243,56,249,40,225,97,15,50,
    224,28,20,16,24,168,17,6,52,38,12,100,207,225,186,127,
    100,196,101,73,131,113,32,183,130,52,126,163,226,156,104,206,
    123,77,140,155,167,189,39,155,219,194,147,233,34,50,94,197,
    59,117,207,141,162,88,214,93,223,175,187,18,243,192,230,142,
    20,105,93,198,245,165,180,65,190,180,206,105,40,245,231,235,
    117,133,197,132,194,143,31,120,18,51,204,12,119,56,54,83,
    33,17,9,91,177,159,34,159,134,182,133,180,106,52,130,204,
    28,179,2,12,20,135,68,105,89,148,163,240,189,175,53,80,
    249,166,172,177,147,138,176,197,41,204,11,221,52,117,72,3,
    230,51,226,104,215,187,110,184,35,120,246,148,209,192,164,210,
    225,164,50,211,25,218,143,222,62,239,41,138,35,191,135,42,
    6,222,13,90,253,12,99,177,138,153,169,106,204,225,183,98,
    156,54,70,16,145,35,198,188,233,21,51,252,245,235,206,28,
    237,29,216,241,70,230,123,196,227,1,230,147,134,201,233,128,
    183,69,248,181,62,36,138,6,91,87,168,89,162,230,125,106,
    174,234,157,159,192,246,171,71,183,191,74,75,154,188,103,175,
    144,237,174,31,97,206,80,132,77,14,68,216,1,69,202,30,
    23,217,160,48,16,37,5,178,64,60,174,227,138,163,16,93,
    143,81,72,194,28,79,88,123,7,163,129,22,221,176,206,146,
    26,151,176,185,186,148,94,173,43,236,213,183,220,180,30,197,
    135,128,175,211,67,149,221,8,238,214,2,25,127,0,208,237,
    1,64,91,117,146,32,52,91,151,169,41,30,103,253,15,254,
    47,214,111,43,235,127,69,75,78,100,136,155,100,164,141,27,
    30,193,133,92,50,162,253,208,68,162,55,79,126,24,116,192,
    60,22,193,23,209,2,214,53,118,2,149,182,170,42,109,92,
    31,213,241,77,167,183,160,164,137,50,185,162,85,128,185,172,
    98,165,84,82,186,73,252,182,87,143,91,117,9,90,165,187,
    75,233,245,165,244,14,102,152,250,189,67,163,103,217,36,17,
    93,202,6,42,59,144,105,100,16,97,159,166,90,123,235,9,
    46,42,220,115,28,149,12,212,217,198,201,138,21,250,135,29,
    98,106,135,112,58,196,3,14,101,193,147,242,198,88,223,27,
    180,155,167,180,222,24,187,162,96,204,99,248,15,56,130,190,
    5,114,4,129,237,79,192,199,91,3,126,0,50,51,26,51,
    139,117,142,31,29,67,51,36,78,135,154,61,35,183,66,153,
    89,108,152,89,238,192,224,233,86,185,240,100,21,11,79,41,
    127,30,72,44,253,138,82,200,78,58,131,49,84,236,199,16,
    251,232,63,170,26,197,225,48,34,251,99,188,145,24,7,140,
    58,69,94,25,78,82,124,172,41,112,166,151,39,224,160,81,
    181,146,67,74,189,58,116,15,229,230,11,198,172,169,112,194,
    16,250,140,154,219,253,72,54,52,239,127,171,223,226,209,100,
    58,80,75,28,149,137,104,253,180,200,106,79,141,72,58,142,
    29,153,135,207,189,244,161,250,184,66,160,249,7,106,47,240,
    46,101,128,224,180,250,142,143,193,212,154,228,250,3,211,160,
    123,32,222,248,74,32,202,116,41,178,71,153,192,59,219,24,
    19,227,116,69,35,162,74,55,51,34,166,192,174,49,49,205,
    119,176,50,223,188,102,153,56,13,246,28,19,243,96,159,97,
    226,44,216,231,152,56,15,246,2,19,23,192,190,200,196,34,
    216,117,38,46,129,253,30,19,151,193,190,194,196,18,216,239,
    51,113,21,236,6,19,31,128,253,33,19,31,129,253,49,19,
    215,192,190,206,196,50,216,159,48,241,41,216,63,99,226,6,
    216,63,103,226,38,216,183,152,248,12,236,219,76,124,14,246,
    23,76,220,1,251,46,19,191,0,251,30,19,191,4,251,75,
    38,238,131,189,194,196,42,216,15,152,88,3,251,33,19,95,
    129,253,43,38,214,193,254,53,19,191,1,251,17,19,143,193,
    222,96,226,9,216,79,153,248,26,108,139,137,38,216,207,152,
    120,14,246,111,153,120,1,246,75,242,8,209,175,184,181,41,
    104,237,111,232,132,71,119,223,111,153,249,59,176,191,131,236,
    82,239,128,213,228,211,17,39,18,253,229,140,78,149,96,168,
    152,14,128,185,31,148,42,222,168,121,123,82,57,145,66,238,
    110,232,118,54,125,247,158,79,171,209,146,158,206,129,166,86,
    191,54,168,62,101,47,227,152,29,112,247,142,222,198,238,73,
    221,44,238,2,191,118,81,234,115,198,242,99,143,179,247,179,
    45,81,239,136,206,166,72,210,173,160,91,111,225,136,126,154,
    47,233,237,61,4,62,213,41,215,96,142,239,205,242,110,245,
    11,4,122,125,193,175,78,36,215,85,42,188,53,245,138,128,
    11,180,99,102,181,151,220,74,115,111,48,8,212,29,139,116,
    136,196,155,163,74,171,218,74,98,110,183,43,34,223,250,132,
    70,124,58,84,35,89,230,36,129,224,56,65,20,224,165,225,
    47,135,185,119,2,139,227,44,230,223,31,35,186,168,76,174,
    119,204,41,184,214,79,198,87,78,78,117,118,254,95,181,243,
    27,191,135,236,244,103,209,241,158,239,47,42,103,227,145,167,
    43,18,217,83,117,243,38,53,203,125,55,157,254,113,166,118,
    214,211,141,184,203,247,24,69,157,205,149,89,71,245,218,56,
    111,133,229,116,239,92,174,236,67,188,191,227,193,169,205,71,
    145,129,238,108,174,244,234,42,223,166,152,56,147,43,241,88,
    116,44,209,98,223,245,59,115,185,146,143,98,215,103,184,101,
    228,124,174,84,83,198,137,224,163,129,166,223,59,94,110,21,
    107,31,191,182,114,67,126,255,147,195,62,206,98,190,120,43,
    252,190,197,84,239,226,49,178,169,124,154,136,150,144,222,22,
    251,242,8,43,127,212,3,87,186,71,70,13,177,242,245,66,
    205,101,18,135,153,94,186,183,152,191,66,144,224,141,69,203,
    76,169,37,134,120,151,142,219,251,144,212,180,182,193,16,247,
    194,113,250,249,90,162,170,117,244,127,90,207,231,145,55,32,
    163,244,28,230,229,227,101,213,13,195,12,47,76,230,227,207,
    18,114,39,137,50,252,101,157,124,61,72,211,7,34,116,123,
    205,48,150,153,30,195,188,133,220,113,207,182,18,225,250,205,
    94,228,241,187,146,33,70,190,149,154,34,9,220,48,248,158,
    226,74,89,105,144,147,239,21,45,33,86,68,139,80,63,61,
    52,78,115,235,63,61,246,126,11,243,148,172,13,15,85,204,
    252,189,97,192,174,184,73,18,160,192,132,142,96,205,200,199,
    245,139,36,144,66,139,40,92,15,177,242,45,98,161,193,180,
    68,53,115,213,33,39,223,255,107,214,218,179,204,255,76,230,
    239,125,35,142,154,93,225,237,132,248,96,87,100,123,63,194,
    204,143,181,175,119,2,145,122,34,139,53,221,59,159,31,51,
    221,228,190,231,137,52,85,111,190,7,250,249,86,122,30,237,
    162,249,91,129,187,25,138,204,74,67,172,124,141,154,189,212,
    35,164,43,141,116,47,95,246,177,235,37,49,86,4,37,171,
    123,199,200,6,67,178,89,239,152,172,66,209,32,48,52,59,
    157,64,71,201,48,47,223,195,143,220,84,234,153,149,135,7,
    57,249,86,122,24,36,135,34,202,74,67,172,252,149,248,233,
    74,226,70,152,69,171,135,59,202,56,249,85,229,65,218,125,
    210,205,170,138,162,143,137,220,63,236,184,233,150,138,152,44,
    114,7,56,121,214,221,192,3,1,83,108,221,195,94,30,90,
    185,109,226,165,56,194,78,91,200,127,47,132,151,60,14,204,
    65,166,117,159,78,11,20,51,190,64,40,137,163,231,17,142,
    129,236,245,148,47,82,204,176,61,199,225,189,59,216,15,29,
    231,240,80,116,2,39,163,47,64,253,208,146,126,135,77,217,
    56,111,148,141,202,127,253,223,105,179,82,174,24,252,254,224,
    200,207,118,3,188,114,159,71,103,29,245,78,161,151,90,196,
    97,207,102,71,52,222,154,51,248,75,32,255,104,160,206,104,
    252,131,134,62,196,173,64,246,203,218,134,219,81,239,165,249,
    121,246,106,42,85,231,105,254,241,132,222,195,90,31,81,115,
    13,244,193,239,115,106,168,22,176,137,114,243,51,41,148,136,
    118,144,18,248,232,28,230,237,186,201,73,122,79,221,205,212,
    251,179,123,252,186,236,22,54,53,122,69,61,90,49,70,232,
    239,20,254,53,241,136,110,22,140,49,99,210,40,225,223,26,
    254,157,54,39,106,149,98,165,130,114,227,115,183,42,248,236,
    95,27,83,123,164,
};

EmbeddedPython embedded_m5_internal_enum_StaticInstFlags(
    "m5/internal/enum_StaticInstFlags.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/enum_StaticInstFlags.py",
    "m5.internal.enum_StaticInstFlags",
    data_m5_internal_enum_StaticInstFlags,
    2757,
    7849);

} // anonymous namespace
