#include "binary_search.h"
#include "unity.h"

void setUp(void)
{
    // Setup stuff here
    return;
}

void tearDown(void)
{
    // Clean stuff here
    return;
}

/* Tests for element not found in the array */
void test_binary_search_element_not_in_array(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 7);

    TEST_ASSERT_EQUAL(-1, res);
}

/* Tests for element successful on middle */
void test_binary_search_succesful_element_on_middle(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 4);

    TEST_ASSERT_EQUAL(3, res);
}

/* Tests for an element from the middle cannot be found, for example 5 in [1, 2, 6, 10] */
void test_binary_search_element_from_middle_cannot_be_found(void)
{
    int nums[] = {1, 2, 6, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 5);

    TEST_ASSERT_EQUAL(-1, res);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_binary_search_element_not_in_array);
    RUN_TEST(test_binary_search_succesful_element_on_middle);
    RUN_TEST(test_binary_search_element_from_middle_cannot_be_found);

    return UNITY_END();
}
