/**
 * Linked List implementation in C
 */

#include <stdbool.h>
#include <stdlib.h>

#include "linked_list.h"


static Node *create_node(int data);


LinkedList *create_list(void)
{
    LinkedList *list;

    list = malloc(sizeof(LinkedList));
    if (list == NULL) {
        fprintf(stderr, "[LinkedList]: Error creating linked list\n");
        return NULL;
    }

    return list;
}


bool is_empty(const LinkedList *list)
{
    int empty;

    if (list->head == NULL) {
        empty = 0;
    } else {
        empty = 1;
    }

    return empty;
}


bool prepend(LinkedList *list, int data)
{
    Node *new;
    
    new = create_node(data);
    if (new == NULL) {
        fprintf(stderr, "[LinkedList]: Error prepending node\n");
        return 1;
    }

    new->next = list->head;
    list->head = new;

    return 0;
}


bool append(LinkedList *list, int data)
{
    Node *iter;
    Node *new;

    iter = list->head;

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


bool insert_after(LinkedList *list, Node *node, int data)
{
    Node *iter;
    Node *new;

    // TODO(roemvaar): Do we need to give the user "access" to individual nodes?
    iter = list->head;

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


void delete_node(LinkedList *list, Node *node)
{
    Node *iter;

    iter = list->head;

    while(iter->next != NULL && iter->next != node) {
        iter = iter->next;
    }

    iter->next = node->next;
    free(node);
}


void print_list(const LinkedList *list)
{
    Node *iter = list->head;

    while (iter != NULL) {
        printf("%d\t", iter->data);
        iter = iter->next;
    }

    printf("\n");
}


static Node *create_node(int data)
{
    Node *node;

    node = malloc(sizeof(Node));
    if (node == NULL) {
        return NULL;
    }

    node->data = data;
    node->next = NULL;
}
