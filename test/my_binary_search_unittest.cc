#include "my_binary_search.h"

#include <gtest/gtest.h>

namespace {

// Tests for empty array
TEST(MyBinarySearch, EmptyArray)
{
    std::vector<int> nums;
    int target = 10;
    int index;

    index = binary_search(nums, target);

    EXPECT_EQ(-1, index);
}

// Tests for element not found in the array
TEST(MyBinarySearch, NotFound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = -13;
    int index;

    index = binary_search(nums, target);

    EXPECT_EQ(-1, index);
}

// Tests for unsuccesful search on left bound
TEST(MyBinarySearch, UnsuccesfulLeftBound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 4;
    int index;

    index = binary_search(nums, target);

    EXPECT_EQ(-1, index);
}

// Tests for unsuccesful search on right bound
TEST(MyBinarySearch, UnsuccesfulRightBound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 23;
    int index;

    index = binary_search(nums, target);

    EXPECT_EQ(-1, index);
}

// Tests for succesful search on left bound
TEST(MyBinarySearch, SuccesfulLeftBound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 5;
    int index;

    index = binary_search(nums, target);

    EXPECT_EQ(0, index);
}

// Tests for succesful serach on right bound
TEST(MyBinarySearch, SuccesfulRightBound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 15;
    int index;

    index = binary_search(nums, target);

    EXPECT_EQ(4, index);
}

// Tests for element successful on middle

// Tests for element succesful on middle greater than given number

// Tests for element succesful on middle lesser than given number

// Tests for an element from the middle cannot be found, for example 5 in [1, 2, 6, 10]

// Tests for the array contains duplicate values, for example 3 in [1, 2, 3, 3, 3, 3, 3, 3, 3]

}   // namespace
