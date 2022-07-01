#include <iostream>

using std::cout;

int main() 
{
	int* num = new int(5);//create dynamic memory 
	cout<<*num<<"\n";//use memory
	delete num; //delete memory
	num = 0;

	
	return 0;
}