#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_stattest[] = {
    120,156,181,87,255,111,211,70,20,127,103,59,73,147,38,109,
    218,66,75,81,25,158,70,71,246,133,118,18,130,177,129,208,
    54,132,38,164,173,67,238,36,160,155,100,165,177,147,186,164,
    118,100,95,128,76,233,47,43,218,246,199,236,183,253,129,219,
    251,188,179,221,128,152,180,73,109,33,47,231,243,187,187,119,
    159,207,231,189,187,244,40,255,155,231,207,87,46,81,118,81,
    17,5,252,95,209,115,162,161,162,61,139,84,104,81,176,68,
    135,21,74,214,73,5,21,122,77,180,103,83,104,211,9,55,
    28,250,201,166,248,166,241,90,46,189,106,239,242,106,241,11,
    158,123,142,158,59,210,101,209,164,65,97,133,246,170,244,36,
    94,33,39,172,209,97,131,146,26,41,254,139,121,229,167,147,
    54,229,35,230,104,175,206,94,87,217,171,33,94,43,226,149,
    191,173,227,173,140,8,234,20,52,232,53,71,62,79,193,188,
    68,209,164,160,41,141,22,5,45,105,44,80,176,32,141,69,
    10,22,165,209,166,208,161,168,141,70,208,150,158,37,233,89,
    66,131,87,216,237,172,48,68,209,223,252,215,97,136,72,55,
    217,188,8,211,44,74,98,63,138,251,73,100,225,125,13,6,
    128,246,96,108,254,84,249,243,0,200,166,36,176,114,192,140,
    236,49,207,160,136,199,4,22,157,112,167,77,235,199,10,15,
    145,77,83,110,56,212,151,23,145,147,123,28,51,86,75,52,
    229,217,43,52,149,158,221,39,241,21,114,116,85,192,88,18,
    48,204,107,30,140,215,12,5,113,216,21,94,118,71,226,214,
    136,123,75,162,211,117,54,126,166,187,90,135,153,238,212,138,
    174,232,104,148,164,122,24,237,235,57,56,248,113,247,40,244,
    125,221,224,135,116,212,77,117,164,121,187,218,225,199,195,36,
    138,53,246,54,204,116,26,141,116,171,28,237,31,37,193,120,
    24,106,72,234,145,244,60,76,211,36,237,0,12,15,70,195,
    140,158,15,52,66,59,194,18,29,196,36,38,251,134,205,246,
    65,114,20,178,137,7,147,241,246,32,60,186,117,163,63,217,
    222,31,71,195,96,251,233,157,219,254,247,15,119,31,249,63,
    190,76,252,239,194,23,225,112,123,28,71,178,139,237,98,59,
    91,163,137,94,198,92,47,163,129,159,199,116,16,14,71,97,
    138,45,102,11,88,71,53,213,138,122,79,217,106,73,45,168,
    168,90,16,6,32,90,5,97,127,230,132,89,121,42,48,103,
    42,39,208,162,99,105,128,149,14,8,3,79,54,232,225,77,
    49,248,3,69,39,22,253,108,195,225,152,173,195,202,117,75,
    178,46,24,229,154,169,106,116,204,140,86,192,215,47,27,50,
    213,156,76,101,209,148,45,83,233,208,49,167,7,187,114,23,
    219,195,58,37,11,164,248,33,170,35,181,84,172,88,245,211,
    42,83,237,148,84,27,137,98,55,65,148,2,97,15,234,236,
    52,138,222,36,219,26,117,245,129,215,42,232,96,152,132,214,
    157,36,54,204,245,163,56,40,152,52,90,232,71,67,214,130,
    7,12,101,54,113,27,38,221,210,13,116,246,134,73,22,138,
    158,100,110,111,17,142,240,238,143,100,26,172,138,120,100,112,
    16,102,61,104,135,53,101,102,68,4,152,237,204,245,224,33,
    91,47,96,190,203,194,126,155,249,175,50,251,29,102,223,180,
    54,172,150,90,84,59,17,128,235,85,242,188,117,10,41,252,
    69,6,126,69,135,150,36,219,84,210,156,189,153,36,73,182,
    169,164,50,222,126,74,74,91,121,63,103,51,115,137,222,101,
    30,35,2,97,165,176,239,61,228,166,80,7,198,43,196,18,
    52,244,178,108,140,30,132,228,10,70,96,42,11,75,56,52,
    90,227,201,231,192,252,148,114,137,156,216,44,1,142,136,147,
    148,19,159,187,87,121,221,95,69,91,121,242,11,227,250,32,
    202,146,151,38,119,209,150,250,181,203,25,242,120,242,195,254,
    97,216,211,217,85,238,120,150,140,221,94,55,142,19,237,118,
    131,192,101,252,210,104,127,204,32,186,58,113,55,179,14,88,
    243,46,23,162,41,231,155,140,66,79,26,70,41,65,212,211,
    92,53,86,228,65,178,48,11,53,115,126,144,4,25,247,99,
    232,32,212,94,27,35,0,115,34,1,136,36,124,184,98,89,
    246,67,162,126,93,68,96,106,72,181,80,73,22,14,251,82,
    150,122,195,110,150,249,136,64,250,69,91,216,245,139,238,112,
    28,202,236,144,1,7,132,166,137,225,236,171,205,37,169,166,
    249,70,37,250,56,137,131,9,7,19,245,110,98,157,75,162,
    186,22,87,155,150,90,229,79,93,93,84,53,214,94,77,173,
    89,61,39,87,90,121,82,172,98,151,36,20,171,156,101,86,
    222,9,215,136,142,37,41,46,27,128,82,189,143,209,194,96,
    239,26,204,38,204,135,48,215,139,61,158,233,70,91,111,111,
    244,1,38,183,100,119,61,59,223,71,153,53,254,27,89,179,
    48,147,53,39,80,255,84,14,192,200,158,81,190,141,189,38,
    243,69,174,72,102,49,157,156,89,112,150,28,225,115,113,86,
    225,88,116,199,91,71,24,239,179,185,190,153,93,119,141,158,
    220,131,110,230,198,201,169,136,93,188,52,181,9,18,246,54,
    0,243,140,72,7,51,34,245,92,120,64,161,222,7,48,206,
    191,225,252,209,57,227,60,48,56,127,139,201,155,185,138,22,
    68,61,243,170,7,9,0,252,90,129,248,46,55,38,107,64,
    124,22,234,53,62,172,158,196,27,124,254,8,220,56,130,90,
    230,8,146,115,204,92,155,138,226,20,85,138,70,21,160,247,
    109,90,205,79,150,12,165,127,148,38,175,38,110,210,119,53,
    21,33,221,219,204,182,54,179,187,92,31,220,251,167,240,230,
    181,32,13,71,200,101,147,219,0,65,71,49,63,99,170,135,
    175,122,161,20,127,115,27,241,77,42,155,219,134,159,31,42,
    204,132,64,111,21,208,75,49,227,43,7,106,216,217,227,222,
    40,113,71,220,143,49,115,67,64,183,213,26,39,239,12,228,
    248,216,128,28,2,250,157,207,55,5,212,127,35,0,202,176,
    229,153,42,57,81,228,197,10,220,113,205,152,170,119,158,36,
    86,174,119,43,207,124,78,136,81,75,14,136,252,100,225,123,
    195,31,51,101,161,172,252,118,126,247,152,205,11,167,204,11,
    97,227,63,85,119,231,205,212,0,210,156,67,112,147,36,48,
    55,184,107,111,150,24,185,104,216,82,145,245,153,82,49,103,
    230,244,177,252,179,83,34,80,67,175,168,11,150,225,94,100,
    241,57,204,157,50,15,85,209,119,86,145,92,125,187,232,205,
    84,119,223,84,140,167,88,206,145,0,23,107,114,147,148,118,
    145,150,114,239,42,11,159,68,184,99,98,151,107,79,139,204,
    41,133,5,249,183,68,164,79,133,125,166,151,160,47,73,126,
    219,149,5,251,255,198,217,156,141,51,29,199,231,20,230,93,
    232,238,52,76,145,221,91,191,174,102,250,170,101,223,114,41,
    197,73,230,161,71,175,151,204,49,141,28,147,63,251,131,77,
    238,132,102,99,114,51,77,19,254,133,160,39,114,237,200,7,
    21,93,168,79,59,124,179,144,75,136,120,231,149,44,243,62,
    195,36,114,39,198,81,236,125,2,115,3,230,22,204,23,48,
    128,93,54,117,62,120,73,60,247,76,185,188,47,213,241,54,
    155,54,110,25,115,117,62,39,248,123,145,191,173,166,178,45,
    91,53,248,244,168,240,119,155,191,151,172,102,187,238,212,235,
    236,215,172,91,248,247,15,20,179,79,202,
};

EmbeddedPython embedded_m5_internal_stattest(
    "m5/internal/stattest.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/unittest/stattest.py",
    "m5.internal.stattest",
    data_m5_internal_stattest,
    1659,
    4112);

} // anonymous namespace
