#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    cout<<"Please enter a number:";
    cin>>a;
    cout<<setprecision(1)<<fixed;
    cout<<"sqrt("<<9.0<<")="<<sqrt(9.0);
    cout<<"\nexp("<<1.0<<")="<<setprecision(6)<<exp(1.0);
    cout<<"\nlog("<<2.718282<<")="<<setprecision(1)<<log(2.718282);
    cout<<"\nlog10("<<100.0<<")="<<log10(100.0);
    cout<<"\nfbas("<<5.1<<")="<<fabs(5.1);
    cout<<"\nceil("<<9.2<<")="<<ceil(9.2);
    cout<<"\nfloor("<<9.2<<")="<<ceil(9.2);
    cout<<"\npow("<<2.0<<","<<7.0<<")="<<pow(2.0,7.0)<<endl;
    cout<<sqrt(a)<<"  "<<exp(a)<<"  "<<log(a)<<"  "<<log10(a)<<"  "<<fabs(a)<<"  "<<ceil(a)<<"  "<<floor(a)<<endl;
    return 0;
}
