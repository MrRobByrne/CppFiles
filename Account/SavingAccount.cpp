/*
 * SavingAccount.cpp
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

#include "SavingAccount.h"

SavingAccount::SavingAccount( const double & startBalance, const double & interestRate) : Account( startBalance)
{
	_accountBalance = startBalance;
	_interestRate = interestRate;
};

void SavingAccount::calculateInterest()
{
	double interestEarned = _accountBalance * _interestRate;
	cout << "The interest you have earned is " << interestEarned << endl;
	Account::creditAccount(interestEarned);

}




