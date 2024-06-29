#ifndef H_noServiceChargeChecking
#define H_noServiceChargeChecking

#include "checkingAccount.h"

class noServiceChargeChecking :
public checkingAccount
{
public:
// constructor
noServiceChargeChecking(int acctNum, string name, double initialBalance);

// functions
void writeCheck(double amount);
void printSummary();

};
#endif // !H_noServiceChargeChecking
