project(Catch_tests)

# add_subdirectory(
#         ${CMAKE_SOURCE_DIR}/shared/source/Catch2
#         ${CMAKE_BINARY_DIR}/Catch2
# )
set(CATCH2_ROOT ${CMAKE_SOURCE_DIR}/shared/lib/Catch2/default)
find_package(Catch2 3 REQUIRED)

add_executable(Catch_tests_run foo_test.cpp)
target_link_libraries(
        Catch_tests_run
        PRIVATE Catch2::Catch2WithMain
)

include(Catch)
catch_discover_tests(Catch_tests_run)
