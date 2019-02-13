#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_TickedObject[] = {
    120,156,165,79,61,79,195,48,16,125,73,211,10,33,144,24,
    152,152,152,144,133,160,158,216,16,66,176,131,212,118,33,139,
    149,218,110,19,26,55,85,236,72,205,12,255,27,238,220,86,
    101,199,118,158,238,236,203,251,208,216,175,140,190,231,107,192,
    223,82,97,232,36,88,1,53,144,3,137,73,97,129,69,2,
    51,192,55,240,5,124,228,212,100,152,138,33,141,87,63,180,
    68,66,85,56,39,120,173,27,189,178,230,125,254,105,117,8,
    103,116,51,171,142,23,250,160,200,243,47,172,120,69,5,209,
    51,35,33,73,13,144,103,108,32,31,98,50,21,41,61,79,
    120,216,95,50,84,78,134,72,167,154,200,55,46,75,49,98,
    233,19,2,165,214,133,179,74,133,211,216,184,198,116,53,183,
    156,46,244,27,27,139,89,219,217,56,93,204,125,104,11,242,
    200,211,122,187,85,165,45,140,109,5,187,59,130,191,35,144,
    101,227,44,193,122,217,119,114,105,221,195,253,162,151,190,213,
    146,253,252,141,55,222,244,209,44,255,234,217,215,40,225,253,
    182,139,129,67,150,255,106,68,255,143,187,124,79,55,204,192,
    252,23,233,47,166,173,98,123,
};

EmbeddedPython embedded_m5_objects_TickedObject(
    "m5/objects/TickedObject.py",
    "/home/hongyu/gem5-fy/src/sim/TickedObject.py",
    "m5.objects.TickedObject",
    data_m5_objects_TickedObject,
    264,
    464);

} // anonymous namespace
