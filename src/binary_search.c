#include "binary_search.h"


int binary_search(int *array, int size, int target)
{
    int index = -1;
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (array[mid] == target) {
            index = mid;
            break;
        } else if (array[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return index;
}
