#include <multiplexer.h>
#include <stdint.h>
#include <unity.h>
#include "stdbool.h"
// See
// https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityGettingStartedGuide.md

void setUp(void) {
  // Set stuff up here
}

void tearDown(void) {
  // Clean stuff up here
}

/* Your tests here! */
// void test_sampleSucceed(void) { TEST_ASSERT_EQUAL(1, 1); }

// void test_sampleFail(void) { TEST_ASSERT_EQUAL(1, 2); }

// void test_sampleIgnored(void) { TEST_IGNORE(); }

#define TEST_ADDRESS_LINES(A2, A1, A0)  \
  do {                                      \
  TEST_ASSERT_EQUAL(A0, muxHandler_g.A[0]); \
  TEST_ASSERT_EQUAL(A1, muxHandler_g.A[1]); \
  TEST_ASSERT_EQUAL(A2, muxHandler_g.A[2]); \
  } while(0)


void test_init(void)
{
  mux_init();
  TEST_ADDRESS_LINES(0,0,0);
}

void test_selectLine0(void)
{
  mux_init();
  mux_setOutput(0);

  TEST_ADDRESS_LINES(0,0,0);

}

void test_selectLine1(void)
{
  mux_init();
  mux_setOutput(1);

  TEST_ADDRESS_LINES(0,0,1);
}

void test_selectLine2(void)
{
  mux_init();
  mux_setOutput(2);

  TEST_ADDRESS_LINES(0,1,0);
}

void test_selectLine3(void)
{
  mux_init();
  mux_setOutput(3);

  TEST_ADDRESS_LINES(0,1,1);
}

void test_selectLine4(void)
{
  mux_init();
  mux_setOutput(4);

  TEST_ADDRESS_LINES(1,0,0);
}

void test_selectLine5(void)
{
  mux_init();
  mux_setOutput(5);

  TEST_ADDRESS_LINES(1,0,1);
}

void test_selectLine6(void)
{
  mux_init();
  mux_setOutput(6);

  TEST_ADDRESS_LINES(1,1,0);
}

void test_selectLine7(void)
{
  mux_init();
  mux_setOutput(7);

  TEST_ADDRESS_LINES(1,1,1);
}
