#include "polynomial.h"
#include <iostream>

using namespace std;
polynomial::polynomial()
{
    size=6;
    value=new double[size];
}

polynomial::polynomial(int _size)
{
    size=_size;
    value=new double[size];
}

polynomial::polynomial(const polynomial &poly)
{
    size=poly.size;
    value=new double[size];
    for(int i=0;i<size;i++)
    {
        value[i]=poly.value[i];
    }
}

polynomial::polynomial(double* nvalue,int _size)
{
    size=_size;
    value=new double[size];
    for(int i=0;i<size;i++)
    {
        value[i]=nvalue[i];
    }
}

polynomial::~polynomial()
{
    delete []value;
}

void polynomial::show()
{
    int temp=0;
    for(int t=0;t<size;t++)
    {
        if(value[t]!=0)
        {
            temp=t;
            break;
        }
    }
    for(int i=size-1;i>=0;i--)
    {
        if(value[i]!=0)
        {
            if(value[i]!=1||i==0)
               {
                  cout<<value[i];
               }
            for(int j=0;j<i;j++)
            {
                if(j==0)
                {
                    cout<<"x";
                }
                else
                {
                    cout<<"*x";
                }
            }
            if(i>temp)
            {
                cout<<"+";
            }
        }
    }
    cout<<endl;
}

void polynomial::setValue(int number,double value)
{
    value[number]=value;
}

double polynomial::getValue(int number)
{
    return value[number];
}

polynomial&polynomial::operator=(const polynomial&poly2)
{
    size=poly2.size;
    value=new double[size];
    for(int i=0;i<size;i++)
    {
        value[i]=poly2.value[i];
    }
    return *this;
}

polynomial operator+(const polynomial& poly1,const polynomial& poly2)
{
    if(poly1.size>=poly2.size)
    {
        polynomial poly3(poly1);
        for(int i=0;i<poly2.size;i++)
        {
            poly3.value[i]=poly1.value[i]+poly2.value[i];
        }
        return poly3;
    }
    else
    {
        polynomial poly3(poly2);
        for(int i=0;i<poly1.size;i++)
        {
            poly3.value[i]=poly1.value[i]+poly2.value[i];
        }
        return poly3;
    }
}

polynomial operator-(const polynomial& poly1,const polynomial& poly2)
{
    if(poly1.size>=poly2.size)
    {
        polynomial poly3(poly1);
        for(int i=0;i<poly2.size;i++)
        {
            poly3.value[i]=poly1.value[i]-poly2.value[i];
        }
        return poly3;
    }
    else
    {
        polynomial poly3(poly2);
        for(int i=0;i<poly1.size;i++)
        {
            poly3.value[i]=poly1.value[i]-poly2.value[i];
        }
        for(int i=0;i<poly2.size;i++)
        {
            poly3.value[i]*=-1;
        }
        return poly3;
    }
}

polynomial operator*(const polynomial& poly1,const polynomial& poly2)
{
    polynomial poly3(poly1.size+poly2.size-1);
    for(int m=0;m<poly3.size;m++)
        {
            poly3.value[m]=0;
        }
    for(int i=0;i<poly1.size;i++)
        {
            for(int j=0;j<poly2.size;j++)
            {
                poly3.value[i+j]+=poly1.value[i]*poly2.value[j];
            }
        }
        return poly3;
}
