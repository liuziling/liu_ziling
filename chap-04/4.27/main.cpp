#include <iostream>

using namespace std;

int main()
{
    int num2,num10=0,a,b=2;
    cout<<"Please enter a binary number:";
    cin>>num2;

    if(num2==0)
    {
        cout<<"The decimal number is 0"<<endl;
    }
    else
   {
       while(num2!=0)
       {
        a=(num2)%10;
        num10=num10+a*(b/2);
        num2=(num2-a)/10;
        b=b*2;
       }
   cout<<"The decimal number is:"<<num10<<endl;
   }
    return 0;
}
