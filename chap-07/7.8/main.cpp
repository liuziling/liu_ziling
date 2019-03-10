#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    array<int,15>alphabet;
    cout<<alphabet[6]<<endl;
    array<float,15>grades;
    grades[4]=1.5;
    array<int,5>values={8,8,8,8,8};
    array<double,100>temperatures;
    int sum=0;
    for(size_t i=0;i<temperatures.size();++i)
    {
        temperatures[i]=2*i;
    }
    for(size_t j=0;j<temperatures.size();++j)
    {
        sum+=temperatures[j];
    }
        cout<<"The sum is:"<<sum<<endl;
    array<double,11>a;
    array<double,34>b;
    for(int i=0;i<11;++i)
        b[i]=a[i];
    array<float,99>w;
    float min,max;
    for(size_t j=0;j<w.size();++j)
    {
        w[j]=j+0.5;
    }
    for(int i=1;i<99;i++)
    {
        min=w[0];
        if(min>w[i])
            min=w[i];
    }
    for(int i=1;i<99;i++)
    {
        max=w[0];
        if(w[i]>max)
            max=w[i];
    }
    cout<<"The max is:"<<max<<endl;
    cout<<"The min is:"<<min<<endl;
    return 0;
}
