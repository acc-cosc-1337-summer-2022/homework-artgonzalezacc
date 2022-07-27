#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test checking account balance initial value is 0")
{
	CheckingAccount account;

	REQUIRE(account.get_balance() == 5);
}

TEST_CASE("Test savings account balance initial value is 0")
{
	SavingsAccount account;

	REQUIRE(account.get_balance() == 10);
}


TEST_CASE("Test checking account balance set via constructor")
{
	CheckingAccount account(100);

	REQUIRE(account.get_balance() == 105);
}

TEST_CASE("Test Savings account deposit class function")
{
	SavingsAccount account(100);
	REQUIRE(account.get_balance() == 110);

	account.deposit(50);

	REQUIRE(account.get_balance() == 160);
}

TEST_CASE("Test account withdraw class function")
{
	SavingsAccount account(100);
	REQUIRE(account.get_balance() == 110);

	account.withdraw(20);
	REQUIRE(account.get_balance() == 90);
}

TEST_CASE("Test account deposits and withdraws")
{
	SavingsAccount account(100);
	REQUIRE(account.get_balance() == 110);

	account.deposit(50);
	REQUIRE(account.get_balance() == 160);

	account.withdraw(40);
	REQUIRE(account.get_balance() == 120);
}

TEST_CASE("Test account withdraw with negative value")
{
	SavingsAccount account(100);
	REQUIRE(account.get_balance() == 110);

	account.withdraw(-10);
	REQUIRE(account.get_balance() == 110);
}

TEST_CASE("Test account withdraw with amount greater than balance")
{
	SavingsAccount account(100);
	REQUIRE(account.get_balance() == 110);

	account.withdraw(120);
	REQUIRE(account.get_balance() == 110);
}

TEST_CASE("Test account deposit with negative amount")
{
	SavingsAccount account(100);
	REQUIRE(account.get_balance() == 110);

	account.deposit(-50);

	REQUIRE(account.get_balance() == 110);	
}

TEST_CASE("Test random number generator")
{
	int num = rand() % 5;

	REQUIRE((num >= 0 && num <= 4));
	num = rand() % 5;	

	REQUIRE((num >= 0 && num <= 4));
	num = rand() % 5;
	REQUIRE((num >= 0 && num <= 4));
	num = rand() % 5;	

	REQUIRE((num >= 0 && num <= 4));
	num = rand() % 5;
	REQUIRE((num >= 0 && num <= 4));
}