cmake_minimum_required(VERSION 3.5)
project(algorithms_and_data_structures)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

enable_testing()

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)
