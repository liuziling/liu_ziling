#include <iostream>
#include"matrix.h"
using namespace std;

int main()
{
    int line,row;
    Matrix A1,A2,A3;
    Matrix *pA1=new Matrix;
    Matrix *pA2=new Matrix;
    Matrix *pA3=new Matrix;
    cout<<"Please enter the lines and rows:"<<endl;
    cin>>line>>row;
    A1.Set(line,row);
    cout<<"Enter the A1:"<<endl;
    cin>>A1;

    cout<<"Please enter the lines and rows:"<<endl;
    cin>>line>>row;
    A2.Set(line,row);
    cout<<"Enter the A2:"<<endl;
    cin>>A2;
    cout<<"\n\n";

    A3=A1+A2;
    cout<<A1<<"+\n"<<A2<<"=\n"<<A3<<"\n\n";
    A3=A1-A2;
    cout<<A1<<"-\n"<<A2<<"=\n"<<A3<<"\n\n";
    cout<<"\n\n";

    cout<<"Please enter the lines and rows:"<<endl;
    cin>>line>>row;
    pA1->Set(line,row);
    cout<<"Enter the pA1:"<<endl;
    cin>>*pA1;
    cout<<"\n\n";
    cout<<"Please enter the lines and rows:"<<endl;
    cin>>line>>row;
    pA2->Set(line,row);
    cout<<"Enter the pA2:"<<endl;
    cin>>*pA2;
    cout<<"\n\n";

    *pA3=*pA1+*pA2;
    cout<<*pA1<<"+\n"<<*pA2<<"=\n"<<*pA3<<"\n\n";

    *pA3=*pA1-*pA2;
    cout<<*pA1<<"-\n"<<*pA2<<"=\n"<<*pA3<<"\n\n";
    system("pause");
    return 0;
}
