#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b;
    unsigned int seed=0;
    cout<<"Enter seed:";
    cin>>seed;
    srand(seed);
    a=(1+rand()%1000);
    cout<<"I have a number between 1 and 1000.\n""Can you guess my number?\n""Please type your first guess:";
    cin>>b;
    if(a!=b)
    {
        while(a!=b)
    {

    if(b<a)
    {
        cout<<"Too low.Try again.";
        cin>>b;
    }
    else
    {
        cout<<"Too high.Try again.";
        cin>>b;
    }
    }

    cout<<"Excellent!You guessed the number!\n";
    cout<<"Would you like to play again(y or n)?";
    }
    return 0;
}
