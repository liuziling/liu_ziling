#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "commissionemployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const string &, const string &,
      const string &, int, int, int, double = 0.0, double = 0.0,
      double = 0.0 );

   void setBaseSalary( double );
   double getBaseSalary() const;

   virtual double earnings() const;
   virtual void print() const;
private:
   double baseSalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H
