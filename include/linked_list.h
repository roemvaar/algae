/* Linked List implementation in C
 *
 * Basic linked list operations:
 *  - Tracking the head element
 *  - Traversing a list
 *  - Inserting and deleting elements
 *
 */

#ifndef SRC_LINKED_LIST_H_
#define SRC_LINKED_LIST_H_

#include <stdio.h>

typedef struct IntElement {
    struct IntElement *next;
    int data;
} element_t;

/* list_insert
 */
void list_insert(element_t *list_head, int data);

/* list_add_tail
 */
void list_add_tail(element_t *list_head, int data);

/* list_delete
 */
void list_delete(element_t *list_head, int data);

/* list_empty 
 */
void list_empty(element_t *list_head);

/* list_search
 */
element_t *list_search(element_t *list_head, int k);

#endif  /* SRC_LINKED_LIST_H_ */
