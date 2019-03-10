#include <iostream>
#include "Time.h"
using namespace std;

int getMenuChoice();

int main()
{
   Time time;
   int choice = getMenuChoice();
   int hours;
   int minutes;
   int seconds;

   while ( choice != 4 )
   {
      switch ( choice )
      {
         case 1:
            cout << "Enter Hours: ";
            cin >> hours;

            if ( !time.setHour( hours ) )
               cout << "Invalid hours." << endl;
            break;
         case 2:
            cout << "Enter Minutes: ";
            cin >> minutes;

            if ( !time.setMinute( minutes ) )
               cout << "Invalid minutes." << endl;
            break;
         case 3:
            cout << "Enter Seconds: ";
            cin >> seconds;

            if ( !time.setSecond( seconds ) )
               cout << "Invalid seconds." << endl;
            break;
      }

      cout << "Hour: " << time.getHour() << " Minute: "
         << time.getMinute() << " Second: " << time.getSecond() << endl;
      cout << "Universal time: ";
      time.printUniversal();
      cout << " Standard time: ";
      time.printStandard();
      cout << endl;

      choice = getMenuChoice();
   }
}


int getMenuChoice()
{
   int choice;

   cout << "1. Set Hour\n2. Set Minute\n3. Set Second\n"
      << "4. Exit\nChoice: " << endl;
   cin >> choice;
   return choice;
}
