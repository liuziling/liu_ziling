#include <iostream>

using namespace std;

int main()
{
    int order,number,min;
    cout<<"Please enter the range you want:";
    cin>>order;
    for(int i=0;i<order;i++)
    {
        cin>>number;
        if(i==0)
            min=number;
        else
        {
            if(min>=number)
                min=number;
        }
    }
    cout<<"min is:"<<min<<endl;
    return 0;
}
