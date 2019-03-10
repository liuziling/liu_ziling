#include <iostream>
#include <iomanip>
using namespace std;

double min(double,double,double);
int main()
{
    double a,b,c;
    cout<<"Please enter three numbers:";
    cin>>a>>b>>c;
    cout<<setprecision(2)<<fixed;
    cout<<min(a,b,c);
    return 0;
}
double min(double a,double b,double c)
{
    if(a<b<c||a<c<b)
    {
        return a;
    }
    if(c<a<b||c<b<a)
    {
        return c;
    }
    if(b<c<a||b<a<c)
    {
        return b;
    }
}
