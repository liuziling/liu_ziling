#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,1000>t;
    int i;
    for(i=0;i<1000;++i)
    {
        t[i]=1;
    }
    for(i=2;i<1000;i++)
    {
        if(t[i]==0)
            {
                continue;
            }
        for(int j=2;i*j<1000;j++)
        {
            t[i*j]=0;
        }
    }
    for(i=0;i<1000;i++)
    {
        if(t[i]==1)
            {
                cout<<i<<endl;
            }
    }
    return 0;
}
