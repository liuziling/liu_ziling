#include <iostream>

using namespace std;

int iseven(int);
int main()
{
    int a;
    cout<<"Please enter a number:";
    cin>>a;
    cout<<iseven(a);
    return 0;
}
int iseven(int a)
{
        if(a%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
}
