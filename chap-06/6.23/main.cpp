#include <iostream>

using namespace std;

void out(int);
int main()
{
    int side;
    cout<<"Please input what you want:";
    cin>>side;
    out(side);
    return 0;
}
void out(int side)
{
    for(int i=1;i<=side;i++)
    {
        for(int i=1;i<=side;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
