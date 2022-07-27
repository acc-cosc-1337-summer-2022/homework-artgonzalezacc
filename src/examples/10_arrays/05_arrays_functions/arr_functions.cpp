//
#include<iostream>
#include "arr_functions.h"
//define iterate_array and loop through with ++ increment
using std::cout;

void use_char_array()
{
    char letter = 'a';
    cout<<letter<<"\n";

    char name[] = "C++";
    cout<<name<<"\n";
}

void use_char_array_w_size()
{
    const int SIZE = 5;
    char name[SIZE] = "Java"; //C++ adds the null terminator \0
    cout<<name<<"\n";

    for(int i=0; name[i] != '\0'; i++){
        cout<<name[i]<<"\n";
    }
}

void use_dynamic_char_array()
{
    const int SIZE = 10;
    char* name = new char[SIZE];
    name[0] = 'P';
    name[1] = 'y';
    name[2] = 't';
    name[3] = 'h';
    name[4] = 'o';
    name[5] = 'n';
    name[6] = '\0';//

    cout<<name<<"\n";

    delete[] name;
}

void use_dynamic_char_array_auto()
{
    const int SIZE = 10;
    char* name = new char[SIZE];

    cout<<"Enter your name: ";
    std::cin.getline(name, SIZE);
    cout<<name<<"\n";

    delete[] name;
}