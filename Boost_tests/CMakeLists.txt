project(Boost_tests)

# set(Boost_USE_STATIC_LIBS OFF)
set(BOOST_ROOT ${CMAKE_SOURCE_DIR}/shared/lib/boost/default)
find_package(Boost REQUIRED ALL)
# find_package(Boost 1.90 REQUIRED COMPONENTS ALL PATHS /usr/local)

add_executable(boost_test_1 boost_test_1.cpp)
target_link_libraries(
        boost_test_1
        PRIVATE Boost::headers # Boost::boost
)

add_executable(boost_test_2 boost_test_2.cpp)
target_link_libraries(
        boost_test_2
        PRIVATE Boost::regex
)

add_executable(Boost_tests_run foo_test.cpp)
target_link_libraries(
        Boost_tests_run
        PRIVATE Boost::unit_test_framework
)

enable_testing()
add_test(Boost_tests Boost_tests_run)
