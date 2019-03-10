#include <iostream>

using namespace std;

int main()
{
    int i,a;
    for(i=1;i<=10;i++)
    {
        for(a=1;a<=i;a++)
        cout<<"*";
        cout<<endl;
    }
    for(i=10;i>=1;--i)
    {
        for(a=1;a<=i;a++)
        cout<<"*";
        cout<<endl;
    }
    for(i=1;i<=10;i++)
    {
        for(a=1;a<=(i-1);a++)
        cout<<" ";
        for(a=0;a<=(10-i);++a)
        cout<<"*";
        cout<<endl;
    }
    for(i=1;i<=10;i++)
    {
        for(a=1;a<=(10-i);a++)
        cout<<" ";
        for(a=0;a<=(i-1);++a)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
