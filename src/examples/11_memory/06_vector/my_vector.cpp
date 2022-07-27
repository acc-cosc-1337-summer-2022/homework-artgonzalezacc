#include "my_vector.h"

using std::cout;

template<typename T>
Vector<T>::Vector()
: size(0), capacity(0), elements{nullptr}
{

}
//
template<typename T>
Vector<T>::Vector(std::size_t s)
: size(s), capacity(s), elements{new T[s]}
{
    cout<<"Memory created at: "<<elements<<"\n";
}

/*
1-Initialize size for v2
2-Initialize memory for v2
3-copy elements from v1 to v2
*/
template<typename T>
Vector<T>::Vector(const Vector<T>& v1)
: size{v1.size}, elements{new T[v1.size]}
{
    cout<<"Executed copy constructor "<<elements<<"\n";

    for(std::size_t i=0; i < v1.size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

/*
1-Create temporary memory for v2
2-Copy values from v1 into temp memory v2
3-Delete v2 elements from memory(PREVENT MEMORY LEAK)
4-Point elements memory to temp memory
5-Return a reference to this vector
*/
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v1)
{
    T* temp = new T[v1.size];

    for(std::size_t i=0; i < v1.size; i++)
    {
        temp[i] = v1.elements[i];
    }

    cout<<"Delete memory "<<elements<<"\n";
    delete[] elements;

    elements = temp;

    cout<<"Memory created Copy assignment operator "<<elements<<"\n";

    size = v1.size;
    
    return *this;
}

/*
1-Get size from v1
2-Get v1.elements memory
3-point v1.elements to nothing that is the nullptr and set size to 0
*/
template<typename T>
Vector<T>::Vector(Vector<T>&& v1)
: size(v1.size), elements{v1.elements}
{
    cout<<"Move constructor: "<<elements<<"\n";
    v1.elements = nullptr;
    v1.size = 0;
}

/*
1-clear original dynamic memory from v1
2-point elements to v1.elements
3-get size from v1
4-point v1.elements to nullptr
5-set v1.size to 0
6-return a self reference to this class
*/
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v1)
{
    cout<<"Move assignment: delete memory "<<elements<<"\n";
    delete elements;
    elements = v1.elements;
    cout<<"Move assignment: point to memory "<<elements<<"\n";
    size = v1.size;
    v1.elements = nullptr;
    v1.size = 0;

    return *this;
}

/*
1-Make sure new allocation is greater than capacity
2-Create temp dynamic memory of size new allocation
3-Copy values from old memory array to temp array
4-Delete the old array
5-Set elements to temp memory array
6-Set capacity = new allocation size
*/
template<typename T>
void Vector<T>::Reserve(std::size_t new_allocation_size)
{
    if(new_allocation_size <= capacity)
    {
        return;
    }

    T* temp = new T[new_allocation_size];
    cout<<"Reserve memory created: "<<temp<<"\n";

    for(std::size_t i=0; i < size; i++)
    {
        temp[i] = elements[i];
    }

    delete[] elements;

    elements = temp;
    capacity = new_allocation_size;
}

/*
1-If capacity 0 call reserve w Reserve Default Size
2-else if size == space call Reserve w space * reserve default multiplier
3-Set value to current element at size
4 Increment the size
*/
template<typename T>
void Vector<T>::Push_Back(T value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(size == capacity)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
}

template<typename T>
Vector<T>::~Vector()
{
    cout<<"Delete memory "<<elements<<"..\n";
    delete[] elements;
}

//tell C++ what data type this template supports
template class Vector<int>;
template class Vector<double>;
template class Vector<char>;

//FREE FUNCTIONS NOT PART OF THE VECTOR CLASS!!!!
void use_stack_vector()
{
    Vector<int> v(3);
    cout<<"Exiting use stack vector \n";
}

void use_heap_vector()
{
    Vector<int>* v = new Vector<int>(3);
    delete v;
    cout<<"Exiting use heap vector \n";
}

Vector<int> get_vector()
{
    Vector<int> v1(3);
    return v1;
}

