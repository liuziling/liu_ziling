#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    int r,c;
    array<array<int,3>,2>t={1,2,3,4,5,6};
    //两行三列，六个元素
    //1,2,3
    //4,5,6
    t[0][0]=0;
    t[0][1]=0;
    t[0][2]=0;
    t[1][0]=0;
    t[1][1]=0;
    t[1][2]=0;
    for(size_t r=0;r<2;++r)
        {
            t[r][0]=0;
            t[r][1]=0;
            t[r][2]=0;
        }
    for(size_t c=0;c<3;++c)
        {
            t[0][c]=0;
            t[1][c]=0;
        }
    int min,sum=0;
    for(size_t r=0;r<2;++r)
    {
            for(size_t c=0;c<3;++c)
            {
                min=t[0][0];
                if(min>t[r][c])
                    min=t[r][c];
            }
    }
    cout<<min<<endl;
    for(size_t c=0;c<3;++c)
        cout<<t[0][c];
    for(size_t r=0;r<2;++r)
        sum+=(t[r][1]);
    cout<<"\n" <<sum<<endl;
    cout<<setw(4)<<"1"<<setw(5)<<"2"<<setw(5)<<"3"<<endl;
    cout<<"1"<<setw(3)<<t[0][0]<<setw(5)<<t[0][1]<<setw(5)<<t[0][2]<<endl;
    cout<<"2"<<setw(3)<<t[1][0]<<setw(5)<<t[1][1]<<setw(5)<<t[1][2]<<endl;
    return 0;
}
