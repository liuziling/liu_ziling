#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout<<setprecision(2)<<fixed;
    cout<<"fabs("<<7.5<<")="<<fabs(7.5);
    cout<<"\nfbas("<<-6.4<<")="<<fabs(-6.4);
    cout<<"\nfbas("<<0.0<<")="<<fabs(0.0);
    cout<<"\nceil("<<0.0<<")="<<ceil(0.0);
    cout<<"\nceil("<<-6.4<<")="<<ceil(-6.4);
    cout<<"\nfloor("<<7.5<<")="<<floor(7.5);
    cout<<"\nceil(-fabs("<<-8<<"+floor("<<-5.5<<")))="<<ceil(-fabs(-8+floor(-5.5)))<<endl;
}
