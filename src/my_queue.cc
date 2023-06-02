#include "my_queue.h"

#include <iostream>

/*
 * (constructor)
 * Construct queue
 */
MyQueue::MyQueue()
{
    queue_vector.resize(max_size);
    q_size = 0;
    head = 0;
    tail = 0;
}

/*
 * empty
 * Test wether container is empty
 */
bool MyQueue::empty()
{
    bool is_empty;

    is_empty = (q_size == 0) ? true : false;

    return is_empty;
}

/*
 * size
 * Return size
 */
int MyQueue::size()
{
    return q_size;
}

/*
 * front
 * Access next element
 */
int MyQueue::front()
{
    return queue_vector[head];
}

/*
 * back
 * Access last element
 */
int MyQueue::back()
{
    return queue_vector[tail - 1];
}

/*
 * enqueue
 * Insert element
 */
void MyQueue::enqueue(int elem)
{
    queue_vector[tail] = elem;

    if (tail == max_size) {
        tail = 0;
    }
    else {
        tail++;
    }

    q_size++;
}

/*
 * dequeue
 * Remove next element
 */
int MyQueue::dequeue()
{
    int elem = queue_vector[head];

    if (head == max_size) {
        head = 0;
    }
    else {
        head++;
    }

    q_size--;

    return elem;
}
