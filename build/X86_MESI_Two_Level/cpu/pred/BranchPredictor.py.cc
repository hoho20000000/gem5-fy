#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_BranchPredictor[] = {
    120,156,181,86,93,111,19,87,16,157,117,98,59,182,73,8,
    31,9,133,170,213,246,169,22,130,88,66,160,190,32,84,140,
    144,120,40,52,218,152,135,230,197,218,143,27,239,5,239,174,
    181,247,110,133,121,133,31,193,191,165,115,102,179,107,47,70,
    45,106,130,29,143,246,158,59,119,102,206,204,209,221,132,116,
    254,105,243,239,119,151,200,252,205,15,17,255,57,244,150,104,
    238,208,169,67,14,214,45,122,219,162,73,180,69,202,161,51,
    135,162,109,250,72,244,129,232,175,211,45,138,218,164,182,4,
    237,212,232,54,69,221,10,221,169,209,54,69,189,10,237,215,
    104,135,162,1,157,12,175,112,106,253,153,63,67,135,159,108,
    143,205,137,78,254,12,222,168,208,150,16,204,93,123,149,237,
    56,247,211,48,62,206,85,164,67,155,229,97,197,99,11,123,
    224,241,158,31,20,161,124,174,254,180,5,66,168,180,69,92,
    153,106,19,231,84,93,210,59,196,140,152,203,7,198,123,21,
    210,6,15,32,253,10,233,130,3,144,193,26,210,19,228,74,
    133,244,65,2,200,46,121,37,23,175,85,209,24,163,208,215,
    169,182,230,144,87,225,162,24,45,24,24,5,176,211,130,241,
    163,56,214,32,103,174,177,121,85,36,129,202,221,236,204,181,
    113,174,252,200,104,218,231,173,131,198,214,120,50,118,85,106,
    115,173,140,222,199,201,159,164,93,239,85,121,78,137,131,245,
    103,230,158,171,83,55,224,212,102,7,53,61,61,113,13,123,
    105,212,102,126,109,132,132,147,107,51,215,196,250,204,242,41,
    99,243,34,180,58,75,141,27,44,135,123,32,131,16,211,105,
    234,39,106,58,181,125,89,36,89,84,204,177,220,134,195,114,
    161,132,113,248,238,221,52,156,251,198,136,23,86,49,51,81,
    185,120,77,242,66,73,40,63,224,28,126,104,45,228,119,236,
    231,126,34,240,235,212,232,89,170,34,57,155,22,201,164,108,
    131,44,153,214,243,146,118,181,156,248,51,240,182,221,146,158,
    60,139,148,152,192,9,168,60,77,236,16,218,88,25,243,144,
    205,40,206,18,197,38,157,45,139,209,76,37,143,238,159,45,
    71,38,15,71,245,124,190,16,217,209,98,41,35,253,5,17,
    174,179,233,56,231,223,214,117,167,252,74,17,127,100,161,63,
    31,31,111,106,242,201,151,154,36,209,164,115,174,73,221,129,
    62,89,144,80,81,183,66,182,33,72,32,59,208,85,7,36,
    145,187,169,164,7,60,187,233,28,121,161,36,226,38,154,91,
    107,122,144,29,119,81,17,41,135,15,213,140,49,242,5,143,
    63,204,138,212,170,124,136,217,121,152,145,135,145,120,146,78,
    26,43,226,25,192,160,183,22,37,72,212,186,59,117,223,5,
    126,102,115,196,190,180,190,35,223,17,34,244,87,125,231,174,
    75,194,73,86,228,144,100,106,191,214,244,79,23,108,250,202,
    167,83,93,19,37,82,95,10,253,141,83,131,53,159,250,154,
    168,125,250,171,107,66,26,122,176,49,78,91,51,186,216,56,
    205,143,216,105,156,138,181,225,35,75,190,26,130,185,210,132,
    14,253,176,22,122,54,207,130,245,216,141,205,48,206,116,168,
    214,54,111,85,57,87,155,85,102,185,47,190,65,73,222,13,
    152,155,208,212,65,37,158,23,101,141,19,148,40,178,130,79,
    89,89,83,110,187,53,126,174,55,241,44,43,217,244,44,241,
    203,86,38,170,254,13,17,110,54,148,185,250,202,149,54,214,
    47,179,72,125,77,159,193,247,210,167,188,129,75,125,178,210,
    164,235,34,135,27,141,87,144,198,5,174,68,102,255,165,133,
    127,209,217,255,86,201,224,27,85,130,24,30,178,120,183,97,
    238,52,134,119,193,9,162,43,207,17,97,111,99,130,175,134,
    40,70,110,153,228,209,81,253,223,136,135,132,242,158,99,116,
    129,247,150,145,55,131,92,83,162,8,9,122,89,21,138,130,
    30,151,47,218,39,63,87,183,224,190,211,111,29,238,30,246,
    14,247,254,1,93,196,35,117,
};

EmbeddedPython embedded_m5_objects_BranchPredictor(
    "m5/objects/BranchPredictor.py",
    "/home/hongyu/gem5-fy/src/cpu/pred/BranchPredictor.py",
    "m5.objects.BranchPredictor",
    data_m5_objects_BranchPredictor,
    888,
    2502);

} // anonymous namespace
