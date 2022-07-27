#include "atm.h"
#include "customer.h"
#include<iostream>
#include<stdio.h> //NULL
#include <time.h>//time
#include<vector>
#include <memory>

using std::cout; using std::cin; using std::vector;
using std::unique_ptr; using std::make_unique;

int main()
{
	//set the randomizer seed
	srand(time(NULL));
	
	std::vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
    customers.push_back(Customer(2, "Mary Doe"));
    customers.push_back(Customer(3, "John Hancock"));
    customers.push_back(Customer(4, "Mary Hancock"));

	ATM atm(customers);

	run_menu(atm);

	
	return 0;
}