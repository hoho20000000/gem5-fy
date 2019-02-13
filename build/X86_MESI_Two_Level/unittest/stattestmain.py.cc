#include "sim/init.hh"

namespace {

const uint8_t data_m5_stattestmain[] = {
    120,156,165,81,193,78,195,48,12,117,210,109,29,168,149,16,
    66,156,57,246,194,42,14,187,33,132,196,125,135,149,19,23,
    84,218,48,162,53,233,212,184,210,42,173,167,241,223,96,103,
    43,234,157,72,182,236,103,251,61,39,41,224,124,4,217,243,
    29,128,139,41,40,1,190,1,222,40,16,144,37,146,144,130,
    123,2,178,9,217,11,247,237,193,151,75,9,91,128,74,64,
    79,94,66,47,64,48,10,176,13,160,151,112,0,56,18,249,
    65,130,158,128,158,142,147,25,148,1,28,197,95,30,142,139,
    243,83,34,198,216,133,79,136,58,75,120,139,149,254,161,227,
    183,67,94,218,97,142,168,28,190,107,171,17,163,49,210,180,
    22,121,164,168,91,76,46,121,224,134,156,89,46,180,69,213,
    216,188,90,12,173,107,190,231,154,31,3,231,167,22,174,56,
    156,158,233,156,39,102,133,76,155,204,3,243,51,240,170,246,
    136,51,74,148,205,63,42,229,71,26,229,20,122,233,178,53,
    187,132,31,112,164,32,189,66,194,128,119,238,129,92,250,85,
    27,69,206,110,186,54,221,40,179,188,255,236,82,215,20,105,
    203,215,162,21,211,97,87,147,107,187,216,117,158,158,99,230,
    116,215,254,51,111,69,36,195,32,22,87,65,28,196,50,148,
    171,132,139,235,104,80,250,183,38,95,250,209,212,101,91,169,
    39,175,203,92,191,109,143,123,39,
};

EmbeddedPython embedded_m5_stattestmain(
    "m5/stattestmain.py",
    "/home/hongyu/gem5-fy/src/unittest/stattestmain.py",
    "m5.stattestmain",
    data_m5_stattestmain,
    313,
    589);

} // anonymous namespace