#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_event[] = {
    120,156,213,92,123,136,36,73,90,143,172,170,174,238,234,238,
    234,247,107,158,93,51,59,179,211,187,59,51,189,143,155,243,
    188,91,151,155,153,157,153,27,157,215,85,207,238,206,150,66,
    145,93,25,221,157,51,85,153,117,153,89,211,83,107,143,226,
    245,234,157,184,136,8,114,28,162,194,113,8,162,114,202,129,
    162,226,31,62,16,4,69,16,4,65,16,4,255,81,240,31,
    17,4,65,244,251,125,145,145,153,85,93,61,175,170,220,235,
    237,174,142,142,138,136,140,248,34,190,247,23,17,89,19,225,
    79,145,254,190,92,18,194,47,100,133,176,232,99,136,7,66,
    212,13,81,201,8,67,102,132,117,90,220,31,18,238,33,97,
    88,67,226,99,33,42,89,33,179,98,151,50,57,241,227,89,
    225,188,165,90,189,28,181,26,238,213,170,72,21,212,247,136,
    120,144,227,162,140,104,143,10,57,36,42,121,241,129,51,43,
    114,114,88,220,31,21,238,176,48,232,199,161,145,239,181,167,
    68,248,196,136,168,20,168,213,50,181,26,229,86,179,220,42,
    172,45,160,150,159,176,10,194,26,21,31,19,228,99,194,26,
    99,40,198,133,53,206,153,162,176,138,156,153,16,214,4,103,
    38,117,247,83,162,50,45,172,73,33,103,196,134,33,172,41,
    212,18,224,31,86,102,133,204,9,123,78,84,230,132,164,207,
    172,216,53,104,174,84,52,47,42,243,66,206,11,123,65,84,
    22,132,53,205,253,45,114,235,69,100,172,25,46,89,226,146,
    37,100,172,89,46,57,196,37,135,144,177,230,244,128,243,209,
    128,135,185,250,136,168,28,17,146,62,135,213,128,52,206,81,
    81,57,202,3,30,19,149,99,156,57,46,42,199,57,179,44,
    42,203,156,41,137,74,137,159,63,33,42,39,56,115,82,84,
    78,10,107,129,71,126,137,75,94,66,198,90,228,146,83,92,
    114,10,25,107,73,195,114,40,130,229,52,87,191,44,42,47,
    11,73,159,211,12,139,117,24,57,57,45,236,51,194,94,17,
    246,43,98,131,80,127,36,122,232,85,126,232,53,81,121,77,
    72,250,188,170,30,58,170,123,63,22,53,60,203,13,207,137,
    202,57,33,233,115,86,53,60,206,128,157,231,186,243,200,88,
    203,232,4,143,150,162,71,87,185,250,117,81,121,93,72,250,
    172,170,71,79,232,49,78,70,13,223,224,134,111,138,202,155,
    66,210,231,13,213,240,37,30,227,45,174,123,11,25,235,20,
    151,124,142,75,62,135,12,17,197,218,202,25,98,11,251,255,
    232,103,197,160,92,48,78,201,67,233,249,182,235,84,109,103,
    195,181,51,168,31,70,2,38,170,33,33,254,17,121,250,187,
    12,110,242,4,179,18,209,24,113,211,99,234,193,16,244,140,
    149,1,20,86,86,28,122,108,224,139,157,21,59,148,201,97,
    29,169,194,206,133,45,30,19,127,76,139,29,234,125,72,236,
    112,201,218,7,206,49,145,11,242,204,0,211,204,0,170,154,
    30,70,53,145,191,32,176,135,104,216,91,12,119,0,184,207,
    51,116,1,160,170,202,135,210,9,86,0,114,80,0,220,141,
    166,235,5,117,123,61,24,65,109,213,49,27,178,90,13,70,
    233,139,215,52,189,192,14,104,174,65,142,190,222,119,109,135,
    187,168,251,129,103,55,131,98,244,116,181,225,90,173,186,12,
    198,168,228,58,151,92,241,60,215,91,193,74,148,145,4,72,
    154,15,54,3,192,213,192,16,43,0,136,19,255,18,37,171,
    91,110,67,82,226,108,182,91,171,155,178,113,225,220,70,123,
    117,189,101,215,173,213,123,95,248,124,245,230,149,181,235,213,
    187,219,110,245,6,65,95,95,109,182,3,106,186,234,111,219,
    155,171,60,157,243,84,50,131,190,168,164,26,194,180,37,235,
    77,233,97,138,254,4,198,49,198,141,89,227,184,145,53,166,
    141,9,195,206,107,108,13,135,178,143,177,245,59,33,182,50,
    161,236,35,132,25,33,246,50,226,49,103,128,146,21,96,11,
    72,202,2,55,52,41,90,249,77,67,236,102,196,79,100,209,
    224,49,165,57,18,85,165,8,83,115,74,84,169,174,134,197,
    99,66,231,16,144,245,209,81,238,106,132,187,202,136,29,74,
    9,143,57,241,152,228,33,53,165,34,74,239,23,132,59,33,
    12,250,98,23,64,211,134,67,20,124,111,39,79,120,206,69,
    120,86,244,137,217,88,182,135,21,46,131,52,87,70,117,169,
    235,159,111,154,193,86,185,168,209,65,203,196,104,189,229,58,
    10,115,27,182,99,105,76,42,90,216,176,235,68,11,101,172,
    33,247,198,205,234,174,25,53,3,58,107,117,215,151,76,79,
    220,119,121,18,13,209,122,163,201,221,96,84,192,195,15,91,
    210,175,129,118,136,166,84,143,128,0,189,13,156,30,202,96,
    213,57,244,119,152,177,63,69,248,207,19,246,87,8,251,42,
    119,52,83,52,38,141,91,54,22,174,54,20,50,109,78,147,
    194,247,133,90,126,67,220,207,48,167,237,48,143,83,107,66,
    18,115,218,14,243,49,106,207,10,35,200,132,229,196,202,132,
    75,148,206,208,51,76,32,68,41,212,246,109,48,38,163,14,
    24,31,18,68,130,10,189,68,54,138,30,24,201,67,120,2,
    93,101,48,68,78,52,23,169,243,17,96,126,71,132,36,178,
    155,37,18,32,136,136,73,137,235,169,120,129,198,253,58,211,
    86,200,249,140,241,96,203,246,221,109,197,187,200,179,240,90,
    163,53,186,211,190,189,126,95,214,2,127,153,10,62,116,91,
    165,154,233,56,110,80,50,45,171,100,6,196,219,235,173,64,
    250,165,192,45,157,246,87,128,181,242,97,77,52,81,127,237,
    166,44,115,70,81,138,101,215,2,146,26,179,252,133,185,208,
    151,1,225,124,203,181,124,42,199,163,155,50,40,79,105,41,
    228,50,0,76,18,85,52,197,176,212,14,140,122,81,67,160,
    100,72,94,83,137,47,235,27,44,150,106,117,211,247,171,128,
    128,203,153,182,48,235,135,102,189,37,185,119,159,250,35,128,
    144,85,48,12,94,218,44,1,114,61,81,134,222,113,29,171,
    77,192,216,181,183,48,206,18,83,93,145,164,77,209,88,160,
    191,130,49,111,12,19,237,13,27,139,153,90,46,164,180,72,
    77,44,96,150,130,81,108,132,88,38,202,219,37,25,177,146,
    97,22,231,9,128,82,203,175,34,135,135,203,167,144,156,70,
    242,50,146,51,122,142,3,157,104,177,123,162,151,209,121,134,
    103,87,203,134,243,136,184,166,218,193,53,19,9,174,217,5,
    245,239,176,246,179,179,9,202,207,98,174,238,152,230,21,230,
    44,66,39,113,22,26,51,143,144,82,76,82,56,6,189,85,
    62,4,48,78,80,114,230,180,127,166,164,232,169,180,101,250,
    37,199,141,137,184,132,74,37,155,64,194,229,163,88,230,4,
    145,110,38,136,180,92,66,11,80,104,249,37,36,185,253,214,
    249,149,148,215,121,83,173,243,53,116,62,30,82,209,4,83,
    207,152,81,3,9,96,241,135,245,138,175,81,166,189,136,21,
    79,46,245,34,41,171,15,156,163,164,127,120,185,161,130,138,
    74,5,177,30,83,118,178,22,78,246,144,206,228,177,232,27,
    89,177,16,106,22,31,162,191,233,185,143,218,37,119,163,20,
    8,13,210,219,167,253,243,167,253,47,145,124,40,189,19,47,
    111,40,11,60,217,4,47,43,222,198,34,4,182,67,223,209,
    213,149,71,53,201,194,159,191,85,171,138,149,149,181,81,13,
    149,10,97,130,151,62,163,151,158,133,25,153,28,144,97,131,
    95,247,209,104,221,1,247,29,244,60,202,139,158,53,22,137,
    121,19,75,142,191,44,150,28,4,244,13,193,102,166,33,126,
    78,96,65,105,217,66,78,101,158,208,124,49,139,230,48,51,
    118,140,158,154,36,19,210,123,38,228,124,98,136,102,145,21,
    68,168,89,200,110,248,102,66,44,68,146,63,27,218,30,73,
    190,200,69,124,193,216,120,38,233,158,235,100,13,172,52,241,
    16,154,49,19,40,11,238,84,167,136,97,67,35,203,18,57,
    24,40,42,70,84,159,85,12,255,97,140,8,200,208,99,198,
    92,70,225,158,201,226,135,144,124,33,226,67,67,151,13,10,
    146,229,110,161,151,144,238,85,37,49,238,97,184,28,3,56,
    57,204,170,230,114,187,86,151,140,109,254,129,74,186,4,252,
    191,75,25,73,174,133,33,36,75,189,143,217,198,68,154,1,
    22,119,51,6,188,100,242,135,217,136,135,19,146,23,228,7,
    219,236,239,134,206,246,168,40,175,177,42,100,106,212,127,44,
    0,32,56,58,164,108,98,157,34,204,42,164,33,121,52,120,
    22,2,222,222,174,155,141,117,203,124,71,162,95,116,94,211,
    44,147,209,128,78,37,1,5,177,27,251,192,202,95,191,164,
    1,126,56,120,211,240,109,133,17,5,40,147,178,229,214,152,
    173,239,110,201,82,67,54,214,201,197,219,178,155,165,141,186,
    185,201,43,158,13,17,122,13,19,185,46,88,89,171,89,124,
    162,92,130,57,158,154,214,109,112,49,57,82,17,176,116,133,
    248,157,82,190,26,115,122,53,19,74,96,96,11,221,223,98,
    220,42,139,24,68,239,200,237,170,34,39,37,88,81,107,54,
    155,210,177,202,175,163,225,27,29,188,201,102,144,233,109,170,
    198,233,224,183,74,238,174,77,38,222,86,204,151,147,36,34,
    231,136,55,247,146,36,224,73,204,141,217,115,42,98,212,83,
    105,0,201,56,117,53,78,149,213,202,194,13,198,24,219,149,
    138,159,73,153,145,87,24,180,149,156,188,128,100,21,201,165,
    104,253,193,79,150,36,231,70,134,40,8,166,68,100,48,144,
    255,18,120,110,155,84,214,48,23,82,195,106,53,158,204,64,
    103,244,69,181,138,106,185,243,198,17,35,159,41,228,11,241,
    114,71,140,85,140,233,81,25,80,225,186,103,58,104,202,115,
    27,55,237,154,231,222,185,28,75,240,86,179,54,120,184,97,
    184,60,20,177,145,248,2,240,162,133,227,122,13,179,158,4,
    185,252,149,84,214,25,236,252,81,127,240,194,38,178,253,114,
    231,10,167,4,238,143,82,55,63,21,131,27,192,223,190,24,
    184,164,153,110,55,175,182,156,90,224,122,123,117,208,77,241,
    12,58,40,212,62,185,48,32,27,170,158,97,33,217,253,36,
    29,100,229,185,100,12,202,8,244,223,143,50,98,1,159,142,
    24,248,186,24,160,14,42,255,72,250,112,150,223,17,161,89,
    249,36,253,3,144,110,235,73,4,140,192,132,245,199,198,167,
    15,231,240,150,91,170,185,14,201,169,22,104,161,100,201,13,
    219,145,86,233,92,137,173,237,146,237,151,204,117,170,53,107,
    129,66,68,151,161,119,81,132,10,231,193,54,116,202,224,167,
    142,110,62,78,240,91,100,91,39,145,20,241,155,178,138,247,
    178,220,210,94,178,175,146,67,97,214,33,144,99,223,1,143,
    53,211,82,137,106,180,111,246,144,29,63,112,85,248,11,154,
    182,86,32,155,98,85,88,134,251,174,148,31,171,188,88,3,
    222,142,150,22,193,136,80,3,118,173,112,249,10,26,93,237,
    128,122,160,160,255,24,117,243,51,34,244,50,73,231,101,10,
    25,210,122,153,23,211,122,104,65,206,244,21,116,254,213,150,
    108,73,165,248,32,20,109,199,146,131,183,132,203,95,165,110,
    190,149,32,7,145,0,250,218,30,160,63,17,251,0,93,107,
    121,93,64,51,87,14,30,94,4,15,126,53,134,87,249,232,
    168,188,100,250,114,175,22,249,35,241,204,158,140,204,99,91,
    164,50,194,25,86,30,200,140,97,43,14,153,34,118,224,144,
    153,20,149,41,206,76,139,202,12,103,102,121,163,45,207,219,
    107,11,156,89,228,61,180,60,239,152,29,230,204,17,222,8,
    203,243,70,216,113,206,44,99,219,43,84,96,39,184,228,36,
    111,114,13,133,155,92,3,112,159,82,212,88,191,33,62,27,
    26,43,130,243,233,26,43,19,18,14,79,226,106,68,246,187,
    28,46,233,112,151,140,39,184,75,198,83,221,37,54,21,201,
    93,138,200,86,45,201,151,145,196,190,82,164,16,210,113,145,
    88,150,126,79,68,174,209,248,129,115,141,254,64,99,110,133,
    3,153,189,244,65,172,10,120,97,231,147,178,160,122,147,220,
    191,70,171,81,189,227,217,28,217,75,126,63,220,209,242,93,
    185,222,218,172,94,113,204,245,186,228,106,76,111,79,225,161,
    30,207,92,242,164,249,128,107,39,163,71,226,178,165,142,39,
    46,223,121,175,186,182,109,7,181,45,174,132,131,215,85,180,
    220,53,66,221,108,75,171,250,1,213,200,117,179,166,250,156,
    231,113,246,171,73,62,189,97,182,234,65,52,251,228,247,174,
    153,188,127,117,173,250,94,211,50,3,25,207,164,171,108,177,
    227,137,53,233,217,102,221,254,72,213,129,156,59,75,22,246,
    204,251,174,29,2,57,30,206,58,42,232,92,163,181,192,12,
    20,95,68,107,212,85,116,180,163,253,29,207,221,244,164,239,
    39,26,96,83,181,71,113,39,76,107,118,163,122,229,145,29,
    68,48,117,20,116,209,145,249,168,147,142,226,239,204,68,76,
    45,161,241,17,179,116,218,102,199,93,234,230,215,209,31,24,
    144,93,109,163,176,223,47,59,225,108,68,48,124,123,181,228,
    239,137,231,247,181,246,198,251,34,95,43,60,72,51,142,243,
    8,225,17,150,130,62,194,50,170,143,176,168,99,46,83,250,
    152,203,180,62,230,50,163,143,185,204,226,104,11,50,115,225,
    209,150,202,188,62,177,178,0,229,8,68,31,80,229,248,39,
    226,179,161,28,35,56,15,156,59,87,190,145,202,164,209,205,
    159,138,3,232,252,252,89,68,49,47,24,43,83,146,142,207,
    169,164,8,42,182,84,254,162,199,250,61,7,176,211,17,176,
    137,147,21,105,194,12,221,245,87,253,193,28,47,176,213,106,
    52,83,4,150,227,226,24,227,175,251,3,184,24,1,220,244,
    220,26,105,194,52,97,70,92,45,28,230,111,250,3,123,50,
    2,219,175,109,73,108,173,90,105,2,206,39,173,244,64,127,
    215,31,232,227,49,232,95,107,153,254,86,154,112,243,129,17,
    30,229,239,251,3,122,162,11,232,116,151,123,36,2,91,90,
    255,48,40,33,98,251,48,219,56,159,38,236,48,252,18,67,
    253,99,127,224,207,36,192,191,216,10,220,119,217,122,76,19,
    126,21,238,143,199,250,167,254,38,16,11,196,237,45,153,166,
    244,102,129,136,49,254,121,80,148,222,244,108,151,44,249,118,
    218,148,174,199,249,151,65,81,250,102,221,93,55,235,159,10,
    165,39,134,250,215,24,252,21,104,210,103,137,203,70,2,49,
    233,21,197,30,145,58,152,193,157,181,144,108,35,105,35,249,
    73,36,143,145,252,52,18,132,85,203,187,72,126,22,201,55,
    58,230,59,80,27,225,107,212,205,31,163,191,147,34,10,226,
    42,207,41,219,235,55,166,127,142,119,238,117,168,254,83,60,
    255,1,138,228,230,21,92,41,131,157,171,97,237,92,141,104,
    231,170,160,157,171,81,237,92,141,105,231,106,92,59,87,69,
    237,92,77,104,231,106,82,59,87,83,218,185,154,214,206,213,
    140,118,174,102,67,231,202,154,11,239,5,168,19,254,8,101,
    30,18,246,97,156,238,15,15,229,31,213,103,241,143,225,8,
    62,50,199,225,146,129,24,14,168,75,246,239,226,179,225,146,
    69,112,62,217,37,3,40,250,132,7,79,162,227,132,71,120,
    14,127,112,39,60,32,62,163,144,37,211,124,207,152,101,124,
    190,3,29,56,41,70,46,255,67,244,62,212,161,215,229,154,
    70,108,114,87,238,147,39,218,156,60,45,229,65,197,177,215,
    116,54,49,32,0,255,75,196,122,65,31,72,141,176,185,208,
    5,121,120,138,58,215,3,254,249,78,248,61,169,45,218,248,
    36,40,135,126,120,112,150,166,234,108,78,125,219,108,167,116,
    56,49,134,225,191,69,95,202,111,182,11,55,242,81,128,192,
    97,218,170,91,143,243,63,9,232,181,196,120,190,45,223,46,
    228,248,50,184,220,242,120,10,17,137,49,54,136,183,222,55,
    235,233,96,35,30,244,127,251,195,70,215,100,54,227,201,164,
    136,15,204,32,30,9,32,15,194,238,142,102,240,21,105,166,
    234,243,12,43,240,49,76,182,63,216,247,144,146,247,208,174,
    201,219,78,170,110,131,162,31,61,82,222,232,151,31,150,122,
    78,130,75,252,132,212,221,77,101,50,197,120,50,106,196,66,
    127,24,153,234,156,140,108,52,211,245,42,88,138,99,144,241,
    254,224,238,210,120,41,135,180,216,198,159,236,15,226,133,46,
    136,177,207,246,190,244,236,141,84,215,91,221,254,138,134,154,
    233,111,14,165,206,57,108,153,142,85,151,23,253,182,83,187,
    238,16,85,34,10,154,106,148,14,242,163,231,160,243,93,243,
    122,126,19,106,186,115,106,219,230,3,217,106,166,109,68,177,
    222,84,67,45,245,45,151,186,8,204,147,205,186,89,147,172,
    28,98,69,141,135,82,176,152,64,102,137,1,143,12,148,185,
    235,110,186,234,25,54,38,198,56,222,31,212,93,20,212,114,
    210,134,27,196,163,70,57,209,55,241,44,119,2,79,166,111,
    237,65,19,55,143,203,177,45,30,51,195,47,166,50,31,92,
    27,237,53,240,169,30,120,249,129,111,118,157,49,180,47,158,
    188,121,196,32,205,118,45,184,186,65,244,84,207,32,90,231,
    120,23,17,235,156,146,33,193,129,236,112,196,87,250,38,159,
    46,195,206,250,244,136,6,214,93,60,220,217,120,38,43,32,
    233,167,156,184,1,12,236,200,178,93,114,213,172,251,178,252,
    75,40,251,101,36,191,130,4,231,10,203,223,70,130,19,123,
    229,95,67,130,243,88,42,236,247,29,36,223,69,242,155,72,
    126,11,201,111,35,249,93,36,223,235,144,13,201,64,162,10,
    63,196,209,196,223,71,242,253,142,5,26,40,197,254,60,117,
    243,111,232,15,113,142,240,82,195,112,33,59,222,51,50,24,
    253,102,84,244,48,10,13,70,76,55,26,209,196,238,126,135,
    41,97,145,221,52,109,71,29,166,76,103,86,56,93,245,102,
    140,113,214,66,119,184,225,62,103,68,112,149,242,89,79,82,
    102,194,195,148,72,71,64,245,136,100,230,194,72,102,116,170,
    50,12,120,22,245,193,145,9,29,237,156,212,209,206,41,4,
    21,177,75,119,64,131,138,159,143,4,153,102,253,72,231,29,
    168,160,98,4,231,147,131,138,90,18,71,97,168,27,17,173,
    134,162,152,111,63,119,196,21,179,79,136,43,102,159,26,87,
    132,181,130,184,98,130,242,122,6,22,227,80,22,95,233,95,
    191,175,118,4,210,139,47,126,209,136,226,139,51,7,238,100,
    228,197,136,236,94,48,6,146,88,238,170,237,212,60,185,145,
    182,173,165,70,185,220,127,248,38,9,186,37,63,13,208,213,
    40,87,251,3,125,182,11,244,244,143,101,240,182,218,245,132,
    78,135,30,125,150,83,180,11,93,160,170,23,21,32,88,182,
    95,149,47,131,242,9,17,218,4,140,165,80,95,39,217,58,
    86,216,56,117,86,198,41,44,6,49,37,253,246,135,212,205,
    5,204,30,224,168,243,145,243,124,14,82,237,233,241,84,174,
    241,54,231,154,221,184,225,186,205,104,111,127,175,234,195,205,
    238,23,222,205,35,229,6,181,102,240,205,130,130,176,71,121,
    19,111,36,220,196,59,216,250,237,246,103,68,191,221,126,54,
    253,246,2,124,187,188,47,153,112,252,219,108,249,169,198,95,
    225,105,232,113,202,253,73,160,227,79,158,137,107,165,58,145,
    48,14,142,97,222,139,231,161,222,64,166,95,100,20,153,29,
    101,209,105,118,196,239,152,26,234,52,62,134,158,96,124,12,
    61,213,248,0,141,194,248,232,189,42,61,237,144,188,94,161,
    120,35,173,90,3,114,56,56,84,83,87,172,61,217,148,102,
    144,162,113,114,47,54,78,150,14,156,113,82,213,188,184,194,
    239,214,122,178,194,249,75,36,56,156,153,184,205,126,76,68,
    250,99,31,204,164,125,182,254,207,177,98,152,6,182,189,67,
    143,143,116,198,56,174,178,139,4,231,61,227,253,56,14,23,
    216,141,86,221,12,82,189,26,135,195,151,86,223,225,8,56,
    130,146,150,58,92,117,174,97,186,110,144,189,98,18,15,23,
    194,6,213,26,100,198,192,103,241,183,212,205,86,194,108,225,
    23,191,33,31,191,179,48,81,150,143,202,64,84,234,29,47,
    109,22,32,130,175,185,132,175,80,224,129,170,201,215,32,242,
    203,214,98,252,68,47,89,0,149,242,20,111,153,13,245,62,
    47,174,15,95,10,228,43,89,192,175,151,195,73,247,242,107,
    72,206,69,68,253,195,34,12,232,52,46,156,183,157,64,122,
    142,89,63,239,235,203,49,252,142,185,198,5,101,43,225,93,
    9,108,22,170,87,54,48,160,158,220,180,125,122,138,195,170,
    181,135,166,199,11,127,211,124,132,189,79,126,75,1,95,253,
    231,11,245,124,241,148,175,195,116,223,41,238,232,9,228,25,
    94,241,47,187,141,75,118,160,187,188,104,89,30,251,95,215,
    157,135,4,157,117,119,203,147,166,117,253,93,222,214,10,203,
    46,187,52,135,71,1,21,22,227,194,59,180,36,84,2,187,
    234,146,189,121,197,177,108,211,185,212,14,228,109,207,162,241,
    48,249,27,52,74,93,118,213,240,77,83,190,190,201,119,87,
    186,46,228,116,192,140,5,215,171,167,14,233,70,43,200,119,
    117,194,111,184,153,197,39,183,18,231,41,147,253,112,228,38,
    190,186,20,70,10,147,13,16,4,97,75,145,55,38,147,150,
    109,71,51,200,131,0,151,20,246,209,159,29,141,193,133,76,
    196,233,8,39,245,234,26,245,222,169,119,248,53,83,36,115,
    196,20,94,215,54,82,48,134,241,127,146,254,103,198,141,108,
    38,107,140,26,19,198,16,253,159,162,255,211,153,241,169,66,
    174,80,160,118,99,227,198,194,120,129,106,201,28,70,168,74,
    255,26,11,99,97,169,190,56,100,36,234,14,81,93,230,228,
    89,164,11,87,40,229,32,215,194,2,127,159,9,191,211,239,
    255,3,229,225,170,96,
};

EmbeddedPython embedded_m5_internal_event(
    "m5/internal/event.py",
    "/home/hongyu/gem5-fy/build/X86_MESI_Two_Level/python/swig/event.py",
    "m5.internal.event",
    data_m5_internal_event,
    4886,
    22432);

} // anonymous namespace
