#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b=1,c=1,d;
    double answer=0,last;
    cout<<"Please input the precision you want:";
    cin>>a;
    cout<<"Please enter the number:";
    cin>>d;
    while(b<=a)
    {
        if(a>=2)
        {
        c=b*c;
        answer=(d/c)+answer;
        d=d*d;
        b++;
        }
    }
    last=answer+1;
    cout<<setprecision(6)<<fixed;
    cout<<"e^x is "<<last<<"."<<endl;
    if(a==1)
    {
        cout<<"e^x is 1."<<endl;
    }
    return 0;
}
