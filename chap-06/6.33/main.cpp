#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int flip();
int main()
{
    int b=0,c=0;
    for(int i=1;i<=100;i++)
    {
        switch(flip())
        {
            case 0:cout<<"1"<<endl;
            b=b+1;
            break;
            case 1:cout<<"0"<<endl;
            c=c+1;
            break;
        }
    }
    cout<<"Positive number of times:"<<b<<endl;
    cout<<"Inverse number of times:"<<c<<endl;
    return 0;
}
int flip()
{
    int a;
    a=rand()%2;
    if(a==0)
    {
        return 0;
    }
    return a;
}
