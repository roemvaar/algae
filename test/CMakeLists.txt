add_executable(unittest
    unittest_main.c
)

target_link_libraries(unittest
    algae
    Unity
)

add_test(unittest unittest)
