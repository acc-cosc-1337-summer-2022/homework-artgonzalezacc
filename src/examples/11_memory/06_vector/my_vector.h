//
#include<iostream>
#ifndef MY_VECTOR_H
#define  MY_VECTOR_H

template<typename T>
class Vector
{
public:
    Vector();
    //initialize size and create elements dyanmic memory array
    Vector(std::size_t s);
    //Legacy C++ Rule of 3
    Vector(const Vector<T>& v);//Rule 1--Copy constructor
    Vector& operator=(const Vector<T>& v);//Rule 2-copy assignment
    //modern C++ Rule of 5
    Vector(Vector<T>&& v);//Copy constructorRule 4 of 5
    Vector& operator=(Vector<T>&& v);//Rule 5 of 5

    //overload [] --allows cout<<v[0]  or v[0] = 1
    T& operator[](std::size_t i)const {return elements[i];}
    T& operator[](std::size_t i){return elements[i];}

    std::size_t Size()const {return size;}
    std::size_t Capacity()const{return capacity;}
    void Reserve(std::size_t new_allocation_size);
    void Push_Back(T value);

    ~Vector();//Rule 3 - destructor

private:
    std::size_t size;
    std::size_t capacity;
    T* elements;//pointer will point to dynamic memory
    const int RESERVE_DEFAULT_SIZE{3};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    
};

//FREE FUNCTIONS
void use_stack_vector();
void use_heap_vector();
Vector<int> get_vector();

#endif