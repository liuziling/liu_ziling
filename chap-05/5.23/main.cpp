#include <iostream>

using namespace std;

int main()
{
    int i,a;
    for(i=1;i<=4;i++)
    {
        for(a=0;a<=(4-i);++a)
            cout<<" ";
        for(a=1;a<=(2*i-1);a++)
            cout<<"*";
            cout<<endl;
    }
    for(i=5;i>=1;i--)
    {
        for(a=1;a<=(5-i);a++)
            cout<<" ";
        for(a=1;a<=(2*i-1);a++)
            cout<<"*";
            cout<<endl;
    }
    return 0;
}
