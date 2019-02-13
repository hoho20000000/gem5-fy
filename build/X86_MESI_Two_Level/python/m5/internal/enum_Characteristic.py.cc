#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_Characteristic[] = {
    120,156,197,87,109,111,219,200,17,158,37,41,201,146,45,91,
    138,29,59,206,57,177,114,137,99,229,205,114,147,250,206,65,
    131,67,29,197,61,24,119,118,13,234,238,146,219,43,64,208,
    36,101,209,150,73,129,92,39,167,66,254,82,31,218,254,152,
    126,235,15,108,103,102,73,69,201,165,64,129,34,169,19,173,
    30,46,103,119,231,229,153,153,149,7,217,223,52,126,126,223,
    0,72,235,6,128,143,255,5,156,2,244,5,72,3,68,96,
    128,63,7,39,5,136,151,65,248,5,248,5,64,154,16,152,
    112,137,192,130,159,76,136,158,104,169,218,88,170,244,33,169,
    42,190,192,189,167,224,212,226,41,3,134,21,8,10,32,139,
    240,50,154,7,43,40,193,73,5,226,18,8,252,139,240,228,
    87,195,26,100,43,166,64,150,81,106,21,165,42,44,53,207,
    82,217,219,50,189,229,21,126,25,252,10,252,130,154,79,131,
    63,205,90,204,128,63,195,160,10,126,149,193,44,248,179,12,
    230,32,176,32,172,129,172,49,168,131,172,51,184,2,242,10,
    131,121,144,243,12,22,64,46,48,184,10,242,42,131,69,144,
    139,12,150,64,46,49,184,6,242,26,131,101,144,203,12,174,
    131,188,206,224,51,144,159,49,88,1,185,194,224,6,200,27,
    12,110,130,188,201,96,21,228,42,131,6,200,6,131,91,32,
    111,49,248,28,228,231,12,110,131,188,205,224,14,200,59,12,
    214,64,174,49,184,11,242,46,131,117,144,235,12,154,32,155,
    12,238,129,188,199,224,62,200,251,12,30,128,124,192,224,33,
    200,135,12,30,129,124,196,96,3,228,6,131,22,200,22,121,
    183,211,172,35,61,194,127,225,95,83,32,82,51,56,188,14,
    146,52,140,35,39,140,186,113,104,208,251,18,13,68,38,143,
    6,19,63,69,252,180,137,85,9,48,165,48,88,200,170,11,
    220,65,0,174,241,13,184,196,73,19,150,47,4,61,132,38,
    140,16,88,208,229,23,161,149,73,92,32,79,234,48,194,221,
    11,48,226,153,206,203,232,6,88,170,200,68,168,51,17,244,
    107,92,76,175,145,6,128,106,23,240,216,3,214,91,145,222,
    27,172,157,90,192,193,9,162,243,51,167,221,115,19,215,83,
    65,18,166,42,244,154,100,128,42,147,21,103,131,56,81,253,
    240,72,77,145,172,19,185,103,129,227,168,10,62,36,3,55,
    81,161,66,203,149,133,143,39,113,24,41,50,179,159,170,36,
    28,168,234,120,181,115,22,251,231,253,64,81,102,237,241,204,
    110,146,196,73,147,252,98,211,160,104,24,156,30,43,210,242,
    140,142,104,146,122,60,164,47,113,104,245,226,179,0,135,232,
    120,120,222,58,14,206,182,30,117,135,173,163,243,176,239,183,
    94,109,127,225,236,239,118,246,156,239,222,196,206,183,193,235,
    160,223,26,12,21,138,182,206,182,90,168,81,144,68,110,191,
    245,1,27,55,80,236,10,29,240,38,60,118,50,69,123,65,
    127,16,36,100,119,58,75,135,139,25,49,47,110,10,83,212,
    197,172,8,139,121,64,201,59,213,60,160,255,200,2,106,100,
    101,2,99,42,178,0,27,112,193,128,162,214,164,128,82,28,
    77,10,31,90,138,193,57,22,112,105,192,159,76,18,184,192,
    209,194,172,110,140,131,185,160,179,90,111,85,130,11,140,120,
    129,226,249,231,21,222,106,138,183,50,96,132,35,134,218,130,
    11,44,29,40,138,83,56,158,148,33,158,5,129,15,97,153,
    202,142,136,4,86,132,81,17,169,96,141,169,160,41,76,214,
    248,97,66,110,183,137,189,205,74,62,27,167,27,3,87,245,
    236,106,30,35,116,19,199,250,32,142,116,56,187,97,228,231,
    225,213,4,233,134,125,36,136,77,62,228,221,88,172,31,187,
    99,49,138,177,215,143,211,128,73,198,123,219,115,36,72,210,
    221,1,111,67,167,146,62,188,216,15,82,143,8,133,68,211,
    59,146,6,180,219,167,33,137,77,41,78,137,146,94,103,74,
    212,144,20,69,164,68,19,41,161,209,138,81,21,115,226,32,
    36,111,122,133,44,217,173,156,31,255,4,29,19,1,39,6,
    103,232,136,107,3,74,99,228,56,67,71,156,255,244,246,33,
    8,101,100,243,88,2,48,192,52,123,5,215,48,107,144,62,
    40,251,140,18,154,227,73,52,40,0,242,82,199,28,185,164,
    73,194,145,47,208,10,218,202,160,35,44,24,44,225,230,83,
    68,135,17,100,188,185,52,145,23,168,17,166,51,86,11,156,
    94,196,115,255,194,132,203,42,6,211,64,245,194,52,126,163,
    179,156,48,23,189,14,166,205,225,240,143,71,39,129,167,210,
    85,156,248,49,62,111,120,110,20,197,170,225,250,126,195,85,
    88,5,142,206,85,144,54,84,220,88,75,155,20,74,251,122,
    206,164,241,126,195,65,96,51,208,244,241,67,79,97,125,153,
    231,7,78,205,52,80,72,132,94,236,167,56,79,75,143,3,
    101,215,104,5,185,57,102,5,152,39,14,137,210,177,40,71,
    217,187,147,107,160,171,77,49,167,78,26,244,187,92,192,188,
    190,155,166,14,105,192,243,76,56,178,250,181,219,63,15,120,
    247,20,247,67,133,8,106,29,62,81,93,186,70,230,228,214,
    179,73,81,28,249,67,212,48,244,158,208,225,215,152,138,85,
    172,75,85,177,136,159,178,184,42,74,72,200,146,88,50,60,
    43,163,223,184,231,44,146,233,192,113,23,89,232,145,142,151,
    88,77,154,6,23,3,182,138,232,107,223,39,68,139,237,59,
    52,172,209,112,151,134,245,220,240,143,111,125,245,125,235,219,
    116,162,193,38,123,102,102,220,56,191,156,119,242,107,118,34,
    191,46,41,79,70,220,95,67,115,34,71,76,114,64,60,157,
    103,21,231,32,6,30,115,144,132,57,155,176,237,78,230,2,
    29,122,96,47,147,26,183,112,88,95,75,215,27,154,121,141,
    158,155,54,162,248,45,221,27,244,82,151,54,34,187,189,66,
    190,159,160,243,241,4,157,237,6,73,16,151,237,219,52,88,
    255,201,249,247,254,31,206,63,214,206,255,154,78,156,201,248,
    54,203,60,155,22,30,145,133,34,82,202,195,208,65,48,92,
    162,48,76,250,127,9,27,224,203,104,5,123,26,199,128,218,
    90,85,183,53,238,141,250,154,154,215,182,176,144,131,34,69,
    162,107,194,98,214,173,82,106,39,131,36,254,121,216,136,187,
    13,5,185,74,207,214,210,141,181,244,119,88,94,26,95,189,
    245,121,86,74,146,96,64,165,64,151,6,242,140,10,35,124,
    166,173,118,127,246,2,110,40,252,228,56,186,18,232,107,141,
    147,53,42,12,15,199,195,200,227,193,181,16,239,54,84,2,
    63,81,48,42,227,96,144,49,135,116,92,133,35,97,138,37,
    204,253,137,56,208,199,164,56,16,213,254,134,141,84,80,40,
    254,10,228,101,244,101,150,232,156,61,121,6,205,147,56,221,
    103,70,226,131,221,201,200,50,195,200,10,7,166,206,160,202,
    77,39,235,86,120,65,249,251,68,85,25,119,19,51,187,228,
    76,102,144,53,206,32,14,209,127,213,49,172,119,147,136,220,
    143,217,70,98,156,46,250,254,120,231,221,10,197,55,26,147,
    171,188,250,248,241,153,210,7,57,164,211,143,111,163,67,117,
    249,134,88,48,52,75,152,64,95,210,176,61,78,99,145,207,
    125,84,245,86,223,47,164,19,109,196,209,85,232,21,233,96,
    177,214,115,37,246,232,123,191,96,38,230,138,227,185,205,177,
    151,135,169,77,51,106,121,124,148,86,207,153,252,81,196,87,
    40,125,119,155,210,137,140,183,108,53,228,46,157,45,202,167,
    40,31,15,176,17,115,207,102,233,44,115,83,155,14,213,247,
    74,106,82,246,3,26,30,209,176,69,195,211,92,165,157,195,
    125,110,216,237,23,207,227,88,241,22,237,175,119,156,253,24,
    121,70,239,119,95,188,224,118,191,187,215,217,209,160,211,126,
    193,125,255,15,88,5,122,170,206,40,30,12,134,206,19,103,
    203,121,236,108,111,239,63,87,181,119,103,191,124,188,249,205,
    243,73,81,20,220,114,126,227,60,222,255,245,236,147,47,72,
    150,142,166,19,201,21,223,4,195,163,216,77,252,237,205,199,
    191,229,23,251,237,29,166,247,193,110,251,233,246,230,166,246,
    194,110,219,57,108,59,79,183,89,226,176,189,199,86,29,182,
    247,219,123,59,92,24,52,100,35,89,34,58,228,90,119,152,
    32,45,58,94,18,4,17,239,201,207,232,91,90,210,9,250,
    216,179,120,73,145,31,147,208,237,107,216,115,253,248,13,123,
    171,19,123,167,129,10,124,94,253,93,156,246,194,35,151,241,
    247,209,105,68,247,182,105,198,233,249,128,126,51,101,114,63,
    124,235,252,16,96,110,210,47,170,131,95,145,145,253,236,189,
    118,147,183,117,243,211,36,231,51,93,203,191,226,210,29,225,
    80,163,203,210,84,25,155,24,126,207,225,183,49,35,76,195,
    20,21,108,109,5,252,174,225,119,221,152,169,149,173,114,25,
    229,166,203,226,127,248,103,252,27,237,200,226,228,
};

EmbeddedPython embedded_m5_internal_enum_Characteristic(
    "m5/internal/enum_Characteristic.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/enum_Characteristic.py",
    "m5.internal.enum_Characteristic",
    data_m5_internal_enum_Characteristic,
    1997,
    4693);

} // anonymous namespace