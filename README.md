# algae: algorithms and data structures in C

Personal implementation of core algorithms and data structures in C.

## Build

First, clone the repo to your computer:

```
$ git clone --recurse-submodules https://github.com/roemvaar/algae.git
```

Build:

```
$ mkdir -p build && cd build
$ cmake ..
$ make
```

## Test

Move to the `build` directory.

```
$ cmake .. -DTARGET_GROUP=test
$ make
$ ctest --verbose
```

## Core Data Structures, Algorithms, and Concepts

**Data Structures:**

- [ ] Linked Lists
- [ ] Trees, Tries, & Graphs
- [ ] Stacks & Queues
- [ ] Heaps
- [ ] Vectors
- [ ] Hash Tables

**Algorithms:**

- [ ] Bread-First Search
- [ ] Depth-First Search
- [ ] Binary Search
- [ ] Merge Sort
- [ ] Quick Sort

**Concepts:**

- [ ] Bit Manipulation
- [ ] Memory (Stack vs Heap)
- [ ] Recursion
- [ ] Dynamic Programming
- [ ] Big O Time & Space
