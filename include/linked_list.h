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


typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct linked_list {
    struct node *head;
} LinkedList;

/**
 * create_list
 * 
 * allocates memory and initializes a new LinkedList
 * 
 * return:
 * list - if list was created succesfuly
 * NULL - if error
 */
LinkedList *create_list(void);

/**
 * is_empty
 * 
 * check if the list is empty by checking head
 * 
 * return:
 * 0 - if list is empty
 * 1 - otherwise
 */
bool is_empty(const LinkedList *list);

/**
 * prepend
 * 
 * inserts a new node at the beginning (before head)
 * 
 * return:
 * 0 - if node was prepended succesfuly
 * 1 - error
 */
bool prepend(LinkedList *list, int data);

/**
 * append
 * 
 * inserts a new node at the end (after tail)
 */
bool append(LinkedList *list, int data);

/**
 * insert_after
 * 
 * inserts a new node at the end (after tail)
 */
bool insert_after(LinkedList *list, Node *node, int data);

/**
 * delete_node
 * 
 * deletes a specific node from the list
 */
void delete_node(LinkedList *list, Node *node);

/**
 * print_list
 * 
 * traverses and print the data of each node
 */
void print_list(const LinkedList *list);

#endif  /* SRC_LINKED_LIST_H_ */
