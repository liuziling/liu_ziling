#include "Rectangle.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Rectangle::Rectangle(double len,double wid)
{
    setLength(len);
    setWidth(wid);
}

void Rectangle::setLength(double len)
{
    if(len>0.0&&len<20.0)
        length=len;
    else
        throw invalid_argument("The length out of range.");
}

double Rectangle::getLength() const
{
    return length;
}

void Rectangle::setWidth(double wid)
{
    if(wid>0.0&&wid<20.0)
        width=wid;
    else
        throw invalid_argument("The width out of range.");
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::perimeter()
{
    return (length+width)*2;
}

double Rectangle::area()
{
    return length*width;
}

void Rectangle::print()
{
    cout<<"The perimeter is:"<<Rectangle::perimeter()<<"\nThe area is:"<<Rectangle::area()<<endl;
}
