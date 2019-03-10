#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=0,b=0;
    double c,d;
    while(a<=100)
    {
        c=(32+a*1.8);
        cout<<"The Celsius temperature   \t"<<"The Fahrenheit temperature   \t"<<endl;
        cout<<a<<setw(37)<<c<<endl;
        {
            a++;
        }
    }
    while(32<=b,b<=212)
    {
        d=(b-32)/1.8;
        cout<<"The Fahrenheit temperature   \t"<<"The Celsius temperature   \t"<<endl;
        cout<<b<<setw(37)<<d<<endl;
        {
            b++;
        }
    }
    return 0;
}
