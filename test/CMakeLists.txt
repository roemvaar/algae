cmake_minimum_required(VERSION 3.5)
project(unit_test)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add a testing executable
add_executable(${PROJECT_NAME}
    my_bfs_unittest.cc
    my_binary_search_unittest.cc
    my_dfs_unittest.cc
    my_graph_unittest.cc
    my_hash_table_unittest.cc
    my_heap_unittest.cc
    my_linked_list_unittest.cc
    my_merge_sort_unittest.cc
    my_queue_unittest.cc
    my_quick_sort_unittest.cc
    my_stack_unittest.cc
    my_tree_unittest.cc
    my_trie_unittest.cc
    my_vector_unittest.cc
)

target_link_libraries(${PROJECT_NAME}
    algorithms_and_data_structures
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
add_test(test_all ${PROJECT_NAME})
