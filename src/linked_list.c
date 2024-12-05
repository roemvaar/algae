/** linked_list.c
 * 
 * Linked List implementation in C
 * 
 * A linked list is a data structure in which the objects are arranged in a
 * linear order. This is an implementation of a singly linked list.
 */

#include "linked_list.h"

#include <stdbool.h>
#include <stdlib.h>


struct list_node *list_create_node(int data)
{
    struct list_node *node;

    node = malloc(sizeof(struct list_node));
    if (node == NULL) {
        return NULL;    // Return NULL if memory allocation fails
    }

    node->data = data;
    node->next = NULL;

    return node;
}

bool list_empty(const struct list_node *list)
{
    return list == NULL;   // Return true if list is empty (NULL), false otherwise
}

/* Inserts a new node at the beginning (before head) */
bool list_prepend(struct list_node **list, struct list_node *node)
{
    if (node == NULL) {
        return false;
    }

    node->next = *list;     // Set the node's next to the current head
    *list = node;           // Update the head to point to the new node

    return true;
}

// bool list_append(struct list_node *list, int data)
// {
//     struct list_node *iter;
//     struct list_node *new;

//     iter = list;

//     while (iter->next != NULL) {
//         iter = iter->next;
//     }

//     new = create_node(data);
//     if (new == NULL) {
//         fprintf(stderr, "[LinkedList]: Error appending node\n");
//         return 1;
//     }

//     iter->next = new;

//     return 0;
// }


// bool list_insert_after(struct list_node *list, struct list_node *node, int data)
// {
//     struct list_node *iter;
//     struct list_node *new;

//     // TODO(roemvaar): Do we need to give the user "access" to individual nodes?
//     iter = list;

//     while (iter != node) {
//         iter = iter->next;
//     }

//     new = create_node(data);
//     if (new == NULL) {
//         fprintf(stderr, "[LinkedList]: Error inserting node\n");
//         return 1;
//     }

//     new->next = iter->next;
//     iter->next = new;

//     return 0;
// }


// void list_delete_node(struct list_node *list, struct list_node *node)
// {
//     struct list_node *iter;

//     iter = list;

//     while (iter->next != NULL && iter->next != node) {
//         iter = iter->next;
//     }

//     iter->next = node->next;
//     free(node);
// }

/* Traversing the list (printing the elements) */
void list_traverse(struct list_node *list)
{
    struct list_node *iter = list;

    while (iter != NULL) {
        printf("%d  ", iter->data);
        iter = iter->next;
    }

    printf("\n");
}
