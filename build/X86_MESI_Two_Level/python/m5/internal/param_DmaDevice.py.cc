#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DmaDevice[] = {
    120,156,197,88,235,110,219,200,21,62,67,234,98,201,150,45,
    199,183,56,113,214,76,99,55,234,37,118,219,133,219,109,55,
    13,154,77,178,197,2,27,111,64,47,144,68,45,64,208,228,
    72,166,45,145,2,57,182,163,133,252,167,54,218,62,76,255,
    245,153,250,28,237,57,103,72,134,150,109,96,139,214,90,217,
    26,13,135,103,102,206,204,247,157,203,140,7,233,231,46,126,
    255,96,1,36,255,18,0,62,254,11,56,2,232,9,104,27,
    32,164,1,254,2,28,150,33,90,5,225,151,225,2,160,109,
    130,52,225,28,43,37,248,147,9,225,167,90,106,49,151,170,
    94,39,213,192,23,56,246,20,28,149,184,201,128,97,29,100,
    25,218,21,120,27,46,64,73,86,225,176,14,81,21,4,126,
    66,156,249,221,176,9,105,143,41,104,215,80,106,29,165,234,
    44,181,192,82,233,219,26,189,229,30,126,13,252,58,92,160,
    230,211,224,79,179,22,51,224,207,112,165,1,126,131,43,179,
    224,207,114,101,46,27,190,9,237,249,172,126,167,80,95,40,
    212,23,11,245,165,66,125,185,80,95,41,212,239,22,234,171,
    133,250,189,66,253,126,161,190,198,245,57,144,243,16,60,128,
    224,19,8,214,161,35,192,111,146,170,184,139,239,219,22,200,
    18,4,15,161,253,16,36,254,91,112,46,112,75,231,11,61,
    126,196,61,238,228,61,30,113,143,13,104,111,128,196,255,71,
    186,199,20,236,181,150,16,242,224,223,248,105,33,228,160,102,
    176,56,145,113,18,68,161,19,132,157,40,48,232,125,149,10,
    34,136,71,133,137,223,10,126,95,16,83,98,96,154,160,238,
    200,148,51,28,65,0,246,241,13,154,193,55,97,245,76,208,
    67,96,194,8,43,37,232,240,139,160,148,74,156,33,246,243,
    48,194,209,203,48,226,150,189,183,225,3,40,169,10,131,59,
    207,224,234,215,216,153,94,35,180,128,106,151,113,218,93,214,
    91,145,222,91,172,157,106,98,225,12,220,216,237,59,47,251,
    238,75,121,18,120,178,69,202,171,26,173,160,63,136,98,213,
    11,246,213,20,201,57,161,219,151,142,163,234,248,16,99,39,
    21,40,92,181,42,225,227,97,20,132,138,150,216,75,84,28,
    12,84,35,239,237,244,35,255,184,39,213,52,182,124,197,45,
    175,226,56,138,91,180,39,54,21,138,138,193,81,87,145,134,
    125,154,162,69,170,113,145,236,97,177,125,16,245,37,22,97,
    119,120,188,221,149,253,157,39,157,225,246,254,113,208,243,183,
    223,125,246,107,231,245,171,189,175,156,111,79,35,231,107,121,
    34,123,219,131,161,66,209,237,254,206,54,106,36,227,208,197,
    166,203,235,219,66,145,59,52,248,105,208,117,82,37,15,100,
    111,32,99,90,115,50,75,19,139,25,177,32,62,17,166,152,
    23,179,34,168,100,64,210,206,52,50,32,255,145,2,105,164,
    38,143,88,138,20,88,3,206,184,66,104,181,8,72,194,207,
    36,216,112,149,8,74,87,192,185,1,127,54,73,224,12,203,
    18,90,168,149,131,184,168,45,84,15,85,133,51,68,186,76,
    56,126,183,198,67,77,241,80,6,140,176,68,136,75,112,134,
    110,0,69,177,9,203,195,26,68,179,32,240,33,168,17,149,
    69,136,196,125,55,170,32,5,74,57,5,52,117,105,53,126,
    16,211,150,219,196,218,86,61,107,141,146,173,129,171,14,236,
    70,134,15,110,19,227,188,27,133,26,202,78,16,250,25,180,
    154,28,157,160,135,228,176,105,15,121,52,22,235,69,110,46,
    70,248,122,189,40,209,4,227,177,237,57,18,36,233,206,128,
    135,161,89,73,31,238,236,203,196,35,50,33,201,244,136,164,
    1,141,118,251,4,177,201,172,23,105,130,123,76,135,38,18,
    162,130,116,104,33,29,116,109,205,104,136,57,177,27,208,78,
    122,229,212,192,75,25,55,254,9,26,15,1,135,6,91,229,
    136,253,1,74,35,106,108,149,35,182,121,122,251,115,16,202,
    72,219,209,236,17,92,106,189,131,125,152,49,72,29,148,125,
    74,70,204,88,18,5,202,128,156,212,120,35,143,52,65,24,
    245,50,245,160,161,12,154,162,4,131,21,28,124,138,168,48,
    130,148,51,231,38,114,2,53,66,51,70,15,129,205,203,56,
    239,95,152,108,169,151,96,10,168,131,32,137,78,181,117,83,
    157,29,221,30,154,204,155,225,55,251,135,210,83,201,58,54,
    188,143,142,45,207,13,195,72,89,174,239,91,174,66,235,223,
    63,86,50,177,84,100,109,38,45,130,209,190,151,177,40,31,
    111,56,144,54,87,52,117,252,192,83,232,87,22,248,129,205,
    50,145,10,73,112,16,249,9,182,83,215,174,84,54,57,43,
    118,50,17,43,192,28,113,72,148,166,69,57,178,220,231,153,
    6,218,203,84,50,218,36,178,215,97,199,229,245,220,36,113,
    72,3,110,103,178,209,170,79,220,222,177,228,209,19,28,15,
    21,162,170,214,97,2,254,136,242,136,124,229,188,156,48,10,
    253,33,106,23,120,159,210,196,119,153,134,13,244,71,13,177,
    140,223,154,88,18,85,36,99,85,172,24,94,41,165,94,30,
    99,150,105,217,192,152,139,20,118,164,226,57,122,145,150,193,
    78,128,87,68,212,181,127,74,53,234,108,111,80,177,73,197,
    143,169,120,156,45,250,118,87,222,24,95,249,11,154,205,224,
    229,122,102,186,176,220,174,156,75,118,53,91,176,171,115,178,
    143,17,199,210,192,44,216,134,73,139,143,166,51,107,98,219,
    67,192,209,246,72,152,173,8,67,108,209,6,104,210,93,123,
    149,212,120,136,197,227,205,228,177,165,25,103,29,184,137,21,
    70,31,105,110,209,75,237,206,136,228,246,26,237,123,129,198,
    221,2,141,109,139,36,136,195,246,35,42,74,55,109,252,79,
    38,189,241,93,189,241,127,164,217,102,82,158,205,50,191,166,
    133,71,36,33,52,170,25,4,164,207,112,133,32,40,238,253,
    10,6,188,183,225,26,198,48,222,127,10,99,13,29,198,56,
    22,234,20,51,243,103,65,57,171,84,8,133,142,9,203,105,
    116,74,40,124,12,226,232,195,208,138,58,150,130,76,165,167,
    155,201,214,102,242,57,186,20,235,217,199,253,78,221,71,44,
    7,100,254,218,29,208,174,168,32,196,103,26,234,213,7,79,
    114,0,225,39,199,209,214,175,83,24,39,13,76,8,13,99,
    97,100,88,176,255,195,60,134,220,222,4,128,168,231,64,208,
    66,222,208,84,117,70,193,20,43,104,239,5,12,232,107,18,
    6,68,177,191,1,167,172,2,254,10,180,195,184,143,169,113,
    179,213,100,150,179,64,226,148,187,140,196,181,209,200,72,45,
    194,72,157,5,154,204,160,193,65,38,141,78,152,140,252,189,
    224,73,242,232,97,166,9,77,209,114,74,185,229,48,60,223,
    43,66,148,46,27,15,109,61,90,25,137,177,153,232,60,113,
    227,178,87,226,236,197,100,175,174,110,23,155,41,61,137,67,
    250,188,255,136,12,249,225,7,98,209,208,236,96,226,252,134,
    138,207,114,211,21,89,219,173,169,182,62,238,56,11,33,195,
    209,94,231,29,205,95,98,141,231,170,108,1,249,8,156,206,
    210,135,98,223,23,68,146,95,97,69,226,209,78,128,100,231,
    121,193,217,45,149,6,65,125,110,8,60,150,98,198,112,193,
    199,82,125,250,180,117,198,192,4,205,190,236,36,200,185,92,
    114,205,133,157,202,193,214,56,82,241,97,2,102,70,80,62,
    237,185,253,125,223,125,54,160,137,104,54,47,51,43,35,211,
    188,89,212,156,12,66,220,160,60,63,126,158,173,224,100,2,
    57,233,83,242,141,153,230,204,127,63,242,216,23,124,123,32,
    173,190,236,239,227,57,244,32,24,88,157,158,219,101,76,204,
    116,101,223,100,43,83,12,106,193,100,217,99,36,148,4,236,
    70,150,23,133,232,246,142,61,21,197,150,47,49,197,151,190,
    245,196,98,159,105,5,137,229,238,227,91,215,83,154,220,151,
    173,147,147,41,55,238,38,156,55,29,157,82,117,66,160,58,
    120,238,14,48,127,164,131,117,154,56,232,16,193,174,133,178,
    39,206,12,181,173,96,108,193,131,158,26,106,47,245,156,138,
    29,42,182,161,24,116,111,23,199,223,225,184,17,77,64,91,
    85,17,247,141,154,161,230,138,198,249,134,250,36,87,77,244,
    253,247,49,81,89,130,118,153,4,100,133,238,33,168,156,34,
    183,222,174,101,214,91,231,198,105,190,224,41,167,23,60,104,
    201,149,255,209,146,217,24,38,100,6,195,255,167,1,219,191,
    255,1,20,183,159,65,26,200,111,50,94,35,133,158,87,245,
    165,54,94,141,1,134,251,225,34,47,50,187,40,162,219,41,
    190,228,83,156,93,81,250,213,212,87,65,156,166,57,70,154,
    129,17,126,52,246,46,163,173,79,213,164,67,40,79,157,49,
    250,233,12,139,196,220,193,64,134,190,253,11,234,241,75,40,
    102,74,44,51,129,157,35,59,61,131,60,252,206,96,106,180,
    136,33,248,42,91,201,228,11,139,100,90,54,115,130,110,76,
    14,231,139,12,231,214,236,37,87,100,127,65,197,234,37,191,
    163,97,120,114,213,3,56,124,55,229,247,93,7,61,115,136,
    7,16,186,100,244,162,227,80,81,206,254,95,246,192,44,65,
    209,188,55,74,240,46,43,58,58,250,178,39,149,28,39,132,
    190,44,212,110,212,151,24,10,162,33,102,210,85,110,196,30,
    142,51,41,255,73,39,196,15,144,158,12,208,127,138,138,88,
    50,106,149,154,224,112,52,118,1,91,104,171,228,109,116,216,
    210,9,228,48,177,169,133,119,38,141,16,172,131,83,188,211,
    229,219,32,141,18,95,82,101,49,132,176,228,180,106,215,237,
    235,11,7,126,159,30,65,18,109,49,124,33,70,1,214,254,
    25,21,79,114,232,127,75,189,239,99,209,223,217,202,150,187,
    165,151,251,38,136,244,114,249,110,172,191,195,247,3,87,197,
    246,134,137,146,253,43,99,200,240,184,239,188,150,253,40,30,
    190,142,124,169,214,198,222,63,247,253,216,118,195,174,196,69,
    82,172,87,15,199,5,210,64,175,199,200,164,172,107,117,184,
    44,123,195,122,240,165,190,52,226,172,245,234,251,23,189,200,
    59,146,126,42,243,224,102,153,151,81,223,197,246,235,103,217,
    11,178,89,230,199,222,251,49,245,90,26,107,77,100,28,184,
    189,224,59,125,131,153,53,115,40,30,135,129,64,204,159,56,
    128,179,161,228,180,100,234,196,178,27,32,32,49,143,144,75,
    167,222,148,72,203,72,140,91,108,177,231,132,44,72,231,194,
    250,244,251,140,15,187,100,4,77,186,86,154,170,225,177,31,
    127,231,240,215,64,63,107,152,162,46,102,69,25,127,155,248,
    59,111,204,52,107,165,90,13,229,166,103,196,245,127,235,104,
    137,117,99,189,81,19,255,1,116,72,12,41,
};

EmbeddedPython embedded_m5_internal_param_DmaDevice(
    "m5/internal/param_DmaDevice.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_DmaDevice.py",
    "m5.internal.param_DmaDevice",
    data_m5_internal_param_DmaDevice,
    2396,
    6951);

} // anonymous namespace
