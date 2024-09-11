#ifndef MULTIPLEXER_H
#define MULTIPLEXER_H

// Any libraries needed here
#include "stdbool.h"

// Add the functions needed for your multiplexer functions
typedef struct {
    bool A[3];
    bool out;
} muxHandler_t;

extern muxHandler_t muxHandler_g;

void mux_init(void);
void mux_setOutput(int num);
bool mux_getOutput(void);

#endif
