#include "recursion.h"

int main() 
{
	/*std::cout<<"load the stack with hello(2)\n";
	hello(2);
	std::cout<<"unloaded the stack\n";*/
	std::cout<<"load the stack factorial(5)\n";
	int fac = factorial(5);
	std::cout<<"unloaded the stack\n";

	std::cout<<"Factorial: "<<fac<<"\n";
		
	return 0;
}