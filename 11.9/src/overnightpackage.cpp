#include "overnightpackage.h"
#include<iostream>
#include<string>
using namespace std;
Overnightpackage::Overnightpackage(const string &send,const string &adder,const string &add,const string &cs,const string &sta,const string co,double stor,double trans,double over)
:Package(send,adder,add,cs,sta,co,stor,trans)
{
    setOvernight(over);//ctor
}

void OvernightPackage::setOvernight(double over)
{
    if(over>=0.0)
    {
        overnight=over;
    }
    else
    {
        cout<<"It is wrong!"<<endl;
    }
}

double OvernightPackage::getOvernight() const
{
    return overnight;
}

double OvernightPackage::calculateCost() const
{
    return cost*(storage+overnight);
}
