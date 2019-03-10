#include <iostream>
#include <array>
using namespace std;

int main()
{
    int a[20],b[20],number,i,m=0,j=0;
    for(i=0;i<20;i++)
        {
            cin>>number;
            if(number<10||number>100)
                {
                    cout<<"Please enter a new number!"<<endl;
                    break;
                }
                else if(number>=10&&number<=100)
                {
                    a[i]=number;
                }
        }
    for(i=1;i<20;i++)
        {
            for(m=0;m<j;m++)
            {
                if(b[m]==a[i])
                break;//第一个循环不走这里，执行后直到m与j相等在执行if
            }
            if(m==j)
            {
                b[m]=a[i];
                j++;//j加一
            }
        }
    for(i=0;i<j;i++)
        cout<<b[i];
    return 0;
}
