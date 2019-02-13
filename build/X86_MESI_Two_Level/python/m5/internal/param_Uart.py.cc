#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Uart[] = {
    120,156,189,88,251,83,27,201,17,238,89,189,144,64,66,152,
    151,177,241,177,190,131,67,121,24,146,92,57,185,228,28,87,
    108,206,151,114,85,204,81,139,83,182,149,84,109,45,187,35,
    177,32,237,170,118,7,176,174,196,47,135,43,143,255,37,191,
    229,15,76,186,123,118,151,21,143,212,85,229,100,64,195,104,
    166,103,166,103,250,251,186,123,198,133,228,103,21,63,127,48,
    1,226,69,3,192,195,63,1,199,0,61,1,109,3,132,52,
    192,155,135,163,18,132,43,32,188,18,124,0,104,23,64,22,
    224,2,43,69,248,75,1,130,47,180,212,66,38,85,185,73,
    170,142,29,56,247,20,28,23,185,201,128,97,13,100,9,218,
    101,120,19,204,67,81,86,224,168,6,97,5,4,254,4,184,
    242,219,97,19,146,17,83,208,174,162,212,26,74,213,88,106,
    158,165,146,222,42,245,242,8,175,10,94,13,62,160,230,211,
    224,77,179,22,51,224,205,112,165,14,94,157,43,13,240,26,
    92,153,77,167,111,66,123,46,173,223,201,213,231,115,245,133,
    92,125,49,87,95,202,213,151,115,245,187,185,250,74,174,126,
    47,87,191,159,171,175,230,234,15,114,245,79,114,245,181,92,
    221,228,250,44,200,57,240,31,130,255,41,248,159,65,71,128,
    215,164,173,225,169,191,107,175,131,44,130,191,1,237,13,144,
    248,183,14,23,2,77,48,151,27,241,57,143,184,147,141,216,
    228,17,45,104,183,64,226,223,166,30,49,5,251,173,69,132,
    136,255,31,252,105,9,172,169,25,44,78,101,20,251,97,96,
    251,65,39,244,13,234,175,80,65,128,114,169,40,224,167,140,
    159,29,66,86,4,12,43,212,29,145,117,142,51,8,192,49,
    158,65,43,120,5,88,57,23,244,197,47,192,8,43,69,232,
    112,135,95,76,36,206,17,43,115,48,194,217,75,48,226,150,
    253,55,193,3,40,170,50,131,97,142,193,160,187,113,48,117,
    35,20,0,213,46,225,178,187,172,183,34,189,183,88,59,53,
    141,133,61,112,34,167,111,255,217,137,84,139,244,86,85,82,
    190,63,8,35,213,243,15,212,20,137,216,129,211,151,182,173,
    106,248,37,66,121,229,43,220,176,42,226,215,163,208,15,20,
    237,174,23,171,200,31,168,122,54,218,238,135,222,73,79,242,
    34,47,185,229,69,20,133,81,139,142,195,162,66,81,49,56,
    238,42,82,174,79,75,180,72,43,46,226,93,44,182,15,195,
    190,196,34,232,14,79,182,187,178,255,248,81,103,184,125,112,
    226,247,188,237,183,95,254,218,126,245,98,255,165,253,250,44,
    180,255,36,79,101,111,123,48,84,40,186,221,127,188,141,26,
    201,40,112,176,41,219,218,22,246,222,161,121,207,252,174,157,
    232,119,40,123,3,25,209,118,227,6,173,41,102,196,188,248,
    68,20,196,156,104,8,191,156,154,143,14,165,158,154,239,95,
    137,249,140,196,49,160,5,69,98,78,3,206,185,66,54,106,
    145,249,200,106,5,50,22,110,16,77,209,21,112,97,192,95,
    11,36,112,142,101,17,121,108,102,166,91,208,60,214,83,85,
    224,28,237,91,34,235,125,183,202,83,77,241,84,6,140,176,
    68,195,22,225,28,157,5,138,98,19,150,71,85,8,27,32,
    240,139,95,37,0,139,0,225,250,118,84,70,195,23,51,195,
    107,192,210,110,60,63,162,211,182,8,171,173,90,218,26,198,
    91,3,71,29,90,245,212,52,120,76,108,226,221,48,208,86,
    236,248,129,151,90,85,227,162,227,247,16,23,22,157,33,207,
    198,98,189,208,201,196,200,180,110,47,140,37,99,139,231,182,
    102,73,144,164,59,3,158,134,86,37,125,120,176,39,99,151,
    112,132,248,210,51,146,6,52,219,68,177,97,17,143,23,104,
    238,123,140,132,38,98,161,140,72,104,33,18,116,109,213,168,
    139,89,177,235,211,33,186,165,132,209,197,20,22,255,6,109,
    10,1,71,6,211,112,196,14,0,165,209,96,76,195,17,147,
    156,122,127,14,66,25,73,59,242,28,237,74,173,119,112,12,
    131,5,81,131,178,79,136,181,108,70,178,126,9,16,142,218,
    212,8,33,141,13,54,120,137,70,208,84,6,45,81,132,193,
    50,78,62,69,40,24,65,2,151,139,2,194,1,53,66,242,
    162,75,192,230,37,92,247,123,198,89,226,22,216,250,234,208,
    143,195,51,205,105,170,179,103,219,71,182,236,13,191,61,56,
    146,174,138,215,176,225,93,120,98,186,78,16,132,202,116,60,
    207,116,20,114,254,224,68,201,216,84,161,185,17,183,200,130,
    214,189,20,64,217,124,195,129,180,184,162,81,227,249,174,66,
    111,50,207,95,152,145,177,84,104,255,195,208,139,177,157,134,
    118,165,178,154,52,130,142,57,100,5,180,183,34,81,90,22,
    229,136,180,207,82,13,180,111,41,167,136,137,101,175,195,238,
    202,237,57,113,108,147,6,220,206,56,163,93,159,58,189,19,
    201,179,199,56,31,42,68,85,173,195,100,189,208,93,218,69,
    186,105,222,73,16,6,222,16,21,243,221,47,104,205,187,140,
    192,58,122,161,186,88,194,79,85,44,138,10,226,176,34,150,
    13,183,152,160,46,139,39,75,180,99,96,115,139,196,226,136,
    194,11,244,29,45,131,169,207,155,33,212,90,63,165,26,13,
    182,214,169,216,160,226,115,42,54,211,253,78,108,211,245,171,
    155,222,161,133,12,222,169,91,72,246,148,177,201,30,99,83,
    35,199,166,11,98,197,136,67,166,95,200,49,162,64,251,14,
    167,83,14,49,227,208,204,200,56,18,102,238,96,36,205,35,
    159,22,221,181,86,72,141,135,88,108,110,196,155,166,198,153,
    121,232,196,102,16,94,130,219,164,78,237,191,8,218,22,101,
    137,121,240,118,115,224,181,76,146,32,228,90,159,81,81,188,
    237,204,127,242,17,207,188,171,207,252,143,180,208,76,130,174,
    6,163,106,90,184,4,13,50,68,37,61,253,125,172,12,151,
    233,244,243,199,190,140,193,237,77,176,138,241,138,143,158,66,
    86,93,135,44,142,123,58,233,76,29,152,95,74,43,101,50,
    64,167,0,75,73,36,138,41,84,12,162,240,253,208,12,59,
    166,130,84,165,39,27,241,214,70,252,21,250,16,243,233,229,
    81,39,254,34,146,3,226,187,230,63,29,136,242,3,252,78,
    83,189,120,239,74,14,22,252,205,182,53,221,117,166,98,39,
    65,8,173,194,102,48,82,51,176,195,195,116,133,252,220,100,
    109,80,203,108,64,123,216,163,85,106,108,128,130,88,70,130,
    231,142,159,62,5,58,126,2,214,223,129,243,81,1,127,3,
    58,92,60,194,132,205,204,149,148,47,243,36,78,41,202,72,
    220,24,121,140,132,7,70,226,29,144,40,131,58,7,148,36,
    18,97,206,241,143,156,235,200,34,69,33,201,91,242,124,41,
    102,124,97,203,252,160,104,80,28,167,12,157,58,114,139,196,
    152,28,58,19,92,31,119,67,156,164,20,216,131,171,137,153,
    101,74,207,111,147,42,239,46,141,66,62,247,129,88,48,52,
    38,24,46,191,161,226,203,140,171,34,109,155,132,86,107,87,
    157,100,46,50,216,218,195,188,165,165,139,172,236,108,133,3,
    26,13,230,52,149,126,40,176,61,39,84,252,10,43,18,47,
    118,2,36,251,200,15,156,181,82,105,144,109,47,12,129,151,
    82,76,7,62,240,165,84,223,61,45,157,14,48,34,211,15,
    59,4,114,36,99,30,56,119,62,153,117,181,225,168,120,63,
    89,74,145,237,158,244,156,254,129,231,60,37,255,17,211,66,
    110,74,33,35,85,186,153,87,154,192,47,110,209,155,191,126,
    149,42,127,58,217,52,243,9,112,180,214,74,51,204,189,208,
    101,202,191,62,148,102,95,246,15,240,46,121,232,15,204,78,
    207,233,178,37,10,201,166,190,77,55,165,216,148,57,102,178,
    99,136,41,184,239,134,166,27,6,232,216,78,92,21,70,166,
    39,49,97,151,158,249,200,100,175,104,250,177,233,28,96,175,
    227,42,13,228,113,18,50,156,156,168,27,115,42,116,124,70,
    213,201,155,210,198,107,179,143,217,224,41,100,9,129,246,255,
    236,60,40,33,226,60,79,243,2,3,7,222,216,212,80,251,
    161,103,84,60,166,98,27,242,193,116,98,214,251,93,98,185,
    152,14,168,44,238,27,85,131,61,60,245,239,145,100,124,157,
    137,193,15,97,162,44,66,187,68,2,178,76,143,7,84,78,
    145,187,110,87,211,198,26,151,211,220,56,147,50,183,206,141,
    13,126,191,209,239,81,77,98,113,249,255,100,49,179,97,242,
    60,56,255,49,201,107,253,254,227,234,108,61,133,36,86,223,
    70,92,35,65,1,111,232,27,77,92,125,242,24,209,135,11,
    188,191,244,161,135,94,151,248,81,79,113,238,68,201,85,83,
    63,229,112,18,102,27,73,126,69,86,163,185,119,217,198,250,
    126,76,236,8,228,153,125,9,66,157,58,145,132,51,24,200,
    192,179,126,65,194,191,132,124,10,196,50,147,61,47,162,231,
    247,144,5,215,25,204,121,22,48,192,94,71,38,49,61,183,
    53,134,96,51,3,227,250,71,49,236,63,83,195,182,230,198,
    156,143,245,156,138,149,49,79,163,207,125,121,140,248,246,160,
    231,168,78,24,245,41,217,190,181,15,227,186,126,241,72,26,
    174,10,162,122,125,31,21,188,105,146,172,47,157,36,109,224,
    131,86,164,182,39,123,82,201,28,18,20,29,99,114,75,241,
    36,186,254,112,136,185,113,133,27,81,216,182,63,130,211,220,
    209,92,214,111,108,232,52,69,25,111,30,139,70,181,92,21,
    28,123,174,188,152,230,218,202,89,27,93,150,116,82,56,140,
    45,106,81,100,145,36,38,176,2,118,254,17,150,95,115,180,
    149,248,180,211,168,65,182,228,123,194,174,211,215,15,6,220,
    159,220,40,98,205,19,126,203,162,104,106,253,140,138,71,153,
    233,127,75,163,137,54,253,199,91,233,94,183,244,94,247,82,
    123,26,220,173,30,220,40,245,50,192,123,47,222,84,162,176,
    199,175,0,215,37,246,135,177,146,125,117,255,74,167,12,78,
    250,246,43,217,15,163,225,171,208,147,106,245,74,255,51,207,
    139,44,39,232,74,60,5,138,252,234,225,85,129,36,236,235,
    57,82,41,243,70,29,198,101,175,233,162,133,176,83,191,10,
    113,210,122,189,127,167,23,186,199,210,75,100,110,62,14,150,
    249,58,236,59,216,126,243,42,251,126,186,202,220,149,126,47,
    162,81,139,87,90,99,25,249,78,207,255,78,222,98,166,215,
    9,99,110,217,249,115,39,246,221,61,63,252,90,158,250,174,
    188,69,167,203,126,130,78,218,169,232,237,240,198,89,8,245,
    227,77,156,70,240,142,136,34,12,226,72,118,125,180,124,196,
    211,140,75,39,46,125,231,6,151,147,31,57,121,34,235,196,
    91,223,168,159,242,5,186,141,69,147,30,168,166,170,162,66,
    255,103,241,191,129,126,222,40,136,154,104,136,18,254,111,226,
    255,57,99,166,89,45,86,171,40,55,61,35,254,247,239,26,
    186,133,154,177,214,168,138,255,2,101,133,27,215,
};

EmbeddedPython embedded_m5_internal_param_Uart(
    "m5/internal/param_Uart.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_Uart.py",
    "m5.internal.param_Uart",
    data_m5_internal_param_Uart,
    2445,
    7061);

} // anonymous namespace