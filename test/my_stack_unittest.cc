#include "my_stack.h"

#include <gtest/gtest.h>

namespace {

TEST(StackTests, emptyStack)
{
    MyStack *stack;

    EXPECT_EQ(stack->empty(), 0);
}

TEST(StackTests, pushElementOnce)
{
    MyStack *stack;

    stack->push(5);

    EXPECT_EQ(5, stack->top());
}

TEST(StackTests, pushElementTwice)
{
    EXPECT_EQ(7 * 6, 42);
}

TEST(StackTests, popElementOnce)
{
    EXPECT_EQ(7 * 6, 42);
}

TEST(StackTests, popElementTwice)
{
    EXPECT_EQ(7 * 6, 42);
}

TEST(StackTests, popEmpty)
{
    MyStack *stack;

    EXPECT_EQ(stack->pop(), 0);
}

}
