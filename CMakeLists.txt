cmake_minimum_required(VERSION 3.30)

project(testing)

set(CMAKE_CXX_STANDARD 20)

add_executable(foo_run main.cpp)

add_subdirectory(Gtest_tests)
add_subdirectory(Boost_tests)
add_subdirectory(Catch_tests)
