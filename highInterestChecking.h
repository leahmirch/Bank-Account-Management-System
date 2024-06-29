#ifndef H_highInterestChecking
#define H_highInterestChecking

#include "noServiceChargeChecking.h"

class highInterestChecking :
public noServiceChargeChecking // inheriting noServiceChargeChecking as public
{
public:
// only has constructor due to this class only modifying the already created variables in the parant class
highInterestChecking(int acctNum, string name, double initialBalance);
}; // end of class
#endif // !H_highInterestChecking
