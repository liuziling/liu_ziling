#include <iostream>
#include <array>
#include <random>
using namespace std;

int main()
{
    int sum,i,c,d,a;
    for(i=1;i<=36000;i++)
    {
        c=rand()%6+1;
        d=rand()%6+1;
        sum=c+d;
        cout<<sum<<endl;
    }
    if(sum==7)
        a=sum/36000;
    if(a>0.14)
        cout<<"It¡¯s real!"<<endl;
    return 0;
}
