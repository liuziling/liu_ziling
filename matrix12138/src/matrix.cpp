#include "matrix.h"
#include<iomanip>
using namespace std;

Matrix::Matrix(int line=0,int row=0,int *pM=NULL)
{
    if(line<0||row<0)
    {
        cout<<"wrong!"<<endl;
        lines=rows=0;
        return;
    }
    lines=line;
    rows=row;
    M=new int[lines*rows];
}

Matrix::Matrix(Matrix& M2)//拷贝构造函数
{
    lines=M2.lines;
    rows=M2.rows;
    M=new int[lines*rows];
    for(int i=0;i<rows*lines;i++)
    {
        M[i]=M2.M[i];
    }
}

void Matrix::Set(int line=-1,int row=-1)
{
    if(line!=-1)
    {
        lines=line;//更新line的值
    }
    if(rows!=-1)
    {
        rows=row;//更新row的值
    }
    if(line<0||row<0)
    {
        cout<<"wrong!"<<endl;
        lines=rows=0;    cout<<"Please enter the lines and rows:"<<endl;
    cin>>line>>row;
    pA1->Set(line,row);
    cout<<"Enter the pA1:"<<endl;
    cin>>*pA1;
    cout<<"\n\n";
        return;
    }
    if(M!=NULL) delete M;
    M=new int[lines*rows];
}

ostream &operator<<(ostream &output,const Matrix &m)
{
    for(int i=0;i<m.lines;i++)
    {
        for(int j=0;j<m.rows;j++)
        {
            output<<setw(4)<<m.M[i*m.lines+j]<<" ";
            output<<endl;
        }
        output<<endl;
    }
    return output;
}

istream &operator>>(istream &input,Matrix &m)
{
    for(int i=0;i<m.lines*m.rows;i++)
    {
        input>>m.M[i];
    }
    return input;
}

Matrix& Matrix::operator+(const Matrix& M2)
{
    if(M2.lines!=lines||M2.rows!=rows)//矩阵大小不一样
    {
        cout<<"They are different."<<endl;
        return Matrix();//返回空矩阵
    }
    Matrix *M3=new Matrix(lines,rows);
    Matrix &Re=*M3;
    for(int i=0;i<lines*rows;i++)
        {
            M3->M[i]=M[i]+m2.m[I];
        }
        return Re;
}

Matrix& Matrix::operator-(const Matrix& M2)
{
    if(M2.lines!=lines||M2.rows!=rows)//矩阵大小不一样
    {
        cout<<"They are different."<<endl;
        return Matrix();//返回空矩阵
    }
    Matrix *M3=new Matrix(lines,rows);
    Matrix &Re=*M3;
    for(int i=0;i<lines*rows;i++)
        {
            M3->M[i]=M[i]+m2.m[I];
        }
        return Re;
}

Matrix& Matrix::operator=(const Matrix& M2)
{
    if(this!=&M2)
    {
        if(M!=NULL)delete M;
        {
            lines=M2.lines;
            rows=M2.rows;
            M=new int[lines*rows];
        }
        for(int i=0;i<lines*rows;i++)
        {
            M[i]=M2.M[i];
        }
    }
    return *this;
}

Matrix::~Matrix()
{
    delete M;
}






















