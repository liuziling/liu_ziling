#include <iostream>

using namespace std;

int integerPower(int,unsigned int);
int main()
{
    int base;
    unsigned int exponent;
    cout<<"Please enter two numbers:";
    cin>>base>>exponent;
    cout<<integerPower(base,exponent);
    return 0;
}
int integerPower(int base,unsigned int exponent)
{
    int a=1,answer=1;
    while(a<=exponent)
    {
        answer=answer*base;
        {
            a++;
        }
    }
    return answer;
}
