#include "recursion.h"

using std::cout;

void hello()
{
    cout<<"hello\n";
    hello();//recursive function call
}
//Write code for recursive display function
void hello(int num)
{
    cout<<"hello\n";
    if(num == 0)
    {
        return;
    }

    cout<<"hello("<<num-1<<")\n";
    hello(num-1);
    cout<<"unload helo("<<num<<")\n";
}


//Write code for recursive factorial
int factorial(int num)
{
    int f;//track return value for factorial
    int r;//track recursive function call return value

    if(num == 0)
    {
        cout<<"base case\n";
        return 1;//base case
    }

    cout<<"load stack "<<num-1<<"\n"; 
    r = factorial(num-1);//load the stack
    f = num * r;
    cout<<"unload stack n: "<<num<<" r: "<<r<<" f: "<<f<<"\n";

    return f;
}
