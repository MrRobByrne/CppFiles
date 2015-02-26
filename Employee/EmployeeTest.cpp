/*
 * EmployeeTest.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: robert
 */

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

#include "FacultyEmployee.h"

int main( int argc, char ** argv )
{
	Employee Robert("Robert", "Byrne", "0577830");
	Robert.print();
	Robert.print();
	FacultyEmployee Bob("Bob", "Thomas", "111111", "CB 1015", "Math 2344");
	FacultyEmployee Suzy("Suzy", "Two-Shoes", "2222222", "RB 3652", "Spanish 1000");
	Bob.print();
	Bob.setCourse("Enfi 4200");
	Bob.print();
	Suzy.print();
	Suzy.setOffice("RB 2600");
	Suzy.print();

	return 0;
}



