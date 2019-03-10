#include <iostream>

using namespace std;

int main()
{
    int a=1,b,c,d;
    cout<<"N \t"<<"10*N \t"<<"100*N \t"<<"1000*N \t"<<endl;
    while(a<=5)
    {
        a=a;
        b=a*10;
        c=a*100;
        d=a*1000;
        cout<<a<<" \t"<<b<<" \t"<<c<<" \t"<<d<<" \t"<<endl;
        {
            a++;
        }
    }
    return 0;
}
