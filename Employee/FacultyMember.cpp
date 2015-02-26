/*
 * FacultyMember.cpp

 *
 *  Created on: Feb 26, 2015
 *      Author: robert
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "FacultyEmployee.h"

FacultyEmployee::FacultyEmployee(
		const string & first, const string &last, const string &sin,
		const string & office, const string & courses ) : Employee(first, last, sin)
{
	setOffice(office);
	setCourse(courses);
}

void FacultyEmployee::print()
{
	Employee::print();
	cout << "Office: " << _office << "\n";
	cout << "Courses: ";
	for(int x = 0; x != courses.size(); ++x)
	{
		cout << courses[x] << ", ";
	}
	cout << "\n" << endl;
}

void FacultyEmployee::setOffice(string office)
{
	_office = office;
}

string FacultyEmployee::getOffice()
{
	return _office;
}

void FacultyEmployee::setCourse(string course)
{
	_addCourse = course;
	courses.push_back(_addCourse);
}

void FacultyEmployee::getCourses()
{

}


