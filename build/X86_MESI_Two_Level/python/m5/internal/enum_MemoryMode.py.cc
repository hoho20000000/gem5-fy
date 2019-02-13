#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemoryMode[] = {
    120,156,189,87,109,111,27,69,16,158,189,59,191,38,78,236,
    36,77,154,42,165,70,52,196,188,52,70,170,10,5,170,10,
    84,85,8,137,134,234,130,212,214,32,157,156,187,179,115,169,
    125,103,249,54,105,141,156,47,164,2,126,12,223,248,129,48,
    207,236,157,227,68,69,226,75,234,214,235,189,189,217,221,217,
    121,158,103,102,227,83,246,89,224,239,55,77,162,116,71,17,
    5,252,95,209,75,162,129,162,142,69,42,180,40,88,166,163,
    2,37,155,164,130,2,189,33,234,216,20,218,116,198,29,135,
    126,182,41,190,107,172,234,51,171,210,219,172,106,252,130,215,
    46,211,75,71,134,44,154,84,41,44,80,167,72,207,226,85,
    114,194,18,29,85,41,41,145,226,79,204,59,63,159,212,41,
    155,81,166,78,133,173,110,177,85,85,172,86,197,42,123,91,
    193,91,153,17,84,40,168,210,27,246,124,129,130,5,241,98,
    145,130,69,233,212,40,168,73,103,137,130,37,233,44,83,232,
    80,84,167,78,93,58,13,234,52,164,179,66,157,21,233,172,
    82,103,85,58,107,212,89,147,206,53,234,92,195,158,251,173,
    6,7,45,250,135,63,45,14,26,233,69,110,78,194,113,26,
    37,177,23,197,189,36,178,240,190,132,6,33,246,209,216,252,
    45,242,247,17,98,61,38,9,52,31,129,99,125,202,43,40,
    226,57,129,69,103,60,104,211,230,169,194,67,100,211,148,59,
    14,245,228,69,228,100,22,167,28,189,6,77,121,245,2,77,
    101,100,255,89,124,147,28,93,148,240,52,36,60,230,53,79,
    198,107,14,14,177,219,5,222,118,79,252,214,240,123,87,188,
    211,117,110,188,48,62,30,122,79,194,97,50,158,60,73,130,
    176,5,231,117,5,39,24,142,146,177,30,68,7,186,12,59,
    47,238,14,67,207,211,85,126,24,143,186,99,29,105,62,181,
    118,248,241,40,137,98,141,35,14,82,61,142,70,186,54,155,
    237,13,147,224,120,16,106,112,237,123,25,121,60,30,39,227,
    22,98,226,162,209,104,70,47,251,26,30,14,177,69,11,174,
    73,147,238,115,211,62,76,134,33,55,113,127,114,220,238,135,
    195,123,119,122,147,246,193,113,52,8,218,207,239,127,238,61,
    121,188,255,189,247,211,171,196,251,33,60,9,7,237,209,68,
    179,105,123,120,175,205,30,133,227,184,59,104,95,58,223,46,
    155,172,96,241,87,81,223,203,156,60,12,7,163,112,140,51,
    167,75,216,88,45,170,85,245,158,178,85,67,45,169,168,152,
    3,137,200,212,114,32,255,202,128,180,50,209,48,150,42,3,
    214,162,83,233,0,173,22,128,4,126,54,96,227,83,50,40,
    125,69,103,22,253,98,195,224,148,91,135,57,222,156,129,184,
    102,56,110,150,42,209,41,35,93,0,142,191,110,201,82,101,
    89,202,162,41,183,12,177,67,167,44,36,54,229,33,110,143,
    42,148,44,145,226,135,168,2,17,170,88,177,62,166,69,166,
    128,51,163,128,161,46,78,19,68,99,132,220,5,107,91,213,
    124,52,73,119,71,93,125,232,214,114,124,56,76,130,243,94,
    18,27,40,123,81,28,228,208,26,114,244,162,1,147,195,69,
    12,101,53,49,27,36,221,153,25,240,245,7,73,106,8,38,
    107,187,203,48,132,117,111,36,203,96,87,248,35,147,131,48,
    245,65,38,38,153,89,17,30,96,181,171,39,136,11,89,175,
    97,131,27,66,135,58,19,162,200,116,104,49,29,76,111,203,
    170,169,101,181,23,33,146,126,33,19,184,147,115,227,111,50,
    120,40,58,178,68,149,83,201,7,108,205,168,137,42,167,162,
    121,188,253,148,148,182,178,113,150,61,131,139,209,21,158,35,
    140,97,234,176,237,3,136,88,176,4,5,10,196,156,52,120,
    51,143,12,65,4,245,2,102,96,41,11,91,56,52,218,224,
    197,203,160,194,148,50,206,156,217,204,9,246,136,101,204,25,
    130,135,215,121,223,223,132,108,89,150,16,10,232,195,40,77,
    94,25,117,163,47,137,110,159,37,243,116,242,227,193,81,232,
    235,244,22,15,188,72,142,155,126,55,142,19,221,236,6,65,
    179,171,89,253,7,199,58,76,155,58,105,110,167,45,192,232,
    222,200,89,52,91,111,50,10,93,233,24,234,4,145,175,57,
    175,172,202,131,200,50,13,53,147,224,48,9,82,30,199,212,
    126,168,93,36,43,73,50,137,56,32,28,241,96,138,109,217,
    14,202,253,54,247,192,100,153,98,78,155,52,28,244,36,113,
    249,131,110,154,122,240,64,198,133,108,56,245,73,119,112,28,
    202,234,41,175,199,14,161,107,124,120,7,249,232,58,142,146,
    159,92,142,19,39,113,48,97,239,34,255,46,54,190,46,52,
    172,113,62,170,169,117,254,86,212,53,85,98,50,150,212,134,
    229,59,25,245,102,53,102,29,199,38,193,92,101,176,51,21,
    207,56,139,180,44,73,2,114,34,80,215,253,24,61,76,118,
    111,163,217,70,243,33,154,157,252,208,87,123,242,218,229,147,
    63,194,110,150,28,215,183,179,131,205,116,229,93,208,213,210,
    156,174,206,160,143,169,212,210,200,158,211,134,141,195,39,11,
    185,154,68,123,12,56,107,15,198,162,34,46,177,243,26,192,
    166,123,238,38,220,120,159,155,157,237,116,167,105,24,215,60,
    236,166,205,56,57,167,121,19,47,77,58,3,201,221,45,196,
    125,142,198,253,57,26,187,77,88,128,195,238,7,104,156,255,
    10,252,71,239,58,240,125,19,248,239,176,219,98,198,179,37,
    225,215,130,242,65,18,160,81,202,33,128,63,147,13,64,48,
    31,251,13,46,120,207,226,45,174,97,18,127,148,177,154,41,
    99,82,11,205,37,45,207,103,81,33,239,20,129,66,207,166,
    245,172,58,165,40,31,163,113,242,122,210,76,122,77,77,185,
    75,15,182,211,221,237,244,107,78,41,205,135,231,241,206,210,
    199,56,28,65,254,38,29,32,42,58,138,249,25,75,61,126,
    237,135,82,64,228,201,243,140,250,205,21,198,203,10,19,67,
    35,88,88,57,22,146,255,248,30,131,180,247,14,128,168,206,
    128,192,65,158,98,171,170,160,96,171,13,214,251,28,6,248,
    218,192,0,20,251,131,139,166,2,12,191,19,34,204,113,204,
    196,45,170,201,149,179,10,115,220,93,166,234,173,213,200,202,
    20,97,101,201,130,37,51,170,73,145,201,170,19,95,70,254,
    156,203,36,179,234,97,103,23,154,121,229,56,51,229,8,60,
    255,171,66,56,23,197,131,208,179,202,96,38,50,49,247,196,
    219,23,179,146,220,94,108,201,234,250,106,177,41,155,77,60,
    248,243,226,28,25,228,225,155,106,205,50,236,16,226,124,129,
    230,254,76,186,42,31,187,50,215,110,93,78,156,115,37,195,
    51,89,231,57,246,119,196,227,229,146,68,242,210,95,39,115,
    99,197,217,216,250,44,186,147,212,197,136,222,156,109,101,92,
    243,230,255,224,145,171,146,185,159,149,141,120,249,38,173,39,
    82,141,179,73,249,16,52,184,199,5,87,106,179,88,103,106,
    77,221,207,176,136,220,29,81,144,220,79,208,220,65,115,15,
    205,151,57,53,162,152,235,116,20,72,113,238,234,100,152,213,
    105,29,13,163,184,175,27,179,81,196,194,239,250,135,24,133,
    35,123,23,194,39,149,223,63,233,142,207,213,125,245,52,122,
    96,178,205,67,73,46,95,113,83,71,25,47,87,56,205,242,
    239,50,255,90,139,202,182,108,85,229,228,91,224,223,58,255,
    54,172,197,122,197,169,84,216,110,161,162,178,127,214,191,235,
    232,90,187,
};

EmbeddedPython embedded_m5_internal_enum_MemoryMode(
    "m5/internal/enum_MemoryMode.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/enum_MemoryMode.py",
    "m5.internal.enum_MemoryMode",
    data_m5_internal_enum_MemoryMode,
    1667,
    4033);

} // anonymous namespace