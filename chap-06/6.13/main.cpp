#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a=1;
    double x,y;
    while(a<=10)
    {
    cout<<"Please enter a number:";
    cin>>x;
    y=floor(x+0.5);
        {
            a++;
        }
        cout<<"The original value is:"<<x<<endl;
        cout<<"The answer is:"<<y<<endl;
    }
    return 0;
}
