/**
 * Linked List implementation in C
 *
 * Basic linked list operations:
 *  - Tracking the head element
 *  - Traversing a list
 *  - Inserting and deleting elements
 *
 */

#ifndef INCLUDE_LINKED_LIST_H_
#define INCLUDE_LINKED_LIST_H_

#include <stdbool.h>
#include <stdio.h>

/* An element in a singly linked list */
struct list_node {
    int data;
    struct list_node *next;
};

/**
 * list_create
 * 
 * allocates memory and initializes a new LinkedList
 * 
 * return:
 * list - if list was created succesfuly
 * NULL - if error
 */
struct list_node *list_create(void);

/**
 * list_empty
 * 
 * check if the list is empty by checking head
 * 
 * return:
 * 0 - if list is empty
 * 1 - otherwise
 */
bool list_empty(const struct list_node *list);

/**
 * list_prepend
 * 
 * inserts a new node at the beginning (before head)
 * 
 * return:
 * 0 - if node was prepended succesfuly
 * 1 - error
 */
bool list_prepend(struct list_node *list, int data);

/**
 * list_append
 * 
 * inserts a new node at the end (after tail)
 */
bool list_append(struct list_node *list, int data);

/**
 * list_insert_after
 * 
 * inserts a new node after `node`
 */
bool list_insert_after(struct list_node *list, struct list_node *node, int data);

/**
 * list_delete_node
 * 
 * deletes a specific node from the list
 */
void list_delete_node(struct list_node *list, struct list_node *node);

/* Deleting an element */
// void list_delete_by_key(struct list_node *list, int key);

/**
 * list_traverse
 * 
 * traverses and print the data of each node
 */
void list_traverse(const struct list_node *list);

/* Searching a linked list
 * Finds the first element with key k in list L by a simple linear search, returning
 * a pointer to this element. Return NULL if key is not found in L.
 */
struct list_node *list_search(struct list_node *head, int key);

#endif  /* SRC_LINKED_LIST_H_ */
