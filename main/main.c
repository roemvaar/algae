#include <stdio.h>

#include "bubble_sort.h"
#include "utils.h"

int main()
{
    printf("algae: algorithms and data structures in C\n");

    int nums[] = {6, 4, 10, 3, 5, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    // Unsorted array
    print_array(nums, size);

    bubble_sort(nums, size);

    // Sorted array
    print_array(nums, size);

    return 0;
}
