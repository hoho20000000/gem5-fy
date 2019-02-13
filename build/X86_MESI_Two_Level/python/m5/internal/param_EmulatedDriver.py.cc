#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EmulatedDriver[] = {
    120,156,197,88,109,111,219,200,17,158,165,222,44,217,178,229,
    248,45,78,114,53,15,141,27,245,37,118,219,131,219,107,47,
    13,46,151,75,139,3,90,95,64,31,144,68,45,64,208,226,
    74,166,35,145,130,184,142,163,171,253,165,14,218,254,152,126,
    235,15,108,231,153,37,21,218,113,138,0,109,117,178,181,90,
    46,103,119,103,230,153,183,221,46,101,159,37,254,126,238,18,
    165,19,69,20,242,191,162,151,68,3,69,29,135,148,118,40,
    92,161,227,10,37,155,164,194,10,189,33,234,148,72,151,232,
    130,59,101,250,99,137,226,79,44,213,234,148,170,118,29,85,
    147,95,240,218,115,244,178,44,67,14,77,26,164,43,212,169,
    210,179,120,133,202,186,70,199,13,74,106,164,248,19,243,206,
    207,39,45,202,102,204,81,167,206,84,91,76,213,16,170,21,
    161,202,222,214,241,86,102,132,117,10,27,244,134,57,159,167,
    112,94,184,88,160,112,65,58,77,10,155,210,89,164,112,81,
    58,75,249,242,45,234,44,231,253,27,133,254,138,244,151,72,
    47,83,180,74,209,26,69,235,212,83,20,182,48,157,37,123,
    209,217,32,93,166,232,38,117,110,146,230,255,13,186,80,44,
    230,114,97,198,166,204,184,49,157,113,75,102,220,166,206,109,
    210,252,127,203,206,152,163,131,246,26,195,16,253,139,63,109,
    134,129,204,2,55,175,244,56,141,146,216,143,226,94,18,57,
    120,95,67,3,208,186,104,74,252,173,242,247,49,208,27,147,
    64,199,188,51,122,231,188,130,34,158,19,58,216,33,44,209,
    230,185,194,67,84,162,51,238,148,169,39,47,162,114,70,113,
    206,120,44,211,25,175,94,161,51,25,57,120,22,127,68,101,
    83,21,133,47,139,194,237,107,158,140,215,172,110,98,182,43,
    188,237,190,240,109,192,247,142,112,103,32,140,63,10,198,193,
    208,127,50,60,25,4,70,135,95,142,35,150,167,13,9,76,
    29,98,12,71,201,216,12,162,67,51,7,98,63,14,134,218,
    247,77,131,31,198,60,211,68,134,69,55,101,126,60,78,162,
    216,64,206,65,106,198,209,200,52,167,179,253,97,18,158,12,
    180,153,231,145,175,100,228,201,120,156,140,219,80,140,135,198,
    160,25,189,236,27,176,57,196,22,109,240,39,77,250,156,155,
    221,163,100,168,185,137,251,147,147,221,190,30,238,221,239,77,
    118,15,79,162,65,184,251,252,211,95,248,127,120,114,240,149,
    255,205,105,226,255,94,191,210,131,221,209,196,48,233,238,112,
    111,151,57,210,227,56,224,161,107,132,220,97,186,27,216,225,
    52,234,251,25,167,71,122,48,210,99,8,158,46,98,119,181,
    160,86,212,247,84,73,45,171,69,21,85,115,72,161,158,102,
    14,233,63,50,72,157,204,33,25,85,149,65,236,208,185,116,
    128,91,27,144,2,201,18,0,100,81,25,158,190,162,11,135,
    254,84,2,193,57,183,101,246,31,119,10,231,170,245,31,187,
    84,141,206,25,243,10,16,253,246,142,44,53,39,75,57,116,
    198,45,131,93,166,115,118,82,38,229,33,110,143,235,148,44,
    146,226,135,168,14,163,86,49,155,240,243,179,42,27,67,121,
    106,12,214,136,33,77,24,141,161,119,15,246,219,110,228,163,
    73,186,51,10,204,145,215,204,65,98,53,9,216,251,73,108,
    241,236,69,113,152,227,107,45,164,23,13,216,66,60,232,80,
    86,19,178,65,18,76,201,0,114,119,144,164,90,172,76,214,
    246,16,221,12,168,123,35,89,6,187,130,31,153,28,234,180,
    11,139,98,75,179,43,130,3,172,54,35,43,241,224,229,171,
    216,229,150,216,68,139,173,162,202,54,209,102,155,176,189,59,
    78,83,45,169,253,8,234,236,86,50,127,47,231,6,242,79,
    178,160,40,58,118,196,73,207,36,60,48,53,67,39,78,122,
    38,33,0,111,127,66,202,56,217,56,71,1,70,24,163,55,
    120,142,152,13,219,15,211,62,128,79,11,160,176,131,10,177,
    97,90,208,217,152,172,149,8,244,21,204,192,82,14,182,40,
    211,104,131,23,159,131,61,156,81,102,56,23,37,54,12,230,
    136,29,154,3,6,15,175,243,190,127,17,139,203,130,134,216,
    129,57,138,210,228,212,250,57,250,18,247,14,216,111,158,78,
    190,62,60,214,93,147,110,241,192,139,228,196,237,6,113,156,
    24,55,8,67,55,48,28,7,14,79,140,78,93,147,184,219,
    105,27,88,122,183,114,83,154,174,55,25,105,79,58,214,126,
    194,168,107,56,194,172,200,131,248,102,170,13,91,194,81,18,
    166,60,142,169,125,109,188,22,102,64,205,137,48,32,134,226,
    131,20,219,50,29,220,247,81,206,129,141,55,213,220,118,82,
    61,232,73,8,235,14,130,52,245,193,129,140,139,197,65,234,
    87,193,224,68,203,234,41,175,199,12,161,107,121,152,85,100,
    186,9,121,114,241,69,166,56,137,195,9,179,24,117,63,193,
    238,55,197,22,155,28,153,154,106,157,191,117,181,166,106,108,
    145,53,181,225,116,203,153,253,77,243,206,58,100,39,1,94,
    101,216,179,61,94,112,60,105,59,18,14,68,44,216,175,247,
    35,244,48,217,187,139,102,27,205,15,208,220,203,37,159,129,
    248,205,171,226,63,198,150,142,200,220,45,101,210,77,61,204,
    191,228,97,139,5,15,187,128,167,156,73,146,141,74,5,47,
    41,65,3,201,124,238,87,226,133,12,61,123,33,136,197,159,
    56,247,22,189,1,155,238,123,155,96,227,99,110,238,109,167,
    247,92,107,123,238,81,144,186,113,242,214,224,93,188,180,209,
    13,230,238,221,129,242,11,6,221,47,24,180,231,130,2,214,
    236,125,31,77,249,125,218,255,225,119,162,253,190,213,254,239,
    176,229,66,102,113,139,98,105,243,170,11,115,1,36,181,28,
    135,3,238,76,54,128,67,17,128,13,78,130,207,226,59,156,
    215,4,4,164,182,166,77,109,146,31,109,81,152,135,183,168,
    146,119,170,128,162,87,162,245,44,99,165,72,41,163,113,242,
    122,226,38,61,215,80,206,210,131,237,116,103,59,253,140,35,
    140,251,240,173,210,179,104,50,214,35,68,3,27,29,160,26,
    19,197,252,140,165,158,188,238,106,73,42,242,228,251,54,24,
    216,218,198,207,146,21,227,35,128,56,57,32,18,14,185,192,
    65,20,156,21,26,141,41,26,144,230,41,246,107,8,20,37,
    181,193,238,95,0,2,223,18,128,128,177,253,141,164,170,85,
    244,87,130,154,89,153,153,175,139,255,228,62,180,2,114,20,
    53,103,234,218,12,229,100,190,225,100,177,131,157,103,212,148,
    196,147,101,44,174,82,254,94,8,44,211,140,82,202,42,157,
    162,15,149,167,62,36,24,125,80,214,40,95,118,35,232,159,
    253,13,100,226,48,182,138,188,123,57,72,73,89,83,146,72,
    111,102,0,208,156,221,201,7,83,47,222,194,131,216,252,145,
    90,117,172,157,136,9,253,18,205,167,83,79,86,249,216,255,
    151,191,173,171,193,180,144,75,124,27,137,176,127,90,22,182,
    151,106,146,60,47,47,35,101,47,62,72,143,95,192,102,126,
    206,29,205,7,52,69,90,162,234,27,169,130,209,58,64,254,
    194,81,124,184,228,162,226,141,28,46,237,25,210,179,69,133,
    216,107,254,149,192,129,128,115,41,102,23,116,54,197,222,194,
    138,230,245,172,92,15,200,62,24,4,195,195,48,120,216,199,
    110,216,178,155,187,154,147,179,223,42,178,15,39,81,239,145,
    64,30,63,203,197,120,53,171,2,246,1,47,62,101,95,28,
    35,76,186,18,36,190,57,210,238,80,15,15,249,12,123,20,
    141,220,222,32,232,11,58,165,76,188,175,115,241,140,192,91,
    240,101,9,37,41,138,133,253,196,237,38,49,7,197,147,174,
    73,198,110,168,249,80,160,67,247,190,43,17,213,141,82,55,
    56,228,183,65,215,88,131,191,236,182,82,121,5,227,126,42,
    69,214,203,83,116,103,9,175,207,7,247,136,43,78,84,64,
    89,129,97,179,136,4,30,148,90,226,14,214,127,56,253,240,
    249,208,76,108,12,123,132,102,15,205,46,21,147,243,12,16,
    253,53,47,222,195,46,80,90,85,221,118,234,142,89,125,199,
    107,159,98,118,250,174,239,190,248,16,223,213,101,234,84,64,
    160,171,184,210,64,59,135,240,223,169,231,110,221,144,193,121,
    185,191,169,100,247,55,236,226,213,255,210,197,197,65,102,233,
    26,163,255,165,103,123,191,249,174,184,247,30,82,150,250,223,
    231,213,78,102,4,34,218,111,173,87,91,52,184,64,152,172,
    138,164,249,237,19,174,188,228,54,207,72,81,134,170,173,101,
    239,151,164,186,243,157,172,112,3,146,88,123,95,112,183,7,
    116,156,77,98,125,234,95,103,141,182,58,3,109,48,26,233,
    56,244,126,138,105,63,163,98,149,37,52,179,210,225,35,171,
    135,60,107,47,112,89,181,202,153,251,93,11,70,64,40,136,
    43,166,218,154,26,237,221,25,195,254,231,28,246,246,226,165,
    104,229,125,129,102,243,82,104,178,168,124,252,158,248,32,87,
    54,114,177,199,213,254,7,80,113,17,33,145,51,31,176,26,
    188,13,237,232,129,54,250,90,216,13,52,149,157,127,66,205,
    233,32,153,112,173,93,147,65,158,230,251,51,13,159,56,77,
    38,148,29,32,56,124,170,170,90,115,234,213,186,146,188,116,
    229,22,183,48,86,157,142,73,49,42,37,230,36,245,48,98,
    160,242,44,75,8,35,126,241,98,88,238,144,44,12,114,191,
    149,231,17,128,37,231,143,125,86,164,92,83,200,251,236,164,
    146,90,231,144,187,52,100,90,239,199,104,238,79,177,253,85,
    174,248,225,222,78,46,243,142,149,249,32,26,218,171,25,185,
    86,27,238,153,229,43,100,225,56,224,254,218,149,209,84,143,
    163,96,16,125,107,111,243,242,97,131,251,185,171,235,130,171,
    233,147,36,36,97,229,178,178,69,33,99,221,143,82,94,73,
    150,153,78,201,194,193,227,255,104,154,197,233,179,180,16,91,
    249,217,67,224,67,57,243,125,206,77,11,247,44,115,117,62,
    253,242,239,18,255,58,28,45,156,146,106,240,153,184,194,191,
    45,254,93,118,22,90,245,114,189,206,116,243,11,10,127,91,
    108,87,13,103,171,89,87,255,6,220,30,185,67,
};

EmbeddedPython embedded_m5_internal_param_EmulatedDriver(
    "m5/internal/param_EmulatedDriver.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_EmulatedDriver.py",
    "m5.internal.param_EmulatedDriver",
    data_m5_internal_param_EmulatedDriver,
    2269,
    6606);

} // anonymous namespace