#include "my_stack.h"

#include <iostream>

/*
 * (constructor)
 * Construct stack
 */
MyStack::MyStack()
{
    stack_vector.resize(max_size);
    top_elem = -1;
}

/*
 * empty
 * Test wether container is empty
 */
bool MyStack::empty()
{
    bool is_empty;

    if (top_elem < 0) {
        is_empty = true;
    }
    else {
        is_empty = false;
    }

    return is_empty;
}

/*
 * size
 * Return size
 */
int MyStack::size()
{
    return top_elem;
}

/*
 * top
 * Access next element
 */
int MyStack::top()
{
    return stack_vector[top_elem];
}

/*
 * push
 * Insert element
 */
void MyStack::push(int elem)
{
    if (top_elem == max_size) {
        std::cout << "Error - Stack Overflow" << std::endl;
    }
    stack_vector.push_back(elem);
    top_elem++;
}

/*
 * pop
 * Remove top element
 */
int MyStack::pop()
{
    int elem = -1;

    if (this->empty()) {
        std::cerr << "Error - Stack Underflow" << std::endl;
    }
    else {
        elem = stack_vector[top_elem];
        top_elem--;
    }

    return elem;
}
