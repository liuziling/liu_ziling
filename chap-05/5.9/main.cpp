#include <iostream>

using namespace std;

int main()
{
    int sum=1;
    for(int x=1;x<=15;x+=2,sum*=x)
    cout<<sum<<endl;
    return 0;
}
