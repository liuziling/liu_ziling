#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);
int main()
{
    int count=3,x=9;
    cout<<"count="<<count<<"  before tripleByValue"<<endl;
    cout<<"After tripleByValue:"<<tripleByValue(count)<<endl;
    cout<<"count="<<count<<"  After tripleByValue"<<endl;
    cout<<"x="<<x<<"  before tripleByReference"<<endl;
    tripleByReference(x);
    cout<<"x="<<x<<"  After tripleByReference"<<endl;
    return 0;
}
int tripleByValue(int a)
{
    return a=a*3;
}
void tripleByReference(int &b)
{
    b=b*3;
}
