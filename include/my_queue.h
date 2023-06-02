#ifndef MY_QUEUE_H_
#define MY_QUEUE_H_

/*
 * Queues are a type of container adaptor, specifically
 * designed to operate in a FIFO context (first-in first out),
 * where elements are inserted into one end of the container
 * and extracted from the other.
 * 
 * Queues are implemented as container adaptors, which are
 * classes that use an encapsulated object of a specific
 * container class as its underlying container, providing a
 * specific set of member functions to access its elements.
 * Elements are pushed into the "back" of the queue and popped
 * from its "front".
 * 
 * The underlying container shall support the following operations:
 * empty, size, front, back, push_back, pop_front.
 * 
 * For this implemenation std::vector<int> is used.
 */

#include <vector>

class MyQueue
{
public:
    MyQueue();
    bool empty();
    int size();
    int front(); 
    int back();
    void enqueue(int elem);
    int dequeue();
private:
    std::vector<int> queue_vector;
    int q_size;
    int head;
    int tail;
    const int max_size = 100;
};

#endif // MY_QUEUE_H_
