#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_core[] = {
    120,156,197,89,221,115,220,72,17,111,105,215,107,175,237,245,
    71,236,216,249,112,18,229,195,201,230,203,134,186,58,56,184,
    144,34,177,157,96,72,236,32,251,72,178,119,160,146,53,227,
    181,98,173,180,72,179,73,246,202,174,2,124,197,93,81,60,
    243,192,3,15,247,192,3,69,241,0,85,60,240,207,65,119,
    143,164,93,59,9,21,206,187,197,218,59,59,234,25,245,244,
    116,255,250,99,36,15,210,207,40,126,127,104,1,36,95,155,
    0,2,255,13,216,5,8,12,168,153,96,72,19,132,5,47,
    6,32,58,13,134,24,128,47,0,106,5,144,5,56,192,78,
    17,62,45,64,248,129,158,117,49,159,53,248,182,89,21,28,
    64,222,67,176,91,100,146,9,237,97,144,3,80,43,193,211,
    112,10,138,114,16,94,12,67,52,8,6,126,66,92,249,89,
    123,2,210,59,134,160,86,198,89,23,112,214,48,207,154,226,
    89,233,104,153,70,249,14,81,6,49,12,95,160,228,35,32,
    70,88,138,81,16,163,220,169,128,168,112,103,12,196,24,119,
    198,65,140,131,156,128,109,3,196,4,81,80,216,231,181,73,
    144,69,240,79,64,237,4,72,252,159,132,3,3,247,135,164,
    41,168,77,129,156,2,127,26,106,211,32,38,153,199,73,158,
    125,146,58,226,4,83,102,152,50,67,29,49,197,148,89,166,
    204,82,71,76,103,11,158,204,23,60,197,195,167,161,118,26,
    36,254,159,210,11,226,58,103,160,118,134,23,60,11,181,179,
    220,153,131,218,28,119,206,65,237,28,119,206,67,237,60,223,
    127,1,106,23,184,99,65,205,2,49,195,43,95,100,202,69,
    234,136,89,166,92,98,202,37,234,136,83,76,185,204,148,203,
    212,17,167,153,114,133,41,87,168,35,206,48,101,158,41,243,
    212,17,103,153,114,149,41,87,169,35,230,152,114,141,41,215,
    168,35,206,49,165,202,148,42,117,196,121,166,92,103,202,117,
    234,136,11,76,185,193,148,27,220,193,237,220,132,218,77,238,
    220,130,218,45,238,220,134,218,109,238,44,64,109,129,204,189,
    81,189,132,120,245,255,141,159,170,129,61,69,240,125,41,227,
    196,143,66,199,15,183,35,223,164,241,65,106,8,221,30,53,
    5,252,150,240,187,68,48,143,129,49,142,232,65,152,239,35,
    7,3,240,30,97,146,226,69,1,78,239,27,116,225,23,96,
    15,59,69,216,230,1,191,152,206,216,71,224,78,194,30,114,
    31,128,61,166,108,60,13,207,65,81,149,24,153,147,140,76,
    61,140,55,211,48,226,18,80,236,1,92,118,141,229,86,36,
    247,2,75,167,136,234,120,81,44,171,36,177,42,147,216,141,
    102,20,171,192,223,82,67,52,232,132,110,67,58,142,26,198,
    139,184,233,198,202,87,184,85,85,196,203,23,145,31,42,218,
    87,144,168,216,111,170,74,126,183,211,136,68,43,144,106,4,
    41,171,76,89,137,227,40,174,146,34,108,106,20,53,205,221,
    58,11,208,160,37,170,36,15,55,201,61,108,22,119,162,134,
    196,38,172,183,91,139,117,217,248,240,246,118,123,113,171,229,
    7,98,241,217,71,223,113,30,175,108,172,58,155,175,34,231,
    145,124,41,131,197,102,91,225,212,197,228,149,95,95,164,221,
    44,32,225,4,177,66,130,147,138,180,35,131,166,140,105,135,
    201,24,45,99,140,26,83,198,121,163,96,76,26,99,134,95,
    202,108,69,122,168,100,182,250,107,106,43,51,13,73,104,46,
    35,181,157,9,251,220,33,131,84,201,86,100,162,2,89,6,
    247,132,122,175,27,112,96,194,103,5,154,176,143,109,17,35,
    136,149,219,105,90,71,16,205,106,16,246,209,152,3,100,170,
    207,231,152,213,16,179,50,97,15,91,180,98,17,246,49,76,
    225,84,36,97,251,162,12,209,24,24,120,225,151,201,137,141,
    16,93,246,217,94,9,173,92,204,173,172,209,73,187,17,126,
    76,10,182,9,152,213,225,140,26,37,11,77,87,237,216,149,
    204,26,168,38,182,234,90,20,106,195,109,251,161,200,12,169,
    161,176,237,7,8,5,155,116,200,220,120,90,16,185,249,52,
    178,166,23,68,137,134,19,243,182,199,105,34,205,222,110,50,
    27,90,149,228,225,155,133,76,60,130,14,66,74,115,36,9,
    136,91,175,225,96,147,159,78,19,187,51,108,252,9,52,127,
    9,141,95,69,227,235,222,156,89,49,198,141,53,159,244,230,
    13,164,30,91,204,144,240,15,208,218,55,224,133,201,110,182,
    199,14,142,179,209,70,236,102,123,236,196,52,122,11,12,101,
    166,116,244,99,52,37,81,79,224,61,140,15,4,10,206,189,
    67,94,201,150,35,131,15,0,34,80,91,23,81,163,225,192,
    54,30,160,59,136,149,73,75,20,161,57,139,204,135,200,240,
    123,144,34,228,160,128,8,64,137,208,69,209,229,145,60,131,
    235,254,134,161,149,186,61,27,92,237,248,73,244,74,123,46,
    245,57,114,109,160,138,158,180,215,183,94,72,79,37,23,144,
    240,60,106,89,158,27,134,145,178,92,33,44,87,161,103,111,
    181,148,76,44,21,89,243,73,149,140,102,159,201,48,147,243,
    107,55,165,205,29,13,20,225,123,10,99,198,20,95,176,19,
    38,82,161,201,119,34,145,32,157,110,173,75,101,79,208,29,
    164,230,136,5,96,68,56,52,149,150,197,121,228,167,247,50,
    9,116,4,41,101,32,73,100,176,205,65,201,11,220,36,113,
    72,2,166,51,180,104,215,47,221,160,37,153,123,130,252,80,
    32,234,106,25,122,30,107,78,145,224,217,62,89,248,48,10,
    69,27,101,241,189,15,104,153,83,12,186,10,198,154,138,49,
    131,223,178,113,210,24,68,232,13,26,179,166,87,76,129,150,
    167,136,25,218,36,176,133,141,212,200,8,188,3,140,16,85,
    147,29,156,229,39,160,218,55,168,71,55,219,87,168,153,167,
    230,42,53,215,178,45,246,114,159,149,163,251,92,34,222,38,
    111,206,43,164,219,200,125,198,57,228,51,99,93,62,115,64,
    216,223,227,196,231,23,186,112,95,160,173,70,35,153,167,176,
    95,161,49,209,175,104,50,123,8,230,195,110,124,211,162,107,
    246,105,18,227,34,54,215,230,147,107,150,70,147,181,227,38,
    86,24,117,32,108,209,160,14,76,4,96,123,142,180,220,5,
    209,122,23,68,109,139,102,16,62,237,203,212,20,223,165,230,
    235,253,85,115,93,171,249,33,241,30,77,49,52,198,216,25,
    49,60,2,0,233,126,48,83,248,6,118,218,179,164,240,110,
    77,207,98,162,122,26,206,97,238,97,109,83,250,169,232,244,
    195,57,76,151,174,89,100,242,7,178,78,137,116,190,93,128,
    153,52,171,36,20,246,155,113,244,186,109,69,219,150,130,76,
    164,59,243,201,194,124,242,49,6,7,235,110,71,187,105,32,
    136,101,147,28,89,59,54,233,64,249,33,94,19,171,149,215,
    158,228,192,207,87,142,163,253,88,23,26,78,154,80,208,16,
    172,121,51,211,60,71,50,172,54,40,128,245,92,237,195,185,
    218,73,236,39,196,120,152,117,94,48,102,209,115,187,52,78,
    223,2,105,156,224,243,37,112,73,109,192,111,129,244,137,90,
    75,221,148,61,34,243,138,41,154,78,21,198,158,241,214,44,
    98,166,104,55,83,183,71,119,104,86,56,57,164,89,5,75,
    134,175,186,98,66,30,245,11,105,217,209,237,21,197,220,43,
    216,24,239,21,217,139,135,29,131,20,141,30,68,211,216,5,
    116,237,118,229,112,124,225,26,163,192,209,88,245,210,18,67,
    154,165,67,171,63,239,216,129,226,231,57,99,218,212,150,103,
    80,124,151,154,143,114,39,52,50,90,143,4,185,112,52,224,
    117,5,118,71,71,139,103,180,90,145,229,27,31,228,36,179,
    212,246,2,201,182,230,15,37,163,251,100,253,101,236,72,60,
    117,24,32,57,226,125,193,197,37,181,38,217,240,192,52,232,
    212,138,231,83,174,221,233,124,82,2,60,151,250,124,254,76,
    15,191,195,96,111,112,18,100,44,102,95,246,126,138,26,135,
    34,108,151,154,114,187,106,147,81,243,186,231,254,67,86,187,
    19,184,141,45,225,222,21,196,150,120,123,153,191,152,153,156,
    19,221,114,18,210,141,119,136,202,151,31,103,242,190,236,121,
    73,120,7,248,129,131,150,147,97,44,34,143,93,122,115,71,
    90,13,217,216,194,115,221,142,223,180,182,3,183,206,250,46,
    164,230,124,72,251,88,5,206,210,122,19,191,215,39,129,105,
    222,89,150,213,232,40,205,207,13,20,7,86,138,188,19,250,
    128,198,94,238,152,105,240,37,91,17,251,53,182,172,46,132,
    9,241,161,124,229,104,48,233,152,74,163,110,179,41,67,97,
    127,139,38,126,251,144,95,114,249,227,198,117,61,185,47,214,
    117,240,136,235,99,101,87,239,248,228,56,70,199,105,244,203,
    55,241,88,212,234,205,182,198,174,57,145,59,233,149,62,200,
    200,22,13,51,139,234,90,149,195,26,213,96,92,77,106,95,
    198,44,134,71,65,213,214,17,242,67,106,22,169,185,159,107,
    159,124,73,72,60,209,200,212,0,106,2,242,66,1,15,45,
    42,142,218,152,171,6,153,136,19,29,167,179,151,94,110,232,
    251,160,143,165,172,236,146,113,214,40,153,229,82,185,163,236,
    220,169,42,29,48,234,186,41,213,186,121,8,80,113,212,120,
    236,123,113,244,100,169,19,186,91,77,175,231,98,83,189,210,
    130,78,105,248,13,196,165,25,97,20,55,220,160,91,98,251,
    71,253,208,50,121,114,251,120,226,82,37,228,39,246,97,253,
    246,71,218,31,3,63,55,202,164,85,116,192,190,167,34,204,
    72,235,205,7,173,208,83,81,252,102,238,121,12,239,145,123,
    210,172,83,76,31,140,166,41,103,16,36,31,56,49,247,136,
    18,83,70,40,9,17,246,143,147,132,56,178,247,37,2,252,
    26,122,152,123,236,31,244,93,76,251,46,164,165,228,127,203,
    59,36,209,122,182,7,197,230,235,170,248,184,224,76,232,52,
    184,22,89,94,20,98,132,106,17,18,44,33,183,253,80,10,
    235,182,197,5,182,229,39,150,187,133,163,174,167,180,25,142,
    20,119,180,63,78,52,187,175,40,151,244,124,231,20,99,15,
    186,124,45,47,167,187,77,148,251,154,46,132,223,116,183,83,
    111,98,222,193,35,132,27,80,36,238,156,22,232,182,102,159,
    50,161,94,236,203,183,132,141,255,119,6,252,93,6,172,42,
    69,165,78,6,180,233,180,174,115,30,103,186,78,226,91,207,
    21,75,143,30,210,196,119,68,191,246,10,77,122,112,72,232,
    94,74,254,19,228,242,43,72,15,149,152,234,204,178,137,201,
    206,252,102,201,142,120,96,197,190,222,82,205,150,90,246,227,
    78,186,19,120,209,107,209,127,138,92,254,208,5,4,72,63,
    57,16,134,115,129,15,224,29,185,78,68,43,175,125,181,20,
    72,55,108,53,251,163,97,122,60,240,199,99,136,57,197,234,
    75,220,173,64,222,11,130,71,126,162,100,136,145,170,63,194,
    110,34,151,63,29,67,216,73,108,130,76,196,101,45,181,232,
    143,168,159,32,151,175,225,205,56,240,63,22,103,137,148,194,
    118,67,17,53,52,90,139,41,173,231,242,254,12,185,252,249,
    120,242,78,106,255,90,10,34,111,247,65,44,127,217,146,161,
    215,214,98,83,153,173,124,111,55,121,34,227,13,137,169,168,
    247,27,160,35,247,95,142,129,13,46,93,90,241,38,74,217,
    31,68,212,144,203,223,142,167,97,29,193,98,223,13,252,207,
    201,221,58,239,115,188,166,114,250,17,197,62,69,46,127,63,
    158,208,52,163,142,176,216,145,222,110,147,222,14,234,76,247,
    89,63,116,252,115,228,242,207,227,137,75,175,8,91,97,174,
    229,135,65,180,229,6,137,214,180,201,154,238,185,212,191,64,
    46,255,234,72,205,133,215,145,87,198,93,180,82,78,163,52,
    173,159,180,181,19,155,40,138,242,120,122,156,229,117,156,238,
    183,208,252,186,75,111,146,223,185,101,7,94,170,0,248,121,
    235,154,219,208,111,84,120,60,125,50,155,232,199,10,252,126,
    143,74,73,251,38,53,183,33,171,21,190,71,13,61,102,231,
    115,41,231,3,125,58,102,57,98,89,167,120,27,115,224,242,
    94,186,49,163,245,177,251,154,252,140,143,132,124,208,226,243,
    11,103,123,69,149,246,209,42,238,16,39,50,97,122,160,194,
    163,213,125,95,101,44,239,9,17,243,193,103,53,124,137,182,
    19,155,59,177,116,197,234,50,31,211,83,218,82,20,42,249,
    90,33,177,210,33,62,193,29,35,133,44,127,223,175,175,132,
    194,119,195,251,109,37,215,99,129,235,157,68,242,35,92,37,
    144,71,70,56,197,115,2,229,196,196,33,159,227,40,199,34,
    246,119,246,31,70,37,27,153,159,121,123,81,163,233,7,114,
    217,85,146,67,60,21,244,206,242,202,253,79,30,234,55,172,
    116,185,166,175,199,179,235,77,251,222,210,234,218,67,103,125,
    173,47,177,73,63,165,211,143,215,239,242,211,244,175,176,153,
    160,119,82,67,101,99,144,126,199,241,215,28,53,10,102,193,
    24,54,198,140,1,252,157,192,223,73,115,116,162,92,44,151,
    113,222,200,204,104,25,199,202,70,185,80,54,243,63,99,102,
    36,165,234,63,147,191,239,251,199,247,252,7,74,70,115,161,
};

EmbeddedPython embedded_m5_internal_core(
    "m5/internal/core.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/swig/core.py",
    "m5.internal.core",
    data_m5_internal_core,
    2944,
    9238);

} // anonymous namespace
