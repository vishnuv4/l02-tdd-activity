# Add target for the library
add_library(multiplexer src/multiplexer.c)
target_include_directories(multiplexer PUBLIC inc)

# Add the unit test
add_unit_test(
    TARGET_NAME
        test_multiplexer
    SOURCE_FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/test/test_multiplexer.c
)
target_link_libraries(test_multiplexer PUBLIC multiplexer)
