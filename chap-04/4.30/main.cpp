#include <iostream>

using namespace std;

int main()
{
    double a,b=3.14159,c,d,e;
    cout<<"Please enter the radius of the circle:";
    cin>>a;
    c=2*b*a;
    d=2*a;
    e=b*a*a;
    cout<<"Diameter is:"<<d<<endl;
    cout<<"circumference is:"<<c<<endl;
    cout<<"The area of the circle is:"<<e<<endl;
    return 0;
}
