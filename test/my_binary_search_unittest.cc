#include "my_binary_search.h"

#include <gtest/gtest.h>

namespace {

// Tests for empty array
TEST(MyBinarySearch, EmptyArray)
{
    std::vector<int> nums;
    int target = 10;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(false, exists);
}

// Tests for element not found in the array
TEST(MyBinarySearch, NotFound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = -13;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(false, exists);
}

// Tests for unsuccesful search on left bound
TEST(MyBinarySearch, UnsuccesfulLeftBound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 4;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(false, exists);
}

// Tests for unsuccesful search on right bound
TEST(MyBinarySearch, UnsuccesfulRightBound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 23;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(false, exists);
}

// Tests for succesful search on left bound
TEST(MyBinarySearch, SuccesfulLeftBound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 5;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(true, exists);
}

// Tests for succesful search on right bound
TEST(MyBinarySearch, SuccesfulRightBound)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 15;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(true, exists);
}

// Tests for element successful on middle
TEST(MyBinarySearch, SuccesfulMiddle)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22, 23};
    int target = 12;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(true, exists);
}

// Tests for element succesful on middle + 1 with even array size
TEST(MyBinarySearch, SuccesfulMiddleRight)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22, 23, 35};
    int target = 15;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(true, exists);
}

// Tests for element succesful on middle + 1 with even array size
TEST(MyBinarySearch, SuccesfulMiddleLeft)
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22, 23, 35};
    int target = 12;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(true, exists);
}

// Tests for an element from the middle cannot be found, for example 5 in [1, 2, 6, 10]
TEST(MyBinarySearch, MiddleCannotBeFound)
{
    std::vector<int> nums{1, 2, 6, 10};
    int target = 5;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(false, exists);
}

// Tests for succesful in the array contains duplicate values, for example 3 in [1, 2, 3, 3, 3, 3, 3, 3, 3]
TEST(MyBinarySearch, SuccesfulDuplicates)
{
    std::vector<int> nums{1, 2, 3, 3, 3, 3, 3, 3, 3};
    int target = 3;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(false, exists);
}

// Tests for unsuccesful in the array contains duplicate values, for example 4 in [1, 2, 3, 3, 3, 3, 3, 3, 3]
TEST(MyBinarySearch, UnsuccesfulDuplicates)
{
    std::vector<int> nums{1, 2, 3, 3, 3, 3, 3, 3, 3};
    int target = 4;
    int exists;

    exists = binary_search(nums, target);

    EXPECT_EQ(false, exists);
}

}   // namespace
