#ifndef MATRIX0_H
#define MATRIX0_H
#include<iostream>

class Matrix0
{
    friend std::ostream &operator<<(std::ostream &,const Matrix0 &);
    friend std::istream &operator>>(std::istream &,Matrix0 &);

    private:
        int letter1;
        int letter2;
        int letter3;
        int letter4;
};

#endif
