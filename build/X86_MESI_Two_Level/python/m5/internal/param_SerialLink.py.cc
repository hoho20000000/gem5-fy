#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SerialLink[] = {
    120,156,197,89,123,111,219,200,17,159,165,94,150,108,217,242,
    59,15,63,88,52,110,212,71,236,187,30,220,94,123,105,208,
    92,154,182,7,220,249,2,58,64,18,183,0,65,147,43,153,
    182,68,170,228,58,142,14,246,31,173,131,246,190,74,129,254,
    215,47,212,111,210,206,204,114,105,218,145,125,119,104,163,218,
    214,106,57,156,221,157,221,223,111,102,103,215,62,100,63,243,
    248,249,181,13,144,254,93,0,4,248,39,224,8,160,39,96,
    207,2,33,45,8,230,225,176,2,241,109,16,65,5,222,2,
    236,149,64,150,224,28,43,101,248,67,9,162,143,180,214,66,
    174,85,27,165,213,196,23,216,247,4,28,149,89,100,193,176,
    1,178,2,123,85,120,17,205,67,89,214,224,176,1,113,13,
    4,254,68,56,242,203,97,11,178,22,19,176,87,71,173,117,
    212,106,176,214,60,107,101,111,235,244,150,91,4,117,8,26,
    240,22,45,159,132,96,146,173,152,130,96,138,43,77,8,154,
    92,153,134,96,154,43,51,166,251,22,236,205,154,250,92,161,
    62,95,168,47,20,234,139,133,250,82,161,190,204,245,25,144,
    179,16,222,130,240,54,132,119,160,35,32,104,209,112,184,18,
    175,246,238,130,44,67,184,2,123,43,32,241,239,46,156,11,
    92,150,217,66,139,85,110,49,151,183,88,227,22,235,176,183,
    14,18,255,214,116,139,9,216,109,47,34,108,225,191,241,167,
    141,176,129,154,194,226,181,76,210,48,142,220,48,234,196,161,
    69,239,107,84,16,200,62,21,37,252,84,241,243,132,208,78,
    128,161,70,219,17,237,51,236,65,0,182,9,44,26,33,40,
    193,237,51,65,15,97,9,78,177,82,134,14,191,8,203,153,
    198,25,226,55,11,167,216,123,5,78,89,178,251,34,90,133,
    178,170,50,64,179,12,144,126,141,141,233,53,194,3,104,118,
    5,135,221,97,187,21,217,189,201,214,169,89,44,220,129,151,
    120,125,119,87,38,161,215,251,60,140,142,218,100,189,170,211,
    20,250,131,56,81,189,112,95,77,144,162,27,121,125,233,186,
    170,129,15,9,182,82,161,194,105,171,50,62,30,198,97,164,
    104,142,189,84,37,225,64,53,243,214,110,63,14,142,123,82,
    77,162,228,51,150,60,77,146,56,105,211,162,56,84,40,42,
    6,71,93,69,38,246,105,136,54,217,198,69,250,28,139,173,
    131,184,47,177,136,186,195,227,173,174,236,111,63,232,12,183,
    246,143,195,94,176,245,242,227,159,185,95,60,221,253,204,125,
    126,18,187,159,203,215,178,183,53,24,42,84,221,234,111,111,
    161,69,50,137,60,20,93,153,224,38,234,204,81,239,39,97,
    215,205,172,60,144,189,129,76,104,210,233,52,141,44,166,196,
    188,88,19,37,49,43,166,69,88,53,80,210,210,52,13,148,
    255,200,160,180,50,199,69,52,69,6,173,5,103,92,33,188,
    218,4,37,33,88,34,224,112,154,8,75,87,192,185,5,127,
    44,145,194,25,150,101,244,51,59,135,113,65,251,153,238,170,
    6,103,136,117,133,144,252,106,133,187,154,224,174,44,56,197,
    18,65,46,195,25,58,51,170,162,8,203,195,58,196,211,32,
    240,33,172,19,153,69,132,212,125,121,90,69,18,148,115,18,
    104,242,210,108,130,48,161,53,119,136,183,237,134,145,198,233,
    230,192,83,7,78,211,0,132,203,196,64,239,196,145,198,178,
    19,70,129,193,86,179,163,19,246,144,29,14,173,33,247,198,
    106,189,216,203,213,8,96,191,23,167,146,25,198,125,59,51,
    164,72,218,157,1,119,67,163,146,61,220,56,144,169,79,108,
    66,150,233,30,201,2,234,109,12,12,113,200,179,23,104,132,
    59,204,135,22,50,162,138,124,104,35,31,116,109,197,106,138,
    25,177,19,210,82,250,149,204,199,203,134,28,255,4,13,136,
    128,67,139,29,243,148,67,2,106,35,108,236,152,167,236,246,
    244,246,39,32,148,149,201,209,243,17,93,146,206,97,27,166,
    12,114,7,117,31,146,31,51,152,196,129,10,32,41,53,224,
    72,36,205,16,134,189,66,45,168,43,139,134,40,195,96,25,
    59,159,32,46,156,66,70,154,243,18,146,2,45,66,71,198,
    32,129,226,37,28,247,47,204,182,44,80,48,7,212,65,152,
    198,39,218,191,169,206,177,110,23,125,230,217,240,203,253,67,
    233,171,116,29,5,175,226,99,219,247,162,40,86,182,23,4,
    182,167,208,255,247,143,149,76,109,21,219,27,105,155,112,116,
    238,24,26,229,253,13,7,210,225,138,230,78,16,250,10,35,
    203,60,63,176,95,166,82,33,11,14,226,32,69,57,53,237,
    74,229,180,168,5,45,115,204,6,48,73,92,82,165,97,81,
    143,92,247,177,177,64,199,153,170,225,77,42,123,29,14,93,
    126,207,75,83,151,44,96,57,179,141,102,253,218,235,29,75,
    238,61,197,254,208,32,170,106,27,198,17,145,110,209,92,204,
    212,121,62,81,28,5,67,52,47,244,63,162,145,111,49,15,
    155,24,145,154,98,9,63,117,177,40,106,200,198,154,88,182,
    252,114,198,189,124,159,89,162,121,3,131,46,50,220,145,139,
    231,24,71,218,22,135,1,158,18,113,215,249,17,213,168,177,
    115,143,138,13,42,126,64,197,125,51,235,247,60,245,230,213,
    169,63,161,225,44,158,175,95,202,102,150,123,150,123,201,179,
    166,11,158,117,78,30,114,202,27,106,88,42,120,71,137,102,
    31,79,26,127,98,239,67,200,209,251,72,153,253,8,247,217,
    162,23,208,160,59,206,109,50,227,123,88,220,223,72,239,219,
    154,115,246,129,151,218,81,124,65,116,155,94,234,136,70,52,
    119,86,104,225,11,68,238,22,136,236,216,164,65,44,118,190,
    79,69,249,186,149,255,225,216,87,190,171,87,254,119,52,220,
    84,198,180,105,102,216,164,240,137,38,4,71,205,96,176,139,
    149,225,50,97,80,92,252,101,220,244,94,68,43,184,143,49,
    0,180,149,53,245,86,198,251,161,78,22,77,72,11,43,166,
    82,37,24,58,37,88,202,118,168,148,182,144,65,18,191,25,
    218,113,199,86,96,76,122,184,145,110,110,164,159,96,84,177,
    31,93,44,120,22,65,18,57,160,8,160,35,2,45,139,10,
    35,124,166,174,158,190,241,37,111,34,252,228,186,58,0,232,
    60,198,205,54,39,196,134,193,176,12,24,28,2,49,153,161,
    200,55,14,36,26,57,18,52,147,103,52,86,131,97,40,137,
    101,116,249,2,8,244,41,17,8,68,178,191,1,103,174,2,
    254,10,180,196,184,144,153,127,179,223,24,223,153,39,117,74,
    96,78,197,200,29,201,202,124,194,202,226,5,58,205,160,201,
    27,77,182,67,97,70,242,117,33,152,228,59,72,41,203,106,
    138,190,83,206,125,135,241,249,86,187,68,249,178,251,208,218,
    163,159,145,26,59,138,206,22,239,93,14,76,156,194,148,56,
    178,171,247,12,206,132,30,197,37,131,94,93,64,67,177,120,
    85,44,88,154,31,76,157,159,83,241,113,238,189,194,200,222,
    159,109,235,87,131,103,97,223,112,117,228,121,73,6,148,217,
    228,153,26,51,237,162,11,78,107,233,135,182,192,79,137,39,
    63,197,138,196,131,154,0,201,17,244,45,103,185,84,90,132,
    246,185,37,240,144,137,137,195,91,62,100,234,179,164,163,19,
    7,230,168,249,112,160,160,0,115,41,62,23,214,42,199,91,
    67,73,197,155,113,184,26,161,249,176,231,245,247,3,239,209,
    17,141,68,195,249,198,181,44,99,122,171,104,58,57,133,184,
    198,122,126,252,196,76,225,245,56,146,211,135,192,231,71,109,
    58,59,65,16,251,28,16,158,31,72,187,47,251,251,120,38,
    61,8,7,118,167,231,117,25,149,82,54,181,47,205,212,20,
    195,90,240,91,14,27,41,37,3,59,177,237,199,17,6,191,
    99,95,197,137,29,72,76,246,101,96,63,176,57,114,218,97,
    106,123,251,248,214,243,149,38,248,101,23,229,172,202,75,186,
    41,39,80,71,39,84,29,23,172,46,30,194,67,204,36,251,
    144,39,16,122,167,224,0,67,105,20,231,136,218,95,112,139,
    193,51,159,26,234,88,245,152,138,109,42,182,160,184,249,190,
    103,36,127,137,29,31,210,8,180,88,85,113,215,170,91,170,
    117,201,67,159,81,171,244,93,63,253,215,183,241,83,89,134,
    189,138,241,214,42,105,202,26,157,32,169,172,83,156,223,107,
    24,225,36,151,83,44,108,26,225,52,151,51,44,108,25,225,
    44,151,115,44,156,55,194,5,46,23,89,184,100,132,203,92,
    222,98,225,109,35,188,195,229,93,22,174,64,118,187,181,202,
    194,53,186,113,9,170,44,177,41,170,212,254,203,168,194,126,
    57,46,143,84,255,203,96,226,252,234,255,97,185,243,8,178,
    204,226,186,64,34,138,211,106,234,182,161,48,121,53,47,250,
    142,158,5,31,217,151,71,112,217,245,19,233,41,169,1,186,
    55,158,105,114,48,210,227,158,92,4,135,60,169,170,152,25,
    253,54,159,209,57,103,84,195,5,198,205,92,201,209,61,32,
    95,137,42,206,96,41,197,109,233,75,55,94,2,215,202,178,
    92,200,151,162,154,47,5,221,38,68,242,196,189,186,28,58,
    141,37,61,111,48,144,81,224,124,64,77,62,132,98,58,202,
    58,227,96,3,133,193,63,67,158,226,76,97,254,185,128,105,
    206,187,62,72,17,181,48,77,198,178,149,187,221,152,80,101,
    242,126,109,200,219,166,179,218,69,168,119,62,165,130,131,123,
    30,215,157,167,57,28,119,70,49,51,144,61,111,72,135,161,
    155,94,99,162,197,55,6,252,164,214,70,41,70,199,125,183,
    231,69,50,229,190,190,65,133,250,163,163,73,46,81,119,71,
    53,72,188,168,155,117,120,211,123,234,141,200,164,31,213,234,
    72,85,249,39,55,13,191,146,220,217,205,26,212,29,109,173,
    70,48,122,50,137,76,7,23,61,126,131,138,153,111,46,81,
    31,142,106,160,175,143,189,20,225,119,49,31,137,240,244,77,
    215,236,126,124,28,41,30,230,187,183,162,145,41,204,222,164,
    164,62,184,182,219,180,231,189,150,163,109,249,206,141,210,12,
    198,27,116,216,25,57,130,34,211,164,146,239,68,14,206,20,
    178,123,134,0,177,78,226,33,158,107,107,44,196,38,174,59,
    182,52,230,73,230,131,124,91,138,105,140,168,98,34,179,40,
    10,191,86,189,90,23,156,37,94,249,31,73,65,86,205,101,
    54,152,195,221,48,117,72,162,200,143,179,188,141,77,114,139,
    255,118,225,219,90,237,214,124,139,108,50,59,138,0,76,181,
    29,175,175,47,4,249,125,118,63,144,234,72,203,55,214,148,
    247,58,63,166,226,65,30,48,126,65,173,137,46,253,237,77,
    51,251,205,199,65,144,56,228,90,104,0,165,199,124,123,221,
    223,102,44,139,122,122,149,190,144,125,125,89,202,231,180,119,
    223,63,233,197,254,145,12,50,157,213,235,117,126,19,247,61,
    148,143,30,101,55,52,163,204,94,121,31,36,212,106,241,138,
    52,101,236,200,241,104,53,140,88,209,101,252,85,179,105,113,
    242,39,206,86,175,108,233,140,73,34,187,33,57,19,119,145,
    171,103,219,27,113,99,116,144,41,54,29,23,85,245,241,79,
    223,250,60,226,75,158,223,99,209,162,11,213,137,186,168,209,
    247,12,126,91,184,243,89,37,209,16,211,162,130,223,45,252,
    158,181,166,90,245,114,189,142,122,147,83,162,248,187,142,212,
    110,88,235,75,117,241,31,9,111,226,145,
};

EmbeddedPython embedded_m5_internal_param_SerialLink(
    "m5/internal/param_SerialLink.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_SerialLink.py",
    "m5.internal.param_SerialLink",
    data_m5_internal_param_SerialLink,
    2539,
    7647);

} // anonymous namespace
