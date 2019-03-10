#include <iostream>

using namespace std;

int isperfect( unsigned int);
int main()
{
    unsigned int number;
    int a,sum;
    cout<<"Complete numbers are :"<<isperfect(number)<<endl;
    return 0;
}
int isperfect( unsigned int number)
{
    int sum=0,a,b;
    for(number=1;number<1000;number++)
    {
        for(a=1;a<number;a++)
        {
            if(number%a==0)
            {
                sum=sum+a;
            }
        }
        if(sum==number)
           {
               return number;
           }
    }
}
