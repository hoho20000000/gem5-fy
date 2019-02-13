#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetIntLink[] = {
    120,156,197,88,123,111,219,200,17,159,37,41,201,146,45,91,
    126,231,109,230,46,190,168,143,216,109,15,110,175,189,52,232,
    37,151,30,2,92,125,1,125,64,18,181,0,65,147,43,153,
    182,68,10,228,218,142,2,185,127,212,233,227,195,244,191,126,
    142,126,166,118,102,150,164,233,23,16,160,141,78,182,86,203,
    229,236,238,204,254,126,51,59,187,62,100,159,21,252,254,206,
    6,72,255,45,0,2,252,23,112,0,208,23,208,49,64,72,
    3,130,69,216,175,64,124,19,68,80,129,247,0,29,19,164,
    9,167,88,177,224,143,38,68,159,107,169,165,66,170,118,149,
    84,19,95,224,216,83,112,96,113,147,1,163,6,200,10,116,
    170,240,42,90,4,75,214,96,191,1,113,13,4,126,34,156,
    249,245,168,5,89,143,41,232,212,81,106,13,165,26,44,181,
    200,82,217,219,58,189,229,30,65,29,130,6,188,71,205,167,
    33,152,102,45,102,32,152,225,74,19,130,38,87,102,33,152,
    229,202,92,62,124,11,58,243,121,125,161,84,95,44,213,151,
    74,245,229,82,125,165,84,95,45,213,111,148,234,55,75,245,
    91,92,159,3,57,15,225,109,8,239,64,120,23,186,2,130,
    22,169,132,171,245,166,115,15,164,5,225,26,116,214,64,226,
    255,61,56,21,184,116,243,165,30,54,247,88,40,122,220,231,
    30,159,64,231,19,144,248,127,95,247,152,130,157,246,50,66,
    27,254,7,63,109,132,22,212,12,22,71,50,73,195,56,114,
    195,168,27,135,6,189,175,81,65,68,240,169,48,241,91,197,
    239,51,98,68,2,76,7,212,29,25,113,130,35,8,192,62,
    129,65,51,4,38,220,60,17,244,16,154,48,198,138,5,93,
    126,17,90,153,196,9,98,60,15,99,28,189,2,99,110,217,
    121,21,221,5,75,85,25,196,121,6,81,191,198,206,244,26,
    33,4,84,187,130,211,110,179,222,138,244,222,96,237,212,18,
    22,238,208,75,188,129,251,141,151,68,82,189,136,212,183,97,
    116,208,38,3,84,157,172,24,12,227,68,245,195,93,53,69,
    178,110,228,13,164,235,170,6,62,36,216,81,133,10,45,87,
    22,62,238,199,97,164,200,204,126,170,146,112,168,154,69,111,
    119,16,7,135,125,169,166,177,229,5,183,60,79,146,56,105,
    211,186,56,84,40,42,134,7,61,69,90,14,104,138,54,169,
    199,69,250,10,139,205,189,120,32,177,136,122,163,195,205,158,
    28,108,61,234,142,54,119,15,195,126,176,249,250,139,95,186,
    127,120,190,243,194,253,254,56,118,191,149,71,178,191,57,28,
    41,20,221,28,108,109,162,70,50,137,60,108,186,108,227,6,
    138,45,208,4,199,97,207,205,20,221,147,253,161,76,200,238,
    116,150,38,23,51,98,81,220,19,166,152,23,179,34,172,230,
    128,210,234,52,115,64,255,153,1,106,100,46,142,152,138,12,
    96,3,78,184,66,168,181,9,80,194,209,36,248,208,82,4,
    167,39,224,212,128,63,153,36,112,130,165,133,30,105,23,96,
    46,105,143,212,67,213,224,4,17,175,16,158,239,238,240,80,
    83,60,148,1,99,44,17,106,11,78,208,237,81,20,155,176,
    220,175,67,60,11,2,31,194,58,81,90,68,72,224,215,227,
    42,82,193,42,168,160,41,76,214,4,97,66,203,238,16,123,
    219,141,188,53,78,55,134,158,218,115,154,57,70,184,76,140,
    245,118,28,105,56,187,97,20,228,240,106,130,116,195,62,18,
    196,161,53,228,209,88,172,31,123,133,24,97,236,247,227,84,
    50,201,120,108,103,142,4,73,186,59,228,97,104,86,210,135,
    59,7,50,245,137,80,72,52,61,34,105,64,163,77,134,36,
    14,185,56,57,74,122,139,41,209,66,82,84,145,18,109,164,
    132,174,221,49,154,98,78,108,135,180,154,126,37,115,118,43,
    231,199,191,64,99,34,96,223,96,15,29,115,108,64,105,68,
    142,61,116,204,254,79,111,127,10,66,25,89,59,134,0,4,
    152,90,23,176,15,179,6,233,131,178,143,201,161,25,79,162,
    65,5,144,151,26,115,228,146,38,9,35,95,161,30,52,148,
    65,83,88,48,92,197,193,167,136,14,99,200,120,115,106,34,
    47,80,35,116,103,140,22,216,188,130,243,254,133,9,151,69,
    12,166,129,218,11,211,248,88,123,57,213,57,232,237,160,219,
    188,28,125,183,187,47,125,149,174,97,195,155,248,208,246,189,
    40,138,149,237,5,129,237,41,140,2,187,135,74,166,182,138,
    237,245,180,77,80,58,183,114,38,21,227,141,134,210,225,138,
    166,79,16,250,10,227,203,34,63,176,107,166,82,33,17,246,
    226,32,197,118,234,218,147,202,105,81,15,90,230,152,21,96,
    158,184,36,74,211,162,28,121,239,87,185,6,58,218,84,115,
    234,164,178,223,229,0,230,247,189,52,117,73,3,110,103,194,
    145,213,71,94,255,80,242,232,41,142,135,10,81,85,235,48,
    161,184,116,131,204,201,173,103,147,162,56,10,70,168,97,232,
    127,78,147,223,96,42,54,49,46,53,197,10,126,235,98,89,
    212,144,144,53,177,106,248,86,70,191,98,207,161,116,68,1,
    227,46,50,232,145,142,167,24,77,218,6,7,3,182,138,232,
    235,252,152,106,212,217,121,64,197,58,21,159,81,241,48,55,
    252,227,91,223,188,104,253,51,154,209,96,147,125,51,51,174,
    240,47,247,156,127,205,150,252,235,148,252,100,204,251,107,104,
    150,124,196,164,5,136,167,115,175,98,31,68,224,209,7,73,
    152,189,9,183,221,178,47,208,164,219,206,77,82,227,62,22,
    15,215,211,135,182,102,158,189,231,165,118,20,159,209,221,166,
    151,58,180,17,217,157,59,180,246,37,58,247,74,116,118,108,
    146,32,46,59,159,82,97,93,183,248,63,250,33,22,191,167,
    23,255,27,154,113,38,227,219,44,243,108,90,248,68,22,66,
    164,150,195,176,131,149,209,42,193,80,94,255,85,220,0,95,
    69,119,112,79,99,12,104,91,107,234,109,141,247,70,157,98,
    230,177,45,172,228,149,42,33,209,53,97,37,219,173,82,218,
    78,134,73,252,118,100,199,93,91,65,174,210,227,245,116,99,
    61,253,18,195,139,253,228,108,205,179,80,146,200,33,133,2,
    29,26,104,101,84,24,225,51,13,245,252,173,47,121,67,225,
    39,215,213,145,64,167,53,110,182,81,33,60,140,135,145,227,
    193,177,16,115,27,10,129,19,2,163,81,128,65,198,188,164,
    233,26,140,132,41,86,209,247,75,56,208,215,36,28,136,106,
    127,7,78,103,5,252,13,104,149,113,45,51,71,103,239,201,
    61,104,145,196,41,159,25,139,43,119,39,35,243,12,35,11,
    28,232,58,195,38,111,58,217,110,133,9,202,63,74,81,165,
    216,77,204,44,201,41,123,144,85,120,16,67,244,65,59,134,
    117,222,137,104,249,209,219,72,140,221,69,231,143,15,206,71,
    40,206,104,76,142,242,234,227,227,51,165,39,114,73,167,55,
    103,232,80,92,190,43,150,12,205,18,38,208,175,168,248,162,
    112,99,145,183,125,84,245,214,46,6,210,210,54,226,234,40,
    244,154,116,176,88,235,185,26,59,255,185,81,56,221,165,15,
    237,139,79,137,48,191,192,138,196,163,158,0,201,1,245,61,
    103,191,84,26,4,251,169,33,240,152,138,217,196,123,62,166,
    234,211,168,163,179,9,38,107,254,229,160,65,243,157,11,215,
    165,21,43,128,215,152,82,241,118,66,110,71,176,62,238,123,
    131,221,192,123,18,209,100,52,163,159,187,153,145,107,223,42,
    107,79,14,34,174,49,128,31,191,204,173,56,154,80,222,250,
    24,199,46,180,103,159,8,98,159,227,195,247,123,210,30,200,
    193,46,158,91,247,194,161,221,237,123,61,198,198,204,172,251,
    46,183,78,49,184,37,55,230,40,146,82,146,176,29,219,126,
    28,97,56,60,244,85,156,216,129,196,163,128,12,236,71,54,
    199,82,59,76,109,111,23,223,122,190,210,100,63,239,177,156,
    112,121,73,47,229,220,234,224,152,170,19,4,215,197,179,122,
    136,121,230,16,138,196,66,111,31,28,114,40,195,226,12,82,
    251,14,238,59,120,40,84,35,29,189,190,162,98,139,138,77,
    40,111,202,31,31,207,223,224,216,3,154,132,150,172,42,110,
    27,117,131,19,139,115,130,47,169,111,122,217,109,119,63,196,
    109,165,5,157,74,238,188,85,146,148,53,58,104,82,89,167,
    248,223,193,131,130,190,176,154,230,198,25,190,4,170,102,151,
    64,232,230,181,255,209,205,217,75,38,232,31,199,255,79,239,
    118,126,251,3,41,239,60,129,108,231,191,206,179,69,217,178,
    166,246,236,80,228,217,47,47,253,182,54,132,79,216,183,174,
    166,149,235,39,210,83,82,35,245,96,98,198,114,140,208,83,
    191,59,115,216,34,245,169,228,118,253,190,176,235,148,243,158,
    209,18,3,152,223,166,209,21,30,223,120,42,78,53,41,23,
    109,233,251,50,94,8,215,200,210,81,40,22,164,90,44,200,
    42,22,145,60,118,175,88,20,157,114,146,168,55,28,202,40,
    112,126,70,189,126,14,229,212,145,101,38,196,12,10,80,127,
    134,34,23,153,193,92,113,9,243,145,203,94,73,177,174,100,
    44,131,218,42,28,113,114,240,50,151,255,154,115,185,77,119,
    65,103,113,216,121,74,5,71,222,34,232,58,207,11,92,214,
    175,33,42,54,28,199,201,129,219,199,166,148,78,50,31,40,
    137,121,18,39,65,231,90,121,73,217,39,2,217,151,74,94,
    197,2,69,43,151,29,241,2,137,27,95,60,194,243,68,141,
    27,177,151,235,78,114,167,160,243,242,17,100,151,152,184,83,
    136,42,238,21,203,70,189,90,23,188,5,95,184,164,46,181,
    85,139,54,218,175,117,34,61,74,29,106,81,4,66,182,35,
    178,38,110,249,222,155,111,201,52,38,124,129,151,239,153,4,
    31,31,178,182,189,129,190,136,225,247,217,113,44,213,206,194,
    151,133,148,84,56,63,161,226,81,129,246,175,169,247,61,44,
    6,91,27,185,209,27,219,26,27,50,22,85,160,236,131,175,
    14,7,91,234,238,5,73,189,60,37,121,206,136,47,75,60,
    235,199,254,129,12,244,101,214,53,163,176,204,215,241,192,195,
    246,219,87,74,236,132,131,108,132,249,11,239,131,132,122,45,
    95,104,77,101,18,122,253,240,157,188,100,161,30,239,169,151,
    134,126,134,234,53,74,177,136,19,227,153,41,185,70,41,150,
    224,17,104,217,243,151,124,241,125,197,44,4,98,185,129,115,
    142,203,187,1,179,32,145,189,48,165,137,23,46,116,202,194,
    34,145,80,217,215,120,93,121,128,9,122,134,206,236,245,249,
    254,9,31,231,183,177,104,209,5,218,84,93,212,232,119,14,
    127,13,12,154,134,41,26,98,86,84,240,183,133,191,243,198,
    76,171,110,213,235,40,55,61,35,46,255,173,161,111,53,140,
    181,86,93,252,23,51,172,76,245,
};

EmbeddedPython embedded_m5_internal_param_GarnetIntLink(
    "m5/internal/param_GarnetIntLink.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_GarnetIntLink.py",
    "m5.internal.param_GarnetIntLink",
    data_m5_internal_param_GarnetIntLink,
    2409,
    7173);

} // anonymous namespace
