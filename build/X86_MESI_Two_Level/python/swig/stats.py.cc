#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_stats[] = {
    120,156,237,61,11,140,29,87,117,119,222,219,143,223,254,255,
    235,207,218,126,254,111,236,216,142,157,143,19,219,113,156,216,
    78,98,146,216,206,108,32,201,11,244,105,246,205,221,245,216,
    111,223,60,191,153,183,246,6,155,54,56,64,65,80,64,109,
    168,104,65,144,34,80,17,148,42,42,18,18,18,18,18,42,
    109,10,148,22,149,150,42,21,130,210,138,138,138,138,74,84,
    84,32,154,158,115,238,220,121,51,239,205,58,246,206,220,217,
    53,201,238,219,187,247,157,185,115,239,185,247,158,123,206,185,
    231,156,185,83,98,222,79,15,252,29,205,51,230,24,237,140,
    153,240,209,216,121,198,202,26,43,100,152,198,51,204,124,128,
    157,107,103,246,26,166,153,237,236,121,198,10,89,198,179,236,
    42,100,218,216,51,89,86,185,93,148,58,230,151,234,140,42,
    213,11,23,160,238,85,236,124,27,129,50,108,161,139,241,118,
    86,232,96,79,86,134,89,27,239,100,231,186,152,221,201,52,
    248,169,64,203,79,45,12,48,239,142,85,172,144,131,82,27,
    161,84,23,149,26,166,82,222,213,28,94,165,59,204,28,51,
    187,216,243,128,121,55,51,187,9,139,30,102,246,80,166,151,
    153,189,148,233,99,102,31,101,250,153,217,207,248,0,155,209,
    152,57,128,16,64,246,233,194,32,227,109,204,26,98,133,33,
    198,225,51,200,174,106,128,249,160,44,56,228,23,28,166,130,
    35,172,48,194,56,124,134,169,32,130,70,89,97,148,241,81,
    102,141,177,194,24,101,198,89,97,156,50,171,89,97,53,101,
    214,176,194,26,202,172,101,133,181,148,89,199,10,235,40,51,
    193,10,19,148,89,207,10,235,41,179,129,21,54,80,102,35,
    43,108,164,76,158,21,242,204,28,166,110,108,34,60,54,97,
    198,36,60,16,205,81,31,205,205,116,121,11,43,108,97,28,
    62,155,69,127,198,100,193,113,191,224,86,42,184,141,21,182,
    49,14,159,173,126,127,182,179,194,118,186,182,131,21,118,80,
    102,146,21,38,153,185,90,142,201,26,191,142,91,232,242,78,
    86,216,201,56,124,110,17,141,173,149,141,173,243,11,238,162,
    130,183,178,194,173,140,195,103,151,40,56,33,11,174,247,11,
    238,166,130,123,88,97,15,227,240,217,45,10,110,144,5,55,
    250,5,247,82,193,219,88,225,54,198,225,179,87,20,204,99,
    71,176,224,38,191,224,62,42,184,159,21,246,51,14,159,125,
    162,224,102,217,153,45,126,193,219,169,224,29,172,112,7,227,
    240,185,93,20,220,42,155,222,230,23,188,147,10,222,197,10,
    119,49,14,159,59,69,193,237,178,198,29,126,193,3,84,240,
    110,86,184,155,113,248,28,16,5,39,101,193,91,252,130,247,
    80,193,131,172,112,144,113,248,220,35,10,238,148,5,119,249,
    5,15,81,193,195,172,112,152,113,248,28,18,5,111,149,5,
    119,251,5,239,165,130,71,88,225,8,227,240,185,87,20,220,
    35,11,238,245,11,222,71,5,143,178,194,81,198,225,115,159,
    40,120,27,145,218,253,116,237,126,204,152,251,8,242,0,65,
    30,192,140,185,159,32,199,8,114,12,51,230,237,4,57,78,
    144,227,152,49,239,32,200,9,130,156,192,140,121,39,65,30,
    36,200,131,152,49,239,34,200,67,4,121,8,51,230,1,130,
    60,76,144,135,49,99,222,77,144,147,4,57,137,25,243,30,
    130,188,137,32,111,194,140,121,144,32,143,16,228,17,204,152,
    109,204,60,68,236,225,81,2,62,138,25,243,48,21,123,140,
    32,143,97,198,188,151,32,167,8,114,10,51,230,17,130,156,
    38,200,105,204,152,247,17,228,12,65,206,96,198,60,74,144,
    199,9,242,56,102,204,251,9,162,19,68,199,12,112,171,169,
    201,227,192,110,173,87,225,103,82,131,156,139,220,119,158,215,
    28,203,174,20,173,202,140,109,101,240,122,39,38,200,156,75,
    152,100,225,175,3,254,142,33,151,174,49,98,209,192,252,128,
    75,95,129,26,52,6,247,152,25,156,40,51,203,214,92,209,
    240,139,149,101,151,53,236,241,12,93,176,218,188,18,87,128,
    239,14,178,203,80,123,59,187,76,144,169,39,43,235,89,155,
    219,65,140,117,144,24,171,184,12,55,227,101,96,171,12,208,
    6,217,192,78,17,222,46,226,189,135,176,115,17,171,162,227,
    26,174,51,137,40,187,57,196,123,174,106,215,220,178,53,237,
    174,194,171,197,138,49,199,139,69,183,11,190,212,170,70,205,
    181,92,232,171,219,6,95,207,217,86,133,170,40,59,110,205,
    170,186,189,254,221,197,57,219,172,151,185,219,13,144,147,4,
    57,81,171,217,181,73,28,9,29,19,23,147,234,249,89,23,
    241,154,195,38,38,17,33,74,156,7,32,217,123,214,158,227,
    144,84,102,23,234,123,103,249,220,157,187,103,22,246,78,215,
    173,178,185,247,169,187,239,42,62,118,98,234,100,241,137,139,
    118,241,81,62,207,203,123,171,11,46,20,221,235,92,180,102,
    247,82,119,246,0,100,8,235,2,72,209,195,233,44,47,87,
    121,13,187,232,244,97,59,90,143,54,172,109,208,178,218,160,
    214,167,89,29,114,182,112,32,122,229,108,125,222,155,173,140,
    39,83,97,194,52,111,246,50,236,10,101,112,74,38,113,182,
    112,146,178,56,55,208,41,24,249,89,141,93,205,176,183,102,
    177,192,21,72,219,64,4,230,253,153,26,17,34,80,84,213,
    201,174,192,116,182,227,100,61,59,65,85,173,162,170,50,236,
    50,164,48,143,109,236,10,200,89,40,10,32,72,207,229,152,
    221,199,52,248,98,229,112,217,107,21,88,228,79,93,238,128,
    121,110,243,231,89,208,39,246,198,180,106,56,194,58,146,230,
    100,151,132,218,48,72,134,123,86,239,149,211,1,195,68,211,
    122,202,174,136,153,155,177,42,166,156,73,65,11,51,86,25,
    104,65,199,49,164,218,168,88,217,54,252,98,56,157,165,178,
    237,112,162,39,170,91,239,199,130,88,122,166,74,213,96,171,
    136,15,221,108,114,167,132,180,3,52,37,106,68,12,176,182,
    196,233,65,199,165,58,130,245,173,165,217,31,128,249,239,128,
    217,159,132,217,23,185,137,76,175,214,175,157,178,112,224,74,
    237,222,162,109,147,164,240,23,76,12,191,198,206,101,104,165,
    93,166,53,14,165,97,146,104,165,93,166,117,140,87,111,101,
    154,155,241,224,176,148,97,46,17,58,4,247,16,129,0,165,
    64,217,195,184,48,105,234,112,198,219,25,144,160,152,94,32,
    27,65,15,52,201,237,120,7,86,149,193,38,218,88,117,28,
    42,95,133,51,127,153,121,36,114,53,11,36,0,24,193,34,
    133,85,15,224,49,104,247,157,68,91,222,202,167,25,119,207,
    90,142,125,81,172,93,204,19,243,154,130,49,58,179,112,122,
    250,28,47,185,206,70,0,60,109,215,243,37,163,82,177,221,
    188,97,154,121,195,133,181,61,93,119,185,147,119,237,252,54,
    103,18,103,77,95,43,137,198,175,111,161,202,117,202,8,74,
    49,173,146,11,92,99,152,190,208,42,116,184,11,115,126,214,
    54,29,128,227,173,179,220,213,7,36,23,178,9,1,34,137,
    34,22,197,102,161,28,46,212,251,37,6,130,135,116,72,42,
    113,120,121,134,216,82,169,108,56,78,17,49,32,56,209,22,
    246,122,222,40,215,57,213,142,52,0,8,97,86,224,144,60,
    183,89,77,172,212,235,40,97,95,177,43,230,2,32,99,149,
    110,199,118,86,19,213,245,2,183,233,213,198,224,47,167,141,
    106,157,64,123,157,218,120,166,212,230,81,154,47,38,198,176,
    151,140,166,88,243,102,25,40,239,42,240,136,201,12,45,113,
    234,0,82,170,190,19,115,120,179,190,21,147,109,152,108,199,
    100,135,236,99,162,29,237,109,238,232,49,172,60,67,189,43,
    101,189,126,248,171,166,24,90,53,125,129,85,115,21,169,255,
    50,73,63,43,27,160,252,44,246,213,238,150,107,133,86,22,
    76,39,172,44,44,76,107,4,132,98,144,194,177,209,83,250,
    26,68,99,19,36,59,182,57,59,242,130,158,242,103,13,39,
    95,177,27,68,156,199,139,130,55,33,9,235,19,56,204,1,
    34,157,13,16,169,158,199,18,72,161,250,22,76,218,22,27,
    231,91,20,143,243,172,24,231,135,176,242,30,143,138,250,136,
    122,186,181,18,146,0,14,126,167,28,241,41,200,44,140,227,
    136,7,135,122,28,132,213,147,149,9,144,63,52,220,40,130,
    122,133,8,34,57,38,246,95,146,57,89,237,50,211,129,131,
    62,147,101,99,158,100,113,144,245,87,107,246,165,133,188,61,
    147,119,153,68,233,240,54,103,207,54,231,16,240,135,252,145,
    198,240,122,188,160,198,171,184,150,197,218,198,65,112,173,10,
    124,199,170,78,92,42,113,98,254,244,173,88,20,75,89,104,
    27,69,79,168,192,76,208,208,103,228,208,19,51,3,149,3,
    121,88,242,227,222,229,143,59,226,125,6,107,238,162,65,207,
    106,227,176,120,3,67,142,127,89,28,114,36,160,247,48,210,
    196,53,246,110,134,3,10,195,230,173,84,90,19,114,93,12,
    99,113,84,51,46,107,145,146,36,227,209,123,198,91,249,176,
    32,170,189,36,32,60,201,2,122,195,239,6,216,130,207,249,
    179,158,238,17,92,23,109,254,186,160,217,184,46,238,222,22,
    94,26,56,210,176,134,176,24,45,2,161,193,109,13,179,24,
    82,52,178,196,145,221,68,167,98,149,168,179,136,205,63,221,
    152,8,228,161,235,181,145,140,152,123,34,139,3,152,220,237,
    175,67,77,194,146,194,100,99,51,211,11,112,247,162,224,24,
    79,97,115,109,132,96,127,39,9,46,33,90,79,186,188,102,
    184,118,141,148,75,252,65,209,244,0,210,193,143,32,195,97,
    139,161,49,78,220,239,121,210,53,49,205,224,108,94,205,104,
    133,44,10,244,231,201,10,35,140,45,188,19,149,195,66,142,
    121,198,28,144,248,29,148,233,102,102,39,238,80,112,127,212,
    67,249,28,229,123,201,166,34,12,39,221,210,112,34,108,42,
    3,210,166,50,40,109,42,67,104,83,193,204,176,103,83,41,
    140,48,115,144,50,163,158,241,164,48,38,45,23,227,104,176,
    192,204,106,207,96,81,88,195,204,49,202,172,245,44,19,133,
    117,76,159,154,68,201,71,139,70,254,17,159,66,254,22,18,
    6,129,233,244,9,80,208,22,38,151,146,95,233,72,94,135,
    203,198,220,180,105,28,49,177,94,172,188,36,87,118,70,34,
    58,16,68,20,215,164,182,8,174,244,245,144,68,120,62,121,
    13,246,48,35,11,159,64,148,86,156,105,151,136,251,60,113,
    150,231,231,248,220,52,236,68,207,90,213,252,76,217,152,165,
    17,207,122,29,57,45,59,226,18,141,5,152,4,241,40,7,
    117,136,83,118,190,100,87,128,175,214,75,64,174,121,147,131,
    254,207,205,252,238,60,49,229,188,229,228,141,105,184,106,148,
    92,177,190,194,252,128,84,47,163,54,235,144,150,117,254,34,
    102,213,76,89,17,54,218,22,40,151,51,172,161,119,180,80,
    87,155,24,170,41,66,245,148,64,120,192,103,13,91,153,2,
    137,77,211,115,206,167,35,137,142,79,71,189,98,248,45,77,
    170,53,30,110,68,54,180,247,25,105,97,26,69,210,97,85,
    34,141,28,188,220,24,73,177,249,241,165,91,112,13,248,184,
    11,185,212,138,254,112,43,250,86,165,84,11,8,110,188,163,
    146,60,85,224,100,99,75,118,128,34,18,235,130,201,131,93,
    208,143,171,152,5,234,1,54,84,139,221,131,241,136,30,192,
    86,207,168,148,120,160,23,135,148,244,2,87,167,108,172,30,
    187,39,17,171,129,95,168,27,101,229,221,64,1,77,45,93,
    138,224,48,55,176,156,35,136,169,100,87,23,20,174,102,162,
    35,108,227,237,137,99,94,225,151,92,213,152,99,27,239,136,
    135,121,4,249,23,9,247,98,81,37,246,158,169,148,218,121,
    46,241,30,84,107,124,222,178,235,142,234,30,200,118,158,143,
    189,118,199,90,59,97,152,243,77,76,72,13,43,197,45,139,
    215,214,123,98,247,99,52,138,156,248,5,32,38,213,76,136,
    76,243,212,212,251,212,244,162,194,83,235,5,54,245,129,216,
    189,136,92,218,22,236,98,67,253,80,67,84,158,222,73,141,
    125,72,81,79,156,250,116,122,61,161,198,126,95,197,58,47,
    22,211,153,146,78,234,8,181,245,17,22,230,184,178,31,15,
    69,245,227,253,81,76,55,178,31,205,19,114,159,194,126,80,
    91,31,101,173,146,35,180,163,185,220,216,209,16,30,202,37,
    154,5,163,81,44,254,113,3,175,73,220,233,146,61,78,71,
    171,54,217,57,132,97,164,90,179,171,188,230,46,8,131,211,
    253,152,220,137,201,222,16,27,50,121,153,187,188,24,30,107,
    119,128,249,22,88,147,195,30,211,94,40,22,189,129,129,27,
    138,69,218,165,232,39,48,65,43,168,126,18,147,71,48,121,
    12,147,211,152,60,142,9,26,63,245,55,99,242,36,38,104,
    52,210,159,193,228,109,152,160,49,90,55,48,153,14,141,89,
    162,27,170,131,76,56,18,157,91,33,233,208,214,101,114,153,
    14,45,167,229,50,185,108,15,252,230,22,251,205,144,10,116,
    178,50,99,183,90,138,12,109,9,150,162,140,103,44,194,52,
    135,203,183,208,37,129,221,148,246,16,176,87,2,251,40,237,
    39,224,128,4,14,82,58,68,192,97,9,28,161,116,148,128,
    99,18,56,78,233,106,2,174,145,192,181,148,174,35,224,132,
    4,174,167,116,3,1,55,82,62,79,225,47,194,162,181,89,
    90,180,182,48,47,20,105,43,217,181,24,134,182,160,81,139,
    97,64,139,103,212,218,33,141,90,147,210,168,117,139,52,106,
    237,148,70,173,93,20,163,2,173,80,244,9,70,162,8,52,
    246,82,122,27,161,177,15,237,84,232,168,140,99,167,82,35,
    67,201,172,240,34,75,208,60,165,223,171,30,79,253,8,243,
    12,227,203,111,154,34,198,173,31,85,210,105,228,115,159,98,
    175,193,182,151,195,16,245,231,45,20,115,99,146,189,199,99,
    70,104,240,62,133,241,25,13,57,184,93,5,210,194,169,35,
    218,122,137,197,213,75,6,3,216,79,241,170,65,98,38,96,
    136,162,40,3,135,87,147,239,70,143,232,134,223,232,23,35,
    136,227,6,118,131,93,178,35,165,179,188,116,94,165,192,167,
    208,13,108,228,75,241,48,238,147,24,79,27,14,63,166,26,
    107,116,27,250,13,125,57,30,230,221,18,115,94,49,166,203,
    42,173,174,180,47,18,173,124,37,30,206,254,50,133,189,59,
    80,156,82,164,113,133,122,205,124,53,33,170,174,113,244,25,
    42,166,106,106,228,107,241,48,206,73,140,159,229,53,91,181,
    29,12,219,248,58,139,203,3,253,65,158,183,28,203,109,114,
    159,19,12,88,162,146,1,167,202,95,110,116,96,114,63,11,
    110,26,116,84,112,23,223,38,244,74,188,41,242,112,150,187,
    77,16,152,76,18,65,20,114,227,49,121,143,217,78,185,53,
    171,66,1,19,139,95,132,219,93,212,244,154,224,141,70,48,
    36,45,220,44,65,240,62,97,166,119,74,20,91,40,151,93,
    201,162,232,79,188,35,2,140,183,137,160,9,15,66,141,203,
    66,53,126,129,110,108,134,225,93,29,226,46,248,218,16,103,
    150,89,44,217,245,138,75,55,181,66,241,54,220,184,73,64,
    131,165,1,4,111,9,126,199,194,25,42,76,219,95,49,88,
    48,30,198,44,63,3,35,51,231,208,29,139,92,114,188,241,
    9,65,189,136,62,218,225,225,61,58,199,73,69,63,157,142,
    241,74,58,250,153,244,10,38,85,76,208,217,161,99,12,137,
    62,143,9,90,219,245,183,75,166,38,66,182,132,107,189,177,
    250,202,220,113,104,22,40,227,139,26,84,42,5,186,77,32,
    68,19,41,146,190,41,218,240,205,66,53,159,196,250,110,99,
    141,13,223,104,211,175,216,0,54,111,249,250,151,184,182,245,
    23,152,167,208,83,239,16,149,125,126,110,127,242,93,196,230,
    254,165,177,158,137,181,76,149,140,178,81,139,222,175,226,70,
    251,70,247,171,222,246,175,83,110,255,86,201,237,95,142,241,
    46,220,178,98,88,195,42,239,97,16,216,173,33,77,172,208,
    221,218,15,217,205,177,91,243,241,124,61,237,214,126,196,98,
    41,2,3,33,210,79,199,63,255,227,120,40,15,134,81,6,
    117,168,94,86,170,116,161,228,18,173,252,36,209,193,118,109,
    215,40,171,214,22,169,145,159,70,224,189,236,91,250,159,201,
    229,58,137,82,238,122,244,41,50,155,126,2,147,23,67,212,
    32,173,176,254,208,54,36,181,34,33,249,49,168,230,7,204,
    227,29,158,144,20,2,49,147,19,242,228,45,28,185,69,180,
    60,65,3,180,58,251,167,39,121,250,164,228,233,151,146,103,
    64,10,156,65,105,120,28,162,27,135,41,46,174,203,139,139,
    3,89,132,122,207,10,149,69,255,195,110,14,89,228,227,249,
    122,146,69,191,136,96,51,55,200,216,27,203,70,189,217,130,
    52,246,95,199,195,185,63,140,179,99,61,171,212,102,129,76,
    18,219,64,52,99,10,162,0,214,169,72,253,108,60,148,155,
    136,67,185,212,39,57,211,145,232,48,171,150,247,36,21,115,
    17,40,47,187,168,239,209,164,168,199,253,247,117,155,78,198,
    155,22,87,125,26,45,38,98,103,188,216,53,105,51,144,128,
    136,130,104,242,88,172,18,113,45,80,9,1,196,222,254,51,
    172,69,7,9,170,31,141,138,148,171,31,232,162,249,57,214,
    183,154,133,246,232,141,61,57,170,33,216,131,227,150,227,30,
    55,92,163,85,9,121,243,245,56,97,121,27,43,180,147,154,
    209,129,143,1,99,186,138,212,140,156,4,118,81,218,77,192,
    30,9,236,165,180,143,128,253,18,56,64,233,32,1,135,36,
    112,152,210,17,2,142,74,224,24,165,227,4,92,45,129,107,
    40,93,75,192,117,18,56,65,233,122,2,110,144,192,141,148,
    230,9,184,73,2,55,83,186,133,128,91,37,112,27,165,219,
    9,184,67,2,39,41,189,133,128,59,37,112,23,165,183,18,
    112,183,212,205,246,16,112,47,62,229,239,41,93,228,120,165,
    103,111,87,166,250,52,34,23,226,10,87,159,124,60,95,91,
    125,202,120,68,77,157,120,208,231,201,87,233,185,165,133,17,
    234,147,124,2,29,79,15,160,147,59,92,122,42,12,31,27,
    27,16,207,152,19,19,47,102,188,39,199,26,44,178,195,103,
    70,104,197,171,240,139,69,185,162,196,35,97,120,221,168,86,
    121,197,212,209,94,166,239,243,71,104,171,28,53,53,186,214,
    86,28,33,241,0,81,143,150,213,70,180,193,21,196,239,119,
    249,252,126,81,83,121,19,171,31,12,240,42,122,246,213,55,
    9,135,161,104,45,95,207,60,217,234,95,154,179,132,193,186,
    5,136,140,28,213,95,200,55,93,52,46,69,220,1,64,255,
    14,227,18,25,221,253,139,211,245,210,121,238,146,134,231,91,
    228,35,47,58,158,97,58,0,163,224,239,16,98,160,114,81,
    45,145,23,176,134,78,129,53,126,111,42,4,72,70,223,237,
    93,240,239,22,223,201,228,237,23,170,87,76,94,155,41,219,
    23,125,107,120,196,37,105,228,247,33,20,235,228,23,180,231,
    3,85,68,95,145,2,84,2,194,51,89,154,231,165,214,249,
    37,168,116,75,224,151,240,228,56,245,185,214,25,67,160,156,
    49,200,135,7,196,185,80,55,106,158,186,16,121,65,142,148,
    247,61,140,78,217,246,108,240,173,80,137,36,126,105,170,217,
    152,171,150,35,155,244,46,248,77,138,239,180,148,105,19,225,
    41,17,62,119,81,173,66,96,80,194,48,46,83,228,2,160,
    66,104,173,70,126,255,55,147,235,8,168,19,209,54,13,140,
    77,75,198,166,209,41,173,227,237,13,235,248,10,22,169,183,
    221,36,34,245,182,235,23,169,191,57,22,137,253,43,113,55,
    116,192,151,142,215,107,248,12,137,72,225,195,69,166,18,228,
    78,13,168,239,217,133,47,205,172,37,149,221,201,43,88,13,
    246,177,135,5,119,39,192,66,176,191,98,155,180,56,35,121,
    33,49,70,114,221,193,161,30,167,25,148,22,211,160,89,180,
    179,97,22,93,181,114,153,208,225,155,132,9,29,126,61,50,
    161,35,241,172,72,163,45,139,38,37,211,232,137,120,120,15,
    183,226,173,216,60,74,22,154,135,87,34,203,127,36,174,1,
    172,149,241,47,118,13,119,72,223,199,155,215,69,140,127,208,
    130,118,173,235,88,201,231,23,175,164,97,65,187,214,117,172,
    4,227,118,27,214,179,224,51,19,225,187,148,11,165,31,64,
    53,135,112,22,80,45,15,133,181,100,60,115,89,143,223,149,
    253,102,180,104,250,6,187,217,158,91,240,36,155,124,110,161,
    48,33,69,220,122,20,104,184,17,89,161,2,237,204,77,34,
    208,206,188,30,5,154,158,148,96,16,11,45,37,113,246,214,
    149,40,24,138,190,96,216,192,110,64,48,172,105,30,194,16,
    103,95,252,170,207,215,163,138,52,184,250,226,87,37,79,15,
    48,126,175,200,194,98,210,165,245,58,238,80,208,116,217,0,
    81,168,105,168,248,37,63,2,181,9,140,24,208,169,52,45,
    215,22,162,111,89,160,246,112,30,23,2,186,148,119,209,55,
    69,69,95,193,198,190,197,60,17,70,132,27,146,94,162,168,
    114,217,133,97,71,167,181,86,119,79,195,62,131,242,11,109,
    142,15,218,181,185,122,217,136,22,95,248,112,225,146,195,24,
    57,157,209,24,60,160,105,101,11,16,243,38,17,32,230,235,
    81,128,204,196,19,32,253,97,74,47,66,71,84,6,93,144,
    113,217,173,157,91,137,242,99,206,151,31,168,190,94,143,252,
    248,181,63,140,200,41,61,118,22,24,77,229,220,236,87,30,
    211,8,154,135,4,7,163,83,230,170,70,205,225,15,47,234,
    182,198,120,251,196,221,214,30,211,147,110,107,12,153,107,247,
    66,230,86,182,241,185,118,147,112,185,218,245,115,185,180,252,
    185,72,253,232,207,13,19,156,24,23,60,28,57,101,127,238,
    197,149,236,207,125,135,207,101,6,23,227,50,17,150,139,240,
    200,22,75,115,70,213,183,92,68,93,243,125,127,240,197,93,
    219,90,40,232,92,187,198,101,212,217,254,89,50,190,208,41,
    13,225,153,86,205,231,94,133,106,46,224,192,245,177,128,135,
    77,248,210,194,156,238,13,143,90,136,218,174,222,36,76,237,
    234,245,51,181,223,28,213,237,93,43,81,11,122,223,210,60,
    106,97,70,212,106,94,141,186,230,155,87,35,25,75,42,10,
    84,39,244,246,157,145,254,53,92,212,167,235,110,181,238,182,
    178,147,179,75,97,39,215,60,158,247,121,22,122,136,205,123,
    166,160,15,185,75,215,202,229,46,31,188,73,184,203,7,95,
    143,220,229,195,43,145,187,188,224,83,204,18,246,170,61,254,
    146,44,78,243,89,171,162,250,121,47,106,228,15,227,237,175,
    187,26,56,243,138,169,122,107,13,77,252,81,60,124,3,99,
    60,111,148,45,165,24,123,111,226,176,204,143,55,225,156,97,
    55,122,74,91,16,237,240,153,6,106,206,102,163,167,209,63,
    217,64,155,78,136,186,161,115,12,60,121,39,144,14,60,14,
    223,11,149,234,253,152,12,98,242,118,166,76,246,117,67,253,
    191,135,93,192,237,91,248,56,50,252,165,176,197,50,8,98,
    122,123,85,171,16,68,254,114,157,214,3,79,20,94,243,73,
    110,79,246,117,73,217,215,45,31,163,235,145,7,121,245,202,
    131,188,250,228,65,94,253,242,32,175,1,121,58,253,160,60,
    157,126,72,158,78,63,44,79,167,31,145,167,211,143,202,211,
    233,199,228,233,244,227,242,116,250,213,242,116,250,53,248,22,
    60,225,238,19,111,193,43,172,99,230,90,202,76,120,175,187,
    43,172,103,230,4,101,54,120,239,181,43,108,100,230,6,202,
    228,189,23,216,225,217,101,121,121,118,217,38,121,118,217,102,
    121,118,217,22,121,118,217,86,121,118,217,54,121,118,217,118,
    121,118,217,14,121,118,217,164,60,187,236,150,198,217,101,214,
    110,140,156,55,119,18,100,47,106,11,187,216,138,213,22,62,
    115,147,104,11,62,158,175,173,45,220,32,115,29,10,174,40,
    58,65,145,14,159,82,200,98,49,206,74,182,243,217,107,41,
    4,93,254,12,92,109,82,11,198,52,181,106,193,52,84,243,
    185,120,66,107,52,52,174,69,124,3,7,30,148,163,246,96,
    103,241,210,26,191,169,47,196,235,194,80,83,23,166,109,187,
    156,198,193,212,162,157,151,226,33,63,216,132,124,153,87,212,
    226,46,14,0,165,102,190,24,64,61,248,62,29,66,125,152,
    133,117,7,241,94,156,232,67,94,131,29,128,93,171,83,182,
    74,120,14,114,227,53,22,26,173,37,76,207,37,223,163,30,
    234,81,163,221,47,197,86,137,154,251,228,52,250,164,88,57,
    242,58,211,104,240,203,42,230,8,20,168,150,57,210,55,160,
    206,180,81,83,215,169,70,171,95,137,61,67,205,108,11,234,
    6,94,61,151,194,4,117,203,190,136,246,190,154,120,87,128,
    144,83,237,138,223,222,215,18,239,138,147,114,87,252,246,190,
    30,143,41,247,134,250,81,181,171,170,55,159,208,196,203,1,
    148,165,130,119,99,71,211,13,132,176,22,143,3,170,62,139,
    158,124,84,223,140,55,218,253,33,188,249,92,213,85,250,54,
    15,122,17,9,54,242,237,120,104,247,133,208,78,35,166,248,
    59,177,73,164,9,231,139,70,53,64,32,74,182,5,226,172,
    8,104,232,187,73,18,137,106,27,22,153,18,190,151,36,19,
    81,107,193,34,171,199,43,241,240,13,179,143,154,114,51,33,
    157,103,69,173,124,63,201,133,88,83,108,43,68,122,198,54,
    126,152,36,61,151,202,220,80,186,153,21,175,144,134,70,254,
    45,30,218,227,33,180,103,241,53,146,229,178,93,82,189,23,
    71,196,66,141,253,56,201,45,35,72,223,226,180,161,246,72,
    101,220,50,202,118,126,18,91,209,106,18,153,53,195,225,202,
    85,44,146,155,216,210,79,155,208,71,212,219,37,250,39,27,
    232,3,238,226,69,238,193,104,153,204,53,162,101,50,175,25,
    45,131,51,139,209,50,126,223,35,3,101,154,252,68,234,162,
    101,126,166,49,25,45,211,47,163,101,150,38,152,135,195,4,
    89,119,206,10,138,84,172,190,137,67,116,101,107,191,72,146,
    165,205,212,236,138,242,67,168,169,145,95,38,41,62,84,243,
    1,20,31,216,198,175,147,216,215,55,105,252,142,99,205,86,
    2,212,127,92,29,221,208,129,35,212,30,14,117,60,102,214,
    164,120,112,82,165,85,115,51,239,52,77,104,42,155,112,7,
    172,138,195,107,202,189,104,212,1,209,84,71,38,22,253,55,
    177,30,144,81,202,151,46,113,29,217,80,46,128,254,210,152,
    231,8,107,97,158,162,11,170,185,39,178,254,70,115,61,177,
    59,210,188,18,230,236,121,245,239,23,21,43,1,155,234,143,
    71,72,97,236,235,21,235,130,210,227,252,8,113,209,202,80,
    60,196,195,54,248,26,180,88,115,148,191,243,193,107,102,52,
    30,234,77,27,122,187,166,252,117,162,216,198,234,216,148,30,
    214,21,230,120,109,86,61,161,163,194,64,45,173,139,24,115,
    77,162,191,92,225,61,27,50,158,235,116,146,20,217,107,7,
    55,163,99,145,188,127,250,106,204,173,197,100,2,147,60,38,
    155,49,193,147,185,244,237,152,32,230,250,78,76,110,213,164,
    178,140,7,99,136,147,4,241,108,146,64,228,196,93,152,220,
    141,201,65,76,240,164,4,29,79,14,208,143,98,130,74,175,
    126,12,115,248,84,190,254,16,38,39,49,193,39,203,245,199,
    48,193,39,196,244,199,49,153,194,4,207,247,211,159,196,228,
    105,76,158,209,130,220,194,11,228,104,104,243,170,99,22,241,
    64,183,79,163,230,245,4,243,130,161,51,17,111,16,184,246,
    111,231,226,47,155,203,105,180,67,153,167,167,242,138,166,93,
    159,46,243,214,232,15,124,214,234,141,232,143,100,163,63,248,
    14,60,49,17,99,61,182,121,177,30,250,212,36,190,207,100,
    133,6,116,108,145,171,125,133,7,116,248,120,38,30,208,49,
    214,188,80,210,8,234,32,198,185,253,90,236,127,121,131,57,
    38,227,105,3,107,90,198,52,157,128,14,146,66,187,226,225,
    222,74,15,41,68,114,144,228,220,19,15,241,209,8,196,85,
    71,113,144,176,223,23,192,123,201,38,132,181,17,216,71,133,
    112,40,12,15,32,165,229,142,216,187,240,168,158,164,23,184,
    65,74,215,1,85,51,146,114,192,6,41,143,7,99,207,72,
    20,59,74,45,80,131,116,223,123,149,244,33,181,8,13,82,
    221,143,42,233,67,106,161,25,180,243,56,22,127,131,30,238,
    128,218,152,12,218,40,61,24,123,147,59,210,130,118,138,65,
    25,39,227,13,249,112,11,238,170,3,51,104,79,250,104,60,
    172,135,90,176,78,35,46,227,116,108,74,137,192,59,133,216,
    12,177,247,79,154,78,82,137,205,120,115,210,12,37,133,248,
    140,167,226,225,220,202,77,148,199,104,144,53,232,153,164,151,
    164,226,8,13,178,94,253,86,210,84,173,58,66,131,204,109,
    70,60,172,215,181,96,157,86,128,6,217,9,205,120,216,183,
    110,0,83,136,203,32,219,230,108,108,13,43,66,90,166,17,
    147,65,70,217,115,77,216,167,24,142,129,108,20,195,49,66,
    93,95,222,144,140,185,76,82,33,25,227,173,244,152,86,88,
    6,153,216,221,164,89,152,106,183,46,249,4,46,38,45,45,
    84,51,0,244,97,60,27,64,122,201,251,246,8,109,63,189,
    128,12,242,194,92,137,205,199,34,116,140,84,194,49,200,127,
    244,59,10,208,79,39,24,131,60,95,87,99,239,2,90,45,
    137,48,250,188,22,138,1,56,174,2,127,207,33,77,109,189,
    59,105,41,94,50,170,70,201,82,27,211,143,209,149,178,157,
    247,70,116,192,55,239,47,151,119,247,253,25,233,221,197,167,
    140,111,94,239,238,21,76,126,91,11,46,56,207,137,27,214,
    1,84,59,114,223,6,40,108,198,49,125,19,75,204,145,219,
    228,190,117,220,154,85,153,125,195,125,251,134,251,182,117,57,
    127,88,46,231,21,238,190,245,241,84,233,190,21,11,37,53,
    247,237,31,92,139,191,47,175,251,246,35,241,100,103,192,78,
    239,141,105,138,238,219,143,38,38,247,125,220,211,113,223,126,
    44,30,226,163,17,136,167,226,190,253,68,18,155,142,181,17,
    216,47,135,251,246,79,98,235,238,81,61,73,217,125,251,105,
    85,51,178,28,238,219,63,141,61,35,81,236,40,93,247,237,
    231,148,244,33,93,247,237,23,148,244,33,93,247,237,75,241,
    88,236,96,75,7,82,112,223,126,49,246,118,124,164,5,237,
    20,221,183,95,138,55,228,195,45,184,167,226,190,253,114,60,
    172,135,90,176,78,195,125,251,149,216,148,18,129,119,90,238,
    219,175,38,77,39,169,184,111,191,150,52,67,73,193,125,251,
    245,120,56,183,114,147,116,220,183,47,39,189,36,211,112,223,
    126,51,105,170,78,197,125,251,237,120,88,175,107,193,58,85,
    247,237,119,226,97,223,186,1,76,203,125,251,221,216,26,86,
    132,180,76,205,125,251,189,38,236,151,207,125,43,186,190,188,
    238,219,87,50,10,220,183,146,30,83,117,223,254,107,210,44,
    44,21,247,237,191,39,45,45,210,112,223,254,71,0,233,36,
    220,183,82,219,79,217,125,251,159,177,249,88,132,142,145,158,
    251,246,191,20,160,159,162,251,246,191,99,239,2,90,45,137,
    41,185,111,201,43,247,243,164,197,119,10,126,91,242,36,254,
    34,2,113,223,158,191,92,254,218,95,102,94,39,254,90,79,
    232,171,246,215,62,7,40,124,40,147,188,191,182,191,65,182,
    199,23,125,89,219,27,30,219,55,60,182,175,202,5,189,194,
    61,182,62,158,137,123,108,87,183,46,149,212,124,182,153,236,
    138,245,217,182,69,160,182,180,77,187,63,170,41,122,109,59,
    227,97,31,69,19,105,249,109,187,226,161,62,30,137,122,42,
    158,219,222,0,230,75,222,111,76,68,226,191,28,190,219,129,
    166,137,184,113,197,61,186,47,41,123,111,135,213,205,202,114,
    248,111,199,98,207,74,52,107,74,215,131,187,70,81,47,210,
    245,225,78,40,234,69,186,94,220,141,241,24,238,112,68,23,
    82,240,227,110,14,96,189,180,125,249,88,4,226,41,122,114,
    183,197,27,246,209,8,236,83,241,229,78,198,195,123,36,2,
    239,52,188,185,187,98,211,75,36,230,105,249,115,247,36,79,
    45,169,120,116,247,37,207,92,82,240,233,222,17,15,235,40,
    206,146,142,87,247,64,242,139,51,13,191,238,193,228,169,59,
    21,207,238,189,241,240,94,31,129,119,170,190,221,163,201,111,
    19,211,242,238,30,139,173,123,69,74,208,212,252,187,15,54,
    225,159,162,127,23,153,106,192,191,43,59,191,188,30,222,147,
    217,164,60,188,129,184,200,6,85,166,234,227,61,147,60,59,
    75,197,203,59,149,188,244,72,195,207,251,150,36,118,248,145,
    187,129,148,61,189,79,199,230,105,145,154,71,122,190,222,183,
    42,233,64,138,222,222,98,236,93,66,148,253,49,77,127,239,
    116,242,34,61,45,143,47,191,150,55,96,185,60,190,103,179,
    191,145,30,95,92,103,97,143,175,175,6,168,246,249,126,10,
    144,248,191,76,226,62,223,165,198,37,153,11,21,99,206,42,
    21,167,74,70,217,168,157,172,204,216,84,140,14,53,199,195,
    167,147,31,128,191,132,250,231,226,45,211,32,226,111,161,249,
    243,17,215,241,37,135,201,35,253,87,80,235,133,120,72,15,
    4,144,70,106,83,141,242,95,67,173,245,248,59,249,240,56,
    167,129,248,203,80,235,66,124,93,44,140,248,126,83,53,218,
    127,3,181,94,137,111,239,145,104,63,104,215,230,234,101,67,
    53,214,223,128,90,159,75,142,74,166,170,70,205,225,15,167,
    64,37,248,122,205,119,5,16,103,222,143,47,50,187,124,196,
    3,14,244,6,214,61,196,224,44,119,202,154,155,194,58,21,
    177,251,111,65,187,239,141,173,86,173,242,144,125,130,95,18,
    154,32,65,102,172,50,135,97,231,250,85,37,168,255,45,96,
    241,129,24,35,140,222,157,26,159,5,90,224,181,51,212,0,
    13,244,195,70,197,44,243,154,170,1,255,59,64,227,195,77,
    88,75,130,126,168,133,160,223,31,133,56,190,62,196,41,157,
    229,38,226,123,98,158,203,173,167,26,197,251,239,161,238,23,
    226,139,150,42,175,89,182,105,149,16,231,227,245,57,225,129,
    162,183,193,136,43,201,35,142,47,94,253,104,204,21,88,175,
    154,134,203,105,140,85,17,196,63,64,187,31,143,129,38,62,
    15,80,173,217,37,238,56,58,236,100,220,199,235,188,206,21,
    225,138,175,131,125,49,6,174,3,13,92,145,6,84,162,250,
    143,208,246,167,151,142,170,94,99,202,84,108,172,250,179,49,
    70,17,207,125,2,198,58,93,230,166,34,12,255,9,154,252,
    179,24,24,226,171,194,168,178,71,129,187,42,194,17,95,244,
    251,82,3,71,178,3,89,152,183,112,124,44,106,175,1,235,
    240,97,83,136,32,94,112,22,28,29,33,100,146,44,98,229,
    69,209,80,17,223,241,100,193,127,122,187,77,15,11,74,57,
    160,94,224,87,238,2,109,48,169,159,167,64,194,157,168,213,
    236,26,93,199,62,184,86,197,17,70,90,188,174,239,196,132,
    182,167,187,153,220,143,222,131,201,38,76,14,50,79,20,77,
    1,2,103,22,78,122,177,125,132,143,148,78,250,44,243,22,
    250,73,241,6,232,198,37,218,8,149,230,13,145,169,216,21,
    238,109,141,44,151,232,196,180,156,106,217,88,208,95,148,189,
    174,154,51,244,191,4,255,219,68,1,151,216,112,197,198,224,
    55,122,223,18,84,99,84,232,118,168,175,108,65,157,56,223,
    69,105,41,49,245,23,16,243,143,49,207,160,210,216,155,133,
    177,254,148,44,208,216,3,133,113,199,225,57,206,231,45,195,
    133,209,38,108,80,127,167,12,170,104,250,75,204,179,183,6,
    60,186,129,250,95,9,94,110,109,254,7,114,100,195,91,131,
    112,161,159,72,2,8,170,225,225,34,191,98,158,229,37,160,
    242,134,75,188,234,207,161,175,94,182,98,219,169,181,20,106,
    173,169,91,243,212,236,211,117,183,90,119,195,23,241,61,72,
    164,205,6,95,6,30,184,142,199,107,69,188,136,32,84,230,
    185,166,50,254,147,207,193,121,211,22,137,169,10,149,194,125,
    50,237,59,105,39,71,187,34,218,99,144,202,78,234,47,41,
    151,164,166,145,214,67,154,4,73,101,146,121,36,76,136,77,
    19,67,36,158,67,139,90,13,191,160,213,121,120,206,54,235,
    101,126,4,73,219,249,95,72,6,180,94,45,183,42,167,117,
    226,255,126,248,159,233,209,178,153,172,214,165,245,105,237,240,
    127,0,254,15,102,122,6,114,109,185,28,148,235,30,59,152,
    211,186,50,99,187,33,213,114,209,191,104,46,201,140,13,82,
    185,53,152,10,184,200,143,229,40,29,12,164,221,148,246,5,
    174,142,80,250,44,165,231,155,210,172,168,255,250,126,123,22,
    189,242,255,18,52,70,107,
};

EmbeddedPython embedded_m5_internal_stats(
    "m5/internal/stats.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/swig/stats.py",
    "m5.internal.stats",
    data_m5_internal_stats,
    8263,
    64819);

} // anonymous namespace