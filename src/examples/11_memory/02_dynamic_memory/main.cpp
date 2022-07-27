#include <iostream>
#include <memory>

using std::cout; using std::unique_ptr; using std::make_unique;

int main() 
{  
	//legacy/raw/naked pointers-> developer responsible for memory mgmt lifecycle
	int* num = new int(5);//create dynamic memory 
	cout<<*num<<"\n";//use memory
	delete num; //delete memory
	num = 0;//point to address 0-knows it points to nothing

	//Smart Pointers-C++ manages memory
	unique_ptr<int> sptr_num = make_unique<int>(10);
	cout<<*sptr_num<<"\n";

	return 0;
}