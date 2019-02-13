#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86TLB[] = {
    120,156,189,88,109,111,219,200,17,158,165,222,44,217,178,165,
    248,45,78,156,152,185,179,47,234,75,236,182,135,180,215,94,
    26,52,241,165,69,128,196,9,232,0,73,116,5,8,154,92,
    201,180,37,82,37,215,113,20,200,95,206,65,95,254,75,191,
    245,151,245,23,180,51,179,36,77,203,54,112,64,43,203,214,
    106,185,59,187,59,179,207,51,179,179,116,33,249,172,224,247,
    15,38,64,252,111,1,224,225,191,128,67,128,158,128,182,1,
    66,26,224,205,195,65,9,194,21,16,94,9,62,3,180,11,
    32,11,112,138,149,34,124,95,128,224,107,45,181,144,73,85,
    46,147,170,99,7,206,61,5,135,69,110,50,96,88,3,89,
    130,118,25,222,6,243,80,148,21,56,168,65,88,1,129,159,
    0,87,126,55,108,64,50,98,10,218,85,148,90,67,169,26,
    75,205,179,84,210,91,165,94,30,225,85,193,171,193,103,212,
    124,26,188,105,214,98,6,188,25,174,212,193,171,115,101,22,
    188,89,174,204,165,211,55,160,221,76,235,55,114,245,249,92,
    125,33,87,95,204,213,151,114,245,229,92,253,102,174,190,146,
    171,223,202,213,111,231,234,171,185,250,29,174,207,129,108,130,
    127,23,252,53,240,77,232,8,240,26,164,54,238,232,251,246,
    61,144,69,240,191,128,246,23,32,241,255,30,156,10,220,222,
    102,110,196,151,60,226,70,54,98,157,71,108,64,123,3,36,
    254,175,235,17,83,176,219,90,68,248,253,255,224,167,133,240,
    131,154,193,226,131,140,98,63,12,108,63,232,132,190,65,253,
    21,42,136,44,46,21,5,252,150,241,187,77,172,137,128,41,
    131,186,35,107,78,112,6,1,56,198,51,104,5,175,0,43,
    39,130,30,252,2,140,176,82,132,14,119,248,197,68,226,4,
    121,208,132,17,206,94,130,17,183,236,190,13,238,64,81,149,
    25,232,38,3,173,187,113,48,117,35,204,128,106,151,112,217,
    29,214,91,145,222,155,172,157,170,99,97,15,156,200,233,219,
    239,190,249,245,155,23,79,91,164,185,170,146,250,253,65,24,
    169,158,191,167,166,72,200,14,156,190,180,109,85,195,135,8,
    71,40,95,161,201,170,136,143,7,161,31,40,178,175,23,171,
    200,31,240,164,122,180,221,15,189,163,158,84,211,216,242,156,
    91,158,69,81,24,181,104,67,44,42,20,21,131,195,174,34,
    245,250,180,68,139,244,226,34,126,141,197,214,126,216,151,88,
    4,221,225,209,86,87,246,31,62,232,12,183,246,142,252,158,
    183,133,10,219,47,159,237,62,183,223,28,135,246,11,249,65,
    246,182,6,67,133,162,91,253,135,91,168,145,140,2,7,155,
    114,198,109,98,255,13,154,249,216,239,218,137,134,251,178,55,
    144,17,25,28,207,210,170,98,70,204,139,187,162,32,154,98,
    86,248,229,20,66,218,150,122,10,225,63,19,8,141,196,241,
    17,69,145,64,106,192,9,87,8,167,22,65,72,200,21,8,
    48,52,17,225,232,10,56,53,224,207,5,18,56,193,178,136,
    126,106,102,240,45,104,63,213,83,85,224,4,49,46,17,130,
    159,86,121,170,41,158,202,128,17,150,8,110,17,78,48,24,
    160,40,54,97,121,80,133,112,22,4,62,248,85,34,177,8,
    144,178,239,70,101,4,191,152,129,175,73,75,214,120,126,68,
    251,109,17,95,91,181,180,53,140,55,7,142,218,183,234,41,
    56,184,77,12,242,78,24,104,28,59,126,224,165,184,106,102,
    116,252,30,50,195,162,61,228,217,88,172,23,58,153,24,129,
    235,246,194,88,50,187,120,110,107,142,4,73,186,51,224,105,
    104,85,210,135,7,123,50,118,137,73,200,48,61,35,105,64,
    179,77,152,29,22,121,243,2,205,126,139,185,208,64,54,148,
    145,11,45,228,130,174,173,26,117,49,39,118,124,218,70,183,
    148,248,117,49,37,198,191,64,131,33,224,192,96,103,28,113,
    24,64,105,132,140,157,113,196,174,78,189,63,7,161,140,164,
    29,189,29,145,165,214,27,56,134,233,130,188,65,217,71,228,
    187,12,36,225,95,2,36,164,6,27,73,164,217,193,144,151,
    104,4,77,101,208,18,69,24,44,227,228,83,196,131,17,36,
    132,57,45,32,33,80,35,116,96,12,12,216,188,132,235,254,
    192,76,75,130,3,227,175,246,253,56,60,214,126,77,117,142,
    111,187,232,47,175,135,175,246,14,164,171,226,53,108,120,31,
    30,153,174,19,4,161,50,29,207,51,29,133,126,191,119,164,
    100,108,170,208,220,136,91,132,161,117,43,165,80,54,223,112,
    32,45,174,104,222,120,190,171,48,162,204,243,3,251,100,44,
    21,50,96,63,244,98,108,167,161,93,169,172,6,141,160,109,
    14,89,1,38,136,77,162,180,44,202,145,219,62,73,53,208,
    241,165,156,114,38,150,189,14,135,44,183,231,196,177,77,26,
    112,59,51,141,172,254,224,244,142,36,207,30,227,124,168,16,
    85,181,14,147,142,68,55,201,142,212,108,182,37,8,3,111,
    136,170,249,238,215,180,234,77,230,96,29,35,81,93,44,225,
    183,42,22,69,5,153,88,17,203,134,91,76,120,151,157,43,
    75,100,51,48,224,34,193,28,121,120,138,241,163,101,176,251,
    179,57,196,91,235,167,84,163,193,214,58,21,27,84,124,69,
    197,253,212,226,9,154,93,31,55,123,155,150,50,216,86,183,
    144,88,149,121,148,125,206,163,102,115,30,117,74,158,49,226,
    195,211,47,228,188,162,64,150,135,211,169,31,177,215,33,212,
    232,117,36,204,254,131,103,106,158,253,180,232,142,69,105,93,
    124,15,139,251,27,241,125,83,115,205,220,119,98,51,8,207,
    8,110,82,167,142,98,68,111,107,149,54,61,71,224,110,142,
    192,150,73,18,196,94,235,75,42,138,87,237,250,79,174,117,
    215,187,122,215,255,68,75,205,36,12,155,101,102,77,11,151,
    232,65,80,84,210,253,223,197,202,112,153,246,63,191,241,203,
    120,200,189,13,86,241,220,226,205,167,163,171,174,143,46,62,
    255,116,114,153,134,49,191,148,86,202,4,65,167,0,75,201,
    137,20,211,145,49,136,194,143,67,51,236,152,10,82,149,30,
    109,196,155,27,241,183,24,73,204,199,103,155,157,68,141,72,
    14,200,235,117,20,160,45,81,126,128,207,52,213,179,143,174,
    228,67,131,159,108,91,59,189,206,89,236,228,48,66,92,24,
    8,35,5,130,195,30,38,46,20,237,38,141,66,45,67,129,
    172,160,37,226,26,67,80,16,203,232,230,57,0,232,91,32,
    0,136,92,127,3,206,78,5,252,21,104,123,113,19,19,159,
    102,127,73,125,102,158,196,41,89,25,137,75,79,32,35,241,
    5,35,137,17,232,44,131,58,31,44,201,137,132,217,199,223,
    115,1,36,59,49,10,73,6,147,247,153,98,230,51,140,205,
    143,58,21,138,231,221,134,246,29,253,139,196,216,65,116,86,
    184,126,62,24,113,186,82,224,72,174,38,8,204,148,94,193,
    38,101,222,159,193,66,177,247,142,88,48,52,47,152,50,191,
    161,226,155,204,99,69,218,54,25,189,214,198,131,101,238,140,
    176,117,164,121,71,139,23,89,221,185,138,106,226,47,14,127,
    190,251,196,222,126,245,226,213,206,174,141,51,113,6,75,31,
    58,241,158,18,77,126,133,21,137,119,58,1,146,3,231,103,
    78,104,169,52,8,236,83,67,224,125,20,243,132,207,124,31,
    213,215,78,75,231,9,76,209,244,203,49,130,98,203,185,176,
    156,219,174,12,110,141,36,21,31,39,237,101,4,230,163,158,
    211,223,243,156,199,127,161,85,104,41,55,245,42,35,85,187,
    145,87,155,252,65,92,161,57,63,126,155,170,255,97,210,57,
    232,35,156,52,83,155,185,239,133,46,199,129,55,251,210,236,
    203,254,30,94,55,247,253,129,217,233,57,93,70,163,144,152,
    245,42,53,75,49,156,57,119,229,104,17,211,185,191,19,154,
    110,24,96,188,59,114,85,24,153,158,196,124,94,122,230,3,
    147,131,165,233,199,166,179,135,189,142,171,52,183,207,123,38,
    39,79,78,212,141,57,79,58,60,166,234,117,192,105,227,221,
    218,199,100,145,246,36,201,21,244,193,192,49,133,178,37,78,
    3,181,171,224,137,130,87,58,53,212,225,233,9,21,15,169,
    216,130,252,57,59,65,4,127,135,147,14,104,118,218,164,178,
    184,109,84,13,206,163,181,196,107,146,142,47,250,228,241,143,
    241,73,89,132,118,41,245,204,50,73,202,10,93,12,169,172,
    82,72,111,215,210,198,105,46,103,184,177,14,201,187,168,89,
    110,156,131,118,3,188,50,183,52,201,177,43,255,163,99,179,
    123,92,135,99,124,250,127,250,179,245,251,235,214,218,122,12,
    201,153,126,149,47,139,188,73,117,237,203,190,72,51,89,222,
    236,29,109,1,95,140,231,199,104,101,187,145,116,148,212,160,
    172,79,222,60,142,3,122,205,147,51,223,204,210,152,82,106,
    201,31,51,75,78,57,135,25,46,48,86,233,139,46,122,187,
    198,47,44,21,231,139,148,80,54,244,171,44,54,221,54,146,
    156,18,178,45,40,103,91,64,184,7,242,216,206,111,131,78,
    24,73,198,25,12,100,224,89,191,32,241,95,66,62,241,99,
    153,73,163,79,209,231,7,200,18,138,25,204,244,22,48,169,
    184,232,107,20,200,114,230,49,126,141,204,189,174,1,73,38,
    234,63,82,162,182,232,61,217,89,116,181,158,82,193,241,52,
    11,165,214,179,12,130,197,113,22,198,254,39,73,55,141,43,
    122,48,153,209,215,115,124,80,203,227,34,199,78,239,80,70,
    60,252,170,62,154,128,208,213,143,188,203,236,10,158,236,73,
    37,207,81,129,249,145,92,207,60,137,71,91,56,196,43,65,
    133,27,81,220,182,175,229,72,160,75,238,16,146,40,133,71,
    130,40,227,161,176,40,22,141,106,185,42,248,124,29,123,113,
    156,107,43,103,109,148,23,235,108,120,24,91,212,162,8,146,
    228,212,99,37,236,252,187,104,126,157,165,17,226,87,108,233,
    185,72,96,242,21,105,199,233,235,55,38,220,159,92,166,98,
    237,44,252,58,143,50,6,235,103,84,60,200,176,255,45,141,
    38,66,246,31,110,166,246,110,102,246,190,118,232,130,185,215,
    147,111,25,26,126,197,215,127,200,47,59,46,202,239,14,99,
    37,251,234,246,88,167,12,142,250,246,75,217,15,163,225,203,
    208,147,106,117,172,255,137,231,69,150,19,116,37,90,75,89,
    140,186,55,46,144,164,48,122,142,84,202,188,84,135,243,178,
    23,116,209,66,216,169,95,127,113,70,126,177,127,187,23,186,
    135,210,75,100,238,92,45,243,93,216,119,176,253,242,85,118,
    253,116,149,230,88,191,23,209,168,197,177,214,88,70,190,211,
    35,31,90,185,116,190,167,78,44,145,127,12,110,218,197,111,
    2,206,119,19,231,146,58,167,46,234,46,92,114,137,96,150,
    69,178,235,35,100,17,207,146,140,73,34,238,118,74,199,243,
    238,158,27,116,29,142,166,147,127,125,213,127,204,55,251,55,
    88,52,232,237,217,84,85,84,232,119,14,127,13,12,196,70,
    65,212,196,172,40,225,111,3,127,155,198,76,163,90,172,86,
    81,110,122,70,92,245,183,134,238,90,51,214,154,85,241,95,
    182,163,29,252,
};

EmbeddedPython embedded_m5_internal_param_X86TLB(
    "m5/internal/param_X86TLB.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_X86TLB.py",
    "m5.internal.param_X86TLB",
    data_m5_internal_param_X86TLB,
    2484,
    7184);

} // anonymous namespace
