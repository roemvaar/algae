#include "stack.h"

#include "stdbool.h"


Stack *stack_create(size_t size)
{
    Stack *s;

    s = malloc(sizeof(Stack));
    if (s == NULL) {
        fprintf(stderr, "[Stack]: Error creating linked list\n");
        return NULL;
    }

    return s;
}


int stack_pop(Stack *stack)
{

}

/**
 * push
 */
bool stack_push(Stack *stack, int data);

/**
 * peek
 */
int stack_peek(const Stack *stack)
{
}

/**
 * stack_is_empty
 * 
 * check if the stack is empty
 * 
 * return:
 * 0 - if stack is empty
 * 1 - otherwise
 */
bool stack_is_empty(const Stack *stack)
{
    return true;
}
