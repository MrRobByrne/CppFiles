/*
 * SavingAccount.h
 *
 *  Created on: Mar 12, 2015
 *      Author: robert
 */

#ifndef SAVINGACCOUNT_H_
#define SAVINGACCOUNT_H_

#include <string>
using std::string;

#include "Account.h"

class SavingAccount : public Account
{
public:

	SavingAccount( const double &, const double & );

	void calculateInterest();

protected:

	double _interestRate;
};

#endif /* SAVINGACCOUNT_H_ */
