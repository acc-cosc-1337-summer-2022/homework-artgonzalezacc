#include "reference.h"

void reference_parameter(int &num)
{
    num = 100;
}

void const_reference_parameter(const int &num)
{
    //num = 1000;    won't compile
}