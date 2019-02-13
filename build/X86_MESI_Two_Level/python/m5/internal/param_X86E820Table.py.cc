#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86E820Table[] = {
    120,156,197,88,109,111,219,200,17,158,37,41,201,146,45,91,
    142,223,226,196,57,179,104,220,168,47,177,175,119,112,155,246,
    210,160,185,156,91,4,184,58,1,29,52,137,90,128,160,200,
    149,76,91,34,85,114,29,71,7,25,40,234,160,237,215,254,
    143,126,235,15,108,103,102,73,154,118,28,244,128,54,58,217,
    90,45,151,251,50,179,207,51,47,187,62,100,159,69,252,254,
    218,6,72,255,33,0,2,252,23,112,12,48,16,208,49,64,
    72,3,130,37,56,170,64,188,14,34,168,192,59,128,142,9,
    210,132,115,172,88,240,7,19,162,207,117,175,229,162,87,237,
    186,94,77,124,129,115,207,192,177,197,77,6,140,27,32,43,
    208,169,194,203,104,9,44,89,131,163,6,196,53,16,248,137,
    112,229,87,227,22,100,35,102,160,83,199,94,155,216,171,193,
    189,150,184,87,246,182,78,111,121,68,80,135,160,1,239,80,
    242,89,8,102,89,138,57,8,230,184,210,132,160,201,149,121,
    8,230,185,178,144,79,223,130,206,98,94,191,81,170,47,149,
    234,203,165,250,10,215,23,64,46,66,184,10,225,26,132,55,
    161,39,32,104,209,180,168,241,235,206,58,72,11,194,91,208,
    185,5,18,255,215,225,92,160,250,139,165,17,183,121,196,141,
    98,196,6,143,184,3,157,59,32,241,127,67,143,152,129,131,
    246,10,194,19,254,27,63,109,132,7,212,28,22,111,100,146,
    134,113,228,134,81,47,14,13,122,95,163,130,192,244,169,48,
    241,91,197,239,19,66,53,1,134,20,101,71,84,207,112,6,
    1,56,38,48,104,133,192,132,245,51,65,15,161,9,19,172,
    88,208,227,23,161,149,245,56,67,156,22,97,130,179,87,96,
    194,45,7,47,163,59,96,169,42,3,177,200,64,232,215,56,
    152,94,35,12,128,98,87,112,217,125,150,91,145,220,219,44,
    157,90,194,194,29,121,137,55,116,95,61,248,217,222,131,207,
    62,125,225,117,7,178,77,242,171,58,41,49,28,197,137,26,
    132,93,53,67,93,221,200,27,74,215,85,13,124,72,112,156,
    10,21,42,174,44,124,60,138,195,72,145,150,131,84,37,225,
    72,53,139,209,238,48,14,78,6,82,205,98,203,83,110,217,
    75,146,56,105,211,182,56,84,40,42,70,199,125,69,66,14,
    105,137,54,73,199,69,250,123,44,118,14,227,161,196,34,234,
    143,79,118,250,114,184,123,191,55,222,233,158,132,131,96,7,
    197,118,127,183,119,240,212,125,113,26,187,95,203,55,114,176,
    51,26,43,236,186,51,220,221,65,137,100,18,121,216,244,158,
    138,219,216,235,6,205,127,26,246,221,76,206,67,57,24,201,
    132,212,78,231,105,109,49,39,150,196,39,194,20,139,98,94,
    132,213,28,78,218,156,102,14,231,63,51,56,141,204,72,17,
    81,145,193,107,192,25,87,8,179,54,193,73,40,154,4,30,
    42,138,208,244,5,156,27,240,71,147,58,156,97,105,161,77,
    217,5,148,203,218,166,244,84,53,56,67,188,43,132,230,55,
    27,60,213,12,79,101,192,4,75,4,218,130,51,52,92,236,
    138,77,88,30,213,33,158,7,129,15,97,157,8,45,34,164,
    239,171,73,21,137,96,21,68,208,4,38,109,130,48,161,93,
    119,136,187,237,70,222,26,167,219,35,79,29,58,205,28,34,
    220,38,134,122,63,142,52,154,189,48,10,114,116,53,63,122,
    225,0,249,225,208,30,242,108,220,109,16,123,69,55,130,216,
    31,196,169,230,24,207,237,44,80,71,234,221,27,241,52,180,
    42,201,195,131,3,153,250,196,39,228,153,158,145,36,160,217,
    166,194,17,135,236,123,153,214,184,197,140,104,33,39,170,200,
    136,54,50,66,215,54,140,166,88,16,251,33,109,166,95,201,
    44,221,202,233,241,47,208,144,8,56,50,216,60,39,236,24,
    176,55,2,199,230,57,97,227,167,183,63,1,161,140,172,29,
    237,31,241,165,214,27,56,134,73,131,236,193,190,15,201,154,
    25,78,98,65,5,144,150,26,114,164,146,230,8,3,95,161,
    17,52,149,65,75,88,48,90,195,201,103,136,13,19,200,104,
    115,110,34,45,80,34,52,102,116,21,216,188,138,235,254,133,
    249,150,185,11,102,129,58,12,211,248,84,219,56,213,217,227,
    29,160,213,60,31,63,235,30,73,95,165,155,216,240,58,62,
    177,125,47,138,98,101,123,65,96,123,10,125,64,247,68,201,
    212,86,177,189,149,182,9,73,231,86,78,164,98,190,241,72,
    58,92,209,236,9,66,95,161,119,97,175,228,178,101,166,82,
    33,15,14,227,32,197,118,26,218,151,202,105,209,8,218,230,
    152,5,96,154,184,212,149,150,197,126,100,188,143,115,9,180,
    175,169,230,204,73,229,160,199,238,203,31,120,105,234,146,4,
    220,206,124,35,173,223,120,131,19,201,179,167,56,31,10,68,
    85,45,195,116,188,210,77,210,38,87,158,53,138,226,40,24,
    163,128,161,255,57,173,125,147,153,216,68,175,212,20,171,248,
    173,139,21,81,67,62,214,196,154,225,91,25,251,138,120,179,
    74,154,3,195,46,50,228,145,141,231,232,75,218,6,187,2,
    86,138,216,235,252,136,106,52,216,185,75,197,22,21,63,160,
    226,94,174,247,71,87,190,121,85,249,39,180,160,193,26,251,
    102,166,91,97,93,238,37,235,154,47,89,215,57,89,201,132,
    67,107,104,150,44,196,36,253,227,217,220,166,216,2,17,118,
    180,64,234,204,182,132,17,183,108,9,180,232,190,179,78,98,
    124,15,139,123,91,233,61,91,243,206,62,244,82,59,138,47,
    200,110,211,75,237,215,136,234,206,6,228,33,86,171,212,47,
    145,217,177,169,7,49,217,249,62,21,214,135,246,254,135,223,
    193,222,247,245,222,255,150,22,156,203,216,54,207,44,155,21,
    62,81,133,0,169,229,40,28,96,101,188,70,40,148,183,127,
    13,131,223,203,104,3,227,25,67,64,33,173,169,67,26,199,
    69,157,32,230,142,45,172,228,149,42,1,209,51,97,53,139,
    84,41,133,146,81,18,191,29,219,113,207,86,144,139,244,112,
    43,221,222,74,191,64,223,98,63,186,216,242,204,143,36,114,
    68,126,64,251,5,218,24,21,70,248,76,83,237,189,245,37,
    7,19,126,114,93,237,6,116,70,227,102,65,10,209,97,56,
    140,28,14,118,132,152,214,144,255,155,14,22,141,2,11,210,
    229,57,173,214,96,32,76,177,134,134,95,130,129,190,38,193,
    64,68,251,27,112,30,43,224,175,64,155,140,91,153,89,57,
    219,78,110,63,75,212,157,82,153,137,184,54,50,25,153,93,
    24,153,215,64,195,25,53,57,224,100,145,10,115,147,191,151,
    92,74,17,73,204,44,191,41,219,143,85,216,15,35,244,173,
    162,133,117,217,132,104,247,209,214,168,27,27,139,206,28,239,
    94,118,79,156,204,152,236,225,213,71,135,103,70,175,227,146,
    72,175,47,192,33,159,124,71,44,27,154,35,76,159,159,83,
    241,160,176,97,145,183,125,76,233,54,175,58,209,82,4,113,
    181,7,122,69,34,88,44,244,66,77,173,225,47,78,242,244,
    224,177,251,228,217,215,207,246,15,220,98,62,206,120,233,67,
    177,241,75,34,206,103,88,145,120,94,19,32,217,173,190,227,
    4,152,74,131,224,63,55,4,158,53,49,163,120,199,103,77,
    125,164,116,116,70,193,164,205,191,236,59,200,231,92,114,218,
    165,173,43,8,160,177,165,226,237,116,172,143,224,125,56,240,
    134,221,192,123,68,241,49,165,5,253,220,218,140,92,248,86,
    89,120,178,19,241,1,249,249,241,139,92,137,55,211,201,92,
    31,130,62,131,178,240,108,25,65,236,179,151,120,113,40,237,
    161,28,118,241,216,122,24,142,236,222,192,235,51,50,102,166,
    220,179,92,57,197,208,150,140,153,125,73,74,121,194,126,108,
    251,113,132,62,241,196,87,113,98,7,18,207,2,50,176,239,
    219,236,80,237,48,181,189,46,190,245,124,165,57,127,217,110,
    57,229,242,146,126,202,217,213,241,41,85,167,7,173,139,39,
    245,16,19,205,99,40,114,11,29,66,216,239,80,142,197,41,
    164,54,33,140,61,120,40,84,99,237,194,30,83,177,75,197,
    14,148,227,242,71,71,243,151,228,3,105,13,218,176,170,184,
    109,212,13,62,191,150,251,61,167,145,233,251,22,219,253,54,
    22,43,45,232,84,114,187,173,82,79,89,163,99,38,149,117,
    10,1,29,60,39,232,11,167,89,110,156,227,75,156,106,118,
    137,131,22,94,251,31,45,156,45,100,122,182,145,252,63,13,
    219,249,213,119,35,187,243,8,178,208,255,33,163,22,101,197,
    154,218,168,67,145,39,191,188,241,251,90,15,62,93,175,95,
    203,41,215,79,164,167,164,134,233,238,180,84,101,231,160,87,
    62,185,48,213,34,243,169,228,90,253,166,208,234,156,211,158,
    241,50,163,151,223,162,209,213,29,223,86,42,78,52,41,19,
    109,233,123,50,222,6,215,200,146,81,40,182,163,90,108,7,
    157,158,34,121,234,190,191,37,58,223,164,158,222,104,36,163,
    192,249,148,6,253,20,202,121,35,247,153,14,43,200,49,141,
    161,200,68,230,48,81,92,198,108,228,125,123,36,31,87,82,
    149,17,109,21,38,56,53,108,153,198,127,206,105,220,166,43,
    160,11,247,235,124,73,5,59,220,194,215,58,123,5,40,159,
    92,207,81,25,97,26,41,83,58,189,252,183,46,152,23,113,
    86,153,61,243,238,49,245,3,57,144,74,94,3,183,162,61,
    202,206,113,129,196,200,22,143,241,212,80,227,70,28,228,186,
    83,140,5,116,38,254,19,100,183,148,24,11,68,21,163,193,
    138,81,175,214,5,135,216,43,119,208,165,182,106,209,70,27,
    164,211,229,113,234,64,174,126,22,242,88,16,183,124,173,205,
    247,96,122,247,249,134,46,15,138,4,20,159,164,246,189,161,
    190,106,225,247,217,153,43,213,70,193,183,129,148,52,56,63,
    166,226,126,129,235,47,104,52,101,171,195,221,237,92,231,237,
    76,219,61,132,102,140,50,80,122,193,151,131,195,93,70,181,
    220,245,210,246,240,0,117,251,218,46,7,225,80,95,86,169,
    197,43,239,131,196,195,250,202,149,214,84,38,161,55,8,191,
    209,215,154,121,179,34,150,94,157,144,148,43,158,56,76,171,
    187,240,193,116,154,55,56,145,253,48,197,41,121,190,98,108,
    230,86,158,228,123,114,13,125,203,131,167,199,55,157,14,235,
    163,241,35,62,9,127,133,69,139,110,158,102,234,162,70,191,
    11,248,107,160,207,49,76,209,16,243,162,130,191,45,252,93,
    52,230,90,117,171,94,199,126,179,115,34,255,219,68,158,54,
    140,205,86,93,252,7,26,221,213,200,
};

EmbeddedPython embedded_m5_internal_param_X86E820Table(
    "m5/internal/param_X86E820Table.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_X86E820Table.py",
    "m5.internal.param_X86E820Table",
    data_m5_internal_param_X86E820Table,
    2362,
    6900);

} // anonymous namespace