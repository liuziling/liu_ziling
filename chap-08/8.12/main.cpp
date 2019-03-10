#include <iostream>
#include <cstdlib>
using namespace std;

void moveTortoise(int *const),moveHare(int *const);
int main()
{
    cout<<"Bang!!!"<<"\nAnd they’re off!!!"<<endl;
    int hare=1,tortoise=1;
    while(hare!=70,tortoise!=70)
    {
        moveTortoise(&tortoise);
        moveHare(&hare);
    }
    if(tortoise>hare)
        cout<<"Tortoise wins!!!yay!!!"<<endl;
    if(tortoise==hare)
        cout<<"Interesting."<<endl;
    if(hare>tortoise)
        cout<<"Hare wins!yuch!"<<endl;
    return 0;
}
void moveTortoise(int *const n)
{
    int a=1+rand()%10;
    if(a>=1&&a<=5)
        *n+=3;
    if(a>=6&&a<=7)
        *n-=6;
    if(a>=8&&a<=10)
        *n+=1;
    if(*n<1)
        *n=1;
    if(*n>70)
        *n=70;
}
void moveHare(int *const m)
{
    int b;
    b=rand()%10+1;
    if(b>=1&&b<=2)
        *m+=9;
    if(b>=3&&b<=4)
        *m+=0;
    if(b>=5&&b<6)
        *m-=12;
    if(b>=6&&b<=8)
        *m+=1;
    if(b>=9&&b<=10)
        *m+=2;
    if(*m<1)
        *m=1;
    if(*m>70)
        *m=70;
}
