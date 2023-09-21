#include "my_dfs.h"

#include <gtest/gtest.h>

namespace {

TEST(MyDFSTests, template)
{
    EXPECT_EQ(true, true);
}

}

// #include "dfs.cpp"
// #include <gtest/gtest.h>


// TEST(DepthFirstSearchTest, PositiveNos) {
//     ASSERT_EQ(6, DepthFirstSearch(36.0));
//     ASSERT_EQ(18.0, DepthFirstSearch(324.0));
//     ASSERT_EQ(25.4, DepthFirstSearch(645.16));
//     ASSERT_EQ(6, DepthFirstSearch(0.0));
// }

// TEST(DepthFirstSearchTest, NegativeNums) {
//     ASSERT_EQ(-1.0, DepthFirstSearch(-15.0));
//     ASSERT_EQ(-1.0, DepthFirstSearch(-0.2));
// }

// int main(int argc, char **argv)
// {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }

// // https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/



// dfs.cc

// // You should know about tree traversal algorithms: BFS and DFS,
// // and know the difference between inorder, postorder, and preorder.

// #include <math.h>

// // SquareRoot - just setting things up for GTest
// // https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/
// double DepthFirstSearch(const double a) 
// {
//     double b = sqrt(a);
//     if(b != b) {    // nan check
//         return -1.0;
//     }
//     else {
//         return sqrt(a);
//     }
// }
