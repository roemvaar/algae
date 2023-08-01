#include "my_binary_search.h"

#include <iostream>
#include <vector>


/*
 * The elements are compared using operator "<"
 * template< class ForwardIt, class T>
 * constexpr bool binary_search( ForwardIt first, ForwardIt last,
 *                               const T& value );
 */
bool binary_search(std::vector<int>& nums, int target)
{
    int n = nums.size();

    if (n == 0) {
        return false;
    }

    int left = 0;
    int right = n - 1;
    int found = false;
    
    while (left <= right) {
        int mid = ((right - left) / 2) + left;

        if (nums[mid] == target) {
            found = true;
            break;
        }
        else if (nums[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return found;
}

/*
 * The elements are compared using "comp"
 * template< class ForwardIt, class T>
 * constexpr bool binary_search( ForwardIt first, ForwardIt last,
 *                               const T& value );
 */
