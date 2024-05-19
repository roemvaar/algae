# Algorithms and Data Structures

Personal implementation of core algorithms and data structures in C.

## Build

```
$ cmake -B build
$ cmake --build build
```

## Test

Building using CMake is not working at the moment, instead use:

```
$ gcc -Iinclude/ -IUnity/src src/binary_search.c test/unittest_main.c src/utils.c ./Unity/src/unity.c -o unittest_main
```

<!-- 
```
$ cd build
$ ctest
``` -->

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
