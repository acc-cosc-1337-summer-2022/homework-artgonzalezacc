#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function reference and pointer parameter")
{
	int num = 5, num1 = 15;
	ref_ptr(num, &num1);

	REQUIRE(num == 100);//???
	REQUIRE(num1 == 200);//???
}

TEST_CASE("Verify vector size function"){
	Vector<int> v(3);
	REQUIRE(v.Size() == 3);
}

TEST_CASE("Test Vector copy instance to another Vector variable")
{
	Vector<int> v1(3);
	v1[0] = 5;
	Vector<int> v2 = v1;

	REQUIRE(v1.Size() == v2.Size());
	REQUIRE(v1[0] == 5);
	REQUIRE(v2[0] == 5);

	v1[0] = 10;
	REQUIRE(v1[0] == 10);
	REQUIRE(v2[0] == 5);
}

TEST_CASE("Test Vector overwrite existing Vector instance")
{
	Vector<int> v1(3);
	Vector<int> v2(3);
	v2 = v1;

	REQUIRE(v1.Size() == v2.Size());

	v1[0] = 5;

	REQUIRE(v1[0] != v2[0]);

}

TEST_CASE("Test create Vector from a std::move call")
{
	Vector<int> v1(3);
	Vector<int> v2 = std::move(v1);
	//v1 = get_vector();

	//REQUIRE(v1[0] == 5);
}

TEST_CASE("Test create vector from a value return function")
{
	Vector<int> v1(3);
	v1 = get_vector();
}

TEST_CASE("TEst vector get size class function")
{
	Vector<int> v1(3);

	REQUIRE(v1.Size() == 3);
}

TEST_CASE("Test vector get capacity class function")
{
	Vector<int> v1(3);

	REQUIRE(v1.Capacity() == 3);
}

TEST_CASE("Test vector Reserve class function")
{
	Vector<int> v1(3);

	REQUIRE(v1.Capacity() == 3);

	v1.Reserve(6);

	REQUIRE(v1.Capacity() == 6);
}

TEST_CASE("Test vector push back to determine correct capacity value")
{
	Vector<int> v1;
	v1.Push_Back(4);
	v1.Push_Back(9);
	v1.Push_Back(10);

	REQUIRE(v1.Size() == 3);
	REQUIRE(v1.Capacity() == 3);

	v1.Push_Back(30);
	REQUIRE(v1.Size() == 4);
	REQUIRE(v1.Capacity() == 6);
}
