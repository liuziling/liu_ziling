#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

unsigned int rollDice();
int Game ();
int main()
{
    int wager,bankBalance=1000;
    while(bankBalance>=0)
    {
        cout<<"Please enter your wager:";
        cin>>wager;
        while(wager>bankBalance)
        {
            cout<<"You don't have so much money!Please re-enter:";
            cin>>wager;
        }
        if(Game()==1)
        {
            bankBalance=bankBalance+wager;
            cout<<"The new bankBalance is:"<<bankBalance<<endl;
        }
        if(Game()==0)
        {
            bankBalance=bankBalance-wager;
            cout<<"The new bankBalance is:"<<bankBalance<<endl;
        }
        if(bankBalance==0)
        {
            cout<<"Sorry.You busted!";
            break;
        }
    }
}
int Game()
{
    enum Status{CONTINUE,WON,LOST};
    srand(static_cast<unsigned int>(time(0)));
    unsigned  int myPoint=0;
    Status gameStatus=CONTINUE;
    unsigned int sumOfDice=rollDice();
    switch (sumOfDice)
    {
    case 7:
    case 11:
        gameStatus=WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"Point is "<<myPoint<<endl;
        break;

    }
    while(CONTINUE==gameStatus)
    {
        sumOfDice=rollDice();
        if (sumOfDice==myPoint)
            gameStatus=WON;
        else
            if(sumOfDice==7)
            gameStatus=LOST;

    }
    if(WON==gameStatus)
        return 1;
    else
        return 0;
}
unsigned int rollDice()
{
    unsigned int die1=1+rand()%6;
    unsigned int die2=1+rand()%6;
    unsigned int sum=die1+die2;
    cout<<"Player rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
}
