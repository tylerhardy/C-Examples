#include <iostream>
#include <cmath>

int main() 
{
	std::cout << sqrt(25) << std::endl;
	// 5

	std::cout << sqrt(-25) << std::endl;
	// -nan(ind) --> not a number (nan)

	std::cout << pow(9,999) << std::endl;
	// inf

	std::cout << pow(-9, 999) << std::endl;
	// -inf

	std::cout << NAN << std::endl;
	// -nan(ind)

	std::cout << INFINITY << std::endl;
	// inf

	std::cout << -INFINITY << std::endl;
	// - inf

	std::cout << remainder(10, 3) << std::endl;
	// 1

	std::cout << 10 % 3 << std::endl;
	// 1

	std::cout << remainder(10, 3.25) << std::endl;
	// 0.25

	std::cout << fmod(10, 3.25) << std::endl;
	// 0.25

	std::cout << fmax(999.99,8*84481) << std::endl;	// returns the greater of the two
	// 675848

	std::cout << fmin(999.99, 8 * 84481) << std::endl;	// returns the smaller of the two
	// 999

	std::cout << ceil(fmin(999.99, 8 * 84481)) << std::endl; // gives the ceiling on the returned number
	// 1000

	std::cout << floor(fmin(999.99, 8 * 84481)) << std::endl; // gives the floor on the returned number
	// 999

	std::cout << trunc(fmin(999.99, 8 * 84481)) << std::endl; // gives the truncated value on the returned number
	// 999

	std::cout << round(-1.49) << std::endl;
	// -1

	std::cout << round(-1.51) << std::endl;
	// -2
}