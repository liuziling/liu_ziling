#include <iostream>
#include "Rational.h"
using namespace std;

Rational::Rational(int n,int d)
{
   numerator=n;
   denominator=d;
   reduction();
}

Rational Rational::addition( const Rational &a )
{
   Rational t;
   t.numerator = a.numerator * denominator;
   t.numerator += a.denominator * numerator;
   t.denominator = a.denominator * denominator;
   t.reduction();
   return t;
}

Rational Rational::subtraction( const Rational &s )
{
   Rational t;
   t.numerator = s.denominator * numerator;
   t.numerator -= denominator * s.numerator;
   t.denominator = s.denominator * denominator;
   t.reduction();
   return t;
}

Rational Rational::multiplication( const Rational &m )
{
   Rational t;

   t.numerator = m.numerator * numerator;
   t.denominator = m.denominator * denominator;
   t.reduction();
   return t;
}

Rational Rational::division( const Rational &v )
{
   Rational t;

   t.numerator = v.denominator * numerator;
   t.denominator = denominator * v.numerator;
   t.reduction();
   return t;
}

void Rational::printRational ()
{
   if ( denominator == 0 )
      cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
   else if ( numerator == 0 )
      cout << 0;
   else
      cout << numerator << '/' << denominator;
}

void Rational::printRationalAsDouble()
{
   cout << static_cast< double >( numerator ) / denominator;
}

void Rational::reduction()
{
   int largest;
   largest = (numerator > denominator ? numerator : denominator);

   int gcd;

   for ( int loop = largest; loop >= 2; loop-- )
{
    if ( numerator % loop == 0 && denominator % loop == 0 )
    {
        gcd = loop;
        numerator /= gcd;
        denominator /= gcd;
    }
}
}
