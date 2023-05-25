cmake_minimum_required(VERSION 3.5)
project(test)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add a testing executable
add_executable(${PROJECT_NAME}
    test_my_binary_search.cc
    test_main.cc
)

target_link_libraries(${PROJECT_NAME}
    algorithms_and_data_structures
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
add_test(test_all ${PROJECT_NAME})
