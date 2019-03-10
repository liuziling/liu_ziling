#include <iostream>

using namespace std;

int main()
{
    int a,x=1;
    cout<<"1!\t"<<"2!\t"<<"3!\t"<<"4!\t"<<"5!\t"<<endl;
    for(a=1;a<=5;a++)
    {
        x*=a;
        cout<<x<<"\t";
    }
    return 0;
}
