#include <iostream>
#include"matrix1.h"
using namespace std;

int main()
{
    Matrix1 a,b,c;
    cout<<"Please enter the matrix:"<<endl;
    cin>>a;
    cout<<"Please enter the another one:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The end result is :"<<endl;
    cout<<c;
    return 0;
}
