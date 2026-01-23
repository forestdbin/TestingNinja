#define BOOST_TEST_MODULE Foo Test
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(Test1) {
    BOOST_CHECK(true);
    BOOST_TEST(1 == 1);
}
