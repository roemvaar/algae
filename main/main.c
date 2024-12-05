#include <stdio.h>

#include "sort.h"
#include "linked_list.h"
#include "utils.h"


void test_linked_lists(void)
{
    struct list_node *list = NULL;
    int res;

    printf("Creating Linked List...\n");

    printf("Is list empty?... ");
    res = list_empty(list);
    if (res == true) {
        printf("yes!\n");
    } else {
        printf("no!\n");
    }
    list_traverse(list);

    printf("Prepending the following element to the list: 10\n");
    struct list_node *node = list_create_node(10);
    if (node != NULL) {
        list_prepend(&list, node);
    }

    printf("Is list empty?... ");
    res = list_empty(list);
    if (res == true) {
        printf("yes!\n");
    } else {
        printf("no!\n");
    }
    list_traverse(list);

    printf("Prepending the following element to the list: 55, 45\n");
    struct list_node *node_1 = list_create_node(55);
    if (node_1 != NULL) {
        list_prepend(&list, node_1);
    }

    struct list_node *node_2 = list_create_node(45);
    if (node_2 != NULL) {
        list_prepend(&list, node_2);
    }

    res = list_empty(list);
    if (res == true) {
        printf("yes!\n");
    } else {
        printf("no!\n");
    }
    list_traverse(list);
}

// void test_sort(void)
// {
//     int nums[] = {6, 4, 10, 3, 5, 2, 1};
//     int size = sizeof(nums) / sizeof(nums[0]);

//     // Unsorted array
//     print_array(nums, size);

//     // bubble_sort(nums, size);
//     selection_sort(nums, size);

//     // Sorted array
//     print_array(nums, size);
// }


int main(void)
{
    printf("algae: algorithms and data structures in C\n");

    test_linked_lists();

    return 0;
}
