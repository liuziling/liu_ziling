#include <iostream>

using namespace std;

int mystery(int,int);
int main()
{
    int x=0;
    int y=0;
    cout<<"Enter two integers:";
    cin>>x>>y;
    cout<<"The result is:"<<mystery(x,y)<<endl;
}
int mystery(int a,int b)
{
    if(1==b)
        return a;
    else if(b!=1)
    {
        if(b<0)
        {
            cout<<"It¡¯s wrong!"<<endl;
            return a*b;
        }
        else
        {
            return a+mystery(a,b-1);
        }
    }
}
