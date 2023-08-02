#include "my_quick_sort.h"

#include <iostream>
#include <algorithm>

void my_quick_sort(void* base, size_t nums, size_t size)
{
    // implement sort
    return;
}

int values[] = {40, 10, 100, 90, 20, 25};

int compare (const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n;

    qsort(values, 6, sizeof(int), compare);

    for (n = 0; n < 6; n++) {
        std::cout << values[n] << " ";
    }

    return 0;
}
