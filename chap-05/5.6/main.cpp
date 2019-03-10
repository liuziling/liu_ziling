#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,number;
    double aver=0,sum=0;
    cout<<"Please enter a number!";
    for(i=0;i<=100;i++)
    {
        cin>>number;
        sum+=number;
        if(number==9999)
            break;
    }
        aver=(sum-9999)/i;
        cout<<"The answer is "<<aver<<endl;
    return 0;
}
