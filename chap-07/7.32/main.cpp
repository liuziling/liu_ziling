#include <iostream>
#include <array>
using namespace std;

int recursiveMinimum(int [],int,int);
int main()
{
    int t[10],min,i;
    for(size_t i=0;i<10;++i)
    {
        t[i]=2*i+3;
    }
    cout << "The min is:" <<recursiveMinimum(t,0,10)<<endl;
    return 0;
}
int recursiveMinimum(int t[],int start,int end)
{
    int min=t[0],i;
    start=0;
    end=10;
    if(start<end)
    {
        for(i=0;i<10;++i)
        {
            if(min>t[i])
            min=t[i];
        }
        start++;
    }
    return min;
}
