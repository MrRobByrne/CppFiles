/*
 * Employee.h
 *
 *  Created on: Feb 26, 2015
 *      Author: robert
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>
using std::string;

class Employee
{

public:

	Employee(const string &, const string &, const string &);

	void print() const;

	void setFirstName( const string &);
	string getFirstName() const;

	void setLastName( const string &);
	string getLastName() const;

	void setSIN( const string &);
	string getSIN() const;

protected:
	string _firstName;
	string _lastName;
	string _socialInsuranceNumber;
};




#endif /* EMPLOYEE_H_ */
