#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i;
    cout<<"Please enter a five digit number:";
    cin>>a;
    b=a%10;
    c=((a-b)/10)%10;
    d=((a-b)/10);
    e=((d-c)/10)%10;
    f=((d-c)/10);
    g=((f-e)/10)%10;
    h=((f-e)/10);
    i=((h-g)/10);
    if(b=i,c=g)
    {
        cout<<"This is a palindrome number.";
    }
    else
    {
        cout<<"This is not a pailndrome number.";
    }
    return 0;
}
