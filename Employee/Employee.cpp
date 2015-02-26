/*
 * Employee.cpp

 *
 *  Created on: Feb 25, 2015
 *      Author: robert
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::cout;

#include "Employee.h"

// Base Class
Employee::Employee(const string & first, const string & last, const string & sin)
{
	_firstName = first;
	_lastName = last;
	_socialInsuranceNumber = sin;
};

void Employee::print() const
{
	cout << "Employee Name: " << _firstName << " " << _lastName
			<< "\nSocial Insurance Number: " << _socialInsuranceNumber << "\n";
}

string Employee::getFirstName() const
{
	return _firstName;
};

void Employee ::setFirstName(const string & first)
{
	_firstName = first;
}

string Employee::getLastName() const
{
	return _lastName;
}

void Employee::setLastName(const string & last)
{
	_lastName = last;
}

string Employee::getSIN() const
{
	return _socialInsuranceNumber;
}

void Employee::setSIN(const string & sin )
{
	_socialInsuranceNumber = sin;
}
