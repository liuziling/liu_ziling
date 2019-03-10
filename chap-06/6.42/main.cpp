#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double distance(double,double,double,double);
int main()
{
    double a,b,c,d;
    cout<<"Please enter a coordinate:"<<endl;
    cin>>a>>b;
    cout<<"Please enter another coordinate:"<<endl;
    cin>>c>>d;
    cout<<distance(a,b,c,d)<<endl;
    return 0;
}
double distance(double a,double b,double c,double d)
{
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
