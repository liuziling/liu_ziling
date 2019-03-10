#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Please enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        if((a*a+b*b)==(c*c)||(a*a+c*c)==(b*b)||(b*b+c*c)==(a*a))
        {
            cout<<"This is a right triangle.";
        }
        else
        {
            cout<<"This is not a right triangle.";
        }
    }
        else
        {
            cout<<"This is not a triangle.";
        }
    return 0;
}
