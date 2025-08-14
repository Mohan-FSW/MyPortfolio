#include "unity.h"
#include "p2.h"

void setUp(void) {}
void tearDown(void) {}

void test_positive_number(void) {
	    TEST_ASSERT_EQUAL(-1, process_number(5));
}

void test_negative_number(void) {
	    TEST_ASSERT_EQUAL(-1, process_number(-3));
}

void test_zero(void) {
	    TEST_ASSERT_EQUAL(0, process_number(0));
}

