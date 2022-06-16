#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"
#include "for_ranged_str.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test for loop ref function parameter")
{
	std::string lang = "C++";
	display_string(lang);

	REQUIRE(lang == "aaa");
}

TEST_CASE("Test for ranged str function parameter")
{
	std::string lang = "C++";
	for_ranged_str(lang);

	REQUIRE(lang == "aaa");
}
