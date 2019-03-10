#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long);
int main()
{
    int a;
    cout<<"Please enter a number:";
    cin>>a;
    cout<<fibonacci(a);
    return 0;
}
unsigned long fibonacci(unsigned long a)
{
    int s1=1,s2=2,n;
    if(a==0)
    {
        return 0;
    }
    if(a==1||a==2)
    {
        return 1;
    }
    for(n=3;n<=a;n++)
    {
        s2=s1+s2;
        s1=s2-s1;
    }
    return s1;
}
