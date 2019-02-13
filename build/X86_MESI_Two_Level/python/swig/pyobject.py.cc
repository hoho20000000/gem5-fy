#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_pyobject[] = {
    120,156,181,87,109,111,220,68,16,158,181,125,175,185,75,46,
    77,73,154,42,165,70,52,244,120,105,66,83,21,74,169,42,
    80,21,161,74,16,34,7,169,109,64,178,46,182,239,226,244,
    98,159,206,155,182,135,46,95,72,5,252,24,190,241,3,97,
    158,89,219,189,86,69,226,67,19,229,230,214,227,217,217,121,
    121,102,102,47,160,252,111,142,63,223,184,68,153,173,136,66,
    254,87,244,148,104,168,104,223,34,21,89,20,118,232,168,66,
    233,42,169,176,66,47,137,246,109,138,108,58,227,133,67,63,
    219,148,220,50,82,139,165,84,237,109,82,109,126,193,186,235,
    244,212,17,150,69,147,38,69,21,218,175,210,163,100,137,156,
    168,70,71,77,74,107,164,248,47,225,147,31,79,58,148,239,
    168,211,126,131,165,174,178,84,83,164,150,68,42,127,219,192,
    91,217,17,54,40,108,210,75,182,124,142,194,57,177,162,69,
    97,75,22,109,10,219,178,152,167,112,94,22,11,20,46,200,
    162,67,145,67,113,7,11,214,183,215,189,192,1,137,255,225,
    191,46,7,132,116,139,201,179,104,156,197,105,226,199,73,63,
    141,45,188,175,129,32,124,1,136,205,159,42,127,30,32,142,
    99,146,32,178,121,28,199,83,214,160,136,247,132,22,157,49,
    211,166,213,83,133,135,216,166,41,47,28,234,203,139,216,201,
    37,78,57,50,139,52,101,237,21,154,10,103,239,81,114,133,
    28,93,21,215,23,197,117,243,154,55,227,53,59,78,108,118,
    133,143,221,17,187,53,236,222,16,235,116,131,137,63,154,164,
    7,71,81,160,187,181,130,21,31,143,210,177,30,198,7,186,
    14,1,63,233,29,71,190,175,155,252,48,30,245,198,58,214,
    236,174,118,248,241,40,141,19,13,223,134,153,30,199,35,221,
    46,119,251,199,105,120,50,140,52,0,244,80,56,219,227,113,
    58,238,34,24,30,136,6,25,61,29,104,152,118,140,35,186,
    176,73,72,182,205,100,243,48,61,142,152,36,131,201,201,230,
    32,58,190,125,163,63,217,60,56,137,135,225,230,227,59,95,
    248,63,108,239,61,244,127,122,158,250,223,71,207,162,225,230,
    104,162,89,116,51,123,30,15,54,11,143,54,152,137,124,129,
    233,231,102,29,70,195,81,52,134,151,217,60,142,82,45,181,
    164,222,87,182,90,84,243,42,174,22,57,67,44,218,69,206,
    254,202,115,102,229,216,231,180,169,60,135,22,157,202,2,137,
    233,34,103,72,149,141,12,177,95,28,255,129,162,51,139,126,
    177,33,112,202,212,97,168,186,101,190,46,26,168,26,85,53,
    58,229,164,86,144,178,95,215,68,85,93,84,89,52,101,202,
    217,116,232,148,235,129,69,153,197,244,168,65,233,60,41,126,
    136,27,168,37,149,40,134,249,180,202,217,118,202,108,27,148,
    194,155,48,30,35,200,30,0,218,109,22,220,52,219,24,245,
    244,161,215,46,50,194,97,146,204,238,164,137,73,94,63,78,
    194,34,153,6,14,253,120,200,112,240,16,67,209,38,98,195,
    180,87,138,33,163,193,48,205,34,129,148,232,246,22,32,8,
    233,254,72,212,224,84,216,35,155,195,40,11,0,31,134,149,
    209,8,11,160,237,60,32,225,161,102,47,66,229,101,1,64,
    135,33,80,101,0,116,25,0,102,181,102,181,213,130,218,137,
    17,187,160,146,87,175,83,160,225,111,50,25,80,116,100,73,
    201,77,165,216,89,154,243,36,37,55,149,130,198,219,207,72,
    105,43,231,115,77,115,58,193,189,192,123,4,35,12,22,150,
    189,135,10,149,236,33,233,21,98,20,154,12,51,114,12,36,
    36,207,21,236,128,42,11,71,56,52,90,97,229,117,36,127,
    74,57,74,206,108,70,1,91,196,165,202,229,207,236,101,62,
    247,55,129,87,222,2,36,233,250,48,206,210,231,166,130,177,
    150,46,182,199,97,218,157,252,40,81,202,174,50,227,73,122,
    226,6,189,36,73,181,219,11,67,183,167,185,194,15,78,116,
    148,185,58,117,215,179,46,18,231,93,46,112,83,234,155,140,
    34,79,22,6,44,97,28,104,238,29,75,242,32,133,152,69,
    154,211,126,152,134,25,243,177,117,16,105,175,131,29,8,179,
    73,147,160,194,135,40,142,101,57,212,234,183,133,5,166,147,
    84,11,160,100,209,176,47,205,41,24,246,178,204,135,5,194,
    23,120,193,235,103,189,225,73,36,218,51,214,199,6,97,105,
    108,56,151,158,115,9,198,23,190,138,3,73,154,132,19,182,
    39,14,110,225,168,75,2,188,54,247,156,182,90,230,79,67,
    189,167,106,12,191,154,90,177,2,39,7,91,57,50,150,225,
    40,73,150,85,158,104,6,223,25,119,138,174,37,133,46,62,
    0,172,222,39,88,97,179,119,13,100,29,228,35,144,235,133,
    155,239,218,215,246,155,190,62,128,126,75,28,12,236,220,149,
    178,118,252,215,106,103,126,166,118,206,80,3,83,25,134,177,
    61,131,127,27,238,166,115,69,197,72,125,113,82,185,190,32,
    44,149,194,51,114,22,231,56,116,199,91,133,25,31,48,185,
    190,158,93,119,141,189,238,97,47,115,147,244,21,148,93,188,
    52,77,10,64,246,214,16,233,25,168,14,102,160,234,185,144,
    0,78,189,15,65,156,255,10,245,199,231,31,234,129,9,245,
    119,208,223,202,177,52,47,24,154,83,1,128,128,248,215,138,
    160,239,241,98,178,130,160,207,70,123,133,7,215,163,100,141,
    103,145,68,28,227,168,109,198,145,204,52,115,103,42,186,84,
    92,41,22,85,196,189,111,211,114,62,101,50,140,129,209,56,
    125,49,113,211,190,171,169,48,233,222,122,182,177,158,125,205,
    141,194,189,255,42,194,121,83,24,71,35,20,181,41,114,196,
    65,199,9,63,67,213,246,139,32,146,65,96,46,39,190,169,
    105,115,249,240,243,1,195,201,144,232,91,69,244,165,171,241,
    13,4,205,236,92,66,223,44,67,15,211,119,161,188,41,113,
    183,213,10,87,241,76,212,241,177,17,117,192,232,15,30,119,
    10,129,255,157,16,83,142,92,94,178,82,25,69,117,44,65,
    28,183,142,169,122,235,84,177,114,212,91,121,11,224,178,24,
    181,101,88,228,83,134,175,17,127,206,244,135,114,10,216,249,
    85,100,182,58,156,178,58,36,33,255,171,211,59,175,23,8,
    130,205,149,4,49,41,5,115,167,187,246,122,175,145,123,135,
    45,221,89,191,235,108,212,141,90,31,22,60,121,149,11,244,
    211,43,234,162,101,16,32,224,248,18,228,78,89,144,170,224,
    189,67,99,174,190,217,0,103,154,189,111,186,199,99,156,232,
    136,141,11,181,0,125,189,58,91,159,18,84,147,234,153,22,
    207,19,158,71,254,25,174,115,48,123,199,56,36,183,35,212,
    87,144,38,9,91,176,203,119,218,204,140,66,188,74,111,202,
    192,195,228,187,41,140,216,124,165,91,37,127,203,240,183,206,
    229,106,117,151,228,87,98,49,0,4,25,111,252,36,154,225,
    85,75,222,98,137,150,73,230,129,163,87,203,176,154,179,252,
    217,95,89,114,133,51,177,168,155,246,195,119,122,61,145,91,
    66,190,169,96,161,139,236,176,219,114,103,16,233,188,223,100,
    222,231,80,34,183,88,140,77,239,83,144,27,32,183,65,190,
    2,185,75,179,189,252,60,112,124,207,180,180,251,210,193,182,
    152,116,112,31,168,55,184,151,243,247,2,127,91,45,101,91,
    182,106,114,135,175,240,119,135,191,23,173,86,167,225,52,26,
    44,215,106,88,255,2,178,181,60,145,
};

EmbeddedPython embedded_m5_internal_pyobject(
    "m5/internal/pyobject.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/swig/pyobject.py",
    "m5.internal.pyobject",
    data_m5_internal_pyobject,
    1658,
    4013);

} // anonymous namespace