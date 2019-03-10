#include <iostream>

using namespace std;

int main()
{
    int counter=0,number,largest=0,a=0;
    while(counter<10)
    {
        cout<<"enter a number:";
        cin>>number;
        if(largest<number)
        {
           a=largest;
           largest=number;
        }
        if(a<number&&largest>number)
        {
            a=number;
        }
        counter++;
    }
    cout<<"The two numbers are:"<<largest<<" and "<<a<<endl;
    return 0;
}
