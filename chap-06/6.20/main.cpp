#include <iostream>

using namespace std;

int multiple(int,int);
int main()
{
    int a,b;
    cout<<"Please enter two numbers:";
    cin>>a>>b;
    cout<<multiple(a,b);
    return 0;
}
int multiple(int a,int b)
{
    int c=1;
    while(c<=100)
    {
        if(b%a==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        {
            c++;
        }
    }

}
