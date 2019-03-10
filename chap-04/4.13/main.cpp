#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c,d,e=0,f=0;
    while(1)
    {
        cout<<"Please enter your miles driven(-1 to quit):";
        cin>>a;
        if(a!=-1)
        {
        cout<<"Please enter your gallons used:";
        cin>>b;
        }
        else
        {
            break;
        }
        c=a/b;
        cout<<setprecision(6)<<fixed;
        cout<<"MPG this trip is:"<<c<<endl;
        e=e+a;
        f=f+b;
        d=e/f;
        cout<<setprecision(6)<<fixed;
        cout<<"Total MPG:"<<d<<endl;
    }
    return 0;
}
