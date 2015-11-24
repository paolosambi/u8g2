
#include "u8g2.h"
#include <stdio.h>

const uint8_t bdf_font[762] U8X8_FONT_SECTION("bdf_font") = {
  32,126,0,0,0,0,0,0,0,0,0,0,0,95,95,0,
  0,0,0,7,7,0,7,7,0,0,20,127,127,28,127,127,
  20,0,0,36,42,127,127,42,18,0,70,102,48,24,12,102,
  98,0,48,122,79,93,55,122,72,0,0,0,0,7,7,0,
  0,0,0,0,28,62,99,65,0,0,0,0,65,99,62,28,
  0,0,0,0,0,0,0,0,0,0,0,8,8,62,62,8,
  8,0,0,0,128,224,96,0,0,0,0,8,8,8,8,8,
  8,0,0,0,0,96,96,0,0,0,96,48,24,12,6,3,
  1,0,62,127,81,73,69,127,62,0,0,64,66,127,127,64,
  64,0,0,114,123,73,73,111,102,0,0,34,97,73,73,127,
  54,0,24,20,82,127,127,80,16,0,0,39,111,73,73,121,
  51,0,0,62,127,73,73,123,50,0,0,3,1,113,125,15,
  7,0,0,54,127,73,73,127,54,0,0,38,111,73,73,127,
  62,0,0,0,0,108,108,0,0,0,0,0,128,236,108,0,
  0,0,0,8,28,54,99,65,0,0,0,36,36,36,36,36,
  36,0,0,65,99,54,28,8,0,0,0,2,3,81,89,15,
  6,0,62,127,65,93,93,95,30,0,0,124,126,19,19,126,
  124,0,65,127,127,73,73,127,54,0,28,62,99,65,65,99,
  34,0,65,127,127,65,99,62,28,0,65,127,127,73,93,65,
  99,0,65,127,127,73,29,1,3,0,60,126,67,65,81,115,
  114,0,0,127,127,8,8,127,127,0,0,65,65,127,127,65,
  65,0,48,112,64,65,127,63,1,0,65,127,127,8,28,119,
  99,0,65,127,127,65,64,96,112,0,127,127,14,28,14,127,
  127,0,127,127,6,12,24,127,127,0,28,62,99,65,99,62,
  28,0,65,127,127,73,9,7,6,0,60,126,67,81,51,110,
  92,0,65,127,127,9,25,63,102,0,0,38,111,73,73,123,
  50,0,0,3,65,127,127,65,3,0,0,63,127,64,64,127,
  63,0,0,31,63,96,96,63,31,0,127,127,48,24,48,127,
  127,0,97,115,30,12,30,115,97,0,0,7,79,120,120,79,
  7,0,71,99,113,89,77,103,115,0,0,0,127,127,65,65,
  0,0,1,3,6,12,24,48,96,0,0,0,65,65,127,127,
  0,0,8,12,6,3,6,12,8,0,0,0,0,0,0,0,
  0,0,0,0,2,6,12,8,0,0,32,116,84,84,60,120,
  64,0,67,63,127,68,68,124,56,0,0,56,124,68,68,108,
  40,0,56,124,68,69,63,127,64,0,0,56,124,84,84,92,
  24,0,0,72,126,127,73,3,2,0,0,152,188,164,164,252,
  124,0,65,127,127,8,4,124,120,0,0,0,68,125,125,64,
  0,0,0,96,224,128,132,252,125,0,65,127,127,16,56,108,
  68,0,0,0,65,127,127,64,0,0,120,124,12,56,12,124,
  120,0,4,124,120,4,4,120,120,0,0,56,124,68,68,124,
  56,0,132,252,248,164,36,60,24,0,24,60,36,164,248,252,
  132,0,68,124,120,68,12,8,0,0,0,72,92,84,84,116,
  32,0,0,4,63,127,68,100,32,0,0,60,124,64,64,124,
  124,0,0,28,60,96,96,60,28,0,60,124,96,56,96,124,
  60,0,68,108,56,16,56,108,68,0,0,156,188,160,160,252,
  124,0,0,76,100,116,92,76,68,0,0,65,65,119,62,8,
  8,0,0,0,0,127,127,0,0,0,0,8,8,62,119,65,
  65,0,2,3,1,3,2,1,1,0};



const uint8_t unifont_greek[3710] U8G2_FONT_SECTION("unifont_greek") = {
  240,0,3,2,5,5,4,5,6,16,16,0,254,10,254,11,
  255,1,151,3,48,4,216,32,6,0,160,71,1,33,8,65,
  49,68,113,72,4,34,8,133,40,70,145,185,5,35,15,70,
  37,68,213,211,48,36,81,203,48,68,61,1,36,18,71,37,
  68,23,14,74,20,73,225,60,70,82,101,16,51,0,37,20,
  71,37,68,163,73,73,41,137,148,52,78,19,41,137,146,146,
  166,0,38,18,71,37,68,181,149,178,74,40,38,145,150,136,
  73,38,77,1,39,7,129,48,70,49,4,40,12,131,237,67,
  149,68,73,212,91,148,5,41,13,131,233,67,145,69,89,212,
  75,148,68,0,42,13,231,100,68,87,170,180,109,73,83,45,
  3,43,12,231,100,68,23,215,134,33,139,107,0,44,9,130,
  172,67,161,36,10,0,45,7,36,40,69,49,4,46,7,66,
  44,68,49,4,47,12,70,37,68,91,172,134,105,88,77,1,
  48,14,70,37,68,165,69,73,232,99,18,101,18,0,49,11,
  69,41,68,149,73,73,216,167,65,50,15,70,37,68,51,36,
  161,152,102,90,88,77,135,1,51,16,70,37,68,51,36,161,
  152,70,115,42,138,201,144,0,52,16,70,37,68,25,106,73,
  84,201,146,44,25,198,180,2,53,15,70,37,68,113,72,171,
  131,156,166,98,50,36,0,54,15,70,37,68,53,133,105,58,
  40,161,99,50,36,0,55,11,70,37,68,113,45,166,197,180,
  9,56,16,70,37,68,51,36,161,49,25,146,208,49,25,18,
  0,57,14,70,37,68,51,36,161,49,25,212,198,104,2,58,
  9,226,108,68,49,196,67,0,59,10,34,237,67,49,196,74,
  162,0,60,9,37,41,68,153,117,237,0,61,9,166,164,68,
  113,39,14,3,62,9,37,37,68,145,118,235,8,63,15,70,
  37,68,51,36,161,152,134,213,28,76,35,0,64,18,70,37,
  68,53,101,82,162,36,75,164,68,74,36,45,241,16,65,14,
  70,37,68,165,69,45,161,56,12,162,99,0,66,14,70,37,
  68,49,40,161,113,88,66,199,97,1,67,14,70,37,68,51,
  36,161,181,163,152,12,9,0,68,14,70,37,68,49,68,89,
  18,250,45,25,34,0,69,13,70,37,68,113,72,171,131,146,
  182,14,3,70,12,70,37,68,113,72,171,131,146,118,5,71,
  14,70,37,68,51,36,161,181,52,132,54,101,9,72,11,70,
  37,68,17,58,14,131,232,49,73,11,69,41,68,49,72,97,
  63,13,2,74,14,71,37,68,53,136,113,79,89,148,101,27,
  0,75,17,70,37,68,17,106,73,84,201,68,49,201,162,90,
  18,6,76,9,70,37,68,145,246,215,97,77,13,70,37,68,
  17,138,211,16,45,30,29,3,78,16,70,37,68,17,110,155,
  18,41,145,148,72,137,118,12,79,12,70,37,68,51,36,161,
  63,38,67,2,80,13,70,37,68,49,40,161,113,88,210,174,
  0,81,23,103,229,67,51,68,97,18,38,97,18,38,97,18,
  38,137,146,72,210,144,3,2,82,16,70,37,68,49,40,161,
  113,88,162,90,146,37,161,24,83,13,70,37,68,51,36,161,
  217,81,76,134,4,84,10,71,37,68,113,200,226,254,6,85,
  11,70,37,68,17,250,199,100,72,0,86,17,71,37,68,145,
  90,147,44,202,162,172,18,38,105,156,1,87,13,70,37,68,
  17,122,113,153,134,104,20,3,88,15,70,37,68,17,138,73,
  212,38,106,81,75,40,6,89,14,71,37,68,145,170,73,22,
  101,149,52,238,6,90,11,70,37,68,113,45,246,154,14,3,
  91,10,131,241,67,49,68,253,211,0,92,12,70,37,68,145,
  198,213,56,141,171,1,93,10,131,229,67,49,245,79,67,0,
  94,9,102,100,70,165,69,73,24,95,7,39,228,67,113,8,
  96,7,99,168,70,145,21,97,14,6,37,68,51,36,97,154,
  12,163,77,89,2,98,14,102,37,68,145,182,44,154,232,184,
  41,11,0,99,13,6,37,68,51,36,161,218,49,25,18,0,
  100,12,102,37,68,219,178,104,163,55,101,9,101,15,6,37,
  68,51,36,161,56,12,106,49,25,18,0,102,12,101,37,68,
  39,133,165,65,10,123,2,103,19,102,165,67,155,44,90,146,
  37,89,180,165,67,18,138,201,144,0,104,12,102,37,68,145,
  182,44,154,232,99,0,105,11,101,41,68,21,230,136,216,167,
  65,106,12,165,165,67,89,71,196,62,74,145,4,107,17,102,
  37,68,145,182,37,81,37,19,147,44,170,37,97,0,108,10,
  101,41,68,35,246,79,131,0,109,18,7,37,68,177,40,81,
  36,69,82,36,69,82,36,69,82,1,110,11,6,37,68,145,
  44,154,232,99,0,111,12,6,37,68,51,36,161,143,201,144,
  0,112,14,70,165,67,145,44,154,232,184,41,75,154,2,113,
  12,70,165,67,179,104,163,55,101,73,11,114,11,6,37,68,
  145,44,154,168,118,5,115,13,6,37,68,51,36,161,236,152,
  12,9,0,116,11,69,37,68,21,150,6,41,236,42,117,10,
  6,37,68,17,250,77,89,2,118,12,6,37,68,17,26,147,
  168,55,81,2,119,17,7,37,68,145,74,145,20,73,145,20,
  73,145,84,177,0,120,15,6,37,68,17,138,73,148,137,90,
  148,132,98,0,121,14,70,165,67,17,122,76,34,75,90,25,
  18,0,122,10,6,37,68,113,13,123,29,6,123,14,131,237,
  67,51,101,81,18,101,81,18,101,2,124,7,193,177,67,241,
  65,125,15,131,233,67,161,69,73,148,69,73,148,69,11,0,
  126,10,103,36,70,163,73,145,166,0,127,35,16,162,131,145,
  244,59,73,231,164,147,14,73,54,37,97,26,37,67,146,77,
  73,152,78,67,50,236,156,116,78,58,41,233,7,0,0,3,
  112,12,69,37,68,17,54,14,99,71,0,3,113,14,6,37,
  68,19,38,89,146,14,81,218,6,3,114,15,71,33,68,113,
  144,34,41,146,106,113,111,0,3,115,14,69,37,68,113,73,
  148,68,41,133,61,1,3,116,10,132,168,69,165,72,53,0,
  3,117,10,132,168,67,165,72,53,0,3,118,17,70,37,68,
  17,106,167,68,74,148,72,137,182,77,12,3,119,20,7,33,
  68,145,69,145,20,73,73,41,41,73,201,148,136,9,0,3,
  120,41,206,229,131,241,131,180,13,138,50,40,67,162,108,67,
  162,12,202,32,109,195,255,113,26,6,197,50,44,67,52,44,
  67,162,12,202,32,13,31,4,3,121,41,206,229,131,241,131,
  180,13,138,50,40,67,162,108,67,162,12,202,32,109,195,255,
  113,26,6,197,50,44,67,54,40,195,144,12,202,32,13,31,
  4,3,122,8,66,172,67,145,8,3,123,14,6,37,68,51,
  36,97,218,42,38,67,2,3,124,17,6,37,68,51,36,161,
  154,72,137,148,134,201,144,0,3,125,17,6,37,68,51,36,
  97,26,41,145,146,138,201,144,0,3,126,11,2,173,67,49,
  132,74,162,0,3,127,15,71,37,68,53,136,113,79,89,148,
  101,27,0,3,128,41,206,229,131,241,131,180,13,138,50,40,
  67,162,108,67,162,12,202,32,109,195,255,33,26,162,65,113,
  25,164,69,25,18,151,65,26,162,225,131,0,3,129,42,206,
  229,131,241,131,180,13,138,50,40,67,162,108,67,162,12,202,
  32,109,195,255,33,26,148,65,81,166,97,26,148,65,81,134,
  100,152,134,108,248,16,3,130,40,206,229,131,241,131,180,13,
  138,50,40,67,162,108,67,162,12,202,32,109,195,255,33,26,
  135,68,25,148,65,26,135,196,50,12,210,56,124,8,3,131,
  42,206,229,131,241,131,180,13,138,50,40,67,162,108,67,162,
  12,202,32,109,195,255,33,218,6,69,25,148,65,26,178,33,
  81,6,101,144,182,225,131,0,3,132,7,97,236,70,49,3,
  133,10,165,100,70,21,150,50,45,3,134,17,198,37,68,145,
  214,97,45,106,9,197,97,16,29,3,3,135,10,99,236,68,
  147,44,9,0,3,136,17,198,37,68,145,214,193,97,72,171,
  131,146,182,14,3,3,137,15,198,37,68,145,214,193,208,113,
  24,68,143,1,3,138,14,198,37,68,145,214,209,65,75,251,
  109,16,3,139,38,206,229,131,241,131,180,13,138,50,40,67,
  162,108,67,162,12,202,32,109,195,255,33,218,6,197,101,144,
  182,65,113,25,164,109,248,32,3,140,16,198,37,68,145,214,
  209,33,9,253,49,25,18,0,3,141,39,206,229,131,241,131,
  180,13,138,50,40,67,162,108,67,162,12,202,32,109,195,255,
  33,218,6,197,101,144,22,101,72,92,6,105,27,62,8,3,
  142,18,199,37,68,17,215,225,84,77,178,40,171,164,113,55,
  0,3,143,19,231,229,67,17,215,9,131,146,250,154,100,149,
  48,137,150,1,3,144,14,197,37,68,21,150,50,45,7,194,
  190,10,3,145,15,70,37,68,165,69,45,161,56,12,162,99,
  0,3,146,15,70,37,68,49,40,161,113,88,66,199,97,1,
  3,147,11,70,37,68,113,72,251,43,0,3,148,19,71,37,
  68,23,167,73,152,100,165,44,202,146,84,29,6,1,3,149,
  14,70,37,68,113,72,171,131,146,182,14,3,3,150,12,70,
  37,68,113,45,246,154,14,3,3,151,12,70,37,68,17,58,
  14,131,232,49,3,152,16,70,37,68,51,36,161,113,24,68,
  199,100,72,0,3,153,12,69,41,68,49,72,97,63,13,2,
  3,154,18,70,37,68,17,106,73,84,201,68,49,201,162,90,
  18,6,3,155,17,71,37,68,23,167,73,152,100,165,44,202,
  146,212,26,3,156,14,70,37,68,17,138,211,16,45,30,29,
  3,3,157,17,70,37,68,17,110,155,18,41,145,148,72,137,
  118,12,3,158,12,70,37,68,113,167,14,57,227,48,3,159,
  13,70,37,68,51,36,161,63,38,67,2,3,160,22,71,37,
  68,113,72,178,40,139,178,40,139,178,40,139,178,40,139,178,
  4,3,161,14,70,37,68,49,40,161,113,88,210,174,0,3,
  162,40,206,229,131,241,131,180,13,138,50,40,67,162,108,67,
  162,12,202,32,109,195,255,81,28,18,101,80,134,80,28,18,
  203,48,36,198,225,67,0,3,163,12,70,37,68,113,136,91,
  195,214,97,3,164,11,71,37,68,113,200,226,254,6,3,165,
  15,71,37,68,145,170,73,22,101,149,52,238,6,3,166,21,
  71,37,68,113,200,194,65,137,34,41,146,34,169,50,136,217,
  48,4,3,167,16,70,37,68,17,138,73,212,38,106,81,75,
  40,6,3,168,18,71,37,68,17,69,82,36,69,82,36,85,
  6,49,110,3,3,169,16,71,37,68,51,40,169,215,36,171,
  132,73,180,12,3,170,16,197,41,68,17,37,81,14,14,82,
  216,79,131,0,3,171,19,199,37,68,19,101,81,78,74,213,
  36,139,178,74,26,119,3,3,172,20,166,37,68,149,214,73,
  166,68,75,178,36,75,178,36,74,18,41,3,173,16,166,37,
  68,149,214,73,195,26,15,73,90,30,4,3,174,15,230,165,
  67,149,214,41,201,162,137,62,166,5,3,175,12,163,45,68,
  17,213,145,168,111,2,3,176,16,198,37,68,149,214,42,89,
  14,132,126,76,134,4,3,177,19,6,37,68,35,73,137,150,
  100,73,150,100,73,148,36,82,0,3,178,19,134,165,67,51,
  101,73,150,100,201,160,132,198,77,89,210,20,3,179,14,7,
  37,68,163,73,181,36,45,167,113,8,3,180,16,70,37,68,
  53,165,101,45,74,66,99,50,36,0,3,181,16,6,37,68,
  51,36,161,60,36,105,49,25,18,0,3,182,14,133,169,67,
  17,166,91,99,235,154,44,0,3,183,12,70,165,67,145,44,
  154,232,99,90,3,184,17,70,37,68,165,69,45,225,48,136,
  98,18,181,73,0,3,185,9,3,45,68,17,245,77,3,186,
  15,5,41,68,145,73,73,73,211,146,168,146,5,3,187,15,
  70,37,68,147,198,105,28,106,81,75,40,6,3,188,14,70,
  165,67,17,58,78,67,180,24,213,20,3,189,14,6,37,68,
  17,186,37,89,18,85,50,17,3,190,19,134,165,67,145,198,
  67,146,198,67,146,198,67,156,38,67,2,3,191,13,6,37,
  68,51,36,161,143,201,144,0,3,192,11,6,37,68,113,137,
  250,127,1,3,193,14,70,165,67,51,36,161,199,77,89,210,
  20,3,194,15,70,165,67,53,36,97,90,142,231,52,90,0,
  3,195,18,7,37,68,51,12,81,86,202,162,44,202,162,44,
  219,0,3,196,11,6,37,68,113,74,123,86,0,3,197,12,
  6,37,68,17,250,49,25,18,0,3,198,21,71,165,67,19,
  41,81,36,69,82,36,69,82,36,85,6,49,206,0,3,199,
  16,70,165,67,17,138,73,212,38,106,81,75,40,6,3,200,
  21,71,165,67,17,69,82,36,69,82,36,69,82,36,85,6,
  49,206,0,3,201,17,7,37,68,147,37,169,41,146,34,41,
  146,42,22,0,3,202,12,132,41,68,17,73,57,148,245,81,
  3,203,14,134,37,68,19,181,195,161,31,147,33,1,3,204,
  16,166,37,68,149,214,73,67,18,250,152,12,9,0,3,205,
  14,166,37,68,149,214,41,161,31,147,33,1,3,206,19,167,
  37,68,23,215,137,89,146,154,34,41,146,34,169,98,1,3,
  207,19,134,165,67,17,106,73,84,201,68,49,201,162,90,18,
  54,1,3,208,17,70,37,68,53,101,162,150,12,81,150,132,
  182,104,2,3,209,21,71,37,68,39,70,89,148,69,225,144,
  100,137,22,101,81,150,77,0,3,210,13,71,37,68,99,137,
  106,113,95,39,0,3,211,16,167,37,68,17,231,4,69,137,
  106,113,95,39,0,3,212,16,167,37,68,99,82,116,72,81,
  162,90,220,215,9,3,213,22,135,165,67,23,135,131,18,69,
  82,36,69,82,36,69,82,101,16,227,12,3,214,17,7,37,
  68,113,72,178,36,53,69,82,36,85,44,0,3,215,19,71,
  165,67,17,70,181,36,28,147,48,9,163,68,84,67,9,3,
  216,16,134,165,67,51,36,161,63,38,67,166,13,9,0,3,
  217,15,70,165,67,51,36,161,143,201,144,137,18,0,3,218,
  15,70,37,68,51,101,73,90,54,167,201,144,0,3,219,13,
  230,36,68,51,172,113,60,71,11,0,3,220,14,70,37,68,
  113,8,213,116,136,90,91,1,3,221,14,37,169,67,49,36,
  153,24,78,97,35,0,3,222,14,70,37,68,161,118,29,196,
  52,76,35,0,3,223,11,165,100,68,149,101,131,86,2,3,
  224,19,70,37,68,53,101,161,150,68,149,104,74,162,74,38,
  41,0,3,225,13,37,165,67,161,214,164,68,74,194,6,3,
  226,24,104,225,67,161,88,162,74,84,137,42,81,37,170,68,
  37,101,7,162,65,138,1,3,227,19,39,229,67,17,69,82,
  36,69,82,36,85,148,57,25,148,24,3,228,14,70,37,68,
  35,73,137,104,83,150,180,3,3,229,12,5,41,68,99,179,
  37,67,216,0,3,230,17,70,37,68,49,166,21,73,74,178,
  36,75,183,104,1,3,231,17,38,37,68,151,13,73,73,137,
  146,44,173,72,22,0,3,232,17,70,37,68,51,36,161,152,
  102,146,22,26,147,33,1,3,233,16,6,37,68,51,36,161,
  152,68,153,22,198,131,0,3,234,21,72,33,68,33,46,81,
  18,85,101,53,10,163,44,140,194,104,88,0,3,235,16,6,
  37,68,19,37,137,18,137,182,40,9,135,33,3,236,17,102,
  37,68,155,12,73,154,44,154,232,49,25,18,0,3,237,16,
  38,37,68,155,12,73,154,44,154,104,76,134,4,3,238,15,
  71,37,68,181,134,131,18,85,26,227,214,9,3,239,15,39,
  37,68,167,198,81,50,40,81,220,170,1,3,240,14,6,37,
  68,161,69,45,153,24,106,81,77,3,241,15,38,229,67,51,
  36,161,113,88,210,120,136,3,3,242,13,70,229,67,155,12,
  73,218,243,16,7,3,243,13,165,233,67,89,71,199,30,181,
  100,1,3,244,17,70,37,68,165,69,73,40,14,131,104,76,
  162,76,2,3,245,13,5,37,68,181,100,225,144,132,105,58,
  3,246,13,5,37,68,177,86,134,176,150,76,0,3,247,16,
  102,165,67,145,38,139,38,58,110,202,146,166,0,3,248,16,
  166,165,67,145,182,44,154,232,184,41,75,154,2,3,249,15,
  70,37,68,51,36,161,181,163,152,12,9,0,3,250,14,70,
  37,68,17,138,211,16,45,30,29,3,3,251,23,103,165,67,
  145,69,138,164,72,73,41,41,101,81,22,101,137,152,196,49,
  0,3,252,22,102,165,67,147,72,82,146,37,89,146,37,89,
  34,37,137,20,14,89,8,3,253,16,70,37,68,51,36,161,
  152,182,138,98,50,36,0,3,254,18,70,37,68,51,36,161,
  53,145,18,41,13,197,100,72,0,3,255,19,70,37,68,51,
  36,161,152,70,74,164,164,162,152,12,9,0,0,0};
  
u8g2_t u8g2;

int main(void)
{
  int x, y;
  int k;
  int i;
  
  u8g2_Setup_SDL_128x64_4(&u8g2, &u8g2_cb_r0);
  u8x8_display_Init(u8g2_GetU8x8(&u8g2));
  u8x8_display_SetPowerSave(u8g2_GetU8x8(&u8g2), 0);  
  //u8g2_SetFont(&u8g2, u8g2_font_helvB18_tr);
  u8g2_SetFont(&u8g2, unifont_greek);
  
  x = 50;
  y = 30;

  
  for(;;)
  {
#ifdef U8G2_WITH_HVLINE_COUNT
    u8g2.hv_cnt = 0UL;
#endif /* U8G2_WITH_HVLINE_COUNT */   
    
    /*
    u8g2_ClearBuffer(&u8g2);
    
      u8g2_SetFontDirection(&u8g2, 0);
      u8g2_DrawString(&u8g2, x, y, "ABC");
      u8g2_SetFontDirection(&u8g2, 1);
      u8g2_DrawString(&u8g2, x, y, "abc");
      u8g2_SetFontDirection(&u8g2, 2);
      u8g2_DrawString(&u8g2, x, y, "abc");
      u8g2_SetFontDirection(&u8g2, 3);
      u8g2_DrawString(&u8g2, x, y, "abc");
    
    u8g2_SendBuffer(&u8g2);
    */
    
    u8g2_FirstPage(&u8g2);
    i = 0;
    do
    {
      u8g2_SetFontDirection(&u8g2, 0); 
      //u8g2_DrawString(&u8g2, x, y, "ABC");
      u8g2_DrawString(&u8g2, x, y, "\316\221\316\222\316\223");	/* UTF-8 Uppercase Greek ABC */
      u8g2_SetFontDirection(&u8g2, 1); 
      //u8g2_DrawString(&u8g2, x, y, "abc");
      u8g2_DrawString(&u8g2, x, y, "\316\261\316\262\316\263");	/* UTF-8 Lowercase Greek abc */
      u8g2_SetFontDirection(&u8g2, 2);
      //u8g2_DrawString(&u8g2, x, y, "abc");
      u8g2_DrawString(&u8g2, x, y, "\316\261\316\262\316\263");
      u8g2_SetFontDirection(&u8g2, 3);
      //u8g2_DrawString(&u8g2, x, y, "abc");
      //u8g2_DrawString(&u8g2, x, y, "\316\261\316\262\316\263");
      u8g2_DrawString(&u8g2, x, y, "αβγ");	/* Lowercase Greek abc... requires UTF-8 editor */
      if ( i == 1 )
      {
	u8g2_DrawHVLine(&u8g2, u8g2.user_x0, u8g2.user_y0, 1, 0);
	u8g2_DrawHVLine(&u8g2, u8g2.user_x0, u8g2.user_y1-1, 1, 0);
	u8g2_DrawHVLine(&u8g2, u8g2.user_x1-1, u8g2.user_y1-1, 1, 0);
	u8g2_DrawHVLine(&u8g2, u8g2.user_x1-1, u8g2.user_y0, 1, 0);

      }
      
      i++;
      

    } while( u8g2_NextPage(&u8g2) );
#ifdef U8G2_WITH_HVLINE_COUNT
    printf("hv cnt: %ld\n", u8g2.hv_cnt);
#endif /* U8G2_WITH_HVLINE_COUNT */   
    
    do
    {
      k = u8g_sdl_get_key();
    } while( k < 0 );
    
    if ( k == 273 ) y -= 7;
    if ( k == 274 ) y += 7;
    if ( k == 276 ) x -= 7;
    if ( k == 275 ) x += 7;
    
    if ( k == 'e' ) y -= 1;
    if ( k == 'x' ) y += 1;
    if ( k == 's' ) x -= 1;
    if ( k == 'd' ) x += 1;
    if ( k == 'q' ) break;
    
  }
  
  //u8x8_Set8x8Font(u8g2_GetU8x8(&u8g2), bdf_font);
  //u8x8_Draw8x8String(u8g2_GetU8x8(&u8g2), 0, 0, "Hello World!");
  
  
  
  
  
  
  return 0;
}

