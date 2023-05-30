#ifndef MY_STACK_H_
#define MY_STACK_H_

/* 
 * Stacks are a type of container adaptor, specifically
 * designed to operate in a LIFO context (last-in first-out),
 * where elements are inserted and extracted only from one
 * end of the container.
 * 
 * Stacks are implemented as container adapter, which are
 * classes that use an encapsulated object of a specific
 * container class as its underlying container.
 * 
 * The underlying container may be any standard container
 * class templates. The container shall support the following
 * operations: empty, size, back, push_back, pop_back.
 *  
 * For this implemenation std::vector<int> is used.
 */

#include <vector>

class MyStack
{
public:
    MyStack();
    bool empty();
    int size();
    int top();
    void push(int elem);
    int pop();
private:
    std::vector<int> stack_vector;
    int top_elem;
    const int max_size = 100;
};

#endif // MY_STACK_H_
