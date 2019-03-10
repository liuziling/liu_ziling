#include <iostream>
#include "Time.h"
using namespace std;

Time::Time( int hr, int min, int sec )
{
   setTime( hr, min, sec );
}

bool Time::setTime( int h, int m, int s )
{
   bool hourValid = setHour( h );
   bool minuteValid = setMinute( m );
   bool secondValid = setSecond( s );
   return hourValid && minuteValid && secondValid;
}

bool Time::setHour( int hr )
{
   if ( hr >= 0 && hr < 24 )
   {
      hour = hr;
      return true;
   }
   else
   {
      hour = 0;
      return false;
   }
}

bool Time::setMinute( int min )
{
   if ( min >= 0 && min < 60 )
   {
      minute = min;
      return true;
   }
   else
   {
      minute = 0;
      return false;
   }
}

bool Time::setSecond( int sec )
{
   if ( sec >= 0 && sec < 60 )
   {
      second = sec;
      return true;
   }
   else
   {
      second = 0;
      return false;
   }
}


int Time::getHour()
{
   return hour;
}


int Time::getMinute()
{
   return minute;
}

int Time::getSecond()
{
   return second;
}

void Time::printUniversal()
{
   cout << ( hour < 10 ? "0" : "" ) << hour << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second;
}

void Time::printStandard()
{
   cout << ( ( hour % 12 == 0 ) ? 12 : hour % 12 ) << ':'
      << ( minute < 10 ? "0": "" ) << minute << ':'
      << ( second < 10 ? "0": "" ) << second
      << ( hour < 12 ? " AM" : " PM" );
}
