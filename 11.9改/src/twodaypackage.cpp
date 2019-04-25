#include "twodaypackage.h"
#include "package.h"
#include<iostream>
#include<string>
using namespace std;

TwoDayPackage::TwoDayPackage(const string &send,const string &adder,const string &add,const string &cs,const string &sta,const string &co,double stor,double c,double two)
:Package(send,adder,add,cs,sta,co,stor,c)
{
    setTwodays(two);
}

void TwoDayPackage::setTwodays(double two)
{
    if(two>=0.0)
    {
        twodays=two;
    }
    else
    {
        cout<<"It is wrong!"<<endl;
    }
}

double TwoDayPackage::getTwodays() const
{
    return twodays;
}

double TwoDayPackage::calculateCost() const
{
    return cost*storage+twodays;
}
