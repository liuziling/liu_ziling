#include <iostream>

using namespace std;

int main()
{
    int i,a,n;
    cout<<"Please enter a number:";
    cin>>n;
    if(n%2!=0)
    {
    for(i=1;i<=((n-1)/2);i++)
    {
        for(a=0;a<=(((n-1)/2)-i);++a)
            cout<<" ";
        for(a=1;a<=(2*i-1);a++)
            cout<<"*";
            cout<<endl;
    }
    for(i=((n+1)/2);i>=1;i--)
    {
        for(a=1;a<=((n+1)/2-i);a++)
            cout<<" ";
        for(a=1;a<=(2*i-1);a++)
            cout<<"*";
            cout<<endl;
    }
    }
    return 0;
}
