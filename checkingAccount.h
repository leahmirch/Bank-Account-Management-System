#ifndef H_checkingAccount
#define H_checkingAccount

#include "bankAccount.h"

class checkingAccount :
public bankAccount // inheriting bankAccount as public
                    // abstract class
{
public:
// constructor
checkingAccount(int acctNum, string name, double initialBalance);

// functions
void withdraw(double amount);
void printStatement();

// pure virtual function
virtual void writeCheck(double amount) = 0;

protected:
// variables
double m_InterestRate;
int m_ChecksRemaining;
double m_MinimumBalance;
}; // end of abstract class
#endif // !H_checkingAccount
