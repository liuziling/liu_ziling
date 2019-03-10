#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int i,a=1;
    double b=-1,c,answer=0;
    for(i=1;i<=1000;i++)
    {
        for(c=2;c<=1001;c++)
        {
            answer+=pow(b,c)*(4.0/a);
            a+=2;
            cout<<setprecision(15)<<fixed;
            cout<<"pi = "<<answer<<"\n"<<endl;
        }
    }
    return 0;
}
