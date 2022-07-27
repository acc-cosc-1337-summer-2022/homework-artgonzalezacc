//
#include "my_vector.h"
#include<iostream>

using std::cout;

template<typename T>
T add(T x, T y)
{
    return x + y;
}

int main()
{
    //cout<<"int "<<add(3, 3)<<"\n";
    //cout<<"double "<<add(3.5, 4.1)<<"\n";
    Vector<int> nums;
    nums.Push_Back(5);

    cout<<nums[0]<<"\n";

    Vector<double> doubles;
    doubles.Push_Back(7.9);
    cout<<doubles[0]<<"\n";

    return 0;
}

