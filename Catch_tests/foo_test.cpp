#include <catch2/catch_test_macros.hpp>

TEST_CASE("FooTest", "[Test1]") {
    CHECK(true);
    REQUIRE(1 == 1);
}
