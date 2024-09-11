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

void test_init(void)
{
  mux_init();
  TEST_ASSERT_EQUAL(0, muxHandler_g.A[0]);
  TEST_ASSERT_EQUAL(0, muxHandler_g.A[1]);
  TEST_ASSERT_EQUAL(0, muxHandler_g.A[2]);
}

void test_selectLine5(void)
{
  mux_init();
  mux_getOutput(5);

  TEST_ASSERT_EQUAL(1, muxHandler_g.A[0]);
  TEST_ASSERT_EQUAL(0, muxHandler_g.A[1]);
  TEST_ASSERT_EQUAL(1, muxHandler_g.A[2]);
}