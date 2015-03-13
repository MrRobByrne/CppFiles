/*
 * TestAccount.cpp
 *
 *  Created on: Mar 12, 2015
 *      Author: robert
 */

#include <iostream>
#include <iomanip>
using namespace std;
#include <vector>
using std::vector;
using std::cout;

#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"

int main( int argc, char ** argv )
{

	vector < Account *> accounts(5);

	accounts[ 0 ] = new CheckingAccount( 420, 4 );
	accounts[ 1 ] = new SavingAccount( 300, 0.10 );
	accounts[ 2 ] = new SavingAccount( 100, 0.05 );
	accounts[ 3 ] = new CheckingAccount( 200, 2 );
	accounts[ 4 ] = new CheckingAccount( 1000, 100 );

	for ( size_t i = 0; i < accounts.size(); i++ )
	{
		accounts[ i ]->print();
		cout << endl;

		SavingAccount *derivedPtr = dynamic_cast < SavingAccount *> ( accounts[ i ]);

		if ( derivedPtr != 0 )
		{
			double accountBalance = derivedPtr->getBalance();
			cout << "Savings Account Starting Balance is: " << accountBalance << endl;
			derivedPtr->calculateInterest();
			double newAccountBalance = derivedPtr->getBalance();
			cout << typeid( * accounts[ i] ).name() << ": " << "Your Savings New Balance is: " << newAccountBalance << endl;
		}
		else
		{
			double accountBalance = accounts[ i ]->getBalance();
			cout << "Checking Account Starting Balance is: " << accountBalance << endl;
		}
	}

	//testing the polymorphism seperatly to make sure it works correctly
	accounts[ 3 ]->debitAccount(20);
	accounts[ 3 ]->creditAccount(100);
	accounts[ 2 ]->creditAccount(100);
	accounts[ 2 ]->print();
	return 0;
}



