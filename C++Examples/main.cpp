#include <iostream>
#include "Math.h"

using std::cout;
using std::cin;

int main() 
{
	double base;
	int exponent;
	cout << "What is the base?: ";
	cin >> base;
	cout << "What is the exponent?: ";
	cin >> exponent;
	print_pow(base, exponent);
}
