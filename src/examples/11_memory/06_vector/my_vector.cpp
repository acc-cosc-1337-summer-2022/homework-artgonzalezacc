#include "my_vector.h"

using std::cout;

//
Vector::Vector(std::size_t s)
: size(s), elements{new int[s]}
{
    cout<<"Memory created at: "<<elements<<"\n";
}

Vector::~Vector()
{
    cout<<"Delete memory..\n";
    delete[] elements;
}


//FREE FUNCTIONS NOT PART OF THE VECTOR CLASS!!!!
void use_stack_vector()
{
    Vector v(3);
    cout<<"Exiting use stack vector \n";
}

void use_heap_vector()
{
    Vector* v = new Vector(3);
    delete v;
    cout<<"Exiting use heap vector \n";
}

