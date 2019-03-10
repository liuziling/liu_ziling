#include <iostream>

using namespace std;

int main()
{
    int counter=0,number,largest=0;
    while(counter<10)
    {
        cout<<"enter a number:";
        cin>>number;
        if(largest<number)
        {
            largest=number;
        }
        counter++;
    }
    cout<<"The largest is:"<<largest<<endl;
    return 0;
}
