#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int b;
    double c;

    while(1)
    {
        cout<<"Enter your name:";
        cin>>a;
        cout<<"Enter sales in dollars(-1 to end):";
        cin>>b;

        if(b==-1)
        {
            break;
        }
        else
           {
            c=200+b*(0.09);
            cout<<"Salary is:"<<c<<endl;
      }
    }
    return 0;
}
