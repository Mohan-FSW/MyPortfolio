/**
 * @file test_p.c
 * @brief Unit tests for the nibble function using Unity
 *
 * This file contains all the unit tests for the swap_nibble() function.
 * It uses the Unity framework.
 */

#include "unity.h"
#include "p.h"
/**
 * @brief Setup function called before each test
 *
 * This function initializes any necessary state before running
 * each test case.
 */


void setup(void)
{

	 // Optional: runs before each test
	 
}

/**
 * @brief Teardown function called after each test
 *
 * This function cleans up any state after each test case.
 */





void teardown(void)
{

	 // Optional: runs after each test
}


/**
 * @brief Test nibble function with input zero
 *
 * Ensures that nibble(0) returns 0.
 *
 * @test TEST_ASSERT_EQUAL_HEX(0x00, swap_nibble(0x00));
 */


void test_nibble_zero(void)
{


 TEST_ASSERT_EQUAL_HEX(0x00, swap_nibble(0x00)); 

}
/**
 * @brief Test nibble function with basic input
 *
 * Ensures that nibble(1) returns 1.
 *
 * @test  TEST_ASSERT_EQUAL_HEX(0x54, swap_nibble(0x45));
 */

void test_nibble_basic(void)
{


 TEST_ASSERT_EQUAL_HEX(0x54, swap_nibble(0x45));

}
/**
 * @brief Test nibble function with all ones
 *
 * Ensures that nibble(0xF) returns 0xF.
 *
 * @test TEST_ASSERT_EQUAL_HEX(0xFF, swap_nibble(0xFF));
 */

void test_nibble_allones(void)
{

 TEST_ASSERT_EQUAL_HEX(0xFF, swap_nibble(0xFF));



}













