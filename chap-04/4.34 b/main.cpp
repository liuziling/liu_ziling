#include <iostream>

using namespace std;

int main()
{
    int a,b=1,c,answer=0,last;
    cout<<"Please input the precision you want:";
    cin>>a;
    while(b<=a&&a>=2)
    {
        c=b*c;
        answer=1/c+answer;
        {
            b++;
        }
        last=answer+1;
    }
    cout<<"e is "<<last<<"."<<endl;
    if(a=1)
    {
        cout<<"e is 1."<<endl;
    }
    return 0;
}
