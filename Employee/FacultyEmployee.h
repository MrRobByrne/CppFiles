/*
 * FacultyEmployee.h
 *
 *  Created on: Feb 26, 2015
 *      Author: robert
 */

#ifndef FACULTYEMPLOYEE_H_
#define FACULTYEMPLOYEE_H_

#include <string>
#include <vector>
using std::string;

#include "Employee.h"

class FacultyEmployee : public Employee
{
public:
	FacultyEmployee(
			const string &, const string &, const string &,
			const string &, const string &);

	void print();

	void setOffice(string);
	string getOffice();

	void setCourse(string);
	void getCourses();

protected:
	string _office;
	std::vector<string> courses;
	string _addCourse;
};

#endif /* FACULTYEMPLOYEE_H_ */
