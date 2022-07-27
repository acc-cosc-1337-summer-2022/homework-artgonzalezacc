//cpp
#include "arrays_dyn_ch.h"

using std::cout;

void use_dynamic_char_array()
{
    const int SIZE = 10;
    char* name = new char[SIZE];
    cout<<name<<"\n";

    delete[] name;
}