/*
 * IsEqualTo.cpp
 *
 *  Created on: Mar 19, 2015
 *      Author: robert
 */
#include "ComplexNum.h"
#include "IsEqualTo.h"

template <typename EQ_Type> EQ_Type IsEgualTo<EQ_Type>::isEqual(EQ_Type x, EQ_Type y)
{
	if (x == y)
	{
		return true;
	}
	else
	{
		return false;
	}
}

