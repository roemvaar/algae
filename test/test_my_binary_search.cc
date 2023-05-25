#include <gtest/gtest.h>
#include "my_binary_search.h"

TEST(CoreTest, BasicAssertions) {
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7 * 6, 42);
}

class BinSearchTests : public ::testing::Test
{
};

TEST_F(BinSearchTests, notFound )
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = -13;
    int index;

    index = binary_search(nums, target);

    EXPECT_EQ(-1, index );
}
