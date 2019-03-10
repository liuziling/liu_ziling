#include <iostream>

using namespace std;

int power(int,int);
int main()
{
    int base,exponent;
    cout<<"Please enter two numbers:";
    cin>>base>>exponent;
    cout<<power(base,exponent);
    return 0;
}
int power (int base,int exponent)
{
    if(exponent>1)
    {
        base=base*power(base,exponent-1);
    }
    else if(exponent==1)
    {
        return base;
    }
}
