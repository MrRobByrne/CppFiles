/*
 * CheckingAccount.cpp
 *
 *  Created on: Mar 12, 2015
 *      Author: robert
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::cout;

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount( const double & startBalance, const double & checkingCharge) : Account(startBalance)
{
	_accountBalance = startBalance;
	_checkingCharge = checkingCharge;
};

void CheckingAccount::debitAccount( const double & debitAmount )
{
	double _debitAmount = debitAmount;

	if( _debitAmount > _accountBalance)
	{
		cout << "Debit amount exceeds account balance." << endl;
	}
	else
	{
		_accountBalance = _accountBalance - _debitAmount - _checkingCharge;
		cout << "Balance after account debit: " << _accountBalance << endl;
	}
}

void CheckingAccount::creditAccount( const double & creditAmount )
{
	double _creditAmount = creditAmount;
	_accountBalance = _accountBalance + _creditAmount - _checkingCharge;
}


