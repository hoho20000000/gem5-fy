#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_range[] = {
    120,156,213,90,237,111,28,71,25,127,118,239,124,231,179,125,
    246,249,37,118,94,156,230,210,198,212,5,26,131,170,66,161,
    33,106,146,166,37,208,56,97,29,145,244,168,56,214,183,227,
    243,58,119,187,199,238,216,201,85,182,4,184,162,8,241,21,
    36,190,33,33,33,33,85,66,2,33,129,144,144,144,144,248,
    194,7,62,240,255,192,243,123,102,119,239,206,73,80,26,223,
    81,176,125,227,185,153,217,121,222,223,102,182,65,201,207,20,
    127,222,168,18,197,47,217,68,30,255,89,116,159,168,101,81,
    205,38,75,217,228,157,161,157,49,10,79,145,229,141,209,7,
    68,181,28,169,28,29,114,39,79,223,202,81,240,138,89,181,
    156,173,42,62,110,85,153,39,120,239,113,186,159,151,33,155,
    186,19,164,198,168,86,160,187,193,60,229,85,145,118,38,40,
    44,146,197,63,1,67,190,215,173,80,242,196,56,213,74,188,
    234,28,175,154,144,85,243,178,42,153,45,97,86,158,240,74,
    228,77,208,7,140,249,36,121,147,130,197,20,121,83,210,41,
    147,87,150,206,52,121,211,210,153,33,111,134,84,133,182,44,
    242,42,24,97,100,223,173,205,146,202,147,63,71,181,57,82,
    252,55,75,135,22,211,199,67,243,84,155,39,53,79,254,2,
    213,22,200,155,149,61,78,200,234,19,232,120,115,50,178,40,
    35,139,232,120,243,50,178,36,35,75,232,120,11,41,192,19,
    25,192,147,50,125,138,106,167,72,241,223,73,3,144,225,156,
    166,218,105,1,120,134,106,103,164,179,76,181,101,233,156,165,
    218,89,233,60,71,181,231,228,249,115,84,59,39,157,42,213,
    170,228,45,166,112,150,50,56,231,101,250,121,170,61,79,138,
    255,206,11,28,239,164,160,248,130,204,189,128,142,119,74,70,
    46,200,200,5,116,188,211,50,178,34,35,43,232,48,215,55,
    86,207,178,218,248,255,226,159,85,139,123,26,90,180,167,162,
    216,15,131,186,31,108,133,190,141,249,34,26,40,89,3,77,
    142,63,5,254,92,131,182,69,36,170,198,66,100,109,59,224,
    29,44,226,103,60,27,120,121,57,58,117,96,225,139,159,163,
    125,238,228,105,75,38,252,124,178,226,128,245,103,150,246,121,
    247,49,218,151,145,141,187,193,89,202,235,130,40,200,172,40,
    136,153,230,135,49,205,234,65,140,246,24,131,93,23,188,53,
    240,190,40,216,105,96,85,143,220,160,169,86,129,178,46,1,
    239,118,39,140,116,203,223,212,227,152,173,7,110,91,213,235,
    122,130,191,68,29,55,210,190,102,90,117,158,191,238,132,126,
    32,91,180,98,29,249,29,93,206,158,174,183,67,111,183,165,
    244,36,143,220,144,145,235,81,20,70,171,224,132,131,70,163,
    233,220,111,106,224,213,6,136,85,32,36,77,124,149,155,181,
    237,176,173,184,9,154,221,221,181,166,106,191,250,242,86,119,
    109,115,215,111,121,107,247,94,251,66,253,230,245,141,27,245,
    59,15,194,250,59,106,79,181,214,58,93,205,75,215,226,7,
    126,115,77,200,185,200,35,115,216,139,71,234,9,78,219,170,
    213,81,17,72,140,167,1,199,154,178,230,173,231,172,156,53,
    107,77,91,126,33,149,22,24,81,78,165,245,81,34,45,59,
    241,13,44,48,43,145,158,77,7,210,129,72,86,33,45,8,
    41,7,217,48,81,204,249,166,69,135,54,189,151,195,130,3,
    110,243,108,202,213,76,82,11,198,148,205,86,69,58,96,113,
    142,65,88,239,47,203,86,227,178,149,77,251,220,178,28,243,
    116,192,254,130,151,242,16,183,59,37,10,167,201,226,47,126,
    9,90,110,5,172,211,247,246,11,44,231,124,38,103,163,159,
    160,198,243,35,112,216,129,106,174,78,164,163,97,124,177,227,
    234,109,167,156,138,131,217,36,98,93,15,3,35,185,45,63,
    240,82,73,26,93,216,242,91,172,11,14,120,40,187,201,178,
    86,232,102,203,32,206,70,43,140,141,62,201,222,206,12,22,
    98,245,86,71,182,1,84,224,35,15,123,42,110,64,119,88,
    167,204,142,192,0,187,13,93,31,28,152,234,2,246,59,45,
    210,175,176,252,11,44,253,85,150,190,233,45,219,101,107,198,
    90,247,193,184,198,88,98,180,249,84,21,126,71,134,253,22,
    237,216,98,105,251,98,227,188,154,133,36,150,182,47,118,140,
    217,207,146,165,237,100,156,77,153,101,137,209,57,126,70,20,
    132,53,133,215,94,130,97,138,232,32,241,49,98,21,52,226,
    101,181,49,250,32,66,30,195,19,216,202,6,136,60,117,150,
    120,243,113,72,126,159,18,21,57,204,177,10,48,70,108,164,
    108,245,60,188,200,112,127,32,186,149,88,190,72,92,111,251,
    113,248,192,216,46,250,226,188,54,152,71,183,187,183,54,119,
    84,67,199,231,120,224,221,112,183,218,112,131,32,212,85,215,
    243,170,174,102,219,222,220,213,42,174,234,176,186,18,175,66,
    106,206,233,84,105,178,253,186,29,229,72,199,104,138,231,55,
    52,123,141,121,249,34,86,24,43,205,50,223,14,189,152,199,
    241,104,83,105,167,146,122,161,80,16,16,149,168,99,41,192,
    242,58,24,234,149,20,3,227,67,10,169,150,196,170,181,37,
    110,169,209,114,227,184,14,12,100,92,116,11,84,239,185,173,
    93,37,187,199,188,31,35,132,174,193,97,248,222,230,36,48,
    79,9,21,236,131,48,240,186,140,140,223,120,5,112,78,138,
    214,149,217,219,148,173,69,254,148,172,19,86,145,117,175,104,
    45,217,141,124,162,105,89,152,88,4,149,36,34,182,18,41,
    179,230,29,178,143,88,181,197,196,133,0,104,170,243,105,244,
    240,176,115,1,205,10,154,79,161,121,49,165,113,168,132,150,
    143,18,122,13,155,219,66,93,35,151,208,145,89,77,125,192,
    106,166,251,172,230,16,218,191,47,209,207,207,245,105,126,14,
    180,134,147,169,173,136,101,177,56,217,178,176,88,108,132,131,
    98,191,134,3,232,186,115,10,104,156,231,230,197,149,248,197,
    170,209,167,234,182,27,87,131,176,167,196,85,76,26,223,4,
    21,118,150,193,230,62,37,109,246,41,169,83,197,10,104,168,
    243,2,154,252,147,248,252,210,136,249,220,52,124,126,27,155,
    79,37,90,52,45,218,51,105,53,160,2,96,126,49,229,248,
    6,119,186,75,224,120,63,171,151,56,88,221,13,150,57,254,
    8,187,17,130,202,38,4,73,28,51,121,100,234,156,252,177,
    180,83,0,211,183,114,180,152,68,150,24,174,191,19,133,15,
    187,213,112,171,170,41,69,233,210,74,124,113,37,126,157,253,
    67,245,114,143,189,137,47,136,84,7,182,108,108,27,76,208,
    126,192,223,177,213,245,135,13,37,206,95,190,213,235,198,148,
    77,182,81,79,130,10,75,66,88,111,167,172,23,103,198,41,
    7,124,216,240,249,62,145,241,29,120,223,198,206,19,194,244,
    156,181,196,198,219,199,114,124,114,96,57,20,232,67,146,196,
    211,162,31,18,24,202,108,75,44,85,108,34,181,139,121,44,
    71,154,177,111,61,54,146,216,137,190,219,137,229,179,65,116,
    202,18,32,146,200,194,121,195,143,250,220,66,230,249,115,73,
    238,209,111,23,249,204,46,68,26,79,229,221,243,131,166,1,
    78,179,13,97,153,24,129,201,224,46,12,186,24,73,52,114,
    226,145,245,80,69,49,110,246,172,3,252,187,61,65,192,135,
    158,181,22,108,35,123,81,139,47,162,121,45,179,67,43,29,
    27,22,38,231,142,58,189,62,239,94,55,30,227,30,192,229,
    5,193,153,162,132,154,107,221,70,75,137,180,229,7,33,233,
    42,228,255,38,119,20,151,22,22,41,241,122,31,72,142,137,
    214,134,20,15,109,11,85,36,215,139,146,196,163,8,41,16,
    215,137,190,212,131,73,49,58,65,206,134,132,66,209,198,244,
    35,14,0,142,99,192,203,246,241,41,147,172,17,26,154,135,
    195,55,33,200,237,82,203,109,111,122,238,101,15,251,98,243,
    70,106,50,118,138,104,165,31,81,40,187,245,4,92,229,235,
    235,41,194,123,195,79,13,47,145,28,1,24,68,69,149,189,
    176,33,102,125,103,91,85,219,170,189,201,37,222,182,223,169,
    110,181,220,166,112,60,151,8,244,109,16,114,131,36,88,27,
    42,126,98,74,130,5,33,45,141,109,40,58,165,146,215,226,
    93,225,126,43,166,86,19,75,175,219,137,7,134,180,176,253,
    186,200,214,100,196,80,250,64,61,168,27,117,50,142,21,179,
    110,167,163,2,207,249,28,22,126,126,192,54,37,13,114,163,
    166,89,60,26,249,214,185,220,245,57,197,107,246,236,114,134,
    93,228,2,219,230,163,42,153,55,252,77,105,19,243,172,100,
    134,122,97,20,72,138,76,131,84,166,38,107,21,231,134,100,
    76,242,74,99,207,28,204,184,42,212,93,227,39,95,69,179,
    134,230,106,198,127,216,147,167,184,184,81,137,8,116,133,178,
    132,129,235,23,29,133,93,14,89,69,25,228,133,245,122,143,
    152,161,82,244,101,50,37,170,176,187,96,157,177,10,118,169,
    80,234,177,59,51,172,114,79,31,77,2,149,240,221,30,208,
    169,40,108,223,244,27,81,120,251,90,207,131,239,118,26,195,
    199,27,137,203,46,245,146,196,103,192,23,43,130,48,106,187,
    173,126,148,157,175,142,132,207,48,231,238,241,240,69,78,228,
    199,206,32,135,71,132,238,215,72,14,146,82,116,53,234,237,
    43,58,228,200,116,171,243,214,110,208,208,97,244,104,12,186,
    73,79,17,131,146,232,147,79,14,44,147,208,83,36,37,229,
    39,199,32,175,32,35,147,8,70,208,255,227,4,35,113,240,
    163,113,3,223,167,33,198,32,231,43,163,199,211,185,76,73,
    90,249,159,226,15,80,186,149,18,161,69,128,125,217,159,36,
    159,49,138,195,245,176,218,8,3,246,83,187,208,133,170,167,
    182,252,64,121,213,151,171,146,109,87,253,184,234,110,242,172,
    219,208,70,16,71,18,189,43,148,4,156,251,15,16,83,134,
    79,58,182,57,236,179,183,44,183,238,23,82,102,111,38,43,
    126,212,228,78,62,170,246,117,46,40,220,22,28,114,175,118,
    192,99,157,81,133,68,3,237,195,199,248,142,79,60,20,254,
    56,213,173,85,248,166,94,40,116,80,190,155,224,39,33,175,
    23,1,111,101,172,197,97,68,18,1,143,112,216,185,142,69,
    111,13,96,61,84,212,191,206,219,124,143,146,42,147,99,158,
    93,178,57,234,217,37,75,10,198,43,158,23,57,88,250,168,
    131,251,35,125,252,36,59,115,112,137,95,27,167,228,82,167,
    132,179,127,147,118,123,165,196,229,225,202,197,220,180,76,166,
    55,45,83,233,77,75,57,189,105,49,87,46,21,92,185,160,
    51,155,92,185,212,230,210,155,148,121,82,11,114,147,178,152,
    222,164,44,193,153,194,244,255,71,157,233,207,232,255,195,153,
    102,120,62,157,51,253,47,37,243,146,200,112,50,159,105,174,
    225,202,27,104,30,147,201,139,243,29,77,22,47,230,254,115,
    122,114,246,254,49,210,157,19,253,182,200,133,129,86,81,75,
    185,123,202,27,161,87,147,243,164,62,80,191,160,99,101,108,
    149,1,18,182,221,120,123,180,216,67,37,12,148,95,30,15,
    241,65,222,55,25,192,110,203,141,124,221,29,53,239,251,64,
    253,234,120,36,204,14,144,32,151,137,42,30,37,250,201,1,
    34,192,252,250,120,168,79,15,162,238,191,175,70,137,183,92,
    123,48,140,143,142,135,244,204,0,210,123,110,203,31,169,170,
    39,119,49,190,247,155,97,162,29,107,55,210,163,70,91,128,
    252,246,120,104,151,7,208,86,193,72,121,141,200,193,32,126,
    127,60,148,231,7,80,214,161,216,100,208,28,37,226,72,231,
    50,64,127,232,67,255,217,170,129,133,1,10,218,42,106,170,
    248,174,175,183,143,84,2,209,104,238,15,122,240,254,52,100,
    74,36,224,197,184,171,237,81,226,108,141,68,34,32,164,7,
    238,207,199,38,100,110,144,144,120,99,119,19,23,6,163,38,
    3,149,89,10,236,47,67,38,130,203,106,237,250,65,124,68,
    171,220,209,80,145,66,251,235,99,140,251,19,175,47,255,70,
    105,125,137,66,252,177,245,229,145,195,213,59,104,190,137,6,
    87,39,78,13,205,123,104,190,141,230,59,104,54,209,224,96,
    222,193,49,179,131,75,111,231,62,154,32,19,8,104,75,107,
    211,44,167,30,117,85,250,13,222,230,167,216,15,252,76,78,
    98,139,165,220,19,126,185,90,125,70,109,147,155,84,0,189,
    254,208,140,102,92,25,62,77,29,222,230,239,199,182,143,12,
    227,27,193,200,49,254,46,111,243,143,99,99,92,74,49,222,
    64,242,214,195,249,189,145,224,140,215,255,254,217,195,89,42,
    189,35,239,12,246,141,21,178,49,220,182,154,59,214,110,236,
    96,68,195,164,146,43,12,1,84,239,127,13,81,94,118,50,
    244,201,43,87,233,37,199,181,148,226,117,183,109,222,167,145,
    249,228,82,62,54,37,168,112,4,7,135,206,103,208,188,156,
    217,238,151,208,224,21,11,185,138,144,44,193,220,136,8,30,
    145,106,250,49,135,11,201,82,27,123,156,56,129,164,155,238,
    195,59,126,227,190,92,2,200,201,186,156,87,203,185,142,198,
    89,192,209,35,187,129,157,144,169,36,39,232,78,216,190,234,
    235,116,75,152,186,228,131,55,2,201,44,239,108,71,202,245,
    110,188,41,238,32,25,187,198,238,82,61,212,60,88,238,13,
    222,102,138,121,4,110,252,170,223,188,30,120,190,27,92,237,
    106,117,43,242,24,30,106,169,119,24,74,75,29,153,17,139,
    151,115,176,190,4,180,15,83,177,30,81,72,145,240,104,220,
    142,185,87,53,47,69,92,150,18,102,135,155,10,222,37,26,
    47,89,69,252,159,225,255,246,148,149,179,115,214,132,53,109,
    141,241,255,10,255,159,181,167,42,165,124,169,196,235,38,23,
    167,74,60,87,178,196,49,165,191,214,226,100,50,106,126,109,
    180,139,175,240,88,223,170,127,3,26,210,96,208,
};

EmbeddedPython embedded_m5_internal_range(
    "m5/internal/range.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/swig/range.py",
    "m5.internal.range",
    data_m5_internal_range,
    3101,
    11579);

} // anonymous namespace