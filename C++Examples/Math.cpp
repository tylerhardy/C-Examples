#include "Math.h"

double power(double base, int exponent) // definition
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}