#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>

class polynomial
{
    friend polynomial operator+( const polynomial &, const polynomial & );
	friend polynomial operator-( const polynomial &, const polynomial & );
	friend polynomial operator*( const polynomial &, const polynomial & );

    public:
        explicit polynomial();//默认构造函数
        polynomial(int);//定义大小
        polynomial(const polynomial &);//拷贝函数
        polynomial(double*,int);//有参数的构造函数
        ~polynomial();

        polynomial &operator=( const polynomial & );
        void show();//显示信息
        void setValue(int,double);
        double getValue(int);

    private:
        int size;
        double *value;
};

#endif // POLYNOMIAL_H
