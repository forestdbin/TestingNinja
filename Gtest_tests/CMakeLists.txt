project(Gtest_tests)

set(gtest_build_samples ON CACHE BOOL "build GoogleTest samples")
add_subdirectory(
        ${CMAKE_SOURCE_DIR}/shared/source/googletest
        ${CMAKE_BINARY_DIR}/googletest
)

add_executable(Gtest_tests_run foo_test.cpp)
target_link_libraries(
        Gtest_tests_run
        PRIVATE GTest::gtest_main
)

# include(CTest)
enable_testing()
# add_test(Gtest_tests Gtest_tests_run)
include(GoogleTest)
gtest_discover_tests(Gtest_tests_run)
