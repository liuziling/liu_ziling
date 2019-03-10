#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double,double);
int main()
{
    double a,b;
    cout<<"Please enter both sides of the triangle:";
    cin>>a>>b;
    cout<<hypotenuse(a,b);
    return 0;
}
double hypotenuse(double a,double b)
{
    return sqrt(a*a+b*b);
}
