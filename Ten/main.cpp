#include <iostream>

using namespace std;

int main()
{
    int num2=0,num10,a,b=10;
    cout<<"Please enter a decimal number:";
    cin>>num10;

    if(num10==0)
    {
        cout<<"The binary number is 0"<<endl;
    }
    else
    {
        while(num10!=0)
        {
        a=(num10)%2;
        num2=num2+a*(b/10);
        num10=(num10-a)/2;
        b=b*10;
        }
        cout<<"The binary number is:"<<num2<<endl;
    }
    return 0;
}
