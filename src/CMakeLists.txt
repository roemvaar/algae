cmake_minimum_required(VERSION 3.5)
project(src)
set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    my_binary_search.cc
)

add_executable(${PROJECT_NAME}
    my_binary_search.cc
)

add_library(${CMAKE_PROJECT_NAME} STATIC ${SOURCES})
