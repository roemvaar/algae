#include "linked_list.h"

void list_add(element_t *list_head, int data)
{
    return;
}

void list_add_tail(element_t *list_head, int data)
{
    element_t *it = list_head;

    while (it->next != NULL) {
        it = it->next;
    }

    element_t last = malloc(sizeof(element_t));

    it->next = last;
    last->data = data;
    last->next = NULL;
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
        empty = 1
    } else {
        empty = 0;
    }

    return ret;
}

void list_search(element_t *list_head)
{
    return;
}
