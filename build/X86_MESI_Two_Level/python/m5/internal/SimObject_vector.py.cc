#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_SimObject_vector[] = {
    120,156,205,92,125,136,36,71,21,127,213,51,59,179,179,187,
    179,31,183,159,247,61,151,220,229,54,49,185,85,194,105,76,
    206,51,49,57,194,169,217,196,222,200,93,54,74,211,59,93,
    59,219,123,51,221,147,238,222,189,155,184,171,232,158,38,126,
    161,34,42,126,32,162,226,7,4,4,69,16,4,65,16,4,
    65,16,4,65,16,4,69,16,4,255,19,4,65,125,239,85,
    215,76,207,110,159,228,110,110,122,220,143,183,53,221,213,245,
    222,175,222,71,85,189,170,222,42,196,95,19,248,251,120,5,
    32,172,9,0,7,127,4,92,3,168,11,88,53,64,72,3,
    156,105,216,28,2,255,48,8,103,8,110,2,172,230,64,230,
    96,15,11,121,120,49,7,222,195,170,214,76,187,86,49,173,
    86,25,111,96,219,195,112,45,207,151,12,104,141,128,28,130,
    213,2,92,241,166,33,47,139,176,57,2,126,17,4,126,121,
    200,249,106,107,18,226,39,134,97,181,132,181,78,98,173,17,
    174,53,205,181,226,187,37,186,203,79,56,37,112,70,224,38,
    74,62,10,206,40,75,49,6,206,24,23,202,224,148,185,48,
    14,206,56,23,38,192,153,0,57,9,235,2,156,73,186,130,
    194,190,176,58,5,50,15,238,33,88,61,4,18,127,166,96,
    79,180,37,159,134,213,25,45,211,108,162,60,199,229,41,221,
    216,161,118,99,243,220,216,2,172,46,128,196,159,121,213,216,
    48,172,44,206,98,167,187,255,193,175,69,236,116,136,198,144,
    108,203,32,116,125,207,114,189,117,223,53,232,126,145,8,169,
    168,74,36,135,191,5,252,125,146,116,21,0,43,10,5,64,
    93,237,98,11,2,240,25,199,32,14,78,14,14,239,10,250,
    224,230,96,7,11,121,88,231,27,110,62,174,177,139,189,63,
    5,59,216,250,16,236,240,149,149,43,222,113,200,71,5,238,
    222,41,238,94,117,27,31,166,219,216,185,128,98,15,33,219,
    101,150,59,34,185,207,177,116,209,20,18,107,197,109,60,187,
    182,41,171,145,181,141,196,15,22,73,250,168,68,16,26,77,
    63,136,234,238,90,52,76,21,45,207,110,72,203,138,70,240,
    67,208,180,131,200,141,16,118,148,199,143,155,190,235,69,132,
    177,30,70,129,219,140,202,237,167,173,134,239,108,213,101,52,
    138,87,46,243,149,75,65,128,76,168,83,76,34,17,145,230,
    181,90,68,34,54,136,197,34,201,198,36,124,30,201,210,134,
    223,144,72,188,90,107,107,169,38,27,231,31,90,111,45,173,
    109,185,117,103,233,234,35,111,182,158,185,180,114,217,122,254,
    186,111,189,91,110,203,250,82,179,21,97,213,165,198,249,37,
    148,72,6,158,93,95,218,15,240,28,214,57,68,173,95,119,
    107,86,44,229,134,172,55,101,64,160,195,113,226,44,198,196,
    180,56,33,114,98,74,140,11,183,160,85,73,93,83,214,170,
    124,45,86,165,17,187,29,106,83,196,170,53,96,151,11,164,
    175,69,82,37,105,48,71,138,67,152,168,22,244,216,61,3,
    222,151,163,10,187,72,243,232,37,149,182,26,103,148,151,168,
    166,138,176,139,186,30,34,77,190,124,140,155,26,230,166,12,
    216,65,138,74,206,195,46,186,34,86,197,75,72,55,75,224,
    143,131,192,15,110,137,140,89,120,104,186,87,119,10,104,4,
    249,182,17,40,227,37,52,142,27,80,159,155,100,183,139,35,
    250,170,31,158,107,218,209,134,89,214,10,194,110,98,69,47,
    251,158,210,229,186,235,57,90,183,202,58,214,221,58,90,135,
    73,125,200,173,113,181,186,111,183,171,145,130,171,117,63,148,
    108,97,220,182,73,49,44,162,218,235,77,110,134,184,146,60,
    252,176,35,195,42,89,19,90,153,106,145,36,160,214,50,176,
    16,147,60,123,134,56,28,97,123,152,68,139,40,160,61,44,
    162,61,168,210,49,163,44,38,196,178,75,93,89,29,138,125,
    60,175,141,227,71,160,20,34,96,211,96,199,220,225,144,128,
    181,81,109,236,152,59,236,246,116,247,65,16,145,17,95,71,
    207,71,237,210,213,67,248,12,155,12,218,14,214,189,64,126,
    204,202,36,27,24,2,52,74,165,112,52,36,101,33,172,246,
    33,122,130,154,50,136,69,30,154,243,216,248,48,217,194,14,
    196,70,179,151,67,163,64,137,208,145,49,72,224,229,57,228,
    251,17,182,182,56,80,176,13,68,27,110,232,95,87,254,77,
    101,142,117,43,232,51,207,181,84,103,133,39,241,194,11,254,
    86,165,106,123,158,31,85,108,199,169,216,17,250,255,218,86,
    36,195,74,228,87,206,132,139,164,71,243,136,54,163,118,123,
    173,166,52,185,160,108,199,113,177,239,173,104,154,63,176,95,
    134,50,66,43,216,240,157,16,175,211,163,53,25,153,147,244,
    4,117,179,207,2,176,145,88,84,149,216,98,61,114,221,39,
    180,4,42,206,20,180,221,132,178,190,206,161,171,90,183,195,
    208,34,9,248,58,91,27,161,222,182,235,91,146,91,15,177,
    61,20,136,138,74,134,44,34,210,2,97,209,208,25,143,231,
    123,78,11,197,115,171,15,19,231,5,182,195,50,70,164,178,
    152,195,223,146,152,21,69,180,198,162,152,55,170,249,216,246,
    218,227,204,28,225,6,86,186,136,245,142,182,184,135,113,100,
    209,224,48,192,144,200,118,205,7,168,68,15,155,167,137,156,
    33,114,31,145,179,26,117,159,161,151,247,67,127,146,216,25,
    140,183,154,139,145,181,61,203,234,242,172,241,132,103,237,145,
    135,236,240,128,234,230,18,222,145,35,244,254,168,246,39,246,
    62,84,57,122,31,85,102,63,194,113,54,233,5,196,116,217,
    60,76,98,156,66,114,246,76,120,182,162,108,174,178,97,135,
    21,207,239,24,122,133,110,170,136,70,102,110,30,163,142,79,
    24,114,45,97,200,102,133,106,144,21,155,247,18,201,223,170,
    231,239,207,188,231,107,170,231,159,38,118,99,177,165,141,179,
    133,141,138,42,153,9,169,163,168,117,176,130,133,214,60,233,
    32,217,249,243,56,232,93,241,142,225,56,198,10,160,161,172,
    172,134,50,30,15,213,84,79,135,52,119,72,23,10,164,134,
    245,28,204,197,35,84,72,67,72,51,240,111,180,42,254,122,
    37,2,45,210,133,51,225,185,51,225,99,24,85,42,23,59,
    29,30,71,144,64,54,41,2,168,136,64,221,18,185,30,126,
    166,166,46,221,168,74,30,68,248,147,101,169,0,160,230,49,
    86,60,56,161,110,88,25,134,86,6,135,64,156,204,80,228,
    203,66,19,35,109,77,16,146,231,136,215,8,171,33,39,230,
    209,229,19,74,160,223,28,41,129,140,236,21,224,153,171,128,
    143,1,117,49,118,100,236,223,236,55,218,119,166,169,58,77,
    96,118,68,234,136,100,196,62,97,196,241,2,157,166,89,230,
    129,38,30,161,112,70,242,106,34,152,180,71,144,92,60,171,
    73,250,78,190,237,59,172,159,215,53,74,228,187,221,135,250,
    30,253,140,170,177,163,168,217,226,233,238,192,196,83,152,28,
    71,246,168,207,202,25,86,92,44,18,232,133,142,106,40,22,
    31,23,51,134,178,15,54,157,183,16,121,164,237,189,66,95,
    235,159,108,39,247,7,207,196,184,97,169,200,115,149,4,200,
    179,200,19,69,30,36,213,48,126,25,155,181,177,25,158,218,
    210,23,13,131,239,32,91,249,51,22,36,46,181,4,72,142,
    162,55,121,166,75,212,32,141,239,25,2,151,137,56,121,184,
    201,203,68,181,26,196,133,160,203,11,190,120,181,137,179,139,
    2,23,112,77,87,164,229,22,173,239,198,184,92,226,114,153,
    23,125,106,101,55,170,87,118,106,209,55,169,23,125,83,122,
    209,119,136,22,125,84,152,142,23,125,106,229,70,133,217,120,
    229,182,58,71,75,94,42,204,211,170,150,10,11,224,204,114,
    225,48,56,115,92,56,2,206,60,23,142,130,185,178,72,99,
    42,59,150,254,229,232,70,81,177,107,80,73,40,184,109,164,
    202,254,136,220,200,34,62,144,9,94,168,219,141,53,199,190,
    232,16,39,98,87,213,241,192,208,162,79,38,69,39,79,22,
    183,144,158,63,62,166,33,108,103,49,163,190,0,156,166,80,
    162,179,231,58,126,149,163,216,243,27,178,210,144,141,53,92,
    72,111,184,205,202,122,221,174,177,86,114,49,180,103,53,180,
    136,237,48,17,108,56,214,133,52,131,89,246,43,85,223,195,
    136,189,69,252,42,142,196,21,138,116,42,15,85,56,220,87,
    220,176,98,175,225,93,187,26,41,175,236,142,43,60,21,180,
    131,90,200,179,190,107,215,169,152,149,90,45,203,245,92,156,
    254,174,67,103,214,115,192,38,243,170,243,86,88,248,101,5,
    97,178,29,98,78,67,38,243,5,86,225,102,219,250,180,128,
    109,235,43,43,21,185,66,79,179,98,105,217,216,120,5,55,
    115,32,248,88,60,239,206,22,6,141,31,245,78,111,171,37,
    92,123,108,77,250,82,27,141,26,21,15,2,154,62,8,200,
    245,170,65,98,34,65,79,120,89,216,18,153,8,241,246,19,
    118,116,215,64,57,50,9,202,124,42,27,77,49,38,98,29,
    244,140,105,62,5,19,46,106,109,175,42,19,184,30,203,8,
    23,249,189,102,191,213,51,182,20,175,146,47,109,217,245,1,
    0,163,41,4,243,190,145,18,205,110,35,80,164,152,96,213,
    111,182,50,141,19,108,125,196,245,3,119,29,139,39,111,68,
    217,99,33,174,31,236,13,75,138,27,89,140,198,178,178,197,
    19,167,164,153,243,135,239,58,166,102,32,183,93,127,43,204,
    30,147,230,124,179,231,168,48,119,16,150,237,108,239,11,120,
    89,5,114,90,210,197,220,95,233,25,217,108,154,17,202,151,
    208,4,179,15,120,5,182,67,98,254,137,254,224,242,228,0,
    113,17,243,79,247,140,43,53,104,184,182,227,116,33,203,202,
    20,227,57,55,179,255,108,159,176,133,91,107,131,196,198,236,
    63,223,143,8,98,89,131,82,91,145,161,49,247,47,66,119,
    188,215,200,158,78,67,246,169,180,144,159,138,108,191,210,222,
    158,41,50,230,254,101,56,56,146,117,173,1,119,58,107,64,
    150,108,0,99,174,139,53,44,235,171,29,73,23,41,163,192,
    249,83,147,118,42,56,195,164,82,82,205,192,111,202,32,106,
    169,116,224,19,68,206,19,89,234,10,121,142,172,203,72,90,
    221,250,136,38,161,157,67,119,36,174,220,253,150,101,197,93,
    133,15,88,22,175,226,204,75,68,40,107,109,94,38,242,46,
    34,207,16,121,150,200,123,136,80,178,218,124,47,145,43,68,
    40,129,103,190,72,228,253,68,104,59,193,180,137,172,117,245,
    98,159,151,160,143,130,218,82,14,31,68,82,16,71,141,146,
    81,16,37,81,50,74,185,49,252,46,221,234,219,224,126,81,
    237,116,182,238,15,102,240,28,241,58,50,120,50,15,171,67,
    58,143,87,208,137,187,162,78,220,13,67,124,36,164,196,233,
    59,149,211,43,233,156,222,136,62,167,49,170,207,105,140,233,
    108,94,89,103,243,198,117,54,111,66,103,243,38,117,54,111,
    74,103,243,14,233,108,222,180,206,230,205,232,108,222,172,206,
    230,205,233,108,222,188,206,230,45,232,108,222,225,56,155,231,
    28,225,194,49,112,142,114,225,56,56,199,184,112,2,156,227,
    92,56,9,206,9,46,84,192,57,201,133,83,224,84,184,112,
    15,56,167,184,112,47,56,247,112,225,52,56,247,114,225,12,
    56,167,185,112,31,200,179,224,46,194,234,253,224,156,225,43,
    15,80,10,145,18,210,189,164,16,179,26,208,57,119,243,109,
    184,139,153,67,243,109,131,144,220,188,8,241,222,199,173,178,
    134,183,57,251,63,156,226,79,28,227,40,10,101,31,95,53,
    231,239,194,255,24,9,70,218,202,218,219,151,19,116,33,227,
    65,129,195,230,247,83,132,189,13,21,28,75,83,129,69,27,
    25,47,203,192,207,122,101,169,246,16,219,204,95,235,13,91,
    170,121,89,214,154,239,215,7,179,100,86,156,127,208,27,170,
    133,116,84,117,233,101,13,74,205,8,152,241,15,19,152,146,
    219,159,140,105,26,186,167,133,106,27,243,32,178,227,233,200,
    106,50,10,235,110,149,214,98,157,77,3,193,254,74,116,51,
    11,168,99,12,181,35,201,143,247,233,240,246,167,193,183,0,
    27,118,192,102,63,27,86,40,59,34,252,164,143,90,197,137,
    228,1,173,154,47,17,9,50,69,219,145,227,167,61,235,244,
    22,193,20,89,224,208,210,24,136,74,71,53,72,37,193,207,
    250,133,17,93,99,192,24,219,18,252,188,95,24,195,129,99,
    108,75,240,11,232,105,12,153,73,3,216,244,155,217,142,31,
    124,252,216,111,254,50,129,229,206,19,65,7,224,216,205,166,
    244,156,1,165,239,20,243,95,245,166,165,185,52,88,178,209,
    140,50,222,139,225,141,37,98,251,235,222,240,204,166,225,9,
    221,151,179,221,130,86,71,82,145,235,111,122,182,187,116,64,
    215,237,102,194,234,50,90,169,41,84,200,250,183,125,176,185,
    53,89,115,189,236,109,142,217,254,174,15,145,142,226,66,230,
    145,14,153,254,190,55,44,169,97,46,24,128,114,40,194,41,
    190,127,232,67,68,8,50,87,15,249,14,113,253,99,31,124,
    167,90,151,118,198,185,12,245,182,7,178,253,83,111,120,78,
    164,225,169,209,97,204,122,221,175,102,159,163,33,137,187,216,
    255,165,55,124,169,249,1,156,144,88,107,118,245,218,0,182,
    159,99,206,127,221,135,234,246,231,175,233,19,135,192,14,229,
    0,102,174,60,123,32,222,127,219,135,139,48,13,105,92,151,
    59,184,16,148,122,125,107,134,19,109,250,141,2,122,15,144,
    95,104,140,248,4,59,29,113,159,84,47,221,241,217,105,203,
    136,79,185,119,178,114,5,72,142,2,158,188,110,237,239,20,
    149,91,165,51,12,230,27,137,188,9,186,78,60,83,23,113,
    149,44,146,121,180,69,243,119,0,125,194,121,66,228,196,140,
    152,186,211,169,201,145,84,219,222,10,55,148,113,103,63,43,
    230,55,11,52,255,127,244,33,208,174,7,190,151,241,193,30,
    178,94,102,251,207,222,240,164,14,131,217,7,33,26,6,137,
    235,191,18,104,238,56,237,147,190,38,11,67,183,230,37,60,
    236,169,44,77,144,23,102,44,193,191,161,215,16,155,62,23,
    147,188,154,201,62,198,242,132,140,153,11,209,23,100,174,23,
    202,32,26,16,50,197,60,159,64,118,103,49,49,53,115,142,
    221,38,131,237,65,157,203,138,185,23,197,221,159,200,84,237,
    166,93,117,179,206,21,208,68,70,115,30,73,65,213,117,162,
    226,255,227,84,125,89,196,251,155,139,111,128,228,97,10,147,
    182,246,213,241,137,206,201,9,218,228,227,125,55,243,26,145,
    6,17,58,245,109,82,11,38,157,39,54,175,19,105,17,161,
    195,171,230,46,145,15,129,158,103,236,17,249,40,17,58,140,
    103,126,156,200,39,137,208,89,47,243,51,68,62,71,132,142,
    16,153,95,32,242,37,34,124,128,227,43,68,190,70,228,235,
    68,190,65,228,155,68,104,139,214,252,14,145,239,117,249,113,
    124,188,227,192,180,71,82,173,245,174,62,238,115,71,215,176,
    225,111,17,135,119,2,31,186,16,5,131,14,92,220,214,119,
    113,255,129,140,146,224,161,100,223,127,126,72,92,43,180,175,
    145,26,213,43,107,173,208,4,237,52,241,81,25,134,96,37,
    255,153,4,191,131,174,250,81,157,12,141,15,211,144,73,240,
    84,102,217,110,168,215,156,249,126,252,214,99,168,102,145,252,
    30,62,189,24,99,178,65,61,212,182,160,183,18,57,69,132,
    206,160,68,71,225,192,73,40,146,39,192,133,117,136,23,248,
    126,227,252,57,221,175,231,154,118,96,55,58,90,228,151,247,
    27,231,249,95,73,36,171,57,129,141,229,217,125,87,49,206,
    184,118,29,71,8,86,69,250,174,76,146,123,86,150,161,94,
    175,82,175,130,94,228,55,63,31,71,50,73,111,89,15,151,
    68,145,254,78,224,95,99,76,228,140,156,24,17,227,98,8,
    255,78,226,223,41,99,108,178,148,47,149,176,222,232,220,163,
    37,49,130,117,232,123,238,90,73,252,23,133,151,217,18,
};

EmbeddedPython embedded_m5_internal_SimObject_vector(
    "m5/internal/SimObject_vector.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/SimObject_vector.py",
    "m5.internal.SimObject_vector",
    data_m5_internal_SimObject_vector,
    3583,
    17834);

} // anonymous namespace