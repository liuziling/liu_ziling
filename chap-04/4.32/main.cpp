#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"Please enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        cout<<"This is the three edge of a triangle.";
    }
    else
    {
        cout<<"This is not the three edge of a triangle.";
    }
    return 0;
}
