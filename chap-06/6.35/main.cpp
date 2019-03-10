#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b,i=1;
    unsigned int seed=0;
    cout<<"Enter seed:";
    cin>>seed;
    srand(seed);
    a=(1+rand()%1000);
    cout<<"I have a number between 1 and 1000.\n""Can you guess my number?\n""Please type your first guess:";
    cin>>b;
    while(a!=b)
       {
           if(b<a)
          {
             cout<<"Too low.Try again.";
             cin>>b;
          }
           else if(b>a)
          {
             cout<<"Too high.Try again.";
             cin>>b;
          }
          i++;
       }
    cout<<"Excellent!You guessed the number!\n";
    cout<<"Would you like to play again(y or n)?\n";
    cout<<"Number of times is:"<<i<<endl;
        if(i<10)
    {
        cout<<"Either you know the secret or you got lucky!";
    }
    if(i==10)
    {
        cout<<"Ahah!You know the secret!";
    }
    if(i>10)
    {
        cout<<"You should be able to do better!";
    }
    return 0;
}
