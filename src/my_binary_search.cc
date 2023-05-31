#include "my_binary_search.h"

#include <iostream>
#include <vector>

int binary_search(std::vector<int>& nums, int target)
{
    int n = nums.size();

    if (n == 0) {
        return -1;
    }

    int left = 0;
    int right = n - 1;
    int index = -1;
    
    while (left <= right) {
        int mid = ((right - left) / 2) + left;

        if (nums[mid] == target) {
            index = mid;
            break;
        }
        else if (nums[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return index;
}
