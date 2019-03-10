#include <iostream>

using namespace std;

int main()
{
    unsigned long *longPtr;
    longPtr=value1;
    cout<<*longPtr<<endl;
    value2=*longPtr;
    cout<<value2;
    cout<<&value1;
    cout<<longPtr;
    return 0;
}
