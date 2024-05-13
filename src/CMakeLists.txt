cmake_minimum_required(VERSION 3.5)
project(src)

set(SOURCES
    sorting.c
    main.c
)

add_executable(${PROJECT_NAME}
    sorting.c
    main.c
)

add_library(${CMAKE_PROJECT_NAME} STATIC ${SOURCES})
