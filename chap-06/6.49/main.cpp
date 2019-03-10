#include <iostream>
#include <iomanip>
using namespace std;

inline double circleArea(double);
int main()
{
    double r;
    cout << "Please enter the radius of the circle:";
    cin>>r;
    cout<<circleArea(r);
    return 0;
}
inline double circleArea(double r)
{
    double a=3.14;
    return a*r*r;
}
