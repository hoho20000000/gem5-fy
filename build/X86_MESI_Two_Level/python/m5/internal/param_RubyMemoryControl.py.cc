#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyMemoryControl[] = {
    120,156,197,90,235,83,28,199,17,239,217,123,113,192,241,16,
    47,61,144,88,199,66,58,203,18,200,86,144,101,75,86,34,
    43,114,226,170,24,171,14,87,73,194,169,218,90,118,231,96,
    225,110,247,178,59,8,157,11,190,4,85,146,170,124,203,127,
    145,170,124,74,254,192,164,187,103,103,89,142,119,30,103,196,
    53,115,189,61,211,211,243,235,238,233,153,149,7,233,207,4,
    126,126,105,3,36,127,19,0,62,254,10,216,2,104,9,88,
    181,64,72,11,252,9,216,44,65,116,5,132,95,130,247,0,
    171,5,144,5,216,199,70,17,126,40,64,248,64,75,77,102,
    82,149,227,164,106,248,0,199,30,128,173,34,179,44,232,14,
    130,44,193,106,25,94,133,19,80,148,21,216,28,132,168,2,
    2,127,66,212,252,186,59,6,105,143,1,88,173,162,212,28,
    74,13,178,212,4,75,165,79,171,244,148,123,248,85,240,7,
    225,61,206,124,8,252,33,158,197,48,248,195,220,168,129,95,
    227,198,8,248,35,220,24,53,195,143,193,234,184,105,95,202,
    181,39,114,237,201,92,123,42,215,158,206,181,103,184,61,10,
    114,28,130,203,16,92,129,224,42,52,5,248,99,164,14,87,
    226,205,234,53,144,69,8,102,97,117,22,36,254,94,131,125,
    129,203,50,158,235,113,157,123,92,202,122,220,224,30,115,176,
    58,7,18,127,111,232,30,3,176,82,159,66,216,130,127,225,
    79,29,97,3,53,140,228,173,140,147,32,10,157,32,108,70,
    129,69,207,43,68,8,100,143,72,1,63,101,252,60,39,180,
    99,96,168,113,238,136,246,30,142,32,0,251,248,22,105,240,
    11,112,101,79,208,151,160,0,187,216,40,66,147,31,4,197,
    84,98,15,241,27,135,93,28,189,4,187,204,89,121,21,94,
    135,162,42,51,64,227,12,144,126,140,157,233,49,194,3,56,
    237,18,170,93,230,121,43,154,247,2,207,78,93,70,226,116,
    220,216,109,59,141,237,181,238,183,178,29,197,221,231,81,168,
    226,168,85,39,35,84,149,44,105,119,162,88,181,130,53,53,
    64,242,78,232,182,165,227,168,65,252,18,99,103,21,40,180,
    94,21,241,235,102,20,132,138,76,109,37,42,14,58,170,150,
    245,118,218,145,191,221,146,106,8,57,223,48,231,69,28,71,
    113,157,214,166,65,68,17,233,108,173,43,154,105,155,84,212,
    105,138,76,146,31,144,44,110,68,109,137,36,92,239,110,47,
    174,203,246,210,189,102,119,113,109,59,104,249,139,175,31,61,
    116,190,125,177,242,141,243,253,78,228,252,86,190,149,173,197,
    78,87,161,232,98,123,105,17,103,36,227,208,69,214,241,118,
    46,160,232,37,82,178,19,172,59,233,100,55,100,171,35,99,
    178,61,25,161,9,136,97,49,33,110,136,130,24,23,35,34,
    40,27,96,105,133,106,6,216,191,167,192,90,105,24,35,182,
    34,5,218,130,61,110,16,122,117,2,150,240,44,16,140,104,
    45,130,180,46,96,223,130,223,21,72,96,15,105,17,163,206,
    206,64,157,212,81,167,135,170,192,30,34,95,34,92,127,156,
    229,161,6,120,40,11,118,145,34,228,69,216,195,208,70,81,
    100,33,221,172,66,52,2,2,191,4,85,114,109,17,162,35,
    191,222,45,163,75,20,51,151,208,174,76,214,248,65,76,75,
    223,32,47,174,15,26,110,148,44,116,92,181,209,168,25,156,
    112,153,24,239,229,40,212,144,54,131,208,55,16,107,39,105,
    6,45,116,146,6,173,33,143,198,98,173,200,205,196,8,103,
    175,21,37,146,29,141,199,110,140,146,32,73,55,59,60,12,
    105,165,249,112,103,95,38,30,57,21,58,155,30,145,102,64,
    163,245,207,81,26,20,238,147,164,232,42,187,197,24,58,70,
    25,221,162,142,110,161,91,179,86,77,140,138,229,128,86,212,
    43,165,129,95,52,62,242,79,208,184,8,216,180,56,90,119,
    57,79,160,52,162,199,209,186,203,185,128,158,222,5,161,172,
    148,143,233,0,65,38,238,37,236,195,158,131,46,132,178,79,
    40,184,25,83,114,133,18,160,111,106,220,209,159,180,163,48,
    250,37,234,65,67,89,164,162,8,157,25,28,124,128,92,98,
    23,82,223,217,47,160,111,224,140,48,172,49,115,32,123,26,
    245,254,129,157,46,205,30,236,10,106,35,72,162,29,29,237,
    212,230,4,184,130,161,243,178,251,221,218,166,244,84,50,135,
    140,55,209,182,237,185,97,24,41,219,245,125,219,85,152,13,
    214,182,149,76,108,21,217,243,73,157,224,108,92,53,222,148,
    141,215,237,200,6,55,180,11,249,129,167,48,207,76,240,23,
    14,207,68,42,116,134,141,200,79,144,79,93,215,165,106,140,
    81,15,90,230,136,39,192,190,226,144,40,169,69,57,138,224,
    103,102,6,58,235,148,141,251,36,178,213,228,68,230,181,220,
    36,113,104,6,204,103,167,35,171,223,186,173,109,201,163,39,
    56,30,78,136,154,122,14,125,204,79,156,167,205,10,176,89,
    97,20,250,93,156,101,224,61,160,9,92,102,119,172,97,126,
    170,137,105,252,84,197,148,168,160,83,86,196,140,229,21,83,
    23,204,246,160,105,50,31,24,123,145,194,143,46,185,143,89,
    165,110,113,82,96,203,200,133,27,119,168,69,157,27,55,137,
    204,19,185,69,228,182,49,190,63,43,80,235,93,129,231,164,
    213,98,179,189,66,106,96,22,103,206,161,56,27,201,197,217,
    62,197,203,46,239,185,65,33,23,43,5,90,132,104,200,68,
    23,199,34,58,0,198,34,9,115,84,225,86,156,143,9,82,
    186,220,184,66,211,248,0,201,237,249,228,182,173,61,208,222,
    112,19,59,140,14,220,222,166,135,58,205,145,211,55,102,105,
    253,115,110,189,158,115,235,134,77,18,228,211,141,15,137,20,
    79,2,224,163,159,10,128,117,13,192,175,73,235,112,234,119,
    35,236,111,67,194,35,167,33,84,42,6,138,21,108,116,103,
    8,138,60,6,51,184,33,190,10,103,113,143,99,28,104,155,
    171,233,109,142,247,74,93,86,154,60,23,148,76,163,76,104,
    52,11,48,157,238,94,9,109,47,157,56,122,215,181,163,166,
    173,192,76,233,201,124,178,48,159,60,198,84,99,63,61,88,
    247,52,173,196,178,67,105,65,167,9,90,29,21,132,248,157,
    134,122,241,206,147,188,193,240,55,199,209,89,65,151,58,78,
    186,113,33,68,140,137,101,48,225,188,136,245,14,165,195,62,
    2,50,152,1,66,6,189,36,149,131,140,70,65,204,96,30,
    200,97,65,159,2,97,65,46,247,39,224,82,87,192,31,129,
    86,26,215,51,13,122,142,34,19,73,19,36,78,53,206,174,
    56,118,183,178,210,8,177,210,36,130,33,212,169,241,38,148,
    238,94,88,180,252,57,151,97,178,221,165,144,22,62,249,72,
    42,102,145,196,48,157,107,7,41,30,14,38,130,0,163,142,
    196,56,108,116,93,121,243,112,182,226,42,167,192,89,95,245,
    7,163,1,173,204,161,121,189,57,64,136,242,244,117,49,105,
    105,111,97,71,250,140,200,163,44,164,133,225,253,223,167,56,
    215,155,88,115,91,139,163,179,210,107,154,71,145,103,62,90,
    81,227,52,181,222,145,184,28,166,31,218,51,191,34,231,249,
    20,27,18,143,123,2,36,39,217,247,92,29,19,181,200,5,
    246,45,129,71,85,172,52,222,243,81,85,159,72,27,186,210,
    96,199,53,31,78,34,148,124,14,165,240,220,202,101,78,160,
    241,37,242,174,143,97,72,16,63,105,185,237,53,223,125,186,
    69,10,73,171,103,194,206,50,22,140,229,45,160,128,17,39,
    24,193,95,31,27,75,222,246,177,182,125,2,124,38,213,22,
    112,156,248,145,199,57,227,251,13,105,183,101,123,13,207,185,
    27,65,199,110,182,220,117,198,168,144,90,248,157,177,80,49,
    200,185,208,230,204,146,80,17,177,28,217,94,20,98,154,220,
    246,84,20,219,190,196,35,131,244,237,123,54,231,88,59,72,
    108,119,13,159,186,158,210,206,127,56,138,185,40,115,227,245,
    132,235,175,173,29,106,246,25,100,7,207,247,1,214,163,109,
    200,10,15,189,181,112,42,162,42,140,43,77,29,75,184,39,
    225,1,82,117,117,86,123,70,100,137,200,34,228,55,237,254,
    224,250,5,142,191,73,138,104,233,202,226,154,85,181,212,204,
    113,65,252,146,198,72,142,134,242,63,196,57,66,89,22,97,
    181,100,2,186,76,146,178,66,135,83,162,85,218,31,86,7,
    13,115,136,233,48,51,107,134,57,194,116,148,153,99,134,57,
    206,244,18,51,39,12,115,146,233,20,51,167,13,115,134,233,
    101,102,94,49,204,171,76,175,49,115,214,48,175,51,189,193,
    204,57,195,180,153,126,192,204,159,25,230,135,76,111,50,115,
    222,48,111,49,189,205,204,186,97,126,196,244,14,51,63,54,
    204,187,76,239,49,115,193,48,23,153,222,103,230,39,134,249,
    41,211,7,204,252,185,97,46,49,125,200,204,207,12,243,17,
    211,207,153,249,5,164,23,131,143,153,249,4,86,191,4,191,
    204,156,167,148,74,43,255,101,42,229,44,212,231,252,163,254,
    151,25,180,241,229,79,104,64,227,41,164,21,215,73,217,83,
    228,173,171,233,190,129,48,167,15,134,96,89,27,195,183,29,
    55,78,14,89,199,139,165,171,164,70,237,102,95,141,230,124,
    172,213,239,28,36,198,172,244,44,25,251,190,206,236,219,231,
    186,179,59,201,96,154,155,78,186,94,229,155,102,197,229,62,
    157,7,198,244,93,38,47,136,99,165,71,2,200,22,166,156,
    45,204,53,36,161,220,57,58,61,189,56,186,244,39,113,183,
    211,145,161,223,184,79,61,63,129,124,9,207,50,125,244,20,
    218,16,254,2,89,61,56,140,53,251,36,214,132,71,163,149,
    246,150,156,209,12,240,88,22,160,253,133,154,253,251,175,198,
    191,235,191,128,252,222,215,248,138,8,239,118,217,70,215,120,
    145,97,116,235,20,231,93,115,195,45,103,13,183,214,251,116,
    180,60,175,40,86,171,124,4,58,96,169,59,103,246,220,78,
    186,142,10,218,146,21,93,64,156,148,141,100,202,12,91,125,
    124,214,8,191,223,150,219,216,59,248,81,107,188,136,60,169,
    28,53,42,15,248,103,206,58,113,176,240,112,98,234,117,30,
    35,115,226,121,35,15,216,106,241,212,17,18,60,37,224,130,
    244,44,237,69,251,144,234,9,86,125,228,217,169,254,224,7,
    237,246,57,93,39,39,106,92,231,128,165,238,157,209,83,175,
    135,183,129,39,82,217,98,93,23,235,65,42,199,83,149,135,
    158,156,234,19,184,107,56,158,106,57,45,204,174,161,215,61,
    211,135,122,229,141,15,245,240,207,28,163,25,188,147,190,227,
    203,150,123,62,157,121,249,188,206,28,95,221,63,99,12,244,
    53,63,106,59,110,140,128,196,56,79,86,124,225,78,164,125,
    50,213,222,251,240,84,247,136,207,159,132,226,163,73,232,128,
    117,234,90,177,24,147,243,173,109,175,188,89,219,30,254,169,
    65,30,103,209,204,238,126,86,78,232,17,55,57,225,48,91,
    221,61,109,4,233,250,206,78,28,32,26,7,86,94,168,3,
    41,165,77,174,247,193,233,19,151,205,88,38,27,52,199,32,
    242,207,182,243,176,120,102,231,33,182,178,79,25,65,125,237,
    238,176,154,51,133,104,112,126,173,129,95,212,195,83,164,249,
    221,35,19,60,42,135,210,163,155,72,108,110,135,138,21,253,
    135,93,73,61,213,55,39,139,112,61,194,5,38,174,179,196,
    229,62,65,11,163,146,222,89,251,18,79,235,81,215,113,248,
    238,205,33,132,28,167,223,71,219,231,105,53,146,44,0,31,
    109,69,25,15,183,83,226,140,127,86,181,92,21,124,183,208,
    243,182,62,199,43,103,60,130,87,223,26,118,147,6,113,20,
    85,57,233,49,159,103,235,228,255,3,0,191,34,212,69,15,
    191,193,52,23,1,84,31,241,173,242,178,219,214,111,161,248,
    121,122,255,156,232,170,148,223,150,178,219,114,90,184,151,149,
    83,159,83,111,154,73,123,105,193,44,204,130,94,152,103,233,
    181,137,94,28,126,123,218,94,226,162,248,168,44,202,232,183,
    116,124,237,119,244,249,243,86,228,109,73,63,149,185,126,178,
    204,175,162,182,139,252,227,181,172,4,70,203,120,207,115,63,
    166,94,83,61,220,4,131,205,109,81,113,67,43,98,216,156,
    199,143,53,145,95,232,29,98,241,29,199,241,39,36,6,42,
    150,235,65,130,195,242,152,135,187,166,135,4,242,36,117,243,
    148,0,203,15,211,103,55,215,119,140,250,237,195,83,126,217,
    240,27,36,99,244,154,111,160,42,42,244,119,20,255,90,120,
    140,176,10,98,80,140,136,18,254,29,195,191,227,214,240,88,
    181,88,173,162,220,208,176,200,255,155,195,16,24,180,230,236,
    170,248,55,94,157,63,128,
};

EmbeddedPython embedded_m5_internal_param_RubyMemoryControl(
    "m5/internal/param_RubyMemoryControl.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/m5/internal/param_RubyMemoryControl.py",
    "m5.internal.param_RubyMemoryControl",
    data_m5_internal_param_RubyMemoryControl,
    2839,
    9361);

} // anonymous namespace
