#include <iostream>
#include "Math.h"

using std::cout;
using std::cin;

int main() 
{
	int base, exponent;
	cout << "What is the base?: ";
	cin >> base;
	cout << "What is the exponent?: ";
	cin >> exponent;
	double myPower = power(base, exponent);
	cout << myPower << std::endl;
}
