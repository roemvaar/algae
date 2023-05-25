#include "my_binary_search.h"

#include <iostream>
#include <vector>

int binary_search(std::vector<int>& nums, int target)
{
    int n = nums.size();
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

int main()
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 22;
    int index;

    index = binary_search(nums, target);

    std::cout << "Target at: " << index << " index" << std::endl;

    return 0;
}
