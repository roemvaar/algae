/**
 * Stack implementation in C
 *
 */

#ifndef INCLUDE_STACK_H_
#define INCLUDE_STACK_H_

#include "stdbool.h"

#include "linked_list.h"

typedef struct stack {
    size_t size;
    int data[10];
} Stack;

/**
 * create_stack
 */
Stack *stack_create(size_t size);

/**
 * pop
 */
int stack_pop(Stack *stack);

/**
 * push
 */
bool stack_push(Stack *stack, int data);

/**
 * peek
 */
int stack_peek(const Stack *stack);

/**
 * stack_is_empty
 * 
 * check if the stack is empty
 * 
 * return:
 * 0 - if stack is empty
 * 1 - otherwise
 */
bool stack_is_empty(const Stack *stack);

#endif /* INCLUDE_STACK_H_ */
