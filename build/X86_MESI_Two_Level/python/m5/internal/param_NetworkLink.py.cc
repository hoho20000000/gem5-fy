#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NetworkLink[] = {
    120,156,197,89,109,115,220,72,17,238,209,190,121,215,94,123,
    215,239,78,156,68,112,9,89,94,98,3,87,129,131,11,41,
    238,114,129,186,170,195,151,146,143,74,178,80,165,146,165,217,
    181,108,173,180,72,99,59,123,101,127,193,41,224,43,255,131,
    111,84,241,247,160,187,71,163,200,142,13,169,186,203,98,123,
    103,71,173,158,151,158,231,233,158,158,177,15,249,79,23,63,
    191,182,1,178,191,11,128,0,255,4,28,2,68,2,250,22,
    8,105,65,176,4,7,53,72,54,64,4,53,120,13,208,175,
    128,172,192,57,86,170,240,135,10,196,31,106,173,229,66,171,
    113,149,86,27,95,96,223,51,112,88,101,145,5,147,22,200,
    26,244,235,240,60,94,130,170,108,192,65,11,146,6,8,252,
    137,113,228,23,147,14,228,45,102,160,223,68,173,59,168,213,
    98,173,37,214,202,223,54,233,45,183,8,154,16,180,224,53,
    206,124,22,130,89,158,197,28,4,115,92,105,67,208,230,202,
    60,4,243,92,89,48,221,119,160,223,53,245,197,82,125,169,
    84,95,46,213,87,184,190,0,178,11,225,42,132,107,16,174,
    195,64,64,208,161,110,209,226,151,253,13,144,85,8,111,64,
    255,6,72,252,219,128,115,129,230,119,75,45,110,114,139,197,
    162,197,38,183,184,5,253,91,32,241,111,83,183,152,129,221,
    222,10,194,19,254,27,127,122,8,15,168,57,44,142,101,154,
    133,73,236,134,241,32,9,45,122,223,160,130,192,244,169,168,
    224,167,142,159,39,132,106,10,12,41,206,29,81,61,195,30,
    4,96,155,192,162,17,130,10,108,156,9,122,8,43,112,138,
    149,42,12,248,69,88,205,53,206,16,167,46,156,98,239,53,
    56,101,201,238,243,248,22,84,85,157,129,232,50,16,250,53,
    54,166,215,8,3,224,180,107,56,236,14,207,91,209,188,183,
    120,118,106,17,11,119,236,165,222,200,221,145,234,36,73,15,
    191,8,227,195,30,77,95,53,201,134,209,56,73,85,20,238,
    169,25,210,116,99,111,36,93,87,181,240,33,197,102,42,84,
    104,183,170,226,227,65,18,198,138,140,140,50,149,134,99,213,
    46,90,187,163,36,56,138,164,154,69,201,231,44,121,154,166,
    73,218,163,85,113,168,80,84,140,15,135,138,230,56,162,33,
    122,52,57,46,178,223,99,177,189,159,140,36,22,241,112,114,
    180,61,148,163,135,15,6,147,237,189,163,48,10,182,95,124,
    244,51,247,119,79,119,63,119,191,58,73,220,47,228,177,140,
    182,199,19,133,170,219,163,135,219,56,35,153,198,30,138,46,
    91,184,133,74,100,123,118,18,14,221,124,154,251,50,26,203,
    148,172,206,230,105,104,49,39,150,196,109,81,17,93,49,47,
    194,186,1,147,214,166,109,192,252,71,14,166,149,187,40,226,
    41,114,112,45,56,227,10,33,214,35,48,9,195,10,65,135,
    118,34,48,67,1,231,22,252,177,66,10,103,88,86,209,163,
    236,2,200,101,237,81,186,171,6,156,33,218,53,194,242,235,
    77,238,106,134,187,178,224,20,75,132,185,10,103,232,182,168,
    138,34,44,15,154,144,204,131,192,135,176,73,116,22,49,146,
    247,197,105,29,105,80,45,104,160,233,75,214,4,97,74,139,
    238,16,115,123,45,35,77,178,173,177,167,246,157,182,65,8,
    151,137,145,222,73,98,13,230,32,140,3,3,174,166,199,32,
    140,144,30,14,173,33,247,198,106,81,226,21,106,132,176,31,
    37,153,100,138,113,223,206,2,41,146,246,96,204,221,208,168,
    52,31,110,28,200,204,39,58,33,205,116,143,52,3,234,109,
    26,20,113,200,185,151,105,136,27,76,136,14,82,162,142,132,
    232,33,33,116,109,211,106,139,5,177,19,210,90,250,181,220,
    205,171,134,29,255,4,141,136,128,3,139,125,243,148,163,2,
    106,35,110,236,155,167,236,249,244,246,71,32,148,149,203,209,
    249,17,94,146,46,98,27,230,12,146,7,117,31,145,43,51,
    154,68,130,26,32,43,53,226,200,36,77,17,198,189,70,45,
    168,43,139,134,168,194,120,13,59,159,33,50,156,66,206,154,
    243,10,178,2,103,132,174,140,113,2,197,171,56,238,159,153,
    110,121,172,96,18,168,253,48,75,78,180,135,83,157,195,221,
    46,58,205,179,201,151,123,7,210,87,217,29,20,188,76,142,
    108,223,139,227,68,217,94,16,216,158,194,8,176,119,164,100,
    102,171,196,190,151,245,8,72,231,134,225,81,209,223,100,44,
    29,174,104,242,4,161,175,48,182,44,241,3,59,102,38,21,
    210,96,63,9,50,148,83,211,161,84,78,135,90,208,50,39,
    60,1,102,137,75,170,52,44,234,145,239,126,98,102,160,35,
    77,221,16,39,147,209,128,131,151,31,121,89,230,210,12,88,
    206,116,35,171,143,189,232,72,114,239,25,246,135,19,162,170,
    158,195,84,98,210,58,25,99,108,103,131,226,36,14,38,56,
    191,208,255,144,134,94,103,34,182,49,38,181,197,42,126,154,
    98,69,52,144,142,13,177,102,249,213,156,124,197,94,179,74,
    134,3,163,46,114,224,145,140,231,24,73,122,22,7,2,182,
    137,200,235,252,128,106,212,216,185,75,197,61,42,190,71,197,
    125,99,246,251,182,189,125,217,246,39,52,158,197,6,251,149,
    220,180,194,183,220,11,190,53,95,242,173,115,242,145,83,222,
    85,195,74,201,63,42,100,126,50,107,60,138,253,15,65,71,
    255,35,101,246,36,220,108,203,126,64,131,238,56,27,52,141,
    239,96,113,255,94,118,223,214,172,179,247,189,204,142,147,55,
    84,183,233,165,14,106,68,116,103,147,86,190,68,229,97,137,
    202,142,77,26,196,99,231,3,42,170,215,45,253,247,167,191,
    244,67,189,244,191,165,241,230,114,174,205,51,199,102,133,79,
    68,33,60,26,6,132,93,172,76,214,8,132,242,234,175,225,
    198,247,60,222,196,189,140,17,160,237,172,173,183,51,222,19,
    117,106,104,162,90,88,51,149,58,225,48,168,192,106,190,75,
    101,180,141,140,211,228,213,196,78,6,182,2,51,165,71,247,
    178,173,123,217,199,24,88,236,199,111,86,60,15,34,169,28,
    83,16,208,65,129,214,69,133,49,62,83,87,79,95,249,146,
    55,18,126,114,93,29,3,116,50,227,230,27,20,130,195,104,
    88,6,13,142,130,152,209,80,240,155,10,20,173,2,10,50,
    229,25,13,214,98,28,42,98,13,189,190,132,2,125,42,132,
    2,209,236,175,192,9,172,128,191,0,173,49,174,100,238,226,
    236,57,198,123,150,72,157,178,152,83,113,229,174,100,229,94,
    97,229,33,3,221,102,220,230,205,38,223,165,48,45,249,91,
    41,158,20,187,72,37,79,109,202,222,83,45,188,135,1,122,
    167,157,162,122,209,129,104,241,209,211,72,141,93,69,231,140,
    119,47,198,38,206,99,42,28,221,213,251,70,103,70,15,227,
    210,140,94,190,193,134,226,241,45,177,108,105,134,48,121,126,
    78,197,71,133,3,11,35,123,143,147,187,115,57,128,150,54,
    15,87,71,159,23,52,131,42,207,121,161,193,94,82,234,131,
    211,91,250,161,157,240,83,162,202,79,177,34,241,104,38,64,
    114,24,125,205,217,46,149,22,1,126,110,9,60,86,98,254,
    240,154,143,149,250,244,232,232,252,129,105,106,62,28,44,40,
    200,92,8,210,165,213,42,32,215,104,82,241,106,42,238,70,
    128,62,138,188,209,94,224,61,166,221,48,163,241,124,227,94,
    150,153,123,167,60,119,114,12,113,205,244,249,241,99,99,195,
    241,84,178,212,71,160,15,155,60,119,246,132,32,241,57,42,
    124,181,47,237,145,28,237,225,249,116,63,28,219,131,200,27,
    50,46,149,220,182,47,141,109,138,129,45,57,47,199,142,140,
    146,130,157,196,246,147,24,67,224,145,175,146,212,14,36,166,
    253,50,176,31,216,28,63,237,48,179,189,61,124,235,249,74,
    147,252,162,159,114,122,229,165,195,140,51,169,195,19,170,78,
    13,88,23,79,228,33,230,148,135,80,36,18,122,195,224,48,
    67,249,20,103,139,218,103,112,167,193,227,159,154,232,136,245,
    9,21,15,169,216,134,242,38,252,190,177,252,37,69,60,26,
    130,150,171,46,110,90,77,75,117,47,186,233,51,106,151,189,
    237,172,255,122,23,103,149,85,232,215,140,203,214,73,83,54,
    232,56,73,101,147,226,125,191,101,132,179,92,206,177,176,109,
    132,243,92,46,176,176,99,132,93,46,23,89,184,100,132,203,
    92,174,176,112,21,242,171,170,53,22,174,67,127,3,130,58,
    75,110,80,192,104,124,195,128,193,30,55,53,95,75,191,205,
    56,225,252,234,255,50,117,231,49,228,153,195,117,49,66,148,
    237,106,235,24,17,10,147,57,243,178,239,104,51,248,92,190,
    126,21,73,93,63,149,158,146,26,163,187,83,50,148,35,141,
    30,248,232,141,227,23,105,83,205,216,244,155,194,166,115,206,
    153,38,203,12,157,185,123,163,11,63,190,227,84,156,164,82,
    22,219,209,183,107,188,8,174,149,39,178,80,44,70,189,88,
    12,186,35,140,229,137,251,214,130,232,84,149,20,189,241,88,
    198,129,243,99,106,243,19,40,167,156,172,51,21,70,80,144,
    59,131,34,139,153,195,28,115,25,51,153,183,61,145,226,101,
    201,80,134,179,83,56,223,180,128,101,6,191,54,12,238,221,
    132,114,36,119,62,165,130,99,119,17,182,157,167,5,34,31,
    92,77,207,125,204,69,101,228,158,132,129,218,167,179,207,59,
    233,97,118,197,39,166,11,82,117,235,202,150,17,86,221,48,
    224,190,255,187,6,245,74,113,48,127,86,223,189,94,59,66,
    106,199,254,132,59,125,7,53,234,121,206,244,156,11,175,105,
    119,236,103,46,238,130,238,113,140,73,238,245,221,95,80,51,
    221,151,133,156,139,94,209,46,76,149,139,175,51,238,251,127,
    233,80,199,116,84,43,36,76,88,142,52,129,140,164,146,111,
    251,151,34,86,230,71,238,64,98,90,146,76,240,132,215,96,
    33,182,113,221,233,237,228,116,123,241,39,200,47,97,112,39,
    23,117,220,203,87,68,254,107,53,235,77,193,105,210,165,127,
    24,148,100,245,66,118,27,204,17,103,146,57,36,81,68,244,
    60,111,225,249,184,229,255,65,240,189,165,230,61,95,168,154,
    204,134,92,132,87,116,199,27,233,171,49,126,159,31,147,51,
    29,140,248,242,150,18,63,231,135,84,60,40,60,234,23,212,
    154,48,27,61,220,50,166,111,105,211,159,68,137,127,40,3,
    125,37,200,119,185,163,135,76,247,107,84,63,75,70,30,202,
    111,94,169,177,27,142,242,142,186,151,222,7,41,181,90,185,
    36,205,100,26,122,81,248,181,190,132,54,98,190,124,185,106,
    118,124,119,95,150,112,206,117,121,255,226,181,77,229,48,204,
    176,59,238,235,66,155,60,154,19,198,234,246,149,52,46,183,
    159,26,233,244,113,70,95,101,60,230,155,139,207,176,232,208,
    61,225,76,83,52,232,123,1,191,45,140,244,86,69,180,196,
    188,168,225,119,7,191,187,214,92,167,89,109,54,81,111,118,
    78,152,223,59,72,210,150,117,103,185,41,254,3,151,182,132,
    15,
};

EmbeddedPython embedded_m5_internal_param_NetworkLink(
    "m5/internal/param_NetworkLink.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_NetworkLink.py",
    "m5.internal.param_NetworkLink",
    data_m5_internal_param_NetworkLink,
    2465,
    7326);

} // anonymous namespace
