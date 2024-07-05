#include <stdlib.h>
#include "linked_list.h"


element_t create_element(int key);


void list_insert(element_t *list_head, int data)
{
    return;
}

/**
 * list_prepend
 * 
 * Given an element x whose key attribute has already been set,
 * list_prepend procedure adds x to the front of the linked list.
 */
void list_prepend(element_t *list_head, int data)
{
    element_t new_head = create_element(data);

    new_head.next = list_head;
    list_head = new_head;
}

void list_delete(element_t *list_head, int data)
{
    return;
}

/*
    returns:
    0 - not empty
    1 - empty
 */
int list_empty(element_t *list_head)
{
    int empty;

    if (list_head == NULL) {
        empty = 1;
    } else {
        empty = 0;
    }

    return empty;
}

/**
 * list_search
 */
element_t *list_search(element_t *list_head, int k)
{
    element_t *element = list_head;

    while (element == NULL && element != k) {
        element = element->next;
    }

    return element;
}

element_t create_element(int key)
{
    element_t element = malloc(sizeof(element_t));

    if (element == NULL) {
        fprintf(stderr, "linked_list: error creating new element");
        return NULL;
    }

    return element;
}
