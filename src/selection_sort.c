#include "sort.h"


void selection_sort(int *nums, int size)
{
    for (int i = 0; i < size; i++) {
        int smallest = i;

        // Find the smallest element of nums[i:n]
        for (int j = i + 1; j < size; j++) {
            if (nums[smallest] > nums[j]) {
                smallest = j;
            }
        }

        // Exchange the smallest element with the element in nums[i]
        int temp = nums[i];
        nums[i] = nums[smallest];
        nums[smallest] = temp;
    }
}
