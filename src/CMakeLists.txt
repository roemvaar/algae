set(SOURCES
    linked_list.c
)

add_library(algae STATIC
    ${SOURCES}
)

target_include_directories(algae PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)