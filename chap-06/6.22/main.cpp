#include <iostream>

using namespace std;

void out(int,char);
int main()
{
    int side;
    char b;
    cout<<"Please input what you want:";
    cin>>side>>b;
    out(side,b);
    return 0;
}
void out(int side,char b)
{
    for(int i=1;i<=side;i++)
    {
        for(int i=1;i<=side;i++)
        {
            cout<<b;
        }
        cout<<endl;
    }
}
