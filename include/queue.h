#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    bool full;
    bool empty;
    size_t tail;
    size_t head;
    size_t size;
    size_t element_size;
    void **elements;
} queue;

queue *queue_create(size_t size, size_t element_size);
queue queue_destroy(queue **q);
bool queue_push(queue *q, void *element);
void *queue_pop(queue *q);
void *queue_front(queue *q);
