#include "multiplexer.h"

muxHandler_t muxHandler_g;

void mux_init(void)
{
    muxHandler_g.A[0] = 0;
    muxHandler_g.A[1] = 0;
    muxHandler_g.A[2] = 0;
}

void mux_setOutput(int num)
{
    muxHandler_g.A[0] = num & (1 << 0);
    muxHandler_g.A[1] = num & (1 << 1);
    muxHandler_g.A[2] = num & (1 << 2);
}

bool mux_getOutput()
{
    return muxHandler_g.out;
}