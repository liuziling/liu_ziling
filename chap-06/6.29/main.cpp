#include <iostream>

using namespace std;

int main()
{
    int x=2,y=1,z,a,b,line=0;//x为最小质数，b范围内最大的数，line每行输出的值；
    cout<<"Please enter you want the maximum value in the range:";
    cin>>b;
    while(x<=b)
    {
        z=x-y;
        a=x%z;
        if(a==0)
        {
            if(z==1)//x为质数
            {
                cout<<x<<" ";
                x++;
                y=1;
                line++;
            }
            else
            {
                x++;
                y=1;//不需要输出了，原条件不变
            }
        }
        else//没有整除，一直没有因子
        {
            y++;
            if(line==10)//超过十个数换行
            {
                cout<<endl;
                line=0;
            }
        }
    }
    return 0;
}
