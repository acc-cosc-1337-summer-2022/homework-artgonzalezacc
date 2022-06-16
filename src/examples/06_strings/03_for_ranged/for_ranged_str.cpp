#include "for_ranged_str.h"

void for_ranged_str(std::string &str)
{
    for(auto &ch: str)
    {
        ch = 'a';
        std::cout<<ch<<"\n";//display each char in the str
    }
}