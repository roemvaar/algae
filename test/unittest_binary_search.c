#include "unity.h"
#include "binary_search.h"
#include "bubble_sort.h"
#include "utils.h"

void test_binary_search_empty_array(void)
{
    printf("test_binary_search_empty_array\n");
}

void test_binary_search_element_not_in_array(void)
{
    printf("test_binary_search_element_not_in_array\n");

    int nums[] = {6, 4, 10, 3, 5, 2, 1};
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(nums) / sizeof(nums[0]);
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(nums, size);
    bubble_sort(arr, size_arr);
}
