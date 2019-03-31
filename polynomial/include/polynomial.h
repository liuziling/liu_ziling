#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>

class polynomial
{
    friend polynomial operator+( const polynomial &, const polynomial & );
	friend polynomial operator-( const polynomial &, const polynomial & );
	friend polynomial operator*( const polynomial &, const polynomial & );

    public:
        explicit polynomial();//Ĭ�Ϲ��캯��
        polynomial(int);//�����С
        polynomial(const polynomial &);//��������
        polynomial(double*,int);//�в����Ĺ��캯��
        ~polynomial();

        polynomial &operator=( const polynomial & );
        void show();//��ʾ��Ϣ
        void setValue(int,double);
        double getValue(int);

    private:
        int size;
        double *value;
};

#endif // POLYNOMIAL_H
