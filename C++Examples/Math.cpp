#include "Math.h"
#include <iostream>

using std::cout;
using std::cin;

double power(double base, int exponent) // definition
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}

void print_pow(double base, int exponent)
{
	double myPower = power(base, exponent);
	cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;
}
