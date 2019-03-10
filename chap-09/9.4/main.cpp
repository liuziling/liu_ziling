#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
   Time t;
   cout<<"The universal time is :"<<endl;
   t.printUniversal();
   cout<<"The standard time is :"<<endl;
   t.printStandard();
   cout<<endl;
}
