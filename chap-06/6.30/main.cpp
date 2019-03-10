#include <iostream>

using namespace std;

int opposite(int);
int main()
{
    int x;
    cout<<"Please enter a number:";
    cin>>x;
    cout<<opposite(x);
    return 0;
}
int opposite(int x)
{
    int y,a,b,c,d,e,f,g,h;
    if(x<100000)
    {
    a=x%10;
    b=((x-a)/10)%10;
    c=((x-a)/10);
    d=((c-b)/10)%10;
    e=((c-b)/10);
    f=((e-d)/10)%10;
    g=((e-d)/10);
    h=((g-f)/10);
    y=a*10000+b*1000+d*100+f*10+h;
    }
    return y;
}
