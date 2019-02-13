#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_PcSpeaker[] = {
    120,156,165,81,193,78,194,64,16,157,109,1,149,131,26,239,
    38,245,86,77,160,137,17,66,140,33,106,188,112,49,132,114,
    208,94,154,205,118,161,27,40,37,221,133,180,103,252,111,157,
    217,22,253,0,183,221,151,55,147,217,157,247,102,5,52,171,
    131,251,217,3,208,99,36,9,254,12,86,0,243,134,177,154,
    57,176,114,96,237,66,228,2,75,92,144,46,44,24,36,45,
    248,2,56,0,124,70,45,72,218,16,250,116,151,250,198,229,
    51,100,134,224,174,166,231,8,175,92,43,49,85,249,155,220,
    43,33,205,25,166,166,34,220,74,190,146,133,56,202,113,168,
    144,228,220,34,145,0,17,35,81,145,67,106,176,59,42,193,
    102,178,13,170,3,40,228,128,201,19,152,133,126,11,171,103,
    116,86,95,32,124,140,134,147,240,229,241,177,185,92,95,145,
    53,185,15,202,209,48,208,117,174,159,166,250,26,211,115,149,
    201,194,51,41,55,94,82,168,189,212,200,165,215,20,249,167,
    164,157,32,142,55,60,147,113,108,186,54,200,242,100,183,166,
    144,250,154,106,91,187,17,101,25,139,53,215,218,86,81,148,
    74,158,200,194,180,201,42,47,120,102,217,100,116,63,120,176,
    76,17,243,201,246,31,232,30,66,144,230,153,68,216,44,171,
    93,176,148,217,160,183,168,2,93,136,224,232,226,119,112,253,
    109,101,125,223,208,81,82,218,97,245,247,238,83,7,171,43,
    27,244,183,212,93,91,43,20,21,121,89,25,122,173,250,45,
    102,236,56,190,127,139,177,45,158,234,249,140,105,192,154,218,
    116,89,151,93,58,63,174,237,133,108,
};

EmbeddedPython embedded_m5_objects_PcSpeaker(
    "m5/objects/PcSpeaker.py",
    "/home/hongyu/gem5-fy/src/dev/x86/PcSpeaker.py",
    "m5.objects.PcSpeaker",
    data_m5_objects_PcSpeaker,
    362,
    628);

} // anonymous namespace
