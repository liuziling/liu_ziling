#include <iostream>

using namespace std;

int main()
{
    unsigned int passes=0;
    unsigned int failures=0;
    unsigned int studentCounter=1;
    int result;

    while (studentCounter<=10)
    {
        cout<<"Enter result (1=pass,2=fail):";
        cin>>result;
        if(result!=1&&result!=2)
        {
            cout<<"Please enter a right result!"<<endl;
        }
        else
        {
            if(result==1)
            {
                passes++;
            }
            else if(result==2)
            {
                failures++;
            }
                studentCounter++;
        }
    }
    cout<<"Passed "<<passes<<"\nFailed "<<failures<<endl;
    if(passes>8)
    {
        cout<<"Bonus to instructor!"<<endl;
    }
    return 0;
}
