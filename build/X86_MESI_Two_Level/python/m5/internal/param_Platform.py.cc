#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Platform[] = {
    120,156,189,88,109,111,219,200,17,158,165,40,201,146,45,91,
    142,223,226,196,57,51,141,221,168,47,177,219,30,220,94,123,
    105,208,156,47,45,2,52,190,128,62,32,137,90,128,160,201,
    149,76,155,34,5,114,29,71,7,249,75,109,180,253,49,253,
    214,223,212,223,209,206,204,146,12,101,59,197,1,173,45,91,
    171,229,114,118,119,118,159,103,94,118,61,200,62,119,241,251,
    59,11,32,253,151,0,240,241,95,192,49,64,40,160,107,128,
    144,6,248,11,112,84,133,120,21,132,95,133,11,128,110,5,
    100,5,206,177,98,194,159,42,16,125,174,165,22,11,169,250,
    117,82,45,124,129,99,79,193,177,201,77,6,140,154,32,171,
    208,173,193,155,104,1,76,89,135,163,38,196,117,16,248,137,
    112,230,183,163,54,100,61,166,160,219,64,169,117,148,106,178,
    212,2,75,101,111,27,244,150,123,248,13,240,155,112,129,154,
    79,131,63,205,90,204,128,63,195,149,22,248,45,174,204,130,
    63,203,149,185,124,248,54,116,231,243,250,157,82,125,161,84,
    95,44,213,151,74,245,229,82,125,165,84,191,91,170,175,150,
    234,247,74,245,251,165,250,26,215,231,64,206,67,240,0,130,
    207,32,88,135,158,0,191,77,170,226,46,190,235,90,32,77,
    8,30,66,247,33,72,252,183,224,92,224,150,206,151,122,252,
    128,123,220,41,122,60,226,30,27,208,221,0,137,255,143,116,
    143,41,216,239,44,33,228,193,191,241,211,65,200,65,205,96,
    241,94,38,105,16,71,78,16,245,226,192,160,247,117,42,136,
    32,30,21,21,252,214,240,187,75,76,73,128,105,130,186,35,
    83,206,112,4,1,216,199,55,104,6,191,2,171,103,130,30,
    130,10,140,177,98,66,143,95,4,102,38,113,134,216,207,195,
    24,71,175,194,152,91,246,223,68,15,192,84,53,6,119,158,
    193,213,175,177,51,189,70,104,1,213,174,226,180,123,172,183,
    34,189,183,88,59,53,135,133,51,116,19,119,224,188,14,93,
    213,139,147,65,135,116,87,13,90,192,96,24,39,42,12,14,
    212,20,137,57,145,59,144,142,163,154,248,144,96,31,21,40,
    92,180,50,241,241,40,14,34,69,43,12,83,149,4,67,213,
    42,122,59,131,216,63,9,165,154,198,150,151,220,242,34,73,
    226,164,67,91,98,83,161,168,24,30,247,21,41,56,160,41,
    58,164,25,23,169,141,197,246,97,60,144,88,68,253,209,201,
    118,95,14,118,158,244,70,219,7,39,65,232,111,191,253,226,
    151,206,171,23,251,47,157,111,79,99,231,143,242,189,12,183,
    135,35,133,162,219,131,157,109,212,72,38,145,139,77,19,203,
    219,66,137,59,52,246,105,208,119,50,29,15,101,56,148,9,
    45,57,157,165,121,197,140,88,16,159,137,138,152,23,179,34,
    168,229,48,210,198,180,114,24,255,145,193,104,100,6,143,72,
    138,12,86,3,206,184,66,88,117,8,70,66,175,66,160,225,
    34,17,146,190,128,115,3,254,92,33,129,51,44,77,180,79,
    171,128,112,81,219,167,30,170,14,103,136,115,149,80,252,110,
    141,135,154,226,161,12,24,99,137,0,155,112,134,78,0,69,
    177,9,203,163,6,196,179,32,240,33,104,16,145,69,132,180,
    125,59,174,33,1,204,130,0,154,184,180,26,63,72,104,199,
    109,226,108,167,153,183,198,233,214,208,85,135,118,43,135,7,
    183,137,97,222,139,35,141,100,47,136,252,28,89,205,141,94,
    16,34,55,108,218,67,30,141,197,194,216,45,196,8,94,47,
    140,83,201,252,226,177,109,98,159,34,233,222,144,135,161,89,
    73,31,238,236,203,212,35,46,33,199,244,136,164,1,141,118,
    227,252,176,201,166,23,105,252,123,204,134,54,242,161,134,108,
    232,32,27,116,109,205,104,137,57,177,23,208,70,122,213,204,
    186,205,156,26,255,4,13,135,128,35,131,77,114,204,206,0,
    165,17,52,54,201,49,27,60,189,253,41,8,101,100,237,104,
    243,136,45,181,222,193,62,76,24,100,14,202,62,37,11,102,
    40,137,1,85,64,74,106,184,145,70,154,31,12,122,149,122,
    208,80,6,77,97,194,112,5,7,159,34,38,140,33,163,204,
    121,5,41,129,26,161,17,163,123,192,230,101,156,247,47,204,
    181,204,69,48,3,212,97,144,198,167,218,182,169,206,94,110,
    31,45,230,245,232,155,131,35,233,169,116,29,27,222,197,39,
    150,231,70,81,172,44,215,247,45,87,161,237,31,156,40,153,
    90,42,182,54,211,14,161,104,223,203,73,84,140,55,26,74,
    155,43,154,57,126,224,41,244,42,11,252,192,86,153,74,133,
    28,56,140,253,20,219,169,107,95,42,187,77,61,104,155,99,
    86,128,41,226,144,40,77,139,114,100,184,207,115,13,180,143,
    169,229,172,73,101,216,99,183,229,133,110,154,58,164,1,183,
    51,215,104,213,239,221,240,68,242,232,41,142,135,10,81,85,
    235,112,243,222,136,114,136,98,225,188,154,40,142,252,17,42,
    23,120,159,211,188,119,153,133,45,244,70,45,177,140,223,134,
    88,18,117,228,98,93,172,24,158,153,49,175,136,47,203,180,
    106,96,200,69,134,58,50,241,28,125,72,199,96,23,192,11,
    34,230,218,63,166,26,117,182,55,168,216,164,226,135,84,60,
    206,215,124,163,11,111,93,94,248,46,77,102,240,106,189,74,
    182,174,194,170,156,9,171,154,45,89,213,57,89,199,152,195,
    104,80,41,89,70,133,214,30,79,231,182,196,150,135,112,163,
    229,145,48,219,16,70,215,178,5,208,164,123,246,42,169,241,
    16,139,199,155,233,99,75,243,205,58,116,83,43,138,63,146,
    220,162,151,218,151,17,197,237,53,218,246,18,137,251,37,18,
    219,22,73,16,131,237,71,84,152,159,218,247,31,221,242,190,
    247,245,190,255,129,38,155,201,88,54,203,236,154,22,30,81,
    132,192,168,231,8,236,99,101,180,66,8,148,183,126,5,131,
    221,155,104,13,227,23,111,63,133,176,150,14,97,28,7,117,
    114,153,59,179,160,154,87,106,4,66,175,2,203,89,100,74,
    41,116,12,147,248,195,200,138,123,150,130,92,165,167,155,233,
    214,102,250,37,250,19,235,217,199,237,206,124,71,34,135,100,
    251,218,23,208,166,168,32,194,103,26,234,197,7,79,114,240,
    224,39,199,209,166,175,179,23,39,11,74,136,12,67,97,228,
    80,176,243,195,20,134,124,222,205,227,208,44,112,160,117,188,
    166,153,154,12,66,69,172,160,177,151,32,160,111,133,32,32,
    130,253,13,56,87,21,240,87,160,13,198,109,204,44,155,109,
    38,183,155,5,18,167,180,101,44,174,141,68,70,102,15,70,
    230,41,208,96,134,45,14,48,89,100,194,60,228,239,37,55,
    82,68,142,74,150,203,148,237,198,44,236,134,209,249,94,209,
    193,156,52,29,218,121,180,49,18,99,35,209,25,226,198,164,
    75,226,196,165,194,30,93,221,40,52,83,122,14,135,212,121,
    247,17,24,242,193,15,196,162,161,185,193,180,249,21,21,95,
    20,118,43,242,182,155,210,108,253,178,211,44,69,11,71,123,
    156,183,52,189,201,10,207,213,121,41,249,0,156,198,210,135,
    130,222,87,196,144,95,96,69,226,129,78,128,100,191,121,193,
    89,45,149,6,225,124,110,8,60,140,98,170,112,193,135,81,
    125,230,180,117,170,192,236,204,191,236,32,200,177,76,120,229,
    210,62,21,72,107,16,169,248,112,243,38,70,139,127,26,186,
    131,3,223,125,54,164,121,104,50,47,55,41,35,87,188,93,
    86,156,140,65,124,66,119,126,252,50,95,192,251,155,79,69,
    159,146,87,204,21,103,234,251,177,199,110,224,219,67,105,13,
    228,224,0,207,158,135,193,208,234,133,110,159,17,169,100,11,
    251,38,95,152,98,72,75,214,202,206,34,165,224,191,23,91,
    94,28,161,195,59,241,84,156,88,190,196,196,94,250,214,19,
    139,189,165,21,164,150,123,128,111,93,79,105,98,79,26,38,
    231,80,110,210,79,57,93,58,62,165,234,237,64,234,224,81,
    59,192,172,145,206,210,89,194,160,99,3,59,21,74,154,56,
    31,212,118,130,65,5,79,119,106,164,253,211,115,42,118,168,
    216,134,114,176,189,81,20,127,131,195,198,52,62,109,84,77,
    220,55,26,6,43,152,203,188,166,30,233,85,235,124,247,125,
    172,83,154,208,173,146,128,172,209,197,3,149,83,228,206,187,
    141,220,112,155,220,56,205,55,58,213,236,70,7,141,184,246,
    63,26,49,27,194,237,152,192,232,255,105,187,246,111,111,95,
    111,251,25,100,225,251,83,118,107,100,192,243,162,126,175,237,
    86,35,128,65,126,180,200,107,204,239,133,232,50,138,239,244,
    20,167,84,148,115,181,245,205,15,231,102,142,145,165,93,132,
    30,141,189,199,88,235,99,52,93,126,68,242,212,153,228,158,
    206,170,72,202,29,14,101,228,219,63,163,14,63,135,114,118,
    196,50,55,191,111,100,161,103,80,196,220,25,76,135,22,49,
    238,94,101,42,25,123,105,137,76,201,118,65,206,141,91,3,
    249,34,7,185,51,59,225,131,236,175,168,88,157,112,56,26,
    131,251,87,108,31,29,154,74,60,149,132,148,147,255,215,247,
    24,246,217,7,230,13,188,95,138,110,37,125,25,74,37,47,
    1,171,104,71,178,51,137,47,209,153,199,35,204,130,235,220,
    136,29,28,231,150,92,32,157,237,62,64,150,212,163,11,20,
    53,177,100,52,106,13,193,241,228,210,173,105,169,173,86,180,
    209,49,73,39,127,35,86,18,20,109,109,230,227,89,5,167,
    124,17,203,183,56,122,187,249,110,41,143,2,4,10,159,9,
    246,240,244,207,23,5,252,62,59,61,164,154,248,124,143,69,
    17,210,254,9,21,79,10,12,127,77,189,31,96,49,216,217,
    202,87,187,165,87,251,18,1,217,197,243,70,18,135,124,169,
    53,216,225,163,253,85,193,253,81,170,228,128,65,46,191,148,
    209,201,192,121,37,7,113,50,122,21,251,82,173,93,122,255,
    220,247,19,219,141,250,18,151,73,225,90,61,188,44,144,197,
    106,61,70,46,101,93,171,195,164,236,21,93,180,16,190,212,
    215,61,156,117,94,125,191,27,198,222,177,244,51,153,235,119,
    133,101,190,142,7,46,182,95,63,203,126,144,207,50,127,233,
    189,159,80,175,165,75,173,169,76,2,55,12,190,147,185,25,
    112,51,95,101,95,30,144,96,44,158,56,10,243,104,57,47,
    153,59,137,236,7,136,71,194,3,20,194,153,87,220,253,132,
    181,150,59,222,142,1,233,84,86,159,91,159,213,243,121,218,
    116,29,52,213,192,3,59,254,206,225,175,129,238,210,168,136,
    38,30,227,171,248,219,198,223,121,99,166,221,48,27,13,148,
    155,158,17,215,255,173,163,33,54,141,245,86,67,252,7,96,
    15,244,236,
};

EmbeddedPython embedded_m5_internal_param_Platform(
    "m5/internal/param_Platform.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_Platform.py",
    "m5.internal.param_Platform",
    data_m5_internal_param_Platform,
    2387,
    6875);

} // anonymous namespace
