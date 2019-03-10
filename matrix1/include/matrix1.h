#ifndef MATRIX1_H
#define MATRIX1_H
#include<iostream>

class Matrix1
{
    friend std::ostream &operator<<(std::ostream &,const Matrix1 &);
    friend std::istream &operator>>(std::istream &,Matrix1 &);
    friend Matrix1 &operator+(Matrix1 &,Matrix1 &);

    private:
        int a[2][2];
};

#endif
