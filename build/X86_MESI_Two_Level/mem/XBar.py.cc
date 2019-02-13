#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_XBar[] = {
    120,156,165,86,109,111,27,69,16,158,59,191,37,142,19,59,
    206,11,32,222,174,80,33,183,52,9,66,138,196,7,132,80,
    64,145,144,146,180,58,183,85,177,144,172,141,111,29,31,185,
    187,61,221,174,169,205,7,190,132,143,124,225,63,240,203,248,
    35,48,51,119,183,121,169,73,105,106,199,155,157,185,217,221,
    153,103,158,153,189,17,20,159,37,252,125,235,1,232,191,113,
    18,224,159,3,231,0,17,192,0,192,33,217,133,115,7,34,
    7,6,78,46,87,224,220,133,167,197,172,146,207,170,112,94,
    133,168,6,131,26,218,212,64,2,140,29,8,234,240,59,192,
    5,192,143,131,58,4,13,144,117,214,46,89,109,3,130,229,
    82,219,180,218,37,8,86,64,214,88,219,178,218,101,8,86,
    65,46,177,118,205,106,155,16,180,75,109,199,106,87,32,88,
    7,217,96,109,215,106,91,16,108,64,191,183,137,97,134,255,
    224,167,231,224,204,44,227,112,44,227,199,167,63,203,145,201,
    85,117,28,250,115,109,100,156,203,52,60,188,180,238,135,133,
    181,33,232,14,132,150,47,14,68,54,42,241,172,144,146,240,
    252,3,39,8,4,194,134,8,13,92,144,21,24,84,9,94,
    4,9,131,70,92,47,112,222,32,247,17,73,154,35,24,77,
    8,87,8,78,18,91,165,88,99,113,181,20,235,44,174,177,
    216,38,96,73,236,128,92,39,108,105,222,229,71,27,32,55,
    9,224,11,23,6,91,224,247,123,77,116,200,175,226,160,87,
    112,136,101,188,55,59,21,217,238,100,162,63,65,249,57,70,
    164,50,47,85,153,241,198,56,25,169,36,65,85,152,156,121,
    177,64,48,50,173,239,221,110,166,35,241,139,212,186,131,86,
    135,153,74,140,76,2,47,18,248,111,52,215,109,82,170,236,
    165,200,46,117,100,232,75,157,170,68,75,171,252,24,149,223,
    11,35,82,97,38,222,203,48,192,49,149,197,121,189,211,185,
    145,250,129,222,65,155,39,11,28,16,137,167,82,19,170,68,
    68,94,32,199,98,26,153,194,169,71,180,66,102,104,31,123,
    34,8,50,116,19,163,74,83,90,69,155,152,137,180,43,232,
    168,222,54,101,155,242,59,28,38,34,150,195,161,105,178,16,
    171,96,26,145,72,56,154,121,42,121,242,52,155,74,182,22,
    167,218,100,2,169,65,214,163,217,108,56,145,34,144,153,105,
    91,228,250,228,15,57,111,106,148,9,146,76,199,62,61,102,
    164,249,49,177,48,7,158,45,159,136,76,196,172,252,110,62,
    138,164,230,69,227,2,230,97,129,30,159,51,206,97,182,58,
    50,204,10,152,173,146,156,125,150,232,240,44,145,1,239,207,
    80,179,219,87,124,104,80,75,200,97,225,56,15,148,138,216,
    250,80,68,90,154,117,156,77,113,211,194,100,152,137,228,76,
    246,168,8,46,7,125,31,135,189,137,138,37,14,201,217,124,
    186,119,38,227,253,157,241,124,79,103,163,61,34,33,85,207,
    110,58,103,102,126,65,43,8,251,186,195,95,183,229,180,218,
    109,7,191,149,118,181,213,224,248,78,84,50,82,19,153,201,
    196,92,43,60,167,44,188,205,27,133,71,37,87,161,2,112,
    137,112,239,211,17,239,20,5,144,92,238,53,44,138,161,71,
    126,248,20,164,79,104,251,132,129,223,188,22,211,27,6,70,
    39,190,160,21,213,34,48,211,162,52,46,138,193,54,143,159,
    22,198,32,171,16,214,202,206,81,103,209,246,15,151,251,7,
    106,154,32,243,22,226,114,11,65,13,118,142,53,110,21,53,
    86,118,8,11,142,237,3,40,224,34,119,111,2,193,121,232,
    39,74,165,94,118,179,74,183,232,145,140,144,179,50,240,52,
    219,140,195,136,154,196,14,135,134,204,66,218,99,89,133,218,
    27,101,74,107,220,146,139,44,85,97,98,60,53,246,138,211,
    112,175,251,182,221,162,133,48,108,102,215,156,202,8,193,213,
    158,81,187,189,245,255,72,140,79,172,240,137,230,134,92,102,
    119,134,175,48,126,165,140,230,144,29,101,62,159,60,59,58,
    226,100,228,107,242,16,252,119,105,187,247,104,187,46,14,236,
    241,80,141,135,214,99,223,222,18,88,148,8,152,161,172,137,
    100,206,42,157,95,28,119,229,10,101,132,114,175,91,101,17,
    84,219,149,110,173,91,241,63,162,142,242,10,79,142,111,231,
    73,65,140,43,84,9,151,75,110,52,89,201,215,11,93,41,
    204,22,36,6,195,74,135,233,141,130,24,87,193,65,94,132,
    20,190,94,195,225,72,169,243,105,106,73,241,127,19,201,120,
    125,117,124,160,61,238,54,179,48,158,198,222,8,59,254,40,
    52,115,226,198,85,66,245,86,95,159,117,242,37,98,95,202,
    108,115,138,124,186,214,252,79,105,32,215,242,230,38,99,149,
    205,251,225,175,146,243,30,139,217,176,60,249,206,57,35,176,
    20,173,104,218,156,117,221,173,10,211,225,232,203,197,245,189,
    191,48,111,152,49,251,138,16,228,37,222,160,28,82,197,131,
    131,111,70,152,31,226,109,72,200,113,30,66,218,213,255,140,
    156,94,190,14,20,149,168,207,37,67,44,246,41,153,254,135,
    101,110,125,239,109,26,218,3,52,252,205,146,212,173,87,139,
    110,93,99,136,115,10,44,110,205,143,110,11,187,194,97,187,
    69,216,87,162,165,36,135,4,93,200,162,251,38,209,210,69,
    231,223,123,155,104,31,162,225,159,11,163,165,147,127,120,188,
    56,82,239,181,9,198,232,42,54,58,183,76,104,222,152,111,
    13,236,206,145,124,142,134,127,209,138,165,60,146,26,197,113,
    146,87,24,243,200,190,227,198,251,187,41,189,112,104,126,81,
    32,41,83,179,121,94,50,251,187,246,13,216,167,0,248,226,
    230,75,142,187,87,206,47,162,8,35,199,135,222,213,99,62,
    253,235,252,157,235,27,218,141,239,164,142,211,113,154,248,237,
    184,219,189,237,234,246,198,118,27,127,27,255,2,255,219,169,
    173,
};

EmbeddedPython embedded_m5_objects_XBar(
    "m5/objects/XBar.py",
    "/home/hongyu/gem5-fy/src/mem/XBar.py",
    "m5.objects.XBar",
    data_m5_objects_XBar,
    1313,
    3281);

} // anonymous namespace