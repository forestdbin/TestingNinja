# add_subdirectory(benchmark)
# set(benchmark_DIR ${CMAKE_SOURCE_DIR}/shared/lib/benchmark/lib/cmake/benchmark)
set(benchmark_ROOT ${CMAKE_SOURCE_DIR}/shared/lib/benchmark)
find_package(benchmark REQUIRED)

add_executable(
        foo_benchmark
        foo.cpp
)
target_link_libraries(
        foo_benchmark
        benchmark::benchmark
)
