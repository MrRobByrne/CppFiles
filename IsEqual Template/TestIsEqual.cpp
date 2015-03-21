/*
 * TestIsEqual.cpp
 *
 *  Created on: Mar 19, 2015
 *      Author: robert
 */

#include "ComplexNum.h"
#include "IsEqualTo.h"

int main( int argc, char ** argv )
{

ComplexNum Num1(32.3, 1.9);
ComplexNum Num2(32.3, 1.9);

	if (Num1 == Num2)
	{
		printf("These 2 complex numbers [Num1 & Num2] are equal\n");
	}
	else
	{
		printf("These 2 complex numbers [Num1 & Num2] are not equal\n");
	}
	ComplexNum Num3(32.4, 1.6);
	ComplexNum Num4(32.3, 1.9);

		if (Num3 == Num4)
		{
			printf("These 2 complex numbers [Num1 & Num2] are equal\n");
		}
		else
		{
			printf("These 2 complex numbers [Num1 & Num2] are not equal\n");
		}

	ComplexNum Num5(43, 5);
	ComplexNum Num6(43, 5);

	if (Num5 == Num6)
	{
		printf("These 2 complex numbers [Num5 & Num6] are equal\n");
	}
	else
	{
		printf("These 2 complex numbers [Num5 & Num6] are not equal\n");
	}

	ComplexNum Num7(42, 3);
	ComplexNum Num8(43, 5);

	if (Num7 == Num8)
	{
		printf("These 2 complex numbers [Num7 & Num8] are equal\n");
	}
	else
	{
		printf("These 2 complex numbers [Num7 & Num8] are not equal\n");
	}
}
