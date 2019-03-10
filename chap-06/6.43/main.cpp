#include <iostream>
//没加#include <stdio.h>这个头文件
using namespace std;

int main()
{
    int c=0;
    if((c=cin.get())!=EOF)
    {
        main();
        cout<<c;
    }
}
