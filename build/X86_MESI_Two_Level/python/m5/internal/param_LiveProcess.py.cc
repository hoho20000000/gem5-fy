#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_LiveProcess[] = {
    120,156,197,25,107,83,27,201,177,103,245,66,128,64,152,151,
    49,96,214,103,48,186,135,33,201,149,147,75,206,113,197,231,
    115,82,174,58,115,174,229,174,108,147,84,109,45,218,65,44,
    150,118,85,187,35,176,46,80,169,10,174,36,159,242,45,255,
    34,223,242,3,115,221,61,59,235,5,75,220,85,37,214,9,
    212,244,246,244,204,244,123,122,135,38,164,159,101,252,254,206,
    6,72,170,22,128,143,191,2,94,1,180,5,236,89,32,164,
    5,254,44,28,149,32,90,2,225,151,224,13,192,94,1,100,
    1,206,17,41,194,31,11,16,126,170,185,230,50,174,202,32,
    174,26,14,224,218,99,240,170,200,36,11,250,227,32,75,176,
    87,134,231,225,44,20,101,5,142,198,33,170,128,192,79,136,
    59,191,232,215,33,157,49,6,123,85,228,90,67,174,113,230,
    154,101,174,116,180,74,163,60,195,175,130,63,14,111,80,242,
    9,240,39,88,138,73,240,39,25,169,129,95,99,100,10,252,
    41,70,166,205,242,117,216,155,49,248,181,28,62,155,195,231,
    114,248,124,14,95,200,225,139,57,252,122,14,95,202,225,55,
    114,248,114,14,95,201,225,171,57,252,102,14,95,99,124,26,
    228,12,4,54,4,183,32,248,0,14,4,248,117,82,7,45,
    253,114,239,54,200,34,4,235,176,183,14,18,127,111,195,185,
    64,179,207,228,102,108,240,140,107,217,140,59,60,99,19,246,
    54,65,226,239,29,61,99,12,118,27,243,24,22,193,127,241,
    211,16,136,169,73,4,199,50,78,130,40,116,131,240,32,10,
    44,26,175,16,160,32,106,18,40,224,183,140,223,71,20,77,
    49,112,40,161,236,24,77,103,184,130,0,156,227,91,180,131,
    95,128,165,51,65,15,65,1,78,17,41,194,1,15,4,197,
    148,227,12,227,99,6,78,113,245,18,156,50,101,247,121,184,
    10,69,85,230,0,152,225,0,208,195,56,153,134,209,253,128,
    98,151,112,219,29,150,91,145,220,91,44,157,186,134,192,237,
    122,177,215,113,191,10,142,229,179,56,106,202,36,105,144,248,
    170,74,58,116,186,81,172,218,193,190,26,35,78,55,244,58,
    210,117,213,56,62,196,56,77,5,10,245,86,69,124,60,138,
    130,80,145,146,237,68,197,65,87,213,178,217,110,39,242,123,
    109,169,38,144,242,132,41,143,227,56,138,27,100,21,135,128,
    34,208,125,213,82,36,99,135,182,104,144,112,12,146,111,17,
    108,31,70,29,137,32,108,245,123,219,45,217,185,119,247,160,
    191,189,223,11,218,254,246,139,207,126,233,62,125,188,251,196,
    253,230,36,114,191,146,199,178,189,221,237,43,100,221,238,220,
    219,70,137,100,28,122,72,186,172,225,22,50,145,238,201,73,
    208,114,83,49,15,101,187,43,99,210,58,153,162,173,197,164,
    152,21,55,69,65,204,136,41,17,148,141,51,201,54,53,227,
    204,127,167,206,180,210,210,128,254,20,169,115,45,56,99,132,
    60,214,32,103,146,15,11,228,58,212,19,29,211,18,112,110,
    193,159,10,196,112,134,176,136,153,108,103,142,156,211,153,172,
    151,170,192,25,122,187,68,190,252,110,133,151,26,227,165,44,
    56,69,136,110,46,194,25,150,11,100,69,18,194,163,42,68,
    83,32,240,33,168,82,56,139,16,131,247,197,105,25,195,160,
    152,133,129,14,95,210,198,15,98,50,186,67,145,219,24,55,
    212,8,141,228,169,67,167,102,60,132,102,98,79,239,68,161,
    118,230,65,16,250,198,185,58,60,14,130,54,134,135,67,54,
    228,213,152,173,29,121,25,27,121,184,217,142,18,201,33,198,
    107,59,211,196,72,220,7,93,94,134,118,37,121,120,178,47,
    147,38,133,19,134,153,94,145,36,160,213,70,17,34,14,37,
    247,28,109,113,131,3,162,142,33,81,198,128,104,96,64,104,
    108,197,170,137,105,177,19,144,45,155,165,52,205,139,38,58,
    254,3,218,35,2,142,44,206,205,83,174,10,200,141,126,227,
    220,60,229,204,167,209,79,64,40,43,165,99,242,163,123,137,
    122,13,231,112,204,96,240,32,239,125,74,101,246,38,5,65,
    9,48,42,181,199,49,146,116,136,176,223,75,52,131,150,178,
    104,139,34,116,23,113,241,49,10,134,83,72,163,230,188,128,
    81,129,18,97,42,99,157,64,242,2,238,251,87,14,183,180,
    86,112,16,168,195,32,137,78,116,134,19,206,229,110,23,147,
    230,89,255,235,253,35,217,84,201,26,18,94,70,61,187,233,
    133,97,164,108,207,247,109,79,97,5,216,239,41,153,216,42,
    178,55,146,6,57,210,185,97,226,40,91,175,223,149,14,35,
    58,120,252,160,169,176,182,204,242,3,39,102,34,21,134,193,
    97,228,39,72,167,169,45,169,156,58,205,32,51,71,44,0,
    71,137,75,172,180,45,242,81,238,62,52,18,232,74,83,54,
    129,147,200,246,1,23,175,102,219,75,18,151,36,96,58,135,
    27,105,125,236,181,123,146,87,79,112,61,20,136,80,45,195,
    72,106,210,117,82,198,232,206,10,133,81,232,247,81,190,160,
    249,41,109,125,157,3,177,134,53,169,38,22,240,91,21,243,
    162,130,225,88,17,139,86,179,152,6,95,118,214,44,144,226,
    192,94,23,169,227,49,24,207,177,146,52,44,46,4,172,19,
    5,175,243,17,97,52,217,89,39,176,65,224,14,129,77,163,
    246,251,214,189,118,89,247,71,180,159,197,10,55,11,169,106,
    89,110,185,23,114,107,42,151,91,231,148,35,167,124,170,6,
    133,92,126,20,72,253,104,194,100,20,231,31,58,29,243,143,
    152,57,147,240,176,205,231,1,109,186,227,44,145,24,183,16,
    108,110,36,155,182,142,58,251,208,75,236,48,122,27,234,54,
    13,234,162,70,129,238,172,144,229,115,161,220,202,133,178,99,
    19,7,197,177,115,155,64,113,152,233,63,28,189,233,91,218,
    244,127,160,253,38,211,88,155,226,24,155,16,77,10,20,242,
    71,197,56,97,23,145,254,34,57,33,111,253,69,60,248,158,
    135,43,120,150,177,7,232,56,171,233,227,140,207,68,221,146,
    154,170,22,148,12,82,38,63,28,20,96,33,61,165,18,58,
    70,186,113,244,186,111,71,7,182,2,35,210,253,141,100,107,
    35,249,28,11,139,253,224,173,197,211,34,18,203,46,21,1,
    93,20,200,46,42,8,241,153,150,122,252,186,41,249,32,225,
    39,215,213,53,64,55,51,110,122,64,161,115,216,27,150,241,
    6,87,65,236,104,168,248,141,196,21,227,153,43,72,149,103,
    180,217,56,251,161,32,22,49,235,115,94,160,111,129,188,64,
    97,246,119,224,6,86,192,223,128,108,140,150,76,83,156,51,
    199,100,207,44,177,83,23,115,42,6,158,74,86,154,21,86,
    90,50,48,109,186,53,62,108,210,83,10,219,146,127,228,234,
    73,118,138,20,210,214,38,159,61,197,44,123,216,65,63,234,
    164,40,94,76,32,50,62,102,26,177,113,170,232,158,113,253,
    98,109,226,62,166,192,213,93,189,111,239,140,233,109,92,146,
    232,229,91,223,80,61,94,21,115,150,142,16,14,158,95,17,
    248,44,75,96,97,104,239,81,184,181,203,5,52,119,120,184,
    186,250,188,32,9,138,44,243,116,133,179,36,183,6,183,183,
    244,161,147,240,11,10,149,95,32,34,241,149,80,128,228,50,
    250,134,187,93,130,22,57,252,220,18,248,58,139,253,195,27,
    126,157,213,111,173,142,238,31,56,76,205,151,139,5,21,153,
    11,69,58,103,173,204,229,218,155,4,94,143,36,221,200,161,
    247,219,94,103,223,247,30,36,180,21,237,215,52,233,101,25,
    217,235,121,217,41,49,196,16,241,249,241,115,163,195,241,72,
    186,212,251,169,220,44,59,103,130,31,53,185,42,124,115,40,
    237,142,236,236,227,251,233,97,208,181,15,218,94,139,253,82,
    72,117,251,218,232,166,216,177,185,228,229,218,145,80,83,176,
    19,217,205,40,196,18,216,107,170,40,182,125,137,109,191,244,
    237,187,54,215,79,59,72,108,111,31,71,189,166,210,65,126,
    49,79,185,189,242,226,86,194,157,212,171,19,66,71,230,88,
    23,223,200,3,236,41,123,144,53,18,250,192,224,50,67,253,
    20,119,139,58,103,240,164,193,215,63,213,215,21,235,33,129,
    123,4,182,33,127,8,191,111,95,254,6,87,166,27,130,132,
    204,85,22,203,86,213,82,51,23,211,244,25,205,27,144,172,
    79,196,143,72,86,89,132,189,146,73,217,50,113,202,10,189,
    78,18,172,82,189,223,27,55,196,9,134,147,76,172,25,226,
    20,195,105,38,214,13,113,134,225,53,38,206,26,226,28,195,
    121,38,46,24,226,34,195,235,76,92,50,196,27,12,151,153,
    184,98,136,171,12,111,50,113,205,16,109,134,183,152,248,129,
    33,222,102,184,206,196,13,67,188,195,112,147,137,13,67,252,
    144,225,71,76,252,24,210,91,187,79,152,120,23,246,182,192,
    47,51,101,155,106,88,229,127,172,97,92,4,70,150,254,167,
    255,207,210,229,252,246,39,17,221,121,0,105,51,51,172,108,
    137,188,94,53,93,182,2,97,154,121,54,251,142,86,131,175,
    10,174,15,202,27,183,25,75,79,73,237,163,245,17,41,202,
    197,79,111,252,151,183,181,40,235,228,74,70,167,223,103,58,
    157,115,27,215,159,99,215,153,235,64,186,131,228,235,94,197,
    125,51,53,214,117,125,225,199,70,112,173,180,183,134,204,24,
    229,204,24,116,109,25,202,19,247,29,131,232,238,153,24,189,
    110,87,134,190,243,51,154,243,115,200,119,193,204,51,146,136,
    160,186,251,79,200,26,171,73,108,123,231,176,185,122,55,19,
    169,132,231,20,101,119,214,179,228,27,149,99,57,130,255,101,
    34,184,193,166,203,14,23,231,11,2,124,156,100,39,137,243,
    56,243,200,210,224,240,236,248,244,18,118,197,40,54,119,124,
    200,35,62,140,235,228,202,53,78,114,107,156,248,106,117,32,
    151,31,7,116,173,205,235,92,205,65,107,241,53,162,126,86,
    55,6,114,203,86,160,133,186,98,152,86,34,235,209,195,16,
    225,101,120,124,133,106,52,106,84,67,124,216,94,189,171,69,
    233,229,69,193,7,101,15,230,123,45,155,61,229,237,227,91,
    35,45,246,131,76,180,36,69,245,91,210,16,45,140,165,134,
    143,26,29,135,219,169,123,229,26,221,220,26,136,15,49,68,
    183,123,165,157,186,221,156,157,232,65,221,28,200,151,208,253,
    58,102,17,47,245,3,44,180,28,191,99,165,132,33,242,247,
    174,212,174,151,211,14,113,174,41,124,24,248,18,109,46,223,
    45,129,138,10,71,122,81,227,75,108,102,163,190,235,114,76,
    187,248,220,118,221,209,245,127,116,231,245,103,218,130,42,24,
    246,127,162,140,29,224,188,24,248,99,85,203,85,193,173,246,
    165,127,58,229,104,229,140,70,146,235,215,228,126,226,128,41,
    64,105,239,203,210,185,249,255,99,241,221,183,46,84,124,41,
    111,186,99,170,105,124,129,178,227,117,244,245,42,143,167,87,
    45,137,62,61,248,31,0,244,242,224,124,76,224,110,86,2,
    127,109,246,237,220,219,50,134,216,218,85,113,16,182,112,119,
    122,193,224,255,4,116,238,169,91,151,152,30,119,122,109,60,
    62,253,47,185,202,24,102,251,18,151,182,233,69,94,181,60,
    144,105,55,232,232,43,108,238,175,243,227,126,236,33,62,127,
    137,154,200,56,240,218,193,119,242,29,249,245,122,169,19,57,
    208,6,236,214,79,148,236,188,35,138,12,123,29,247,169,236,
    68,113,255,105,228,75,181,114,105,252,161,239,199,142,23,182,
    164,81,248,178,89,30,166,239,94,122,141,171,205,114,145,119,
    136,89,112,48,53,203,218,192,241,71,237,168,249,74,250,41,
    207,234,112,158,47,163,14,153,145,130,195,12,243,61,227,69,
    107,81,204,166,56,191,251,92,110,218,56,62,99,60,16,208,
    124,49,207,191,216,188,80,190,12,43,42,185,153,35,75,96,
    125,161,160,47,19,31,240,221,33,93,185,212,233,166,126,172,
    42,42,244,119,26,255,90,216,216,88,5,49,46,166,68,9,
    255,214,241,239,140,53,89,175,22,171,85,228,155,152,20,87,
    253,172,97,218,143,91,107,203,85,241,61,163,153,164,106,
};

EmbeddedPython embedded_m5_internal_param_LiveProcess(
    "m5/internal/param_LiveProcess.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_LiveProcess.py",
    "m5.internal.param_LiveProcess",
    data_m5_internal_param_LiveProcess,
    2703,
    8364);

} // anonymous namespace
