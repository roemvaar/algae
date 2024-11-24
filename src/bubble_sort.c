#include "sort.h"

#include <stdio.h>


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
