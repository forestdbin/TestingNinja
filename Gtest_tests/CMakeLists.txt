project(Gtest_tests)

set(gtest_build_samples ON CACHE BOOL "build GoogleTest samples")
add_subdirectory(
        ${CMAKE_SOURCE_DIR}/shared/source/googletest
        ${CMAKE_BINARY_DIR}/googletest
)

add_executable(foo_test_run foo_test.cpp)

target_link_libraries(
        foo_test_run
        PRIVATE GTest::gtest_main
)

# include(CTest)
enable_testing()
# add_test(foo_test foo_test_run)
include(GoogleTest)
gtest_discover_tests(foo_test_run)
