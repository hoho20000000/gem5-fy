#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SubSystem[] = {
    120,156,165,80,61,79,195,48,16,61,39,105,5,21,3,172,
    76,108,24,36,18,49,116,67,8,49,48,130,148,76,100,177,
    18,251,218,4,226,182,138,29,169,153,225,127,195,157,251,193,
    15,192,31,79,119,246,221,189,119,167,97,191,18,186,79,87,
    0,238,150,12,67,71,192,39,64,39,160,20,32,76,4,40,
    96,33,192,196,240,13,240,5,240,94,70,96,18,40,228,132,
    194,219,31,90,82,144,229,79,9,138,214,190,213,31,168,253,
    206,27,234,98,116,30,173,62,80,113,224,51,83,93,146,129,
    192,12,68,200,5,137,45,6,76,160,156,64,94,200,136,190,
    115,14,118,23,12,173,205,220,80,43,23,138,165,77,35,167,
    76,120,66,160,212,170,178,168,148,159,5,199,174,205,208,177,
    203,61,249,113,131,225,93,111,183,170,193,202,96,239,89,243,
    75,213,57,12,217,85,237,124,95,105,47,89,219,31,184,27,
    130,172,89,91,36,88,45,199,33,91,162,157,223,45,198,204,
    245,58,99,53,199,206,210,205,24,116,222,115,26,171,154,10,
    222,175,50,102,1,103,4,118,158,30,167,146,195,161,175,127,
    49,6,237,15,187,94,31,175,57,157,231,117,62,251,5,228,
    56,98,34,
};

EmbeddedPython embedded_m5_objects_SubSystem(
    "m5/objects/SubSystem.py",
    "/home/hongyu/gem5-fy/src/sim/SubSystem.py",
    "m5.objects.SubSystem",
    data_m5_objects_SubSystem,
    275,
    466);

} // anonymous namespace