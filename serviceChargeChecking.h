#ifndef H_serviceChargeChecking
#define H_serviceChargeChecking

#include "checkingAccount.h"

class serviceChargeChecking :
public checkingAccount // inherits checkingAccount as public
{
public:
// constructor
serviceChargeChecking(int acctNum, string name, double initialBalance);

// functions
void writeCheck(double amount);
void printSummary();
};
#endif // !H_serviceChargeChecking
