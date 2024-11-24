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


static struct list_node *create_node(int data);


struct list_node *create_list(void)
{
    struct list_node *list;

    list = malloc(sizeof(struct list_node));
    if (list == NULL) {
        fprintf(stderr, "[LinkedList]: Error creating linked list\n");
        return NULL;
    }

    return list;
}

/* Creating a linked list structure */
struct list_node *list_create(void) {
    // Allocate a dummy node for the head of the list
    struct list_node *list = (struct list_node *)malloc(sizeof(struct list_node));
    if (list == NULL) {
        return NULL;  // Return NULL if allocation fails
    }
    list->data = 0;  // Optionally initialize the data
    list->next = NULL;  // The list is empty initially
    return list;
}


bool list_empty(const struct list_node *list)
{
    int empty;

    if (list == NULL) {
        empty = 0;
    } else {
        empty = 1;
    }

    return empty;
}

/* Inserting an element (beginning) */
bool list_prepend(struct list_node *list, int data)
{
    struct list_node *new;
    
    new = create_node(data);
    if (new == NULL) {
        fprintf(stderr, "[LinkedList]: Error prepending node\n");
        return 1;
    }

    new->next = list;
    list = new;

    return 0;
}


bool list_append(struct list_node *list, int data)
{
    struct list_node *iter;
    struct list_node *new;

    iter = list;

    while (iter->next != NULL) {
        iter = iter->next;
    }

    new = create_node(data);
    if (new == NULL) {
        fprintf(stderr, "[LinkedList]: Error appending node\n");
        return 1;
    }

    iter->next = new;

    return 0;
}


bool list_insert_after(struct list_node *list, struct list_node *node, int data)
{
    struct list_node *iter;
    struct list_node *new;

    // TODO(roemvaar): Do we need to give the user "access" to individual nodes?
    iter = list;

    while(iter != node) {
        iter = iter->next;
    }

    new = create_node(data);
    if (new == NULL) {
        fprintf(stderr, "[LinkedList]: Error inserting node\n");
        return 1;
    }

    new->next = iter->next;
    iter->next = new;

    return 0;
}


void list_delete_node(struct list_node *list, struct list_node *node)
{
    struct list_node *iter;

    iter = list;

    while(iter->next != NULL && iter->next != node) {
        iter = iter->next;
    }

    iter->next = node->next;
    free(node);
}

/* Traversing the list (printing the elements) */
void list_traverse(const struct list_node *list)
{
    struct list_node *iter = list;

    while (iter != NULL) {
        printf("%d\t", iter->data);
        iter = iter->next;
    }

    printf("\n");
}


static struct list_node *create_node(int data)
{
    struct list_node *node;

    node = malloc(sizeof(struct list_node));
    if (node == NULL) {
        return NULL;
    }

    node->data = data;
    node->next = NULL;
}
