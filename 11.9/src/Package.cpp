#include "Package.h"
#include<iostream>
#include<string>
using namespace std;

Package::Package(const string &send,const string &adder,const string &add,const string &cs,const string &sta,const string co,double stor,double trans)
:sender(sen),addressee(adder),adderss(add),city(cs),state(sta),code(co),storage(stor),cost(c)
{
}

void Package::setSender(const string &send)
{
    sender=send;
}

string Package::getSender() const
{
    return sender;
}

void Package::setAddressee(const string &adder)
{
    addressee=adder;
}

string Package::getAddressee() const
{
    return addressee;
}

void Package::setAddress(const string &add)
{
    address=add;
}

string Package::getAddress() const
{
    return address;
}

void Package::setCity(const string &cs)
{
    city=cs;
}

string Package::getCity() const
{
    return city;
}

void Package::setState(const string &sta)
{
    state=sta;
}

string Package::getState() const
{
    return state;
}

void Package::setCode(const string &co)
{
    code=co;
}

string Package::getCode() const
{
    return code;
}

void Package::setStorage(double stor)
{
    if(stor>=0.0)
    {
        storage=stor;
    }
    else
    {
        cout<<"It is wrong!"<<endl;
    }
}

double Package::getStorage() const
{
    return storage;
}

void Package::setCost(double c)
{
    if(c>=0.0)
    {
        cost=c;
    }
    else
    {
        cout<<"There is nothing."<<endl;
    }
}

double Package::getCost() const
{
    return cost;
}

double Package::calculateCost() const
{
    return cost*storage;
}
