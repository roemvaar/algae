#include <iostream>
#include <stack>
#include <vector>

#include "my_binary_search.h"
#include "my_stack.h"

int main_binary_search();
int main_stack();
int main_stack_stl();
int main_queue();

int main_binary_search()
{
    std::vector<int> nums{5, 8, 10, 12, 15, 22};
    int target = 22;
    int index;

    index = binary_search(nums, target);

    std::cout << "Target at: " << index << " index" << std::endl;

    return 0;
}

int main_stack()
{
    MyStack stack;

    stack.push(21);
    stack.push(22);
    stack.push(23);
    stack.push(24);
    stack.push(25);

    int num = 0;
    stack.push(num);
    stack.pop();
    stack.pop();
    stack.pop();

    std::cout << "My Stack: ";

    while(!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    std::cout << std::endl;

    return 0;
}

int main_stack_stl()
{
    std::stack<int> stack;

    stack.push(21);
    stack.push(22);
    stack.push(23);
    stack.push(24);
    stack.push(25);

    int num = 0;
    stack.push(num);
    stack.pop();
    stack.pop();
    stack.pop();

    std::cout << "STL Stack: ";

    while(!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    std::cout << std::endl;

    return 0;
}

int main_queue()
{
    std::cout << "Main queue" << std::endl;
}

int main()
{
    std::cout << "Algorithms and Data Structures Implementation in C++" << std::endl;

    // main_binary_search();
    // main_stack();
    // main_stack_stl();
    main_queue();

    return 0;
}
