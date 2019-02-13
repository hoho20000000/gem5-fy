#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_X86NativeTrace[] = {
    120,156,173,145,77,75,195,64,16,134,103,147,180,106,21,233,
    69,4,65,208,91,16,108,14,210,82,74,17,81,207,85,210,
    10,154,75,88,55,219,166,54,219,150,236,86,154,179,254,111,
    157,217,152,106,239,110,146,151,119,62,24,158,157,8,248,57,
    117,252,110,206,0,244,61,154,4,95,6,51,128,140,65,196,
    128,81,236,192,204,129,17,57,23,102,46,100,30,68,30,86,
    60,144,30,140,25,36,53,248,4,248,0,120,137,106,144,212,
    97,232,239,224,160,233,23,30,159,161,51,123,40,195,169,122,
    120,125,147,194,148,41,146,139,210,238,163,12,184,153,190,203,
    81,206,133,52,135,24,63,119,59,127,82,162,34,165,254,91,
    34,61,65,35,129,0,145,42,114,8,57,114,9,20,193,194,
    161,239,98,57,36,209,71,40,118,70,175,183,61,83,31,99,
    133,231,34,13,214,221,78,48,183,5,67,133,86,154,250,53,
    226,218,69,137,227,57,87,50,142,77,195,6,106,145,172,50,
    10,61,106,40,150,210,94,77,172,215,177,200,184,214,182,139,
    162,84,242,68,230,62,33,255,138,190,66,9,210,133,146,40,
    243,73,177,10,38,82,181,47,199,69,160,115,17,108,80,182,
    49,91,203,194,94,228,156,6,208,143,170,51,122,6,62,121,
    115,128,162,218,173,205,110,67,168,214,141,217,37,207,185,42,
    153,238,30,159,236,180,92,135,78,181,154,127,162,179,107,234,
    151,139,185,62,173,40,155,172,193,154,206,55,229,220,131,11,
};

EmbeddedPython embedded_m5_objects_X86NativeTrace(
    "m5/objects/X86NativeTrace.py",
    "/home/hongyu/gem5-fy/src/arch/x86/X86NativeTrace.py",
    "m5.objects.X86NativeTrace",
    data_m5_objects_X86NativeTrace,
    336,
    610);

} // anonymous namespace