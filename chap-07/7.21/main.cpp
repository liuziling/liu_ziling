#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i;
    int sales[5][4]={{1,1,1,2},{2,2,2,1},{3,3,1,2},{4,4,4,1},{5,5,1,1}};
    cout<<"Saleman: 1  2  3  4  sum"<<endl;
    a=sales[0][0]+sales[0][1]+sales[0][2]+sales[0][3];
    b=sales[1][0]+sales[1][1]+sales[1][2]+sales[1][3];
    c=sales[2][0]+sales[2][1]+sales[2][2]+sales[2][3];
    d=sales[3][0]+sales[3][1]+sales[3][2]+sales[3][3];
    e=sales[4][0]+sales[4][1]+sales[4][2]+sales[4][3];
    f=sales[0][0]+sales[1][0]+sales[2][0]+sales[3][0]+sales[4][0];
    g=sales[0][1]+sales[1][1]+sales[2][1]+sales[3][1]+sales[4][1];
    h=sales[0][2]+sales[1][2]+sales[2][2]+sales[3][2]+sales[4][2];
    i=sales[0][3]+sales[1][3]+sales[2][3]+sales[3][3]+sales[4][3];
    cout<<"Produt:a"<<" "<<sales[0][0]<<"  "<<sales[0][1]<<"  "<<sales[0][2]<<"  "<<sales[0][3]<<"  "<<a<<endl;
    cout<<"       b"<<" "<<sales[1][0]<<"  "<<sales[1][1]<<"  "<<sales[1][2]<<"  "<<sales[1][3]<<"  "<<b<<endl;
    cout<<"       c"<<" "<<sales[2][0]<<"  "<<sales[2][1]<<"  "<<sales[2][2]<<"  "<<sales[2][3]<<"  "<<c<<endl;
    cout<<"       d"<<" "<<sales[3][0]<<"  "<<sales[3][1]<<"  "<<sales[3][2]<<"  "<<sales[3][3]<<"  "<<d<<endl;
    cout<<"       e"<<" "<<sales[4][0]<<"  "<<sales[4][1]<<"  "<<sales[4][2]<<"  "<<sales[4][3]<<"  "<<e<<endl;
    cout<<"  sum:"<<"  "<<f<<" "<<g<<"  "<<h<<"  "<<i<<endl;
    return 0;
}
