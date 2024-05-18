cmake_minimum_required(VERSION 3.5)
project(src)

set(SOURCES
    bubble_sort.c
    unity_main.c   
)

add_executable(${PROJECT_NAME}
    bubble_sort.c
    unity_main.c
)

add_library(${CMAKE_PROJECT_NAME} STATIC ${SOURCES})
