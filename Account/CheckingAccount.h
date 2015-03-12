/*
 * CheckingAccount.h
 *
 *  Created on: Mar 12, 2015
 *      Author: robert
 */

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include "Account.h"

class CheckingAccount : public Account
{

public:

	CheckingAccount( const double &, const double & );

	void debitAccount( const double &);

	void creditAccount( const double &);

protected:

	double _checkingCharge;
};



#endif /* CHECKINGACCOUNT_H_ */
