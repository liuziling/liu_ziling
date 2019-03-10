#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    array<int,10>counts={0};
    int bonus[15];
    for(int i=1;i<=15;i++)
        bonus[i]+=1;
    array<double,12>monthlyTemperatures={1.12,2.12,3.12,4.12,5.12,6.12,7.12,8.12,9.12,10.12,11.12,12.12};
    array<int,5>bestScores={1,2,3,4,5};
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t i=0;i<bestScores.size();++i)
        cout<<setw(7)<<i<<setw(13)<<bestScores[i]<<endl;
    return 0;
}
