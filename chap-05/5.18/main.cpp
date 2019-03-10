#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num2=0,num10=1,i,a,b=10;
    for(num10=1;num10<=256;num10++)
    {
        a=(num10)%2;
        num2=num2+a*(b/10);
        num10=(num10-a)/2;
        b*=10;
        cout<<"The binary number is:"<<num2<<endl;
    }
    for(num10=1;num10<=256;num10++)
    {
        cout<<"The Octal number is:"<<oct<<num10<<endl;
    }
    for(num10=1;num10<=256;num10++)
    {
        cout<<"The Hexadecimal number is:"<<hex<<num10<<endl;
    }
    return 0;
}
