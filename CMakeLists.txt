project(algae C)
cmake_minimum_required(VERSION 3.5)

set(TARGET_GROUP production CACHE STRING "Group to build")

include_directories(include)
add_subdirectory(src)

if(TARGET_GROUP STREQUAL production)
    add_subdirectory(main)
elseif(TARGET_GROUP STREQUAL test)
    enable_testing()
    include(CTest)
    include_directories(Unity/src)
    add_subdirectory(test)
    add_subdirectory(Unity)
else()
    message(FATAL_ERROR "Given TARGET_GROUP unknown")
endif()
