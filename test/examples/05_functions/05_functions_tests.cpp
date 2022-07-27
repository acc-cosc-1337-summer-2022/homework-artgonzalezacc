#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "void.h"
#include "reference.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test that value parameters generate a copy of the param")
{
	int num = 5;
	value_param(num);

	REQUIRE(num == 5); //will num be equal to 5?
}

TEST_CASE("Test that reference parameters modify original variable")
{
	int num = 5;
	reference_parameter(num);

	REQUIRE(num == 100);
}

TEST_CASE("Test weekly pay with two parameters")
{
	int num = 40;
	REQUIRE(get_weekly_pay(num, 10) == 400);
	REQUIRE(get_weekly_pay(52000) == 1000);
}
