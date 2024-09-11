#include <multiplexer.h>
#include <stdint.h>
#include <unity.h>
// See
// https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityGettingStartedGuide.md

void setUp(void) {
  // Set stuff up here
}

void tearDown(void) {
  // Clean stuff up here
}

/* Your tests here! */
void test_sampleSucceed(void) { TEST_ASSERT_EQUAL(1, 1); }

void test_sampleFail(void) { TEST_ASSERT_EQUAL(1, 2); }

void test_sampleIgnored(void) { TEST_IGNORE(); }
