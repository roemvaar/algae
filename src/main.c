#include <stdio.h>

#include "sorting.h"

int sorting_main()
{
    int nums[] = {6, 4, 10, 3, 5, 2, 1};
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(nums) / sizeof(nums[0]);
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    // Unsorted array
    print_array(nums, size);
    print_array(arr, size_arr);

    bubble_sort(nums, size);
    bubble_sort(arr, size_arr);

    // Sorted array
    print_array(nums, size);
    print_array(arr, size_arr);

    return 0;
}

int main()
{
    printf("Algorithms and Data Structures Implementation in C\n");

    sorting_main();

    // main_queue();
    // main_queue_stl();

    // main_binary_search();

    return 0;
}
