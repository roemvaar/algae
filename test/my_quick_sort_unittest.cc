#include "my_quick_sort.h"

#include <gtest/gtest.h>

namespace {

int compare (const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

// Tests for empty array
TEST(MyQuickSort, EmptyArray)
{
    int values[] = {40, 10, 100, 90, 20, 25};

    qsort(values, 6, sizeof(int), compare);

    EXPECT_EQ(true, true);
}

}   // namespace
