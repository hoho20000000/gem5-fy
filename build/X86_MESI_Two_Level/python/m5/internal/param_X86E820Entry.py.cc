#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86E820Entry[] = {
    120,156,197,88,109,111,219,200,17,158,37,41,201,146,45,91,
    126,143,147,92,205,67,227,70,125,137,125,189,131,219,180,151,
    6,151,11,220,34,192,213,9,232,67,147,168,5,8,90,92,
    201,116,36,82,32,215,73,116,144,129,162,14,218,126,232,79,
    233,183,254,192,118,102,150,75,211,142,125,61,160,141,78,182,
    86,203,229,190,204,236,243,204,203,110,23,242,207,2,126,191,
    112,1,178,177,0,8,241,95,192,43,128,129,128,142,5,66,
    90,16,46,195,113,5,146,13,16,97,5,222,1,116,108,144,
    54,156,97,197,129,63,218,16,127,166,123,173,20,189,106,87,
    245,106,226,11,156,123,6,94,57,220,100,193,184,1,178,2,
    157,42,60,143,151,193,145,53,56,110,64,82,3,129,159,24,
    87,126,49,110,65,62,98,6,58,117,236,181,137,189,26,220,
    107,153,123,229,111,235,244,150,71,132,117,8,27,240,14,37,
    159,133,112,150,165,152,131,112,142,43,77,8,155,92,153,135,
    112,158,43,11,102,250,22,116,22,77,125,169,84,95,230,250,
    2,200,69,136,86,32,90,133,104,13,122,2,194,22,13,71,
    205,94,118,214,65,58,16,221,128,206,13,144,248,191,14,103,
    2,213,92,44,141,216,224,17,75,197,136,155,60,226,22,116,
    110,129,196,255,155,122,196,12,28,180,87,17,134,232,223,248,
    105,35,12,160,230,176,120,45,211,44,74,98,63,138,123,73,
    100,209,251,26,21,4,90,151,10,27,191,85,252,62,38,244,
    82,96,232,80,118,68,239,20,103,16,128,99,66,139,86,8,
    109,216,56,21,244,16,217,48,193,138,3,61,126,17,57,121,
    143,83,196,99,17,38,56,123,5,38,220,114,240,60,254,8,
    28,85,229,13,95,228,13,215,175,113,48,189,198,237,6,20,
    187,130,203,238,179,220,138,228,222,102,233,212,50,22,254,40,
    72,131,161,255,226,254,47,246,238,127,250,201,94,172,210,113,
    155,228,87,117,82,98,56,74,82,53,136,14,213,12,117,245,
    227,96,40,125,95,53,240,33,197,113,42,82,168,184,114,240,
    241,56,137,98,69,90,14,50,149,70,35,213,44,70,251,195,
    36,60,25,72,53,139,45,79,184,101,47,77,147,180,77,219,
    226,81,161,168,24,189,234,43,18,114,72,75,180,73,58,46,
    178,63,96,177,115,148,12,37,22,113,127,124,178,211,151,195,
    221,123,189,241,206,225,73,52,8,119,80,108,255,247,123,7,
    79,252,175,223,36,254,87,242,181,28,236,140,198,10,187,238,
    12,119,119,80,34,153,198,1,54,189,167,226,54,246,90,162,
    249,223,68,125,63,151,243,72,14,70,50,37,181,179,121,90,
    91,204,137,101,241,3,97,139,69,49,47,162,170,129,147,54,
    167,105,224,252,103,14,167,149,27,35,34,42,114,120,45,56,
    229,10,97,214,38,56,9,69,155,192,67,69,17,154,190,128,
    51,11,254,100,83,135,83,44,29,180,29,183,128,114,69,219,
    142,158,170,6,167,136,119,133,208,252,230,54,79,53,195,83,
    89,48,193,18,129,118,224,20,13,20,187,98,19,150,199,117,
    72,230,65,224,67,84,39,66,139,24,233,251,98,82,69,34,
    56,5,17,52,129,73,155,48,74,105,215,61,226,110,187,97,
    90,147,108,123,20,168,35,175,105,32,194,109,98,168,247,147,
    88,163,217,139,226,208,160,171,249,209,139,6,200,15,143,246,
    144,103,227,110,131,36,40,186,17,196,221,65,146,73,230,24,
    207,237,145,103,83,212,187,55,226,105,104,85,146,135,7,135,
    50,235,18,159,144,103,122,70,146,128,102,155,10,71,60,178,
    239,21,90,227,38,51,162,133,156,168,34,35,218,200,8,93,
    187,109,53,197,130,216,143,104,51,187,149,220,210,29,67,143,
    127,129,134,68,192,177,197,230,57,97,199,128,189,17,56,54,
    207,9,27,63,189,253,25,8,101,229,237,104,255,136,47,181,
    46,225,24,38,13,178,7,251,62,32,107,102,56,137,5,21,
    64,90,106,200,145,74,154,35,12,124,133,70,208,84,22,45,
    225,192,104,29,39,159,33,54,76,32,167,205,153,141,180,64,
    137,208,152,209,85,96,243,26,174,251,23,230,91,238,46,152,
    5,234,40,202,146,55,218,198,169,206,30,239,0,173,230,217,
    248,233,225,177,236,170,108,19,27,94,38,39,110,55,136,227,
    68,185,65,24,186,129,66,31,112,120,162,100,230,170,196,221,
    202,218,132,164,119,211,16,169,152,111,60,146,30,87,52,123,
    194,168,171,208,187,176,87,242,217,50,51,169,144,7,71,73,
    152,97,59,13,237,75,229,181,104,4,109,115,194,2,48,77,
    124,234,74,203,98,63,50,222,71,70,2,237,107,170,134,57,
    153,28,244,216,125,117,7,65,150,249,36,1,183,51,223,72,
    235,215,193,224,68,242,236,25,206,135,2,81,85,203,48,29,
    175,116,131,180,49,202,179,70,113,18,135,99,20,48,234,126,
    70,107,223,96,38,54,209,43,53,197,26,126,235,98,85,212,
    144,143,53,177,110,117,157,156,125,69,188,89,35,205,129,97,
    23,57,242,200,198,51,244,37,109,139,93,1,43,69,236,245,
    126,66,53,26,236,221,161,98,139,138,31,81,113,215,232,253,
    193,149,111,94,86,254,49,45,104,177,198,93,59,215,173,176,
    46,255,130,117,205,151,172,235,140,172,100,194,161,53,178,75,
    22,98,147,254,201,172,177,41,182,64,132,29,45,144,58,179,
    45,97,196,45,91,2,45,186,239,109,144,24,31,99,113,119,
    43,187,235,106,222,185,71,65,230,198,201,57,217,93,122,169,
    253,26,81,221,187,13,38,196,106,149,250,37,50,123,46,245,
    32,38,123,63,164,194,185,110,239,127,252,61,236,125,95,239,
    253,239,104,193,185,156,109,243,204,178,89,209,37,170,16,32,
    53,131,194,1,86,198,235,132,66,121,251,215,49,248,61,143,
    111,99,60,99,8,40,164,53,117,72,227,184,168,19,65,227,
    216,162,138,169,84,9,136,158,13,107,121,164,202,40,148,140,
    210,228,237,216,77,122,174,2,35,210,131,173,108,123,43,251,
    28,125,139,251,240,124,203,115,63,146,202,17,249,1,237,23,
    104,99,84,20,227,51,77,181,247,182,43,57,152,240,147,239,
    107,55,160,51,26,63,15,82,136,14,195,97,25,56,216,17,
    98,90,67,254,111,58,88,52,10,44,72,151,103,180,90,131,
    129,176,197,58,26,126,9,6,250,218,4,3,17,237,111,192,
    121,172,128,191,2,109,50,110,101,110,229,108,59,198,126,150,
    169,59,165,50,19,113,101,100,178,114,187,176,114,175,129,134,
    51,106,114,192,201,35,21,230,38,127,47,185,148,34,146,216,
    121,126,83,182,31,167,176,31,70,232,59,69,11,231,162,9,
    209,238,163,173,81,55,54,22,157,57,222,185,232,158,56,153,
    177,217,195,171,15,14,207,140,94,199,39,145,94,158,131,67,
    62,249,35,177,98,105,142,48,125,126,73,197,253,194,134,133,
    105,251,144,210,109,94,118,162,165,8,226,107,15,244,130,68,
    112,88,232,133,154,90,199,95,156,228,201,193,35,255,241,211,
    175,158,238,31,248,197,124,156,241,210,135,98,227,151,68,156,
    79,177,34,241,92,38,64,178,91,125,199,9,48,149,22,193,
    127,102,9,60,83,98,70,241,142,207,148,250,232,232,233,140,
    130,73,107,190,236,59,200,231,92,112,218,165,173,43,8,160,
    177,165,226,237,116,172,143,224,125,48,8,134,135,97,240,176,
    79,107,209,130,93,99,109,150,17,190,85,22,158,236,68,92,
    35,63,63,126,110,148,120,61,157,204,245,1,78,93,8,207,
    150,17,38,93,246,18,95,31,73,119,40,135,135,120,108,61,
    138,70,110,111,16,244,25,25,59,87,238,169,81,78,49,180,
    37,99,102,95,146,81,158,176,159,184,221,36,70,159,120,210,
    85,73,234,134,18,207,2,50,116,239,185,236,80,221,40,115,
    131,67,124,27,116,149,230,252,69,187,229,148,43,72,251,25,
    103,87,175,222,80,117,122,208,250,120,82,143,48,209,164,212,
    39,207,45,116,8,97,191,67,57,22,167,144,218,132,48,246,
    224,161,80,141,181,11,123,68,197,46,21,59,80,142,203,31,
    28,205,95,227,212,61,90,131,54,172,42,110,89,117,139,207,
    175,229,126,207,104,100,246,190,197,254,227,187,88,172,116,160,
    83,49,118,91,165,158,178,70,199,76,42,235,20,2,58,13,
    211,56,203,229,28,55,54,77,227,60,151,11,220,216,130,252,
    10,106,145,27,151,160,179,12,97,149,91,86,200,23,212,254,
    71,95,192,182,52,61,43,26,253,63,93,128,247,155,239,71,
    118,239,33,228,73,194,117,230,47,202,138,53,181,249,71,194,
    164,201,188,241,251,90,15,62,135,111,92,201,62,191,155,202,
    64,73,13,211,157,105,169,202,110,68,175,156,157,27,117,145,
    35,85,140,86,191,45,180,58,227,4,105,188,194,232,153,251,
    54,186,228,227,251,75,197,41,41,229,172,45,125,163,198,219,
    224,91,121,218,10,197,118,84,139,237,160,115,86,44,223,248,
    239,111,137,206,76,169,103,48,26,201,56,244,62,161,65,63,
    135,114,134,201,125,166,195,10,114,97,99,40,114,150,57,76,
    41,87,48,111,121,223,30,201,27,150,84,101,68,91,133,9,
    78,13,91,166,241,159,13,141,249,254,245,220,81,123,95,82,
    193,174,185,240,202,222,94,1,202,173,171,57,138,73,103,74,
    135,156,111,125,143,185,147,14,83,248,160,62,190,186,99,26,
    196,125,201,151,8,60,221,127,239,69,147,242,229,105,209,116,
    157,12,89,244,141,252,54,25,249,189,145,145,30,24,88,182,
    202,80,14,164,146,87,48,81,17,124,249,97,52,148,24,158,
    147,49,30,125,106,220,136,131,124,127,138,1,141,14,246,9,
    173,65,81,12,3,154,168,98,72,91,197,67,230,170,85,175,
    214,5,231,10,151,46,211,75,109,213,162,141,79,8,156,247,
    143,51,15,204,22,228,177,155,133,241,203,247,243,124,161,167,
    201,193,87,141,38,186,19,143,248,72,184,31,12,245,157,17,
    191,207,15,143,153,182,89,190,214,164,236,199,251,41,21,247,
    10,218,253,202,144,109,184,187,109,244,222,214,122,31,68,67,
    125,79,198,55,156,195,93,181,120,169,91,152,6,88,95,189,
    212,154,201,52,10,6,8,43,139,97,154,21,93,149,94,158,
    151,164,42,158,56,81,80,119,224,218,132,158,119,38,149,253,
    40,195,41,121,190,98,108,238,174,8,25,62,67,92,197,186,
    210,224,233,145,69,39,228,250,112,254,144,207,226,95,96,209,
    162,187,175,153,186,168,209,239,2,254,90,232,203,44,91,52,
    196,188,168,224,111,11,127,23,173,185,86,221,169,215,177,223,
    236,156,160,191,77,36,87,195,218,92,170,139,255,0,235,41,
    247,250,
};

EmbeddedPython embedded_m5_internal_param_X86E820Entry(
    "m5/internal/param_X86E820Entry.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_X86E820Entry.py",
    "m5.internal.param_X86E820Entry",
    data_m5_internal_param_X86E820Entry,
    2386,
    7002);

} // anonymous namespace