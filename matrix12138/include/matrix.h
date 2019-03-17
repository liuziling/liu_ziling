#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>

class Matrix
{
    Matrix(int,int,int &);
    Matrix(Matrix&);
    void Set(int,int);
    friend std::ostream &operator<<(std::ostream &,const Matrix &);
    friend std::istream &operator>>(std::istream &,Matrix &);
    friend Matrix &operator+(const Matrix&);
    friend Matrix &operator-(const Matrix&);
    friend Matrix &operator=(const Matrix&);
    ~Matrix();

    private:
        int *M;
        int lines;
        int rows;
};

#endif
