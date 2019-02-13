#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherDevBase[] = {
    120,156,237,90,221,83,28,199,17,239,217,59,14,14,56,56,
    196,55,66,102,101,9,9,127,8,36,59,74,156,88,81,217,
    178,100,71,174,8,171,14,87,36,147,84,109,45,183,115,176,
    232,110,247,106,119,144,116,46,120,136,113,62,30,252,16,87,
    229,45,255,66,170,146,74,94,226,127,33,111,249,139,146,238,
    158,157,101,15,238,224,42,101,33,81,101,56,154,185,158,158,
    153,238,233,238,223,204,236,78,21,146,159,121,252,251,192,6,
    136,191,179,0,60,252,8,120,2,80,23,176,110,129,144,22,
    120,231,97,187,15,194,89,16,94,31,124,13,176,158,3,153,
    131,125,44,228,225,215,57,8,222,213,82,243,169,84,127,39,
    169,18,86,96,223,3,240,36,207,44,11,90,131,32,251,96,
    189,0,143,130,113,200,203,126,216,30,132,176,31,4,254,4,
    56,242,227,86,25,146,22,3,176,94,68,169,5,148,26,100,
    169,113,150,74,106,139,84,203,45,188,34,120,131,240,53,106,
    62,4,222,16,107,49,12,222,48,23,74,224,149,184,48,2,
    222,8,23,70,193,27,5,89,134,154,0,175,76,28,84,246,
    139,245,49,144,121,240,207,193,250,57,144,248,25,131,125,129,
    154,143,25,193,115,169,224,56,11,78,192,250,4,72,252,140,
    107,193,113,42,145,224,68,42,56,201,130,83,176,62,5,18,
    63,147,90,112,210,8,78,165,130,211,44,56,3,235,51,32,
    241,51,173,5,181,145,179,176,62,103,166,227,124,166,60,159,
    41,95,200,148,95,203,148,23,50,101,59,83,190,152,41,191,
    158,41,95,202,148,47,103,202,139,153,242,149,76,249,106,166,
    188,148,41,191,193,101,180,106,14,252,55,193,127,11,252,183,
    217,226,153,212,226,107,108,241,50,172,47,131,196,207,53,109,
    241,108,166,197,10,183,152,75,91,92,231,22,55,96,253,6,
    72,252,92,215,45,6,96,109,233,2,134,177,255,95,252,89,
    18,88,82,195,72,158,202,40,246,195,192,241,131,90,232,91,
    84,223,79,132,130,190,74,36,135,127,5,252,251,136,162,63,
    2,14,125,212,29,163,127,15,123,16,128,109,60,139,70,240,
    114,48,187,39,232,139,159,131,93,44,228,161,198,21,126,62,
    145,216,195,120,30,131,93,236,189,15,118,153,179,246,40,184,
    0,121,85,224,128,29,227,128,213,213,216,152,170,49,92,1,
    213,238,195,97,87,89,111,69,122,47,179,118,106,28,137,211,
    116,35,183,225,220,83,91,50,186,43,159,222,113,99,185,68,
    250,171,34,25,209,104,134,145,170,251,27,106,128,68,157,192,
    109,72,199,81,131,248,37,194,118,202,87,104,184,202,227,215,
    237,208,15,20,89,89,143,85,228,55,85,41,109,237,52,66,
    111,167,46,213,16,114,238,51,231,94,20,133,209,18,77,75,
    133,136,34,210,124,178,169,72,201,6,13,177,68,218,49,137,
    127,133,100,101,43,108,72,36,193,102,107,103,101,83,54,110,
    94,171,181,86,54,118,252,186,183,242,248,189,31,59,15,238,
    173,221,119,62,127,22,58,191,148,79,101,125,165,217,82,40,
    186,210,184,185,130,26,201,40,112,145,117,196,196,101,148,58,
    71,253,63,243,55,157,68,207,45,89,111,202,136,204,142,71,
    104,108,49,44,198,197,107,34,39,198,196,136,240,11,198,157,
    52,57,37,227,206,191,38,238,180,18,48,67,143,138,196,189,
    22,236,113,129,124,182,68,238,36,47,230,200,121,104,40,186,
    102,83,192,190,5,191,201,145,192,30,210,60,98,143,157,186,
    114,66,99,143,238,170,31,246,208,223,125,228,205,47,231,185,
    171,1,238,202,130,93,164,232,232,60,236,33,192,161,40,178,
    144,110,23,33,28,1,129,95,252,34,5,180,8,48,124,31,
    239,22,48,16,242,105,32,232,0,38,107,60,63,162,89,175,
    80,236,46,13,26,110,24,47,55,93,181,85,41,25,23,225,
    52,177,171,87,195,64,123,179,230,7,158,241,174,142,143,154,
    95,199,248,168,208,28,114,111,44,86,15,221,84,140,92,92,
    173,135,73,140,113,223,149,81,18,36,233,90,147,187,161,81,
    73,31,110,236,201,184,74,241,132,113,166,123,36,13,168,183,
    83,137,145,10,229,247,4,141,49,199,17,81,198,152,40,96,
    68,44,97,68,232,210,188,85,18,163,98,213,167,201,172,246,
    37,153,158,55,225,241,79,208,46,17,176,109,113,122,238,50,
    48,160,52,58,142,211,115,151,147,159,106,223,6,161,172,132,
    143,249,143,254,37,238,57,108,195,65,131,209,131,178,183,40,
    155,217,157,20,5,125,128,97,169,93,142,161,164,99,132,29,
    223,71,45,168,43,139,134,200,67,115,26,59,31,160,104,216,
    133,36,108,246,115,24,22,168,17,38,51,66,5,178,167,112,
    220,175,56,222,18,184,224,40,80,91,126,28,62,211,57,78,
    101,70,188,53,204,154,135,173,207,54,182,101,85,197,11,200,
    248,34,220,177,171,110,16,132,202,118,61,207,118,21,98,192,
    198,142,146,177,173,66,123,49,94,34,79,86,230,76,32,165,
    253,181,154,178,194,5,29,61,158,95,85,136,46,140,74,14,
    103,102,44,21,198,193,86,232,197,200,167,166,155,82,85,202,
    212,130,166,57,100,5,56,76,28,18,165,97,81,142,146,247,
    67,163,129,198,154,130,137,156,88,214,107,12,95,213,186,27,
    199,14,105,192,124,142,55,178,250,169,91,223,145,220,123,140,
    253,161,66,84,212,58,156,14,42,205,144,53,198,120,182,40,
    8,3,175,133,10,250,213,119,105,236,25,142,196,18,162,82,
    73,76,225,95,81,76,138,126,140,199,126,49,109,85,243,73,
    244,165,235,205,20,89,14,236,118,145,120,30,163,113,31,177,
    100,201,98,40,96,163,40,122,43,111,82,137,26,87,46,19,
    89,36,114,133,200,85,99,247,11,55,190,116,216,248,143,104,
    64,139,45,174,230,18,219,210,236,114,218,178,107,36,147,93,
    251,148,37,187,188,180,250,185,76,134,228,200,254,112,200,228,
    20,103,32,186,29,51,144,132,57,151,112,197,205,102,2,13,
    186,90,153,37,53,46,34,185,186,24,95,181,117,220,217,91,
    110,108,7,225,65,176,219,84,169,113,141,66,189,66,59,222,
    108,48,111,102,130,185,98,147,4,69,114,229,18,145,124,183,
    185,127,227,37,204,253,166,158,251,79,104,192,225,36,218,70,
    56,202,134,68,149,66,133,28,210,111,188,176,134,133,214,52,
    121,33,59,253,211,184,248,61,10,230,113,61,99,23,208,146,
    86,210,75,26,175,139,122,35,109,128,205,239,51,133,2,57,
    162,150,131,169,100,165,138,105,41,105,70,225,243,150,29,214,
    108,5,70,165,91,139,241,242,98,252,62,98,139,125,251,96,
    202,19,28,137,100,147,112,64,227,2,77,140,242,3,252,78,
    93,221,123,94,149,188,152,240,55,199,209,48,160,119,52,78,
    178,72,161,119,216,29,150,113,7,3,33,110,107,8,255,78,
    199,23,131,169,47,200,150,135,52,218,32,59,34,39,166,49,
    241,51,110,160,191,28,185,129,2,237,15,192,251,88,1,191,
    7,154,100,156,202,36,203,57,119,76,254,140,147,56,109,101,
    118,69,199,149,201,74,242,194,74,80,3,19,167,89,226,5,
    39,89,169,112,111,242,199,12,164,164,43,73,46,217,223,100,
    243,39,159,230,15,123,168,167,213,34,223,158,66,52,251,152,
    107,36,198,201,162,119,142,151,219,225,137,55,51,57,70,120,
    245,194,221,51,160,199,113,72,165,47,14,156,67,152,124,65,
    76,88,58,70,56,124,126,66,228,189,52,135,133,225,189,72,
    237,22,14,131,104,102,5,113,52,2,61,38,21,242,172,244,
    104,63,79,48,118,242,161,231,69,188,195,165,31,90,11,239,
    80,160,220,197,130,196,115,172,0,201,48,250,53,111,120,137,
    90,228,238,125,75,208,25,28,79,219,124,228,160,19,111,1,
    240,148,237,243,105,58,57,202,15,66,101,141,215,96,14,91,
    243,199,232,65,168,211,6,219,153,201,75,67,64,123,151,200,
    243,211,201,63,114,240,173,186,219,216,240,220,219,30,141,69,
    3,86,77,190,89,70,249,114,86,121,202,20,209,69,127,254,
    250,190,49,226,233,233,236,93,111,1,63,104,209,202,115,110,
    120,97,149,113,226,243,45,105,55,100,99,3,15,174,91,126,
    211,174,213,221,77,246,76,46,113,252,39,100,220,125,224,157,
    131,182,236,27,125,142,153,96,115,205,162,74,135,98,126,94,
    162,24,194,9,227,203,250,4,202,208,225,88,9,204,147,87,
    169,251,85,142,129,131,131,65,32,159,57,73,220,105,248,166,
    106,183,217,148,129,87,185,78,146,55,218,178,157,55,106,110,
    180,25,179,240,233,5,130,131,39,123,31,55,166,155,7,153,
    62,138,64,60,129,217,126,52,158,243,122,210,141,193,156,240,
    229,52,245,47,159,150,226,236,252,192,56,95,239,191,25,86,
    105,11,201,59,100,141,16,184,180,226,153,87,181,52,66,223,
    36,178,66,228,78,234,40,146,245,36,30,221,164,241,149,42,
    67,186,167,193,227,153,138,194,22,174,160,253,204,68,73,199,
    57,176,240,133,155,249,51,208,167,114,246,75,65,156,23,5,
    171,88,40,10,94,221,239,55,73,91,25,199,175,48,168,49,
    40,156,94,68,196,223,39,150,85,126,254,114,116,175,220,134,
    100,191,243,10,224,88,41,193,177,52,216,244,76,125,64,164,
    3,134,85,62,52,147,121,58,19,71,121,252,244,172,225,214,
    94,23,220,170,208,105,176,59,82,149,15,144,234,192,27,247,
    168,250,227,54,245,95,184,13,116,112,138,186,130,210,42,30,
    3,221,248,201,15,160,100,220,253,213,25,6,165,84,247,87,
    20,148,146,96,123,245,64,233,119,103,13,148,190,249,30,64,
    201,120,227,101,128,210,167,216,245,111,59,128,210,32,131,210,
    35,95,109,61,12,35,245,3,42,25,127,127,123,134,81,41,
    213,253,149,66,165,145,20,149,76,180,189,122,176,244,231,179,
    6,75,127,249,255,96,105,44,11,75,169,59,94,6,46,61,
    192,174,255,212,1,151,232,41,111,86,246,40,50,189,211,11,
    50,37,152,148,79,46,129,84,244,187,173,51,132,67,127,63,
    195,56,148,234,222,27,14,145,154,159,25,195,20,123,51,243,
    36,153,31,100,199,244,146,106,53,180,171,97,16,171,104,167,
    170,194,200,246,100,205,15,164,103,95,179,249,105,190,237,199,
    182,187,129,181,110,85,105,135,29,122,104,76,176,194,143,154,
    158,60,163,167,73,167,7,46,255,128,244,101,150,126,103,209,
    41,91,239,180,165,236,41,38,34,189,101,248,27,141,81,208,
    137,104,21,45,190,34,145,149,123,72,45,59,60,79,217,22,
    61,111,18,80,64,22,232,138,12,209,1,122,185,128,251,132,
    132,57,200,116,136,153,195,134,89,98,58,194,204,81,195,44,
    51,29,99,230,57,195,28,103,58,193,204,73,195,156,98,58,
    205,204,25,195,156,101,58,199,204,243,134,57,207,244,2,51,
    95,51,204,5,166,54,51,47,26,230,235,76,47,49,243,178,
    97,46,50,189,194,204,171,134,185,196,244,13,102,190,105,152,
    111,49,125,155,153,215,12,115,153,233,10,51,175,27,216,186,
    193,204,119,96,253,93,179,149,250,209,25,220,74,125,119,134,
    33,44,213,253,100,8,179,146,140,96,195,62,6,179,149,218,
    231,119,113,109,251,40,113,204,62,74,156,184,143,162,87,250,
    201,163,243,67,137,217,113,63,149,190,198,60,229,173,212,191,
    33,221,74,13,159,137,173,212,127,140,171,151,110,118,3,231,
    131,173,20,123,98,177,35,60,58,94,195,117,34,233,122,244,
    52,220,109,209,235,244,30,37,99,148,228,231,237,109,108,117,
    229,132,198,53,151,214,65,30,167,71,81,26,104,52,59,144,
    230,31,215,252,89,228,227,102,241,192,162,30,69,179,35,101,
    248,234,234,73,205,51,70,245,42,75,99,149,219,198,74,204,
    234,210,193,150,27,121,184,5,144,142,171,31,22,30,55,216,
    17,89,51,216,225,10,117,177,115,7,24,128,81,102,250,78,
    150,162,1,40,125,14,88,106,174,115,163,40,81,253,152,106,
    234,140,118,64,88,230,247,195,157,196,158,103,212,59,73,134,
    250,163,119,99,134,161,46,117,109,80,243,107,161,19,251,95,
    74,238,184,23,57,234,124,88,119,158,50,149,125,76,195,58,
    230,54,247,126,162,16,117,93,52,93,19,231,152,38,106,139,
    83,227,248,126,19,161,76,191,154,211,109,6,85,15,179,172,
    14,207,178,58,97,150,85,143,179,172,58,205,178,234,97,150,
    85,47,179,161,142,204,70,202,225,5,65,17,132,30,188,74,
    60,188,118,189,140,195,103,5,187,254,23,141,65,104,198,135,
    79,49,217,253,151,15,166,124,144,56,116,205,59,195,43,164,
    60,58,158,234,27,41,173,152,198,209,246,39,175,93,89,65,
    39,123,115,156,175,154,234,101,133,47,193,154,23,179,180,248,
    240,100,174,186,13,125,155,145,235,147,107,77,177,94,232,249,
    194,45,29,141,42,111,17,185,150,174,85,63,37,66,88,195,
    111,74,213,4,164,55,61,88,145,72,110,250,49,206,16,191,
    178,224,141,69,250,230,164,189,254,211,131,250,228,33,102,123,
    61,157,226,213,52,100,31,37,182,9,40,186,55,223,184,185,
    108,252,177,220,238,15,191,42,249,6,112,227,166,58,223,81,
    240,97,213,79,196,102,187,213,255,34,140,85,183,214,126,152,
    180,158,233,88,191,214,66,29,27,71,26,203,96,167,225,60,
    144,141,48,106,61,8,61,169,230,15,213,243,197,5,55,216,
    148,232,72,94,103,46,30,22,72,142,161,186,15,35,101,119,
    212,161,93,182,139,33,88,169,111,221,50,116,28,173,255,168,
    30,86,159,72,47,145,233,60,231,44,115,55,108,184,200,239,
    60,202,154,111,70,25,59,84,239,69,212,106,242,16,55,150,
    145,239,214,9,62,58,247,119,183,225,38,211,63,160,215,51,
    174,228,206,143,134,193,80,6,92,240,59,31,75,217,233,217,
    220,109,143,173,177,246,38,9,158,80,206,117,67,216,108,243,
    211,131,27,125,173,72,95,50,188,205,119,10,233,45,97,153,
    238,240,14,20,69,63,253,31,197,255,22,110,151,173,156,24,
    20,35,162,15,255,151,241,255,152,53,92,46,230,139,69,148,
    27,154,26,46,138,65,235,40,29,22,199,255,46,20,72,106,
    97,174,40,254,7,175,167,74,30,
};

EmbeddedPython embedded_m5_internal_param_EtherDevBase(
    "m5/internal/param_EtherDevBase.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_EtherDevBase.py",
    "m5.internal.param_EtherDevBase",
    data_m5_internal_param_EtherDevBase,
    3193,
    13716);

} // anonymous namespace
