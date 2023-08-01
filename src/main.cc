#include <algorithm>
#include <iostream>
#include <queue>

#include "my_queue.h"

void showq(std::queue<int> gq)
{
    std::queue<int> g = gq;

    while (!g.empty()) {
        std::cout << " " << g.front();
        g.pop();
    }
}

void show_queue(MyQueue queue)
{
    MyQueue q = queue;

    while (!q.empty()) {
        std::cout << " " << q.front();
        q.dequeue();
    }
}

int main_queue()
{
    std::cout << "Main queue" << std::endl;

    MyQueue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);

    std::cout << "The queue is:";
    show_queue(queue);
    std::cout << std::endl;
    std::cout << "queue.size(): " << queue.size() << std::endl;
    std::cout << "queue.front(): " << queue.front() << std::endl;
    std::cout << "queue.back(): " << queue.back() << std::endl;
    std::cout << "queue.dequeu() twice" << std::endl;
    queue.dequeue();
    queue.dequeue();
    std::cout << "Updated queue is:";
    show_queue(queue);
    std::cout << std::endl;

    return 0;
}

int main_queue_stl()
{
    std::cout << "Main queue STL" << std::endl;

    std::queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
    gquiz.push(40);
    gquiz.push(50);
 
    std::cout << "The queue gquiz is:";
    showq(gquiz);
    std::cout << std::endl;
    std::cout << "gquiz.size(): " << gquiz.size() << std::endl;
    std::cout << "gquiz.front(): " << gquiz.front() << std::endl;
    std::cout << "gquiz.back(): " << gquiz.back() << std::endl;
    std::cout << "gquiz.pop() twice" << std::endl;
    gquiz.pop();
    gquiz.pop();
    std::cout << "Updated queue gquiz is:";
    showq(gquiz);
    std::cout << std::endl;

    return 0;
}

int main_binary_search()
{
    std::vector<int> haystack {1,2,3,4,5,9};
    std::vector<int> needles {1,2,3};

    for (auto needle : needles) {
        std::cout << "Searching for " << needle << std::endl;

        if (std::binary_search(haystack.begin(), haystack.end(), needle)) {
            std::cout << "Found" << needle << "\n";
        }
        else {
            std::cout << "no dice!" << std::endl;
        }
    }
}

int main()
{
    std::cout << "Algorithms and Data Structures Implementation in C++" << std::endl;

    // main_queue();
    // main_queue_stl();

    main_binary_search();

    return 0;
}
