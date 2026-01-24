#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

TEST_CASE("FooTest") {
    CHECK(true);
    REQUIRE(1 == 1);
}
