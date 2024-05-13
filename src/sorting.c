// sorting.c

#include "stdio.h"


void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n");
}


void bubble_sort(int *nums, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] > nums[j]) {
                // Swap elements
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
}


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
