#include <iostream>

using namespace std;

int main()
{
   int a;
   float b,c,d,e,f;

   while(a!=-1)
  {
       cout<<"Enter account number(or -1 to quit):";
       cin>>a;
       if(a==-1)
       {
           break;
       }
       else
       {
           cout<<"Enter beginning balance:";
           cin>>b;
           cout<<"Enter total charges:";
           cin>>c;
           cout<<"Enter total credits:";
           cin>>d;
           cout<<"Enter credit limit:";
           cin>>e;
       }
    f=b+c-d;
    if(f>e)
    {
        cout<<"New balance is:"<<f<<endl;
        cout<<"Account:"<<a<<endl;
        cout<<"Credit limit:"<<e<<endl;
        cout<<"Balance:"<<f<<endl;
        cout<<"Credit Limit Exceeded."<<endl;
    }
       else
       {
           cout<<"New balance is:"<<f<<endl;
       }
   }
    return 0;
}
