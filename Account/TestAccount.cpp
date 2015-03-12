/*
 * TestAccount.cpp
 *
 *  Created on: Mar 12, 2015
 *      Author: robert
 */

#include <iostream>
#include <iomanip>
using namespace std;

#include "SavingAccount.h"
#include "CheckingAccount.h"

int main( int argc, char ** argv )
{
	SavingAccount Bob(240, 0.05);
	Bob.print();
	Bob.calculateInterest();
	Bob.print();
	Account Rob(420.00);
	Rob.print();
	Rob.creditAccount(25.45);
	Rob.print();
	Rob.debitAccount(2600.00);
	Rob.debitAccount(200);
	CheckingAccount Jim(500, 5);
	Jim.print();
	Jim.creditAccount(500);
	Jim.print();
	Jim.debitAccount(400);
	Jim.print();

	return 0;
}



