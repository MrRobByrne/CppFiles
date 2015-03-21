/*
 * Complex.cpp
 *
 *  Created on: Mar 19, 2015
 *      Author: robert
 */

#include "ComplexNum.h"

ComplexNum::ComplexNum(const double & r, const double & i)
{
    	_real = r;
    	_imaginary = i;
};

bool ComplexNum::operator==(const ComplexNum &in)
{
    if(_real == in._real && _imaginary == in._imaginary)
    {
    	return true;
    }
    else
    {
    	return false;
    }
}
