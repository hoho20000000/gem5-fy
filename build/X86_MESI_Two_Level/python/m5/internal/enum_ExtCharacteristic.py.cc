#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_ExtCharacteristic[] = {
    120,156,197,87,109,111,27,69,16,158,189,59,191,38,78,156,
    247,151,166,212,136,134,154,151,198,133,170,80,68,133,104,163,
    80,34,149,16,157,139,218,30,72,167,203,221,218,185,212,190,
    179,238,54,73,141,156,47,164,2,126,12,223,248,129,48,51,
    123,231,184,85,144,248,66,72,235,241,220,222,236,238,236,60,
    207,204,172,125,200,254,166,240,243,117,3,32,237,8,128,0,
    255,11,120,9,208,19,224,24,32,164,1,193,44,28,21,32,
    94,3,17,20,224,53,128,99,130,52,225,28,21,11,126,52,
    33,186,171,173,234,99,171,210,101,86,53,124,129,107,151,225,
    165,197,67,6,12,171,32,11,224,20,225,89,180,0,150,44,
    193,81,21,226,18,8,252,139,112,231,231,195,58,100,51,202,
    224,84,208,234,6,90,85,217,106,129,173,178,183,21,122,203,
    51,130,10,4,85,120,141,158,79,65,48,197,94,76,67,48,
    205,74,13,130,26,43,51,16,204,176,50,11,210,130,176,14,
    78,157,149,57,112,230,88,153,7,103,158,149,5,112,22,88,
    89,4,103,145,149,37,112,150,88,89,6,103,153,149,21,112,
    86,88,89,5,103,149,149,53,112,214,88,89,7,103,157,149,
    107,224,92,99,101,3,156,13,114,185,221,156,195,152,135,127,
    225,95,19,99,14,106,26,197,137,76,210,48,142,220,48,234,
    196,161,65,239,75,36,8,33,159,132,137,159,34,126,182,9,
    170,4,24,39,140,0,66,117,134,43,8,192,57,129,1,231,
    56,104,194,218,153,160,135,208,132,17,42,22,116,248,69,104,
    101,22,103,24,252,57,24,225,234,5,24,241,72,251,89,116,
    29,44,85,228,232,206,113,116,245,107,156,76,175,49,182,128,
    110,23,112,219,61,246,91,145,223,91,236,157,90,65,225,202,
    232,184,239,238,188,82,219,135,94,226,249,74,38,97,170,66,
    191,73,103,80,21,58,72,127,16,39,170,23,30,168,50,153,
    187,145,215,151,174,171,170,248,144,12,188,68,133,10,15,175,
    44,124,60,138,195,72,209,73,123,169,74,194,129,170,141,103,
    187,253,56,56,238,73,69,140,221,229,145,157,36,137,147,38,
    133,198,38,161,72,12,94,118,21,57,218,167,45,154,228,33,
    139,212,65,209,58,140,251,18,69,212,29,30,183,186,178,127,
    239,118,103,216,58,56,14,123,65,235,249,253,207,220,239,118,
    218,187,238,211,211,216,125,34,79,100,175,53,24,42,52,109,
    245,239,181,208,35,153,68,94,175,117,249,49,183,208,114,158,
    246,56,13,187,110,230,235,161,236,13,100,66,71,79,103,104,
    127,49,45,22,196,59,194,20,115,98,70,132,197,28,86,10,
    80,45,135,245,143,12,86,35,203,64,68,86,100,48,27,112,
    198,10,97,215,36,88,9,77,147,64,196,195,34,68,93,1,
    231,6,252,100,146,193,25,74,11,19,166,49,134,116,81,39,
    140,94,170,4,103,136,123,129,80,253,121,131,151,42,243,82,
    6,140,80,34,224,22,156,97,86,162,41,14,161,60,170,64,
    60,3,2,31,194,10,101,180,136,4,38,219,168,136,132,176,
    198,132,208,68,166,211,4,97,66,145,183,137,195,205,106,62,
    26,167,91,3,79,29,218,181,28,38,12,19,195,189,23,71,
    26,209,78,24,5,57,194,154,35,157,176,135,28,177,41,134,
    188,26,155,245,98,111,108,70,48,251,189,56,149,204,51,94,
    219,158,37,67,178,238,12,120,25,218,149,252,225,201,129,76,
    125,226,20,114,77,175,72,30,208,106,87,198,19,155,114,125,
    145,246,89,103,86,212,145,23,69,100,69,19,89,161,181,13,
    163,38,102,197,94,72,1,245,11,89,214,91,57,69,254,4,
    13,139,128,35,131,83,117,196,69,2,173,17,60,78,213,17,
    23,2,122,251,49,8,101,100,227,88,11,16,99,26,157,199,
    57,76,28,100,16,218,62,160,204,102,72,137,9,5,64,106,
    106,216,145,78,154,39,12,126,129,102,208,82,6,109,97,193,
    96,5,23,47,19,35,70,144,81,231,220,68,106,160,71,152,
    212,88,54,112,120,25,247,253,133,57,151,149,14,102,130,58,
    12,211,248,84,231,58,233,92,253,218,152,57,251,195,239,15,
    142,164,175,210,27,56,240,34,62,110,248,94,20,197,170,225,
    5,65,195,83,88,11,14,142,149,76,27,42,110,108,166,77,
    66,211,94,207,201,52,94,111,56,144,54,43,154,65,65,232,
    43,172,50,11,252,192,217,153,74,133,92,56,140,131,20,199,
    105,106,87,42,187,78,51,40,204,49,59,192,84,113,201,148,
    182,69,59,74,224,135,185,7,186,230,20,115,246,164,178,215,
    225,50,230,247,188,52,117,201,3,30,103,206,209,169,79,188,
    222,177,228,213,83,92,15,29,34,85,251,112,117,213,105,149,
    78,148,7,128,79,21,197,81,48,68,39,67,255,46,237,191,
    202,108,172,97,117,170,137,101,252,84,196,146,40,33,39,75,
    98,197,240,173,140,129,227,254,179,76,167,7,134,94,100,232,
    35,35,207,177,166,52,13,46,9,124,48,98,176,253,33,105,
    52,217,190,73,98,147,196,251,36,110,229,103,191,146,0,212,
    222,14,192,54,109,106,240,169,125,51,59,223,56,203,220,55,
    178,108,102,34,203,206,41,91,70,220,110,67,115,34,83,76,
    138,65,60,149,231,22,103,34,194,143,153,72,198,156,83,216,
    133,39,51,130,54,221,179,215,200,141,119,81,220,218,76,111,
    53,52,255,26,135,94,218,136,226,11,210,55,232,165,174,113,
    68,121,123,131,194,63,65,234,238,4,169,237,6,89,16,163,
    237,247,72,88,255,20,255,15,254,167,248,119,117,252,31,211,
    166,211,25,235,102,152,109,83,194,39,202,16,40,165,28,137,
    54,42,195,21,66,98,18,130,21,108,134,207,162,13,236,111,
    12,3,181,184,154,110,113,220,39,245,109,48,47,114,97,33,
    87,138,4,70,199,132,229,172,115,165,212,90,6,73,252,106,
    216,136,59,13,5,185,75,15,54,211,173,205,244,75,172,51,
    141,175,46,194,158,213,148,68,14,168,38,232,26,65,193,81,
    97,132,207,180,212,206,43,95,114,115,225,39,215,213,37,65,
    223,114,220,172,105,33,66,12,137,145,67,194,69,17,175,58,
    84,11,175,14,143,234,24,15,58,207,62,237,88,101,48,76,
    177,130,69,96,2,10,250,152,4,5,17,238,55,236,171,130,
    208,248,21,40,208,24,206,44,227,57,135,242,60,90,32,115,
    186,222,140,196,165,157,202,200,242,195,200,42,8,38,208,160,
    198,13,40,235,92,120,95,249,125,162,188,140,59,139,153,221,
    121,38,243,200,26,231,17,163,244,175,186,135,245,102,42,17,
    2,152,115,100,198,73,163,111,148,55,223,44,85,124,193,49,
    185,226,171,43,129,168,172,247,114,201,173,23,23,0,81,141,
    190,46,22,13,205,21,166,209,231,36,238,143,243,89,228,99,
    255,181,135,55,222,46,170,19,93,197,213,21,233,57,185,97,
    177,227,179,37,142,235,91,63,110,38,198,138,227,177,235,227,
    88,15,83,155,70,212,218,120,43,237,161,59,249,123,137,47,
    85,250,66,87,214,25,141,87,111,53,228,190,157,77,202,135,
    40,49,247,176,53,115,23,103,235,44,133,83,251,14,45,194,
    151,77,234,89,246,71,36,110,147,184,71,226,11,200,26,254,
    195,237,253,93,246,237,225,227,125,94,224,81,28,171,246,0,
    235,54,121,241,77,152,200,83,252,208,32,243,106,247,211,59,
    172,19,120,79,218,238,39,217,35,185,182,39,85,91,38,39,
    161,175,173,249,30,212,199,223,66,143,48,148,50,209,53,243,
    169,151,96,193,220,198,146,34,35,197,222,255,208,126,244,68,
    118,61,127,200,203,59,187,251,60,121,137,214,187,12,39,246,
    217,63,241,146,139,218,114,101,236,125,160,75,222,87,92,225,
    190,69,81,167,155,69,185,130,181,30,191,103,241,219,152,22,
    166,97,138,42,118,128,2,126,215,241,123,206,152,174,87,172,
    74,5,237,166,42,226,210,127,198,223,242,108,157,242,
};

EmbeddedPython embedded_m5_internal_enum_ExtCharacteristic(
    "m5/internal/enum_ExtCharacteristic.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/enum_ExtCharacteristic.py",
    "m5.internal.enum_ExtCharacteristic",
    data_m5_internal_enum_ExtCharacteristic,
    1774,
    4285);

} // anonymous namespace