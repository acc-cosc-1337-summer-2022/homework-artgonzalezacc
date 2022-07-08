//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout;

void use_stack_array()
{
    const auto SIZE = 3;
    int numbers[SIZE]{};//stack array

    for(auto i=0; i < SIZE; i++)
    {
        cout<<numbers[i]<<"\n";
    }    
}

void array_months()
{
    const auto NUM_OF_MONTHS = 3;
    int month_numbers[NUM_OF_MONTHS]{1,2,3};
    std::string month_names[NUM_OF_MONTHS]{"Jan", "Feb", "Mar"};

    for(auto i=0; i < NUM_OF_MONTHS; i++)
    {
        cout<<month_numbers[i]<<" "<<month_names[i]<<"\n";
    }    
}

void arrays_and_pointers()
{
    const int SIZE = 3;
    int numbers[SIZE]{2,4,6};

    cout<<numbers<<"\n";

    int* ptr = numbers;
    cout<<ptr<<"\n";    
    cout<<*ptr<<"\n";    
    
    *ptr++;
    cout<<*ptr<<"\n";    

    *ptr++;
    cout<<*ptr<<"\n";    
}

void display_array(int* nums, const int SIZE)
{
    for (auto i=0; i < SIZE; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}