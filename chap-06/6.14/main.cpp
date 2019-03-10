#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);
int main()
{
    int a=1;
    double x;
while(a<=100)
    {
        cout<<"Please enter a number:";
        cin>>x;
        cout<<setprecision(3)<<fixed;
        cout<<roundToInteger(x)<<endl;
        cout<<roundToTenths(x)<<endl;
        cout<<roundToHundredths(x)<<endl;
        cout<<roundToThousandths(x)<<endl;
{
        a++;
}
    }
    return 0;
}
double roundToInteger(double x)
{
    return floor(x+0.5);
}
double roundToTenths(double x)
{
    return floor(x*10+0.5)/10;
}
double roundToHundredths(double x)
{
    return floor(x*100+0.5)/100;
}
double roundToThousandths(double x)
{
    return floor(x*1000+0.5)/1000;
}
