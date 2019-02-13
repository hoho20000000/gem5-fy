#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Network[] = {
    120,156,173,84,75,111,227,70,12,166,148,167,157,100,157,166,
    143,116,147,180,24,236,201,40,154,184,135,238,173,40,138,110,
    123,40,176,155,13,236,100,129,205,69,144,53,148,165,90,154,
    49,102,70,105,220,107,250,155,250,183,250,19,90,146,178,156,
    237,33,183,245,99,192,143,67,14,63,146,195,201,96,245,217,
    166,255,79,10,192,255,66,130,166,95,4,115,128,107,150,98,
    152,71,80,69,112,27,65,196,120,3,230,49,84,49,220,198,
    132,55,1,35,200,35,208,91,240,23,192,3,192,251,219,13,
    208,219,48,25,238,208,65,229,191,244,25,70,36,5,94,190,
    105,197,3,90,94,85,54,155,163,126,59,253,29,179,208,170,
    123,180,252,156,250,50,123,93,154,121,216,35,52,110,166,203,
    75,12,127,88,55,207,58,162,27,108,197,68,255,38,1,129,
    89,17,41,226,66,140,57,52,241,34,78,91,112,187,13,184,
    3,229,46,243,37,150,15,164,239,137,166,207,92,31,200,120,
    79,224,62,179,213,59,98,112,32,154,103,2,201,96,0,120,
    8,229,39,160,119,5,30,9,252,20,116,79,224,103,2,63,
    7,221,23,248,133,192,99,208,123,2,191,4,124,14,122,95,
    228,19,192,83,208,7,34,159,193,120,50,124,198,185,113,34,
    129,139,180,202,208,159,146,92,99,61,114,148,245,200,180,202,
    209,106,243,162,40,60,151,237,210,6,53,89,96,86,230,37,
    106,63,228,35,10,84,38,173,81,217,92,177,92,214,11,235,
    2,106,21,236,194,86,118,182,84,181,213,77,133,254,31,118,
    111,234,41,58,54,189,43,93,104,210,74,173,226,120,213,120,
    242,153,46,229,140,204,22,232,208,100,168,22,206,6,155,217,
    74,149,134,45,46,148,186,166,125,107,206,179,162,92,116,206,
    42,245,190,169,209,139,239,218,195,72,44,175,238,200,202,43,
    31,82,23,74,51,83,185,179,181,250,174,61,200,97,110,29,
    126,43,126,230,105,106,190,176,77,69,228,56,48,82,58,14,
    201,35,53,226,86,148,179,2,125,88,185,83,10,28,174,99,
    75,221,167,2,241,173,241,131,199,66,43,103,155,64,204,252,
    209,7,186,223,12,169,242,52,67,239,143,73,205,87,144,242,
    177,10,239,73,111,152,141,213,180,119,182,222,155,146,35,162,
    161,80,255,51,224,214,190,186,186,81,190,74,239,168,24,212,
    10,9,205,170,58,245,100,42,186,225,87,76,140,217,37,9,
    55,47,73,66,95,64,219,43,130,155,108,176,92,160,76,69,
    118,127,159,100,21,85,89,172,24,21,152,106,116,98,117,237,
    26,148,163,210,169,15,46,205,66,216,34,112,149,186,180,14,
    60,213,147,224,168,238,98,209,93,9,1,55,198,151,51,131,
    58,156,16,104,203,151,216,60,89,85,63,233,170,31,248,158,
    82,117,194,33,135,182,38,56,91,37,181,159,37,190,252,19,
    133,15,79,233,100,73,185,213,50,180,124,125,19,255,136,223,
    209,128,91,215,242,217,235,70,124,44,45,144,235,191,234,198,
    88,222,0,38,76,145,203,220,135,253,206,246,215,251,32,47,
    2,87,130,218,145,84,92,255,199,109,226,182,222,166,102,172,
    182,7,235,200,19,238,196,21,21,93,234,34,125,145,92,218,
    221,55,210,20,217,230,216,109,143,120,174,224,113,241,223,211,
    50,42,108,141,180,152,217,178,25,205,176,126,121,158,47,71,
    222,101,163,39,71,118,177,148,25,127,193,39,124,205,79,108,
    212,125,123,81,47,30,108,29,69,131,120,16,201,55,222,143,
    46,135,155,221,35,88,191,188,88,112,185,218,154,140,227,238,
    181,248,88,180,164,253,63,180,87,237,71,102,230,57,245,126,
    116,24,29,198,255,1,187,80,152,253,
};

EmbeddedPython embedded_m5_objects_Network(
    "m5/objects/Network.py",
    "/home/hongyu/gem5-fy/src/mem/ruby/network/Network.py",
    "m5.objects.Network",
    data_m5_objects_Network,
    826,
    1553);

} // anonymous namespace
