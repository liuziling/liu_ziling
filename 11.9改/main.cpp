#include <iostream>
#include"Package.h"
#include"twodaypackage.h"
#include"overnightpackage.h"
#include<iomanip>
using namespace std;

int main()
{
    Package package("liu","qian","tuanjie","chengdu","sichuan","610500",500.00,12.0);
    TwoDayPackage twodaypackage("liu","qian","tuanjie","chengdu","sichuan","610500",500.00,12.0,5.0);
    OvernightPackage overnightpackage("liu","qian","tuanjie","chengdu","sichuan","610500",500.00,12.0,10.0);

    cout<<"Some informations:"<<endl;
    cout<<"The sender is:"<<package.getSender()<<"\nThe addressee is:"<<package.getAddressee()<<"\nThe address is:"<<package.getAddress()<<
    "\nThe city is:"<<package.getCity()<<"\nThe state is:"<<package.getState()<<"\nThe code is:"<<package.getCode()<<"\nThe storage are:"<<
    package.getStorage()<<"\nThe cost is:"<<package.getCost()<<"\nThe calculatecost is:"<<package.calculateCost()<<endl;

    cout<<"\nIf it is a twodaypackage:"<<endl;
    cout<<"The sender is:"<<twodaypackage.getSender()<<"\nThe addressee is:"<<twodaypackage.getAddressee()<<"\nThe address is:"<<twodaypackage.getAddress()<<
    "\nThe city is:"<<twodaypackage.getCity()<<"\nThe state is:"<<twodaypackage.getState()<<"\nThe code is:"<<twodaypackage.getCode()<<"\nThe storage are:"<<
    twodaypackage.getStorage()<<"\nThe cost is:"<<twodaypackage.getCost()<<"\nThe pingji is:"<<twodaypackage.getTwodays()<<"\nThe calculatecost is:"<<twodaypackage.calculateCost()<<endl;

    cout<<"\nIf is is an overnightpackage:"<<endl;
    cout<<"The sender is:"<<overnightpackage.getSender()<<"\nThe addressee is:"<<overnightpackage.getAddressee()<<"\nThe address is:"<<overnightpackage.getAddress()<<
    "\nThe city is:"<<overnightpackage.getCity()<<"\nThe state is:"<<overnightpackage.getState()<<"\nThe code is:"<<overnightpackage.getCode()<<"\nThe storage are:"<<
    overnightpackage.getStorage()<<"\nThe cost is:"<<overnightpackage.getCost()<<"\nThe extra is:"<<overnightpackage.getOvernight()<<"\nThe calculatecost is:"<<overnightpackage.calculateCost()<<endl;
    return 0;
}
