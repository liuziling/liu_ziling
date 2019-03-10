#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int a,b,c;
    while(1)
    {
        cout<<"Please enter your name:";
        cin>>name;
        cout<<"Please enter hours worked(-1 to end):";
        cin>>a;
        if(a==-1)
        {
            break;
        }
        else
        {
        cout<<"Please enter hourly rate of the employee:";
        cin>>b;
        if(a>=40)
        {
            c=40*b+(a-40)*b*(1.5);
        }
        else
        {
            c=a*b;
        }
        }
        cout<<"Salary is:"<<c<<endl;
    }
    return 0;
}
