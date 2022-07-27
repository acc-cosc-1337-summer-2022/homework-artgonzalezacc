//cpp
#include "arrays_pointers.h"
#include<memory>

using std::cout;
using std::shared_ptr;

void use_dynamic_memory_array(const int num)
{
    //create memory
    int* num_ptr = new int(num);
    num_ptr[0] = 0;
    num_ptr[1] = 0;
    num_ptr[2] = 0;
    //use memory
    cout<<num_ptr[0]<<"\n";
    cout<<num_ptr[1]<<"\n";
    cout<<num_ptr[2]<<"\n";
    //delete memory
    delete num_ptr;
}

int* get_dynamic_memory(const int num)
{
    return new int(num);
}

void limit_dynamic_memory_scope(int num)
{
    int* num_ptr = get_dynamic_memory(num);
    num_ptr[0] = 0;
    num_ptr[1] = 0;
    num_ptr[2] = 0;
    //use memory
    cout<<num_ptr[0]<<"\n";
    cout<<num_ptr[1]<<"\n";
    cout<<num_ptr[2]<<"\n";
    //delete memory
    delete num_ptr;   
}

int* get_dynamic_array(const int num)
{
    cout<<"Create memory...\n";
    return new int(num);
}

void delete_dynamic_memory(int* array)
{
    cout<<"Deleting memory...\n";
    delete array;
}

void use_dynamic_array(const int num)
{
    //create memory
    shared_ptr<int[]>nums(get_dynamic_array(num), delete_dynamic_memory);

    //use memory
    nums[0] = 10;
    nums[1] = 5;
    nums[2] = 2;

    //many lines of code can exit here
    
    //no need to call delete
    cout<<"Exiting use dynamic array function\n";

}