/* This code was developed using ChatGPT 3.5 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "binary_search.h"
#include "bubble_sort.h"
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

/**********************************************************************************/
/* Binary Search */

/* Tests for empty array */
// void test_binary_search_empty_array(void)
// {
    // int nums[] = {};
    // int size = sizeof(nums) / sizeof(nums[0]);

    // int res = binary_search(nums, size, 4);

    // TEST_ASSERT_EQUAL(3, res);
//     return;
// }

/* Tests for element not found in the array */
void test_binary_search_element_not_in_array(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 7);

    TEST_ASSERT_EQUAL(-1, res);
}

/* Tests for unsuccesful search on left bound */
void test_binary_search_unsuccesful_search_on_left(void)
{
    int nums[] = {1, 2, 4, 5, 6, 7, 150, 1000, 1001, 1025, 1038, 5200};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 3);

    TEST_ASSERT_EQUAL(-1, res);
}

/* Tests for unsuccesful search on right bound */
void test_binary_search_unsuccesful_search_on_right(void)
{
    int nums[] = {1, 2, 4, 5, 6, 7, 150, 1000, 1001, 1025, 1038, 5200};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 1024);

    TEST_ASSERT_EQUAL(-1, res);
}

/* Tests for succesful search on left bound */
void test_binary_search_succesful_element_on_left(void)
{
    int nums[] = {1, 2, 4, 5, 6, 7, 150, 1000, 1001, 1025, 1038, 5200};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 1);

    TEST_ASSERT_EQUAL(0, res);
}

/* Tests for succesful search on right bound */
void test_binary_search_succesful_element_on_right(void)
{
    int nums[] = {1, 2, 4, 5, 6, 7, 150, 1000, 1001, 1025, 1038, 5200};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 5200);

    TEST_ASSERT_EQUAL(size - 1, res);
}

/* Tests for element successful on middle */
void test_binary_search_succesful_element_on_middle(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 4);

    TEST_ASSERT_EQUAL(3, res);
}

/* Tests for element succesful on middle + 1 with even array size */

/* Tests for element succesful on middle + 1 with odd array size */

/* Tests for an element from the middle cannot be found, for example 5 in [1, 2, 6, 10] */
void test_binary_search_element_from_middle_cannot_be_found(void)
{
    int nums[] = {1, 2, 6, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int res = binary_search(nums, size, 5);

    TEST_ASSERT_EQUAL(-1, res);
}

/* Tests for succesful in the array contains duplicate values, for example 3 in [1, 2, 3, 3, 3, 3, 3, 3, 3] */

/* Tests for unsuccesful in the array contains duplicate values, for example 4 in [1, 2, 3, 3, 3, 3, 3, 3, 3] */

/* Test for unordered array */

/* Binary Search */
/**********************************************************************************/

/**********************************************************************************/
/* Bubble Sort */
// Helper function to compare two arrays
int arrays_equal(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

// Comparison function for qsort
int compare(const int* a, const int* b)
{
    return (*a - *b);
}

// Helper function to generate a large random array
void generate_large_array(int* array, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000000; // Random numbers between 0 and 999999
    }
}

// Helper function to create a sorted copy of an array
void copy_and_sort_array(int* source, int* destination, int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
    // Use qsort from the standard library for expected sorted array
    qsort(destination, size, sizeof(int), (int (*)(const void*, const void*))compare);
}

void test_bubble_sort_empty_array()
{
    int array[] = {};
    int expected[] = {};
    bubble_sort(array, 0);
    TEST_ASSERT_TRUE(arrays_equal(array, expected, 0));
}

void test_bubble_sort_single_element_array()
{
    int array[] = {1};
    int expected[] = {1};
    bubble_sort(array, 1);
    TEST_ASSERT_TRUE(arrays_equal(array, expected, 1));
}

void test_bubble_sort_two_elements_unsorted() {
    int array[] = {2, 1};
    int expected[] = {1, 2};
    bubble_sort(array, 2);
    TEST_ASSERT_TRUE(arrays_equal(array, expected, 2));
}

// Add other test cases here...

void test_bubble_sort_large_array() {
    int size = 10000;
    int* large_array = malloc(size * sizeof(int));
    int* expected_large_array = malloc(size * sizeof(int));

    generate_large_array(large_array, size);
    copy_and_sort_array(large_array, expected_large_array, size);

    bubble_sort(large_array, size);
    TEST_ASSERT_TRUE(arrays_equal(large_array, expected_large_array, size));

    free(large_array);
    free(expected_large_array);
}

/* Bubble Sort */
/**********************************************************************************/

int main(void)
{
    UNITY_BEGIN();

    /* Binary search */
    RUN_TEST(test_binary_search_element_not_in_array);
    RUN_TEST(test_binary_search_unsuccesful_search_on_left);
    RUN_TEST(test_binary_search_unsuccesful_search_on_right);
    RUN_TEST(test_binary_search_succesful_element_on_left);
    RUN_TEST(test_binary_search_succesful_element_on_right);
    RUN_TEST(test_binary_search_succesful_element_on_middle);
    RUN_TEST(test_binary_search_element_from_middle_cannot_be_found);

    /* Bubble sort */
    RUN_TEST(test_bubble_sort_empty_array);
    RUN_TEST(test_bubble_sort_single_element_array);
    RUN_TEST(test_bubble_sort_two_elements_unsorted);
    RUN_TEST(test_bubble_sort_large_array);

    return UNITY_END();
}
