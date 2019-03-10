#include <iostream>

using namespace std;

(a)float cube(float);

cube(float number)//开头没加float；
{
    return number*number*number;
}
(b)int randomNumber=srand();//()后面要有范围%2这样；
(c)float y=123.45678;
int x;
x=y;
cout<<static_cast<float>(x)<<endl;//y明显不是单精度浮点，应将float改为double;
(d)double square(double number)
{
    double number=0;
    return number*number;//永远返回0，乘上的第二个number改一下；
}
(e)int sum(int n)
{
    if(0==n)
        return 0;
    else
        return n+sum(n);//函数无法终止，应在sum（n）内将N根据条件改变；
}
