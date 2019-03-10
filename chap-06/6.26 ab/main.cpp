#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double);
double fahrenheit(double);
int main()
{
    double a,b;
    cout<<"Please enter Fahrenheit temperature:";
    cin>>a;
    cout<<"Please enter Clsius temperature:";
    cin>>b;
    cout<<setprecision(3)<<fixed;
    cout<<"The Fahrenheit temperature is:"<<fahrenheit(b)<<endl;
    cout<<"The Clsius temperature is:"<<celsius(a)<<endl;
    return 0;
}
double celsius(double a)
{
    return (a-32)/(1.8);
}
double fahrenheit(double b)
{
    return (32+b*1.8);
}
