#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c,charge1,charge2,charge3,totalh,totalc;
    cout<<"Please enter your hours:";
    cin>>a>>b>>c;
    if(a<=3)
    {
            charge1=2.00;
    }
    if(b<=3)
    {
            charge2=2.00;
    }
    if(c<=3)
    {
            charge3=2.00;
    }
    if(24>=a&&a>3)
    {
            charge1=2+(ceil(a-3))*(0.5);
    }
    if(24>=b&&b>3)
    {
            charge2=2+(ceil(b-3))*(0.5);
    }
    if(24>=c&&c>3)
    {
            charge3=2+(ceil(c-3))*(0.5);
    }
        totalh=a+b+c;
        totalc=charge1+charge2+charge3;
        cout<<setprecision(2)<<fixed;
        cout<<"Car \t"<<"Hours \t"<<"Charge \t"<<endl;
        cout<<"1 \t"<<a<<" \t"<<charge1<<" \t"<<endl;
        cout<<"2 \t"<<b<<" \t"<<charge2<<" \t"<<endl;
        cout<<"3 \t"<<c<<" \t"<<charge3<<" \t"<<endl;
        cout<<"TOTAL \t"<<totalh<<" \t"<<totalc<<" \t"<<endl;
    return 0;
}
