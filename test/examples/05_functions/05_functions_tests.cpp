#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test value param"){
	auto num = 10;
	value_param(num);
	REQUIRE(num == 10);
}
TEST_CASE("Test referance param"){
	auto num1 = 10;
	reference_param(num1);
	REQUIRE(num1 == 20);
}
TEST_CASE("Test function default parameters"){
	REQUIRE(add_numbers(5, 10) == 15);
	REQUIRE(add_numbers(5) == 15);
}
TEST_CASE("Test function default parameters int double int double"){
	REQUIRE(add_numbers(5, 10.5) == 55);

}
