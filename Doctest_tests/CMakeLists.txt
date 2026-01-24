project(Doctest_tests)

add_subdirectory(
        ${CMAKE_SOURCE_DIR}/shared/source/doctest
        ${CMAKE_BINARY_DIR}/doctest
)

add_executable(Doctest_tests_run foo_test.cpp)
target_link_libraries(
        Doctest_tests_run
        PRIVATE doctest::doctest
)

include(${CMAKE_SOURCE_DIR}/shared/source/doctest/scripts/cmake/doctest.cmake)
doctest_discover_tests(Doctest_tests_run)
