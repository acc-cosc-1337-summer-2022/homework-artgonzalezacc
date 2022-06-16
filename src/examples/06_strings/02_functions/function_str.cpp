#include "function_str.h"

void display_string(std::string &str)
{
    for(auto i=0; i < str.size(); i++)
    {
        str[i] = 'a';
        std::cout<<str[i]<<"\n";
    }
}