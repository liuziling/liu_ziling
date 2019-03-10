#include "matrix0.h"
#include<iomanip>

using namespace std;

ostream &operator<<(ostream &output,const Matrix0 &charater)
{
    output<<charater.letter1<<endl;
    output<<charater.letter2<<endl;
    output<<charater.letter3<<endl;
    output<<charater.letter4<<endl;
    return output;//ctor
}

istream &operator>>(istream &input,Matrix0 &charater)
{
    input>>setw(3)>>charater.letter1;
    input.ignore();
    input>>setw(3)>>charater.letter2;
    input.ignore();
    input>>setw(3)>>charater.letter3;
    input.ignore();
    input>>setw(3)>>charater.letter4;
    input.ignore();
    return input;//dtor
}
