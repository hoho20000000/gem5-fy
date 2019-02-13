#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_DRAMCtrl[] = {
    120,156,205,90,89,115,27,199,122,29,16,32,184,128,59,69,
    136,139,36,143,55,9,178,45,16,24,16,32,105,203,146,72,
    144,178,116,77,202,188,67,74,148,145,5,25,98,134,196,68,
    88,24,204,80,18,111,42,85,183,202,121,74,165,146,220,74,
    42,149,164,146,170,60,164,42,203,83,30,242,144,135,252,158,
    60,229,61,79,169,228,251,206,116,247,12,192,197,114,104,87,
    98,88,141,233,211,11,186,167,207,57,253,77,15,107,154,248,
    175,159,254,61,210,53,205,219,138,105,154,77,255,199,180,87,
    154,182,39,174,98,116,213,167,57,125,218,97,76,179,227,218,
    239,107,218,119,154,246,109,37,174,217,9,137,246,43,52,161,
    217,73,137,14,40,180,95,179,7,53,39,6,116,72,161,73,
    205,30,214,156,36,208,148,66,7,52,123,68,115,6,128,142,
    42,116,80,179,199,36,58,174,208,33,205,158,144,61,76,42,
    116,88,179,167,36,58,173,208,148,102,95,147,232,140,66,71,
    52,59,45,209,235,10,29,213,236,89,137,206,41,116,76,179,
    231,37,186,160,208,113,205,190,161,57,227,64,111,42,116,66,
    179,111,105,187,153,247,232,206,186,255,77,255,101,232,206,106,
    62,39,159,248,131,148,110,59,205,221,90,221,177,107,114,13,
    250,232,223,58,175,193,53,186,112,52,173,18,19,43,113,212,
    167,85,250,52,115,55,195,53,252,4,37,135,181,67,207,79,
    242,69,135,47,51,113,46,224,78,171,213,150,213,116,170,85,
    127,24,153,102,219,62,105,112,150,27,189,182,26,94,134,127,
    40,76,144,95,172,183,155,14,37,173,163,211,147,197,35,167,
    89,188,119,120,186,232,117,106,139,77,167,185,184,97,174,109,
    151,253,78,35,123,124,106,242,216,151,184,21,143,35,169,249,
    3,244,181,102,219,157,109,235,88,77,34,46,39,113,189,103,
    18,68,160,163,184,152,7,134,203,35,52,219,166,181,110,149,
    235,229,118,52,219,46,215,69,182,44,202,209,194,228,73,152,
    204,84,51,217,53,139,255,197,84,120,232,247,35,83,225,159,
    219,177,142,156,109,171,69,169,154,77,66,206,102,254,236,108,
    72,8,71,9,49,161,132,92,152,246,177,211,242,71,197,69,
    213,178,173,99,223,125,237,248,60,232,90,163,237,57,254,152,
    188,82,133,63,250,220,82,172,101,110,149,192,220,134,98,96,
    134,172,113,118,165,126,149,136,204,141,230,67,211,35,105,59,
    9,158,228,119,116,221,207,140,119,7,120,194,164,247,239,136,
    140,131,18,233,103,173,51,50,4,100,152,21,79,58,103,36,
    37,145,33,214,56,35,35,178,85,138,245,205,200,40,144,49,
    86,57,105,155,145,113,32,19,172,112,210,53,35,147,64,166,
    88,221,164,105,70,166,35,253,76,3,129,170,221,25,150,55,
    15,24,114,118,175,179,200,73,218,92,97,54,130,92,7,50,
    39,59,153,69,147,121,153,157,67,118,65,118,56,143,236,13,
    89,186,128,236,77,153,189,129,236,45,153,189,201,138,231,206,
    223,147,200,123,168,160,203,172,174,217,239,163,194,251,64,62,
    208,156,15,53,251,3,32,31,201,17,126,136,38,31,203,236,
    71,200,222,150,217,143,145,189,35,179,183,145,205,200,236,29,
    100,239,202,108,6,217,79,100,246,46,178,159,202,236,39,200,
    126,38,179,159,106,246,103,24,201,61,137,220,67,133,172,204,
    102,145,93,148,217,69,100,115,50,155,67,54,47,179,121,100,
    13,153,53,144,45,68,126,171,128,223,90,146,200,18,42,20,
    229,141,42,34,91,138,212,47,161,254,114,4,89,6,178,18,
    65,86,128,172,70,144,85,32,159,3,249,66,179,63,215,236,
    47,128,220,143,32,247,129,124,25,65,190,4,242,32,130,60,
    0,242,48,130,60,4,242,40,130,60,2,178,22,65,214,128,
    172,71,144,117,32,229,8,82,6,178,17,65,54,128,108,70,
    144,77,32,143,35,200,99,32,95,69,144,175,128,60,137,32,
    79,128,60,141,32,79,129,252,44,130,252,12,200,215,17,228,
    107,32,91,17,100,11,200,118,4,217,6,242,44,130,60,3,
    242,77,4,249,6,200,78,4,217,1,242,115,32,166,102,255,
    92,179,77,32,187,17,100,23,200,30,91,234,30,123,225,4,
    219,24,39,236,113,118,199,106,86,107,108,114,245,186,199,134,
    189,219,176,94,59,250,113,187,227,187,240,187,155,148,60,59,
    105,30,56,29,189,125,168,191,233,184,190,163,255,206,137,115,
    226,232,100,202,29,215,241,92,157,171,221,232,170,214,113,44,
    187,167,214,115,174,53,71,201,94,189,227,120,245,118,195,214,
    253,182,126,216,238,212,156,160,87,207,53,206,173,226,249,86,
    199,151,85,48,246,44,111,244,110,203,109,158,52,197,128,14,
    78,58,158,239,233,7,14,245,231,232,222,27,215,175,213,221,
    214,17,55,231,161,120,38,251,178,55,27,4,8,237,206,169,
    238,113,144,112,210,224,58,199,237,134,91,59,53,135,184,70,
    90,108,190,142,231,233,77,235,248,56,82,62,42,203,121,71,
    163,66,222,210,154,52,57,81,238,125,200,157,91,111,117,171,
    86,163,214,142,167,31,211,173,232,180,223,200,65,241,254,68,
    221,121,147,124,143,221,95,56,124,155,120,251,208,105,164,199,
    216,230,242,185,150,135,29,126,215,183,124,183,166,31,118,218,
    45,223,105,217,122,195,162,47,250,137,116,88,118,96,213,94,
    69,139,114,84,100,91,190,69,119,194,211,223,184,182,95,215,
    221,150,126,224,210,77,161,95,215,29,171,86,15,126,205,118,
    94,187,53,103,145,127,20,251,239,58,223,57,189,225,180,142,
    234,190,158,89,223,186,139,118,142,229,123,222,109,57,217,12,
    166,113,114,120,232,116,238,234,30,143,157,231,22,237,73,239,
    90,253,160,196,19,69,184,15,86,235,149,183,208,77,17,134,
    80,88,171,91,173,150,211,112,177,41,223,234,170,116,64,149,
    244,163,78,251,36,218,207,236,153,42,97,161,203,225,148,55,
    213,85,67,244,239,121,211,98,199,214,235,150,167,111,108,109,
    233,116,103,90,109,223,27,33,188,220,104,215,94,113,55,110,
    219,134,56,204,181,93,166,79,153,190,108,167,97,157,122,28,
    1,112,78,222,242,41,4,83,111,244,227,142,67,191,208,161,
    251,228,187,77,7,109,215,202,123,220,118,199,220,20,109,249,
    151,247,193,84,170,220,126,237,16,3,81,153,201,96,178,86,
    168,182,234,7,139,25,172,139,125,210,161,229,110,183,244,12,
    175,226,198,134,25,48,29,235,69,75,188,168,27,122,237,180,
    214,112,188,187,62,51,156,9,196,75,177,75,225,106,228,222,
    97,18,93,115,193,216,157,67,86,89,208,65,48,156,217,40,
    220,110,18,201,109,162,131,239,116,56,202,189,163,230,32,84,
    245,153,238,241,239,240,109,143,74,142,59,186,19,153,23,20,
    122,73,93,166,133,201,56,119,123,78,121,228,134,242,87,48,
    129,243,102,121,166,18,223,245,151,36,72,10,8,131,187,248,
    198,109,217,237,55,222,251,66,170,45,69,17,81,135,84,235,
    170,90,28,84,238,180,223,56,157,123,212,247,6,58,188,117,
    6,162,202,180,14,204,29,199,102,74,193,190,118,157,198,225,
    189,142,184,143,206,91,215,87,156,185,121,89,41,183,15,150,
    177,185,134,165,88,227,81,57,17,130,213,78,58,29,178,28,
    116,115,81,161,254,98,99,195,64,243,29,85,132,49,211,156,
    90,186,215,160,153,221,188,164,240,242,230,135,150,231,95,216,
    156,11,131,230,115,93,53,200,178,90,246,193,169,26,253,173,
    203,74,131,14,102,194,9,246,140,125,254,162,146,75,26,98,
    212,231,54,12,135,156,14,139,123,199,187,112,97,81,208,148,
    237,195,220,92,219,80,13,38,123,128,160,26,111,32,251,230,
    211,189,77,85,111,170,23,9,42,142,71,85,40,170,94,59,
    139,5,149,175,245,50,170,44,90,156,33,98,57,210,204,231,
    39,180,220,11,140,96,219,34,206,191,104,55,124,182,122,18,
    226,81,96,75,6,105,191,11,205,60,239,122,164,194,150,229,
    159,30,59,120,204,171,189,125,91,173,147,224,157,142,63,36,
    131,136,29,138,33,80,139,131,9,60,173,237,88,20,109,224,
    193,233,121,203,115,143,90,142,237,243,79,193,33,170,193,6,
    83,229,253,197,103,205,179,197,116,129,252,120,185,227,80,188,
    208,242,253,180,106,86,119,143,234,85,31,1,67,149,236,187,
    230,207,168,34,98,197,153,146,166,219,170,6,177,4,99,213,
    192,107,240,16,238,139,144,168,138,216,160,42,182,125,254,81,
    159,87,216,162,176,160,42,98,2,60,13,250,156,28,211,237,
    17,85,125,94,138,166,245,182,42,35,0,252,0,109,157,184,
    65,65,220,193,27,63,218,5,91,100,56,175,173,192,2,124,
    222,254,61,108,241,85,185,253,87,133,61,96,206,162,76,108,
    255,170,104,34,236,146,2,128,42,2,0,140,26,219,69,53,
    216,46,48,127,81,139,134,213,123,191,197,174,29,140,154,92,
    21,75,131,13,23,144,216,69,49,75,54,221,106,176,45,135,
    213,199,68,65,4,226,149,150,187,47,152,176,222,38,70,241,
    197,94,231,196,129,215,217,141,6,190,253,242,215,1,163,204,
    242,134,0,2,51,244,205,29,81,176,182,27,0,251,166,0,
    246,118,112,92,227,175,63,55,119,247,130,203,114,121,163,186,
    37,138,31,151,65,58,223,220,124,252,52,128,246,247,84,211,
    125,241,35,187,2,48,55,130,14,232,66,118,240,114,109,31,
    55,38,220,64,170,13,183,233,250,65,203,151,226,199,95,238,
    72,219,246,95,238,10,104,151,33,94,86,161,57,244,247,116,
    99,35,135,1,241,133,129,154,116,101,236,228,80,51,184,140,
    192,249,16,206,27,178,157,241,76,85,120,166,234,22,194,46,
    10,145,46,10,97,23,133,72,23,5,213,69,225,153,2,151,
    76,9,46,153,33,184,175,192,125,67,78,161,40,75,139,10,
    42,73,168,100,224,7,133,107,224,158,144,217,160,26,155,206,
    149,206,95,120,33,190,226,86,127,72,73,50,70,159,196,72,
    114,42,54,149,160,79,156,254,197,232,67,223,227,140,197,199,
    251,198,99,248,215,63,21,27,231,242,212,120,98,60,174,62,
    41,170,21,23,72,146,83,106,23,212,227,207,164,248,126,199,
    15,14,166,40,50,43,84,243,165,92,174,250,182,180,164,14,
    131,216,85,112,24,244,111,218,121,135,65,156,226,60,136,207,
    113,233,58,201,135,65,124,78,27,227,195,32,59,193,7,64,
    118,191,198,231,174,73,62,250,225,116,4,233,40,31,9,241,
    185,233,32,31,238,216,67,26,159,139,14,243,177,142,157,210,
    42,83,124,18,84,153,230,3,160,202,53,164,51,124,18,84,
    73,35,189,206,199,64,149,89,62,9,170,204,241,1,80,101,
    158,207,128,42,11,124,238,83,185,193,199,61,149,155,124,166,
    83,185,197,7,61,149,247,248,185,145,109,9,171,92,204,27,
    219,235,46,235,26,203,155,127,181,238,242,86,226,49,81,242,
    89,163,216,242,128,211,183,199,84,200,23,178,203,140,49,5,
    10,178,176,36,1,10,87,221,132,236,217,40,229,4,158,231,
    214,12,45,103,229,149,145,13,177,149,147,160,218,114,177,185,
    134,139,98,78,94,44,211,5,87,202,151,138,242,106,69,98,
    134,193,97,21,250,207,22,95,100,104,89,162,231,131,252,172,
    99,126,194,201,167,156,124,198,201,61,78,248,89,211,228,128,
    220,44,114,194,199,155,102,137,147,101,78,86,56,89,229,164,
    204,201,38,39,143,57,121,192,201,231,156,60,226,228,11,78,
    214,56,89,231,228,33,39,91,156,152,156,188,228,228,215,57,
    169,112,242,155,156,212,180,43,30,88,18,223,180,7,196,64,
    143,135,156,236,75,198,207,124,98,93,159,190,139,202,176,143,
    60,217,46,87,141,34,243,187,96,156,229,247,63,157,207,239,
    62,240,59,14,126,39,192,239,126,240,59,9,126,15,128,223,
    131,224,247,16,248,61,12,126,167,192,239,145,8,191,71,193,
    239,49,240,123,28,252,158,0,191,7,192,239,73,240,123,10,
    252,158,6,191,113,54,201,99,152,67,58,15,78,47,32,189,
    193,108,158,145,244,93,33,46,51,17,2,66,51,27,140,98,
    105,29,207,144,32,102,192,109,38,72,46,187,34,8,88,200,
    26,116,5,190,231,112,201,224,106,118,85,241,115,89,20,27,
    249,44,49,29,79,181,1,59,87,5,255,101,79,75,170,81,
    33,187,122,226,153,136,251,134,229,216,150,90,94,230,230,79,
    65,210,30,126,126,209,205,74,62,198,48,63,224,4,10,193,
    195,25,159,237,152,119,57,201,92,149,149,62,85,254,51,102,
    37,15,175,139,113,253,93,204,235,79,38,196,117,66,148,49,
    198,185,88,104,184,70,190,80,56,223,112,15,46,35,100,96,
    184,125,17,195,77,128,144,253,32,100,18,132,28,0,33,7,
    65,200,33,16,114,24,132,76,129,144,35,76,72,34,18,206,
    132,6,64,143,213,194,138,240,60,182,60,35,244,191,220,170,
    180,187,66,203,51,235,33,209,4,188,44,221,171,176,44,46,
    150,150,164,121,133,134,182,154,151,54,86,236,178,177,201,110,
    134,188,171,71,253,196,222,243,11,170,252,239,49,113,154,35,
    156,37,116,148,110,119,17,171,185,84,53,150,46,218,62,255,
    227,252,213,188,104,251,252,161,171,153,130,189,164,96,47,35,
    176,151,81,216,203,24,236,101,28,246,146,128,189,76,192,94,
    38,97,47,195,176,151,41,216,203,244,101,219,167,125,157,95,
    86,216,179,252,130,194,158,211,42,31,240,11,144,202,135,252,
    222,163,242,17,191,238,168,124,204,111,57,42,183,249,69,71,
    229,14,243,138,95,111,154,135,210,152,204,35,105,69,129,41,
    113,40,228,254,146,147,71,33,255,86,152,94,130,127,5,69,
    181,128,132,75,217,188,218,115,13,101,57,133,168,13,5,156,
    204,211,5,10,139,180,23,155,77,77,152,95,176,15,163,171,
    108,169,84,58,179,19,151,152,176,240,172,230,154,217,150,12,
    47,45,11,180,160,246,226,156,218,159,213,213,170,161,232,108,
    188,192,133,193,188,206,116,243,250,114,231,91,212,164,253,133,
    118,21,42,225,203,75,229,176,161,52,241,131,246,237,237,110,
    1,125,123,129,138,76,251,170,82,250,142,133,208,199,127,67,
    160,245,108,227,9,152,36,203,137,255,139,43,113,197,169,214,
    165,27,186,16,30,63,251,111,237,144,244,140,234,238,82,53,
    159,43,149,206,223,220,67,245,57,125,208,157,6,221,197,46,
    112,209,32,108,237,131,238,250,207,132,173,73,232,110,0,186,
    75,66,119,131,208,221,32,116,55,4,221,13,67,119,131,208,
    93,10,186,75,65,119,35,208,221,40,116,55,6,221,141,67,
    119,19,208,221,36,116,55,5,221,77,67,119,83,208,221,53,
    232,110,6,186,75,67,119,215,161,187,89,232,110,14,186,155,
    103,221,177,30,51,172,190,27,74,125,122,183,4,99,74,81,
    217,149,229,146,80,72,96,217,70,52,100,13,152,205,225,109,
    184,187,35,36,8,162,97,25,60,200,120,183,168,226,224,32,
    250,37,17,253,158,38,162,0,67,110,14,236,250,34,18,22,
    80,62,212,16,93,153,127,192,195,244,212,128,84,97,100,191,
    88,121,161,148,150,185,219,37,48,84,125,108,53,60,199,92,
    250,126,189,133,145,198,121,178,10,163,138,251,74,81,15,149,
    162,66,49,245,68,204,61,178,218,61,71,91,191,161,4,246,
    107,74,101,213,31,79,106,127,68,149,173,51,82,75,244,68,
    205,125,144,86,32,184,168,188,206,145,152,146,26,71,118,251,
    174,237,60,253,166,106,240,38,151,55,86,206,234,236,47,126,
    42,157,13,66,103,67,208,217,16,116,54,12,157,165,34,58,
    27,129,206,70,160,179,81,232,108,12,58,27,103,157,145,38,
    120,207,241,3,222,26,75,20,53,255,82,19,187,81,224,251,
    175,130,160,57,12,111,242,20,13,153,127,204,144,210,136,145,
    19,202,48,242,93,202,48,57,134,137,104,194,252,149,38,182,
    187,204,66,23,73,205,191,228,228,255,136,159,87,98,214,95,
    81,229,127,101,102,229,46,98,86,248,20,214,203,183,128,61,
    48,106,121,196,240,19,186,244,0,216,51,24,97,79,112,184,
    144,4,123,134,193,158,20,216,51,2,246,12,129,61,163,96,
    207,40,216,51,6,246,140,131,61,19,112,233,73,184,244,20,
    92,122,26,46,125,13,46,61,3,151,78,195,165,103,224,210,
    215,225,210,51,112,233,89,184,244,28,92,122,30,46,189,0,
    151,190,33,92,26,207,70,61,46,253,215,154,116,233,240,60,
    194,252,27,201,66,240,49,116,105,144,213,252,19,137,5,46,
    29,30,54,244,18,82,145,125,69,248,111,73,90,50,5,95,
    2,50,74,100,196,127,42,9,95,224,112,232,207,53,121,190,
    81,144,129,190,65,213,77,86,251,247,218,242,149,24,223,67,
    246,149,31,202,248,255,7,142,252,183,84,249,191,46,8,126,
    2,47,14,252,56,142,32,232,135,56,50,31,86,127,69,146,
    42,86,233,169,227,130,199,142,208,144,127,180,83,141,84,239,
    67,36,139,102,18,233,20,164,51,13,233,92,131,116,84,248,
    51,9,97,13,65,88,67,44,44,162,255,148,228,21,237,37,
    209,83,12,243,181,38,31,22,194,99,140,9,201,221,188,56,
    130,48,196,119,65,30,185,25,242,17,128,125,251,183,37,131,
    141,66,244,0,163,36,69,147,153,239,102,233,187,70,231,63,
    114,76,126,37,106,253,61,85,126,30,239,181,228,240,51,72,
    132,146,244,234,167,15,27,179,164,90,28,175,5,158,172,111,
    83,212,76,228,89,122,114,193,142,254,119,239,74,160,4,8,
    212,15,2,37,65,160,1,16,104,48,242,220,58,8,2,13,
    129,64,195,145,231,214,145,11,8,52,12,2,77,128,64,195,
    145,231,214,88,239,115,43,145,137,223,233,132,91,186,249,15,
    146,46,134,216,215,193,44,16,193,228,163,190,192,77,127,151,
    147,83,69,195,82,247,166,206,174,27,241,90,156,83,224,175,
    14,94,113,242,54,108,70,132,11,34,238,144,79,33,149,110,
    159,195,167,156,34,85,81,113,167,199,245,122,108,46,52,193,
    71,146,59,231,26,30,191,95,48,159,94,149,89,255,76,149,
    255,145,153,197,190,77,60,138,131,57,129,105,13,32,141,169,
    131,45,153,75,68,76,43,142,13,191,139,93,231,185,211,131,
    119,37,215,5,238,68,203,206,111,106,113,134,16,57,133,47,
    150,182,215,131,167,29,252,17,76,67,21,240,66,97,245,195,
    69,206,164,190,127,221,114,106,41,158,170,219,254,240,170,183,
    248,95,168,114,95,66,252,161,143,184,197,193,7,130,125,134,
    99,49,188,136,110,22,179,199,252,210,217,131,227,175,29,120,
    126,199,170,249,193,203,88,152,218,102,235,164,137,215,191,120,
    211,139,23,187,120,215,132,243,115,28,87,226,52,11,207,225,
    120,66,64,48,135,157,9,30,130,229,198,128,174,50,35,188,
    41,189,31,252,97,249,3,230,54,78,206,134,99,195,137,244,
    96,58,145,30,72,255,103,250,69,218,76,47,164,127,43,189,
    159,222,76,191,76,239,165,191,253,31,54,155,23,84,
};

EmbeddedPython embedded_m5_objects_DRAMCtrl(
    "m5/objects/DRAMCtrl.py",
    "/home/hongyu/gem5-fy/src/mem/DRAMCtrl.py",
    "m5.objects.DRAMCtrl",
    data_m5_objects_DRAMCtrl,
    4270,
    12391);

} // anonymous namespace