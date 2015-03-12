/*
 * Account.cpp
 *
 *  Created on: Mar 11, 2015
 *      Author: Robert Byrne
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::cout;

#include "Account.h"

Account::Account( const double & startingBalance)
{
	_accountBalance = startingBalance;
};

void Account::creditAccount( const double & creditAmount)
{
	_accountBalance = _accountBalance + creditAmount;
}

void Account::debitAccount( const double & debitAmount)
{
	double _debitAmount = debitAmount;

	if( _debitAmount > _accountBalance)
	{
		cout << "Debit amount exceeds account balance." << endl;
	}
	else
	{
		_accountBalance = _accountBalance - _debitAmount;
		cout << "Balance after account debit: " << _accountBalance << endl;
	}
}

double Account::getBalance() const
{
	return _accountBalance;
}

void Account::print()
{
	cout << "Your balance is: " << _accountBalance << endl;
}
