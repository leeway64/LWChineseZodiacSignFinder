#include <Catch2/catch.hpp>

#include "../src/SignFinder_helpers.hpp"

TEST_CASE("Get zodiac sign", "[getZodiacSign]")
{
    REQUIRE(SignFinder_helpers::getZodiacSign(1960) == "Rat");
    REQUIRE(SignFinder_helpers::getZodiacSign(1961) == "Ox");
    REQUIRE(SignFinder_helpers::getZodiacSign(1926) == "Tiger");
    REQUIRE(SignFinder_helpers::getZodiacSign(1998) == "Tiger");
    REQUIRE(SignFinder_helpers::getZodiacSign(2022) == "Tiger");
    REQUIRE(SignFinder_helpers::getZodiacSign(2035) == "Rabbit");
    REQUIRE(SignFinder_helpers::getZodiacSign(1940) == "Dragon");
    REQUIRE(SignFinder_helpers::getZodiacSign(2037) == "Snake");
    REQUIRE(SignFinder_helpers::getZodiacSign(1930) == "Horse");
    REQUIRE(SignFinder_helpers::getZodiacSign(2039) == "Goat");
    REQUIRE(SignFinder_helpers::getZodiacSign(1944) == "Monkey");
    REQUIRE(SignFinder_helpers::getZodiacSign(1969) == "Rooster");
    REQUIRE(SignFinder_helpers::getZodiacSign(1945) == "Rooster");
    REQUIRE(SignFinder_helpers::getZodiacSign(1970) == "Dog");
    REQUIRE(SignFinder_helpers::getZodiacSign(1971) == "Pig");
}
