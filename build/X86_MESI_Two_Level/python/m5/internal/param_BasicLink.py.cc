#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasicLink[] = {
    120,156,197,88,109,111,219,200,17,158,165,222,44,217,178,229,
    248,45,111,215,176,104,210,168,47,177,219,30,210,94,123,105,
    112,151,67,90,28,112,245,5,244,1,73,212,2,4,45,174,
    100,58,18,41,136,235,56,10,236,15,173,131,182,127,163,223,
    251,173,63,176,157,103,150,100,104,199,57,28,208,70,149,173,
    213,114,57,187,59,179,207,51,179,179,219,167,236,179,194,223,
    207,92,162,116,166,136,66,254,87,244,130,104,164,168,231,144,
    210,14,133,107,116,88,163,228,26,169,176,70,111,136,122,21,
    210,21,58,227,74,149,254,88,161,248,99,43,181,94,72,53,
    46,147,106,243,11,30,123,129,94,84,165,201,161,89,139,116,
    141,122,117,122,26,175,81,85,55,232,176,69,73,131,20,127,
    98,158,249,217,172,67,89,143,5,234,53,89,234,22,75,181,
    68,106,77,164,178,183,77,188,149,30,97,147,194,22,189,97,
    205,23,41,92,20,45,150,40,92,146,74,155,194,182,84,150,
    41,92,150,202,74,62,124,135,122,171,121,253,74,169,190,38,
    245,21,210,171,20,173,83,180,65,209,38,13,20,133,29,116,
    103,203,158,247,182,72,87,41,186,74,189,171,164,249,127,139,
    206,20,155,185,90,234,113,77,122,92,41,122,92,151,30,55,
    168,119,131,52,255,95,183,61,22,104,175,187,193,48,68,255,
    230,79,151,97,32,179,196,197,75,61,77,163,36,246,163,120,
    144,68,14,222,55,80,0,180,62,138,10,127,235,252,253,2,
    232,77,73,160,99,221,25,189,83,30,65,17,247,9,29,204,
    16,86,232,218,169,194,67,84,161,19,174,84,105,32,47,162,
    106,38,113,202,120,172,210,9,143,94,163,19,105,217,123,26,
    127,68,85,83,151,5,95,149,5,183,175,185,51,94,243,114,
    19,171,93,227,105,119,69,111,3,189,183,69,59,211,225,194,
    159,4,211,96,236,63,10,210,168,255,85,20,191,232,66,121,
    211,132,5,227,73,50,53,163,104,223,44,64,206,143,131,177,
    246,125,211,226,135,41,119,50,145,97,171,77,149,31,15,147,
    40,54,48,113,148,154,105,52,49,237,162,183,63,78,194,163,
    145,54,139,220,242,165,180,60,158,78,147,105,23,107,226,161,
    48,40,38,47,134,6,26,142,49,69,23,170,73,145,238,113,
    177,115,144,140,53,23,241,112,118,180,51,212,227,251,247,6,
    179,157,253,163,104,20,238,60,251,228,151,254,31,30,239,125,
    233,127,115,156,248,95,233,151,122,180,51,153,25,22,221,25,
    223,223,97,141,244,52,14,184,233,188,125,219,44,114,5,131,
    31,71,67,63,83,242,64,143,38,122,10,155,211,101,76,172,
    150,212,154,250,158,170,168,85,181,172,162,122,14,36,86,166,
    157,3,249,207,12,72,39,115,67,198,82,101,192,58,116,42,
    21,160,213,5,144,192,175,2,216,216,74,6,101,168,232,204,
    161,63,85,32,112,202,101,149,189,198,45,64,92,183,94,99,
    135,106,208,41,35,93,3,142,175,111,202,80,11,50,148,67,
    39,92,50,196,85,58,101,215,100,81,110,226,242,176,73,201,
    50,41,126,136,154,160,178,138,153,184,207,78,234,76,129,106,
    65,1,75,93,88,19,70,83,44,185,7,214,118,91,121,107,
    146,110,79,2,115,224,181,115,124,120,153,4,231,221,36,182,
    80,14,162,56,204,161,181,228,24,68,35,38,135,135,53,148,
    209,68,108,148,4,133,24,240,237,143,146,84,11,193,100,108,
    15,49,205,64,122,48,145,97,48,43,244,145,206,161,78,251,
    32,19,147,204,142,8,13,48,218,135,39,136,7,183,94,199,
    4,215,133,14,29,38,68,157,233,208,101,58,216,218,77,167,
    173,86,212,110,132,149,236,215,50,7,175,230,220,248,23,89,
    60,20,29,58,226,149,39,18,15,88,154,81,19,175,60,17,
    159,199,219,159,146,50,78,214,206,110,207,224,162,245,10,247,
    17,198,48,117,88,246,1,156,88,176,4,5,106,196,156,180,
    120,51,143,44,65,4,245,26,122,96,40,7,83,84,105,178,
    197,131,47,128,10,39,148,113,230,172,194,156,96,141,216,141,
    57,66,112,243,38,207,251,23,33,91,22,37,132,2,230,32,
    74,147,99,235,221,168,75,160,219,99,151,121,50,251,122,255,
    80,247,77,122,139,27,158,39,71,110,63,136,227,196,184,65,
    24,186,129,97,239,223,63,50,58,117,77,226,222,73,187,128,
    209,187,158,179,168,24,111,54,209,158,84,44,117,194,168,111,
    56,174,172,201,131,184,101,170,13,147,224,32,9,83,110,71,
    215,161,54,30,130,149,4,153,68,20,16,142,248,16,197,180,
    44,7,207,253,60,215,192,70,153,122,78,155,84,143,6,18,
    184,250,163,32,77,125,104,32,237,66,54,88,253,50,24,29,
    105,25,61,229,241,88,33,84,173,14,115,136,71,87,97,74,
    110,185,152,19,39,113,56,99,237,162,254,199,152,248,170,208,
    176,205,241,168,173,54,249,219,84,27,170,193,100,108,168,45,
    167,95,205,168,87,236,49,155,48,155,4,115,149,193,206,84,
    60,227,40,210,117,36,8,136,69,160,174,247,99,212,208,217,
    187,141,226,14,138,31,162,184,155,27,253,97,45,111,95,180,
    252,11,204,230,136,185,253,74,102,88,225,87,254,57,191,90,
    46,249,213,25,252,227,68,246,210,168,82,242,141,10,140,79,
    22,115,111,18,223,99,192,217,247,32,44,94,196,91,108,217,
    7,48,233,174,119,13,106,124,159,139,187,119,210,187,174,101,
    156,123,16,164,110,156,188,165,185,139,151,54,156,129,228,222,
    77,172,123,137,198,195,18,141,61,23,18,224,176,247,3,20,
    213,247,45,252,143,230,189,240,67,187,240,191,199,108,75,25,
    207,150,133,95,139,170,15,146,0,141,70,14,1,244,153,109,
    1,130,242,218,111,241,134,247,52,190,201,123,152,172,63,182,
    177,182,221,198,100,47,180,105,95,30,207,162,90,94,169,3,
    133,65,133,54,179,221,41,197,246,49,153,38,175,102,110,50,
    112,13,229,42,61,184,147,110,223,73,63,229,144,226,62,124,
    187,222,89,248,152,234,9,220,223,134,3,172,138,137,98,126,
    198,80,143,95,245,181,108,32,242,228,251,214,251,109,10,227,
    103,27,19,67,35,88,56,57,22,18,255,56,143,65,216,155,
    3,16,173,2,8,24,242,4,83,181,4,133,138,218,98,127,
    47,97,128,111,5,24,128,98,127,35,73,89,21,253,149,176,
    194,188,142,153,115,139,215,228,158,179,6,113,228,46,39,234,
    210,221,200,201,60,194,201,130,5,187,204,164,45,155,76,182,
    59,113,50,242,247,82,36,41,118,143,74,150,208,148,61,167,
    90,120,142,192,243,157,118,136,234,121,231,193,210,179,151,65,
    76,220,196,230,137,183,207,71,37,201,94,42,18,213,205,135,
    197,102,193,78,226,67,159,231,111,145,65,28,254,72,173,59,
    150,29,66,156,95,161,248,164,112,93,149,183,125,48,213,110,
    93,12,156,165,45,195,183,81,231,25,230,175,138,198,43,13,
    241,128,98,4,73,103,241,193,222,247,8,36,249,5,87,52,
    31,183,20,105,9,158,111,36,187,69,233,0,234,51,71,241,
    81,145,51,134,55,114,84,180,39,66,207,102,12,66,208,252,
    43,65,2,193,229,92,104,46,173,84,1,182,197,17,197,171,
    57,184,25,160,124,48,10,198,251,97,240,112,136,137,48,91,
    63,119,43,39,215,188,83,214,28,14,161,222,163,188,60,126,
    154,91,240,114,14,57,233,3,30,183,208,92,248,31,38,125,
    137,5,223,28,104,119,172,199,251,124,14,61,136,38,238,96,
    20,12,5,147,74,102,217,215,185,101,70,64,45,185,172,68,
    140,20,73,192,110,226,246,147,152,195,222,81,223,36,83,55,
    212,156,226,235,208,189,231,74,204,116,163,212,13,246,249,109,
    208,55,150,220,231,189,83,146,169,96,58,76,37,111,122,113,
    140,234,156,64,245,249,220,29,113,254,136,164,38,75,28,236,
    22,33,161,5,217,147,100,134,214,87,120,111,225,131,158,153,
    217,40,245,57,138,251,40,118,168,188,233,126,88,28,127,195,
    227,14,48,1,150,170,174,110,56,77,199,172,148,157,243,9,
    250,164,239,186,232,63,190,139,139,234,42,245,106,185,163,214,
    33,169,27,56,52,162,108,34,190,247,90,121,227,162,148,75,
    210,216,206,27,151,165,92,145,198,78,222,184,42,229,21,105,
    92,163,236,126,105,93,26,55,168,183,73,97,93,90,182,16,
    17,26,255,101,68,16,167,154,147,59,77,254,151,129,192,251,
    237,255,65,113,239,33,101,9,193,251,130,128,42,91,213,182,
    65,32,82,121,50,44,75,190,107,141,144,67,246,230,187,76,
    244,251,83,29,24,109,209,185,61,23,35,37,140,216,105,211,
    183,126,93,100,66,181,220,158,223,21,246,156,73,26,52,91,
    23,208,242,11,52,220,218,201,133,164,145,172,19,105,105,199,
    94,145,201,2,248,78,150,153,82,177,16,245,98,33,176,166,
    177,62,246,47,44,134,205,60,33,22,76,38,58,14,189,159,
    161,199,207,169,156,65,138,204,28,152,128,248,245,154,138,180,
    100,137,83,198,117,78,77,222,245,62,132,194,146,145,2,100,
    167,112,184,249,64,42,188,253,115,206,219,46,78,180,111,67,
    180,247,8,133,4,229,34,30,123,143,11,44,110,95,66,202,
    253,32,14,143,163,208,28,248,131,0,91,22,206,49,223,77,
    144,19,38,185,249,188,248,194,220,184,164,247,136,41,24,247,
    103,50,250,183,189,199,160,8,125,217,243,229,178,92,245,163,
    240,253,99,101,239,139,177,236,179,185,126,137,236,177,142,134,
    7,70,134,250,150,215,24,9,92,181,143,66,24,241,240,80,
    143,180,209,23,185,109,239,131,237,78,25,106,222,237,147,25,
    31,150,26,210,200,61,124,127,94,91,36,46,1,18,76,128,
    59,56,222,34,85,157,55,201,13,37,127,78,179,222,84,146,
    121,92,184,107,47,181,213,139,54,57,85,200,89,97,150,122,
    104,49,32,89,150,12,136,46,126,249,250,94,46,254,44,231,
    228,62,50,79,23,64,79,201,160,119,131,177,189,91,146,247,
    217,105,51,181,65,64,238,62,145,75,121,63,65,113,175,96,
    243,175,209,27,128,143,239,111,231,102,111,91,179,247,162,177,
    189,79,147,107,208,241,125,179,122,65,44,156,6,92,223,184,
    208,154,234,105,20,140,162,215,246,246,53,111,150,52,226,226,
    184,208,170,120,146,228,227,124,140,151,181,152,234,97,148,242,
    32,50,66,33,157,69,60,160,97,110,94,66,178,114,207,57,
    81,195,230,241,246,228,254,80,14,234,159,113,209,193,149,216,
    66,83,53,240,187,194,191,14,199,66,167,162,90,106,89,213,
    248,183,195,191,171,206,82,167,89,109,54,89,110,113,73,225,
    239,22,19,169,229,220,90,107,170,255,0,179,135,18,137,
};

EmbeddedPython embedded_m5_internal_param_BasicLink(
    "m5/internal/param_BasicLink.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_BasicLink.py",
    "m5.internal.param_BasicLink",
    data_m5_internal_param_BasicLink,
    2399,
    7013);

} // anonymous namespace