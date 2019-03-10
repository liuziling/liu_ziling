#include <iostream>

using namespace std;

int main()
{
    int a,b=1,answer=1;
    cout<<"Please enter a number:";
    cin>>a;
    while(b<=a&&a>=0)
    {
        answer=b*answer;
        {
            b++;
        }
    }
    cout<<"The factorial of your input number is:"<<answer<<endl;
    return 0;
}
