/*
 * Complex.h
 *
 *  Created on: Mar 19, 2015
 *      Author: robert
 */

#ifndef COMPLEXNUM_H_
#define COMPLEXNUM_H_

#include <string>
using std::string;

class ComplexNum
{

public:

	ComplexNum( const double &, const double & );

	bool operator==(const ComplexNum &);


private:

	double _real;
	double _imaginary;

};



#endif /* COMPLEXNUM_H_ */
