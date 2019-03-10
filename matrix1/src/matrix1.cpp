#include "matrix1.h"
#include<iomanip>

using namespace std;

ostream &operator<<(ostream &output,const Matrix1 &c)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            output<<c.a[i][j];
        }
    }
    return output;//ctor
}

istream &operator>>(istream &input,Matrix1 &a)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            input>>a.a[i][j];
        }
    }
    return input;//dtor
}

Matrix1 &operator+(Matrix1 &a,Matrix1 &b)
{
    Matrix1 c;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c.a[i][j]=a.a[i][j]+b.a[i][j];
        }
    }
    return c;
}
