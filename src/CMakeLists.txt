set(SOURCES
    binary_search.c
    bubble_sort.c
    insertion_sort.c
    linked_list.c
    selection_sort.c
    utils.c
    queue.c
)

add_library(algae STATIC
    ${SOURCES}
)

target_include_directories(algae PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)