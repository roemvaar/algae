#include <stdio.h>

#include "bubble_sort.h"
#include "linked_list.h"
#include "utils.h"


void test_linked_lists(void)
{
    LinkedList *l;
    int res;

    printf("Creating Linked List...\n");

    l = create_list();

    printf("Is list empty?... ");
    
    res = is_empty(l);
    if (res == 0) {
        printf("yes!\n");
    } else {
        printf("no!\n");
    }

    printf("Prepending the following element to the list: 10\n");
    prepend(l, 10);

    printf("Is list empty?... ");
    
    res = is_empty(l);
    if (res == 0) {
        printf("yes!\n");
    } else {
        printf("no!\n");
    }

    printf("Prepending the following element to the list: 55, 45\n");
    prepend(l, 55);
    prepend(l, 45);

    print_list(l);

    // Append
    append(l, 103);
    append(l, 25);
    append(l, 14);

    print_list(l);
}


void test_sort(void)
{
    int nums[] = {6, 4, 10, 3, 5, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    // Unsorted array
    print_array(nums, size);

    bubble_sort(nums, size);

    // Sorted array
    print_array(nums, size);
}


int main()
{
    printf("algae: algorithms and data structures in C\n");

    test_linked_lists();

    return 0;
}
