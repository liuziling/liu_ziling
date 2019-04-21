#ifndef CHEAKINGACCOUNT_H
#define CHEAKINGACCOUNT_H
#include "account.h"

class CheckingAccount : public Account
{
public:
   CheckingAccount( double, double );

   virtual void credit( double );
   virtual bool debit( double );
private:
   double transactionFee;


   void chargeFee();
};

#endif
