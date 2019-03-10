#include <iostream>

using namespace std;

int main()
{
    for(unsigned int count=1;count<=4;++count)
    {
        cout<<count<<" ";
    }
    for(unsigned int count=6;count<=10;++count)
    {
        cout<<count<<" ";
    }
    cout<<"\nUsed continue to skip printing 5"<<endl;
    return 0;
}
