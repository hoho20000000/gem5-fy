#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_TimingExpr[] = {
    120,156,173,88,75,111,219,70,16,94,82,15,75,242,75,113,
    20,197,77,208,134,167,66,8,224,56,77,109,247,21,20,141,
    19,183,117,225,60,64,217,45,234,30,4,138,187,146,216,80,
    164,202,93,166,118,145,91,10,244,216,75,175,61,245,218,255,
    216,206,12,69,138,148,100,39,178,100,155,99,238,112,31,195,
    249,190,157,217,161,205,134,63,5,184,190,50,24,147,85,141,
    49,14,127,26,123,201,216,49,222,233,236,165,198,92,157,157,
    234,76,227,57,38,116,214,209,24,207,179,223,25,123,195,216,
    143,167,57,198,11,76,228,72,91,76,180,121,198,151,152,200,
    147,182,148,104,11,140,151,227,190,149,68,91,100,124,57,214,
    174,36,218,37,198,87,99,237,90,162,45,49,190,30,107,171,
    137,182,204,248,53,38,42,164,221,72,180,203,140,95,143,251,
    214,18,237,10,227,55,98,109,61,209,174,50,126,51,214,110,
    38,218,53,198,223,99,205,198,45,240,142,243,31,252,52,192,
    59,76,161,184,27,221,150,65,52,157,254,243,246,207,194,86,
    170,2,173,99,167,239,120,221,131,179,65,96,199,206,197,158,
    251,232,92,156,71,48,118,170,161,139,193,159,224,101,112,31,
    120,9,28,99,54,27,58,60,54,81,200,13,16,246,32,220,
    86,52,89,75,192,108,247,122,189,70,17,151,44,129,104,181,
    60,171,47,90,45,90,177,213,234,251,60,116,177,153,199,14,
    231,3,65,122,251,236,172,213,19,22,23,1,233,143,131,80,
    208,96,171,45,85,96,217,170,129,182,141,132,188,11,98,187,
    231,247,5,8,175,123,30,110,119,69,127,119,171,115,190,45,
    3,123,27,173,25,189,218,189,193,57,25,122,31,199,161,85,
    69,13,127,213,181,140,3,142,28,37,2,203,77,252,160,199,
    126,120,48,213,15,192,52,160,141,40,48,7,8,145,99,111,
    64,185,52,36,26,192,14,254,65,146,202,247,65,12,39,54,
    246,118,140,182,163,140,208,147,78,215,19,220,120,101,185,161,
    48,203,23,123,80,174,130,218,29,142,166,222,182,62,52,12,
    175,199,104,28,118,121,173,177,215,224,88,134,178,73,72,63,
    139,240,70,19,104,28,129,69,126,149,194,237,152,149,121,92,
    73,104,73,161,90,3,43,176,250,242,33,182,242,68,156,178,
    214,192,183,49,115,40,8,220,37,2,156,251,118,171,101,162,
    49,102,49,54,235,5,14,86,216,60,57,244,212,222,14,217,
    100,174,100,12,187,18,208,104,193,46,142,171,36,64,23,245,
    117,93,45,103,192,190,63,73,247,218,84,152,135,68,151,104,
    217,99,223,123,37,60,71,120,202,184,239,144,129,249,204,235,
    154,8,198,152,115,175,244,14,85,140,111,177,95,137,170,213,
    140,245,205,192,54,69,119,177,76,69,159,125,237,120,220,80,
    61,97,72,63,12,108,97,4,162,235,72,160,159,225,133,253,
    54,252,235,4,126,159,158,219,97,16,160,27,28,79,42,243,
    218,37,12,222,4,53,76,42,206,160,171,242,169,191,1,239,
    140,51,203,43,144,153,166,138,34,15,226,105,110,204,229,102,
    196,244,232,18,250,70,120,38,188,53,215,216,48,160,157,12,
    183,48,173,191,8,210,162,11,159,140,145,54,7,164,173,101,
    96,55,33,60,194,102,89,56,244,31,224,91,192,220,134,229,
    25,86,96,247,32,226,216,42,196,160,19,19,192,172,93,130,
    49,230,137,132,41,129,245,171,17,1,14,112,7,48,233,140,
    40,231,162,201,82,24,223,152,27,227,31,102,196,152,146,5,
    173,187,8,108,209,117,47,216,100,64,90,205,96,123,36,212,
    36,168,143,222,29,84,81,162,102,158,154,101,60,228,32,198,
    21,196,24,223,75,226,219,236,187,190,253,210,240,59,6,23,
    182,11,241,87,57,190,39,205,250,91,182,47,222,11,41,177,
    175,209,241,3,200,97,30,135,62,82,174,195,195,182,207,207,
    141,81,15,27,253,154,75,131,93,207,128,173,211,141,150,70,
    93,143,247,54,23,29,136,14,249,225,138,141,92,66,128,155,
    40,54,231,102,1,186,151,178,63,178,0,120,176,124,25,15,
    40,93,124,15,219,192,15,40,83,69,148,184,153,48,100,115,
    65,228,64,247,252,196,134,249,37,33,135,54,65,15,83,116,
    22,187,231,239,224,251,225,209,0,249,96,25,109,63,132,208,
    47,195,246,214,8,76,243,214,37,204,168,102,152,17,109,249,
    217,182,122,20,188,23,25,203,253,89,247,249,245,120,221,69,
    64,137,222,234,77,217,231,43,25,32,159,15,18,28,107,49,
    142,223,165,113,4,16,1,65,0,14,32,131,93,12,69,10,
    148,38,80,148,64,41,2,69,8,148,30,80,116,64,169,1,
    69,6,148,22,80,84,64,41,1,69,4,148,14,221,26,114,
    0,240,197,121,137,62,42,89,245,17,231,99,154,102,216,86,
    107,25,205,201,211,208,29,87,61,113,94,141,169,154,147,189,
    154,216,107,35,59,240,177,112,92,84,175,103,212,7,191,132,
    150,59,214,245,153,175,34,245,245,236,12,71,192,172,227,158,
    229,169,122,86,255,13,36,21,72,52,244,40,59,164,121,193,
    144,102,122,72,53,243,232,16,14,116,129,26,115,13,88,52,
    238,62,143,19,140,35,205,243,128,114,115,106,17,231,55,113,
    232,237,59,74,170,91,99,15,186,222,193,153,18,30,255,248,
    193,177,191,183,51,62,117,91,70,161,110,116,104,70,1,167,
    118,57,39,31,111,227,24,188,12,228,163,30,49,50,71,215,
    228,239,24,75,79,188,249,146,17,52,75,151,36,35,228,207,
    137,103,5,231,134,63,128,226,6,130,172,249,209,197,177,134,
    142,92,113,71,170,62,230,79,56,58,77,73,167,13,43,232,
    166,146,205,14,138,221,185,67,209,159,108,134,100,19,5,163,
    219,201,242,122,108,195,34,194,18,58,246,15,246,246,12,179,
    239,76,193,252,197,149,49,31,54,11,212,172,12,191,181,156,
    46,35,5,176,40,164,195,3,44,153,225,192,222,197,28,48,
    31,196,188,57,250,182,153,58,112,144,202,204,168,108,244,112,
    62,77,137,59,211,41,145,163,27,61,205,141,92,140,1,109,
    66,87,116,20,29,77,2,167,219,83,81,177,55,34,201,39,
    40,62,157,155,41,127,227,184,82,194,20,224,202,202,204,92,
    73,76,89,4,97,16,133,191,98,111,167,8,163,77,228,178,
    195,41,103,146,25,25,147,28,89,75,113,179,16,7,141,226,
    40,104,16,99,240,4,123,216,217,130,242,211,219,18,174,20,
    35,222,124,118,49,111,168,170,183,125,56,177,226,97,55,77,
    28,202,76,1,156,127,82,58,76,14,29,11,231,94,28,157,
    136,73,104,1,133,49,92,17,93,71,159,226,104,41,108,165,
    168,245,57,138,47,80,60,156,155,90,255,78,80,235,29,194,
    144,62,105,197,34,88,133,24,253,51,157,85,207,26,132,5,
    122,164,191,123,47,250,170,68,76,131,86,242,181,210,212,18,
    227,232,96,135,80,81,217,76,245,21,157,163,233,4,70,238,
    62,240,194,126,180,71,48,250,17,163,201,128,249,222,129,0,
    124,24,125,189,252,242,67,28,143,85,64,69,171,150,235,133,
    250,114,61,95,95,1,185,10,87,13,228,250,255,246,178,137,
    172,
};

EmbeddedPython embedded_m5_objects_TimingExpr(
    "m5/objects/TimingExpr.py",
    "/home/hongyu/gem5-fy/src/cpu/TimingExpr.py",
    "m5.objects.TimingExpr",
    data_m5_objects_TimingExpr,
    1601,
    5805);

} // anonymous namespace