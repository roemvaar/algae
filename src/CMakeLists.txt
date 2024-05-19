cmake_minimum_required(VERSION 3.5)
project(src)

set(SOURCES
    binary_search.c
    bubble_sort.c
    insertion_sort.c
    linked_list.c
    main.c
    utils.c
)

add_executable(main
    binary_search.c
    bubble_sort.c
    insertion_sort.c
    linked_list.c
    main.c
    utils.c
)

add_library(${CMAKE_PROJECT_NAME} STATIC ${SOURCES})
