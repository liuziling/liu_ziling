#include <iostream>
#include <polynomial.h>
using namespace std;

int main()
{
    polynomial poly1(6);
    polynomial poly2(6);
    cout<<"Size of Polynomial1 is:"<<poly1.getValue();
    cout<<"Size of Polynomial2 is:"<<poly2.getValue();
    cout<<"Please enter 12 numbers:"<<endl;
    cin>>poly1>>poly2;
    cout<<poly1>>"/n">>poly2>>endl;
    polynomial poly3(poly1);
    polynomial poly3(poly2);
    cout<<"The results are:"<<poly3<<endl;
    return 0;
}
