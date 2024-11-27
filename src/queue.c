#include "queue.h"


queue *queue_create(size_t size, size_t element_size)
{
    queue *q;

    q = malloc(sizeof(queue));

    if (check_nullptr(q, QUEUE_ERROR_MALLOC)) {
        return NULL;
    }

    q->elements = malloc(size * sizeof(void *));

    if (check_nullptr(q->elements, QUEUE_ERROR_MALLOC)) {
        free(q);
        return NULL;
    }

    for (size_t i = 0; i < size; i++) {
        q->elements[i] = malloc(element_size);

        if (check_nullptr(q->elements[i], QUEUE_ERROR_MALLOC)) {
            free(q);
            free(q->elements);

            for (size_t j = 0; j < i; j++) {
                free(q->elements[j]);
            }
        }
    }

    q->head = 0;
    q->tail = 0;
    q->full = false;
    q->empty = true;
    q->element_size = element_size;
    q->size = size;

    return q;
}


void queue_destroy(queue **q)
{
    if (check_nullptr(q, QUEUE_ERROR_NULLPTR)) {
        return;
    }

    if (check_nullptr(*q, QUEUE_ERROR_NULLPTR)) {
        return;
    }

    for (size_t i = 0; i < (*q)->size; i++) {
        free(*((*q)->elements+i));
    }

    free((*q)->elements);
    free(*q);

    *q = NULL;
}
