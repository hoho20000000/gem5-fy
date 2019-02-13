#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_smartdict[] = {
    120,156,205,89,109,111,27,69,16,222,187,179,157,216,73,104,
    222,154,20,74,233,82,222,76,105,99,10,4,65,84,33,84,
    170,162,10,8,112,41,45,13,173,78,151,219,181,125,201,249,
    206,185,93,39,49,74,248,0,72,72,72,32,241,1,137,95,
    195,31,224,71,193,204,220,139,237,52,41,178,234,90,117,227,
    209,120,207,183,247,204,204,51,227,157,169,199,210,87,17,222,
    31,115,198,148,15,138,128,63,131,237,48,118,7,53,147,237,
    24,44,48,216,166,193,12,97,49,105,178,186,193,68,129,253,
    204,216,79,140,221,223,180,152,40,50,89,160,213,82,190,90,
    100,98,130,73,131,86,39,243,213,18,174,54,96,175,9,38,
    202,108,163,90,129,167,249,255,194,171,106,128,166,81,92,78,
    212,73,16,174,214,177,240,61,77,31,238,186,177,239,110,5,
    210,203,32,227,215,110,32,228,127,64,145,12,241,1,220,77,
    19,177,195,243,16,151,73,74,129,1,108,84,138,41,108,132,
    81,36,101,34,133,188,57,137,192,80,41,167,112,55,43,136,
    16,149,41,38,42,164,76,51,49,69,202,12,19,211,164,60,
    199,196,12,41,103,152,120,142,148,89,38,206,144,50,199,196,
    44,41,243,76,204,145,178,192,196,60,41,139,76,44,144,114,
    150,137,69,82,150,152,56,75,202,50,179,55,170,75,96,143,
    250,13,196,237,80,203,32,240,27,50,212,188,29,71,7,93,
    238,5,174,82,188,30,197,124,163,229,198,250,38,56,103,133,
    243,204,53,124,223,15,2,222,81,146,235,166,172,112,120,237,
    193,149,168,163,184,23,133,123,50,214,188,222,9,61,237,71,
    161,226,58,226,224,94,217,106,107,84,179,235,123,110,208,145,
    116,17,118,193,45,105,23,221,109,75,229,25,169,207,45,120,
    127,130,126,159,197,56,81,212,14,33,188,6,254,109,80,240,
    214,171,38,94,42,163,136,208,136,6,236,141,183,41,29,39,
    209,45,224,7,25,212,171,24,72,18,234,61,16,181,102,212,
    146,32,194,70,183,83,107,200,214,234,213,122,183,166,98,175,
    214,238,106,88,173,181,86,107,29,237,7,53,133,198,35,51,
    86,224,194,4,220,232,56,126,168,29,7,247,80,38,145,99,
    120,184,37,130,251,57,60,220,70,120,116,201,46,102,248,158,
    16,228,36,129,12,224,38,199,121,255,73,80,78,16,202,91,
    65,228,234,167,0,179,76,48,235,184,187,227,124,240,228,222,
    188,17,69,193,83,128,57,69,48,195,40,252,94,198,145,227,
    172,245,1,53,83,144,102,6,116,47,1,122,72,16,143,76,
    118,104,34,232,109,147,69,83,204,200,225,111,24,184,110,230,
    235,230,192,186,149,175,91,3,235,133,124,189,144,175,235,98,
    166,166,238,40,101,132,199,52,34,101,11,188,66,249,0,164,
    165,5,228,133,70,231,212,123,113,181,50,135,209,133,8,50,
    58,166,250,168,71,149,51,105,206,95,199,141,22,201,121,211,
    198,140,49,53,240,38,119,154,253,238,92,0,5,236,243,51,
    143,130,220,102,185,173,20,101,220,140,72,64,240,237,249,17,
    5,189,148,164,16,16,243,211,99,241,254,95,128,198,56,1,
    74,199,185,61,44,64,115,140,0,229,174,227,124,54,44,64,
    107,140,0,67,240,224,23,195,2,44,140,17,96,3,56,248,
    229,176,0,139,227,4,8,30,252,250,113,0,231,30,5,184,
    60,14,120,201,111,181,43,132,227,220,25,18,223,185,241,225,
    83,157,45,199,185,59,36,190,197,241,225,107,117,2,199,249,
    118,72,124,231,199,135,79,248,123,142,179,249,44,226,75,14,
    14,58,238,72,194,248,224,4,140,214,0,70,99,0,230,88,
    114,36,57,42,198,148,36,206,144,0,199,146,36,41,64,202,
    18,119,72,128,99,201,146,20,32,165,137,55,36,192,177,208,
    48,5,72,28,148,207,34,192,233,4,96,158,40,141,30,200,
    234,57,150,182,231,240,75,237,182,224,151,70,87,232,67,43,
    18,29,60,252,100,69,32,242,28,199,198,223,35,27,191,108,
    227,151,236,233,12,179,125,22,5,118,186,246,50,10,220,212,
    126,30,197,11,40,206,163,120,17,197,5,20,47,161,184,136,
    130,163,120,25,197,37,20,175,160,120,117,192,232,39,179,220,
    70,35,223,198,29,174,128,40,89,37,163,108,166,255,166,114,
    205,44,91,143,106,26,99,245,77,40,100,221,15,165,56,125,
    90,129,230,158,56,173,128,206,31,31,174,254,6,241,85,224,
    122,178,25,5,66,198,105,207,15,45,121,44,219,177,84,56,
    12,232,100,143,161,6,31,159,163,86,56,191,7,221,63,245,
    235,13,25,202,216,13,130,46,247,92,156,6,184,33,151,7,
    158,108,99,231,207,247,155,112,21,14,254,220,215,220,87,216,
    231,139,43,124,171,163,185,196,230,223,213,212,254,211,54,216,
    92,209,172,1,251,21,9,155,0,29,116,147,195,55,180,31,
    54,184,234,120,77,238,42,238,135,248,0,191,206,149,134,187,
    91,128,47,239,22,141,140,199,212,254,12,182,9,212,214,220,
    114,3,37,71,218,27,18,197,194,62,186,226,163,237,215,80,
    188,142,226,141,140,134,35,99,12,222,190,205,82,35,145,49,
    212,69,231,243,153,156,1,102,198,128,7,167,49,96,216,121,
    21,78,170,12,26,89,209,56,13,245,10,210,8,83,77,117,
    65,224,243,33,230,110,156,77,142,116,211,213,28,121,165,32,
    90,49,68,81,37,177,247,123,147,38,100,77,210,25,170,100,
    248,211,140,128,66,233,183,145,134,212,138,38,51,33,46,100,
    91,134,2,217,0,204,130,117,63,6,66,185,13,153,87,178,
    66,198,128,90,94,201,182,75,44,90,134,150,153,134,7,62,
    53,218,88,217,204,180,125,182,112,82,184,33,176,101,163,116,
    104,131,136,165,238,196,161,226,110,111,212,149,204,195,128,117,
    240,212,108,108,37,15,124,165,137,144,184,40,92,237,110,185,
    68,127,65,150,224,43,223,41,228,143,228,106,98,217,190,175,
    228,122,194,26,26,100,160,70,67,72,44,202,13,169,41,222,
    189,146,75,203,59,178,59,186,211,9,60,195,135,60,114,156,
    14,110,134,5,148,21,102,140,229,146,135,79,194,119,49,243,
    233,133,36,171,124,35,245,161,166,233,6,14,99,44,102,244,
    60,120,159,209,164,65,198,88,2,200,53,74,106,74,225,168,
    14,142,232,230,69,132,171,40,97,200,62,56,45,216,119,187,
    42,247,155,210,81,220,99,65,230,97,192,189,158,12,42,222,
    66,40,9,126,149,225,63,54,199,176,175,102,238,196,203,163,
    200,60,228,212,143,121,170,91,158,113,220,65,43,24,50,112,
    223,145,209,243,19,184,231,230,195,5,154,4,245,121,108,126,
    119,145,253,208,27,19,244,108,66,255,39,244,34,58,244,141,
    101,208,18,231,187,107,15,105,42,179,55,10,123,174,193,141,
    191,244,74,23,217,147,29,7,60,180,231,77,80,14,46,29,
    179,101,142,29,37,134,208,241,224,174,177,59,203,238,9,118,
    130,41,149,196,245,113,191,57,61,30,23,51,67,71,97,9,
    222,248,107,78,95,99,150,149,18,107,168,68,102,209,89,59,
    45,58,23,217,3,19,3,116,100,81,201,160,193,220,161,133,
    215,234,230,233,145,42,166,204,74,45,43,228,188,123,135,165,
    255,181,176,99,191,59,162,154,143,35,220,223,143,69,202,74,
    237,163,72,173,98,164,86,142,217,117,129,236,50,142,115,15,
    140,122,76,212,202,105,212,250,76,27,76,41,123,117,68,70,
    225,188,247,143,254,160,77,27,54,50,46,47,60,121,228,46,
    178,108,248,155,215,111,156,140,102,181,167,111,248,153,215,81,
    50,198,198,67,213,137,101,1,207,140,80,142,221,78,48,138,
    249,38,61,231,207,190,248,140,204,2,74,34,168,112,41,214,
    147,108,177,63,28,81,60,48,63,254,234,25,81,197,242,122,
    252,36,131,21,142,234,32,21,15,202,59,34,39,5,51,113,
    247,26,27,225,97,231,50,220,184,139,59,96,167,81,50,75,
    102,121,166,92,132,67,112,1,223,211,214,122,149,206,250,116,
    194,55,178,88,39,191,163,232,250,104,107,91,122,201,47,40,
    237,148,205,131,2,104,212,70,5,145,90,147,235,73,51,242,
    17,198,67,97,200,42,198,172,185,180,182,52,177,116,249,63,
    174,215,211,104,
};

EmbeddedPython embedded_m5_util_smartdict(
    "m5/util/smartdict.py",
    "/home/hongyu/gem5-fy/src/python/m5/util/smartdict.py",
    "m5.util.smartdict",
    data_m5_util_smartdict,
    1844,
    7411);

} // anonymous namespace
