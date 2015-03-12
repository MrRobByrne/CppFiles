/*
 * Account.h
 *
 *  Created on: Mar 11, 2015
 *      Author: robert
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
using std::string;

class Account
{

public:

	Account( const double &);

	virtual void creditAccount( const double &);

	virtual void debitAccount( const double &);

	double getBalance() const;

	void print();

protected:

	double _accountBalance;
	//double _creditAmount;
	//double _debitAmount;
};

#endif /* ACCOUNT_H_ */
