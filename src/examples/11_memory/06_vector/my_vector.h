//
#include<iostream>
#ifndef MY_VECTOR_H
#define  MY_VECTOR_H

class Vector
{
public:
    //initialize size and create elements dyanmic memory array
    Vector(std::size_t s);
    ~Vector();//destructor

private:
    std::size_t size;
    int* elements;//pointer will point to dynamic memory
    
};

//FREE FUNCTIONS
void use_stack_vector();
void use_heap_vector();

#endif