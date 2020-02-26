#include <stdio.h>

extern "C" int read_gorz(FILE* in, FILE* out);
extern "C" int seek_gorz(FILE* in, FILE* out, char* chr, int s, int e);
extern "C" int write_gorz(FILE* in, FILE* out);