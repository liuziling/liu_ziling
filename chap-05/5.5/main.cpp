#include <iostream>

using namespace std;

int main()
{
    int order,number,sum=0;
    cout<<"Please enter the range you want:";
    cin>>order;
    cout<<"Please enter the number:";
    for(int i=0;i<order;i++)
    {
        cin>>number;
        sum+=number;
    }
    cout<<"The sum is:"<<sum<<endl;
    return 0;
}
