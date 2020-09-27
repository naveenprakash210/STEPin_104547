#include "unity.h"

//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

void testing_pallindrome_number(void)
{
    TEST_ASSERT_EQUAL(151, pallindrome(151));
    TEST_ASSERT_EQUAL(651, pallindrome(156));

}