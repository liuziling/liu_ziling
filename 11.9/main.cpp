#include <iostream>
#include"Package.h"
#include<iomanip>
using namespace std;

int main()
{
    Package package("liu","qian","tuanjie","chengdu","sichuan","610500",500.00,12.0);
    cout<<"Some informations:"<<endl;
    cout<<"The sender is:"<<package.getSender()<<"\nThe addressee is:"<<package.getAddressee()<<"\nThe address is:"<<package.getAddress()<<
    "\nThe city is:"<<package.getCity()<<"\nThe state is:"<<package.getState()<<"\nThe code is:"<<package.getCode()<<"\nThe cost are:"<<
    package.getCost()<<"\nThe cost is:"<<package.getCost()<<"\nThe calculatecost is:"<<package.calculateCost()<<endl;
    return 0;
}
