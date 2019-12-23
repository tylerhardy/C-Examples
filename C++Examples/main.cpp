#include <iostream>
#include <climits>
#include <float.h>
using namespace std;

int main() 
{
	// Basic datatypes

	int iVar; // integral (int)
	char cVar; // character (char)
	double dVar; // floating point / fractional (double)
	bool bVar; // Boolean / True or False (bool)
	int aIntVar[20]; // 1D Array of int variables (int)
	char aCharVar[20]; // 1D array of char variables (char)


	// DATATYPE: int and char

	// INT
	// unsigned int for always positive
	// signed int for negative numbers (lower max value then unsigned)

	short shortVar;						// 16 bits of memory
	int intVar;							// 16 or 32 bits of memory
	long longVar;						// at least 32 bits of memory
	long long longLongVar;				// at least 64 bits of memory
	unsigned short uShortVar;
	unsigned int uIntVar;
	unsigned long uLongVar;
	unsigned long long uLongLongVar;

	cout << "Size of [" << typeid(shortVar).name() << "] is: [" << sizeof(shortVar) * 8 << "] bits, or [" << sizeof(shortVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(intVar).name() << "] is: [" << sizeof(intVar) * 8 << "] bits, or [" << sizeof(intVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(longVar).name() << "] is: [" << sizeof(longVar) * 8 << "] bits, or [" << sizeof(longVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(longLongVar).name() << "] is: [" << sizeof(longLongVar) * 8 << "] bits, or [" << sizeof(longLongVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(uShortVar).name() << "] is: [" << sizeof(uShortVar) * 8 << "] bits, or [" << sizeof(uShortVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(uIntVar).name() << "] is: [" << sizeof(uIntVar) * 8 << "] bits, or [" << sizeof(uIntVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(uLongVar).name() << "] is: [" << sizeof(uLongVar) * 8 << "] bits, or [" << sizeof(uLongVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(uLongLongVar).name() << "] is: [" << sizeof(uLongLongVar) * 8 << "] bits, or [" << sizeof(uLongLongVar) << "] bytes" << endl;

	// Size of [short] is: [16] bits, or [2] bytes
	// Size of [int] is: [32] bits, or [4] bytes
	// Size of [long] is: [32] bits, or [4] bytes
	// Size of [__int64] is: [64] bits, or [8] bytes
	// Size of [unsigned short] is: [16] bits, or [2] bytes
	// Size of [unsigned int] is: [32] bits, or [4] bytes
	// Size of [unsigned long] is: [32] bits, or [4] bytes
	// Size of [unsigned __int64] is: [64] bits, or [8] bytes

	cout << "Number of bits for [" << typeid(shortVar).name() << "]: Max -> [" << SHRT_MAX << "], Min -> [" << SHRT_MIN << "] Unsigned Max -> [" << USHRT_MAX << "]" << endl;
	cout << "Number of bits for [" << typeid(intVar).name() << "]: Max -> [" << INT_MAX << "], Min -> [" << INT_MIN << "] Unsigned Max -> [" << UINT_MAX << "]" << endl;
	cout << "Number of bits for [" << typeid(longVar).name() << "]: Max -> [" << LONG_MAX << "], Min -> [" << LONG_MIN << "] Unsigned Max -> [" << ULONG_MAX << "]" << endl;
	cout << "Number of bits for [" << typeid(longLongVar).name() << "]: Max -> [" << LLONG_MAX << "], Min -> [" << LLONG_MIN << "] Unsigned Max -> [" << ULLONG_MAX << "]" << endl;

	// Number of bits for[short]: Max ->[32767], Min ->[-32768] Unsigned Max ->[65535]
	// Number of bits for [int]: Max -> [2147483647], Min -> [-2147483648] Unsigned Max -> [4294967295]
	// Number of bits for [long]: Max -> [2147483647], Min -> [-2147483648] Unsigned Max -> [4294967295]
	// Number of bits for [__int64]: Max -> [9223372036854775807], Min -> [-9223372036854775808] Unsigned Max -> [18446744073709551615]


	// CHAR
	char charVar;						// 8 bits of memory
	charVar = 'A';
	cout << charVar << endl;			// ASCII Char for A
	// A 
	cout << (int) charVar << endl;		// ASCII Dec for A
	// 65

	cout << "Size of [" << typeid(charVar).name() << "] is: [" << sizeof(charVar) * 8 << "] bits, or [" << sizeof(charVar) << "] bytes" << endl;
	// Size of [char] is: [8] bits, or [1] bytes

	cout << "Number of bits for [" << typeid(charVar).name() << "]: Max -> [" << CHAR_MAX << "], Min -> [" << CHAR_MIN << "] Unsigned Max -> [" << UCHAR_MAX << "]" << endl;
	// Number of bits for [char]: Max -> [127], Min -> [-128] Unsigned Max -> [255]

	
	// BOOL

	bool boolVar;						// 
	boolVar = false;
	cout << boolVar << endl;
	cout << std::boolalpha << boolVar << endl;
	// 0
	// false

	boolVar = true;
	cout << std::noboolalpha << boolVar << endl;
	cout << std::boolalpha << boolVar << endl;
	// 1
	// true


	
	// DOUBLE (Floating Point Numbers)

	float floatVar;
	double doubleVar;
	long double longDoubleVar;
	
	cout << "Size of [" << typeid(floatVar).name() << "] is: [" << sizeof(floatVar) * 8 << "] bits, or [" << sizeof(floatVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(doubleVar).name() << "] is: [" << sizeof(doubleVar) * 8 << "] bits, or [" << sizeof(doubleVar) << "] bytes" << endl;
	cout << "Size of [" << typeid(longDoubleVar).name() << "] is: [" << sizeof(longDoubleVar) * 8 << "] bits, or [" << sizeof(longDoubleVar) << "] bytes" << endl;
	// Size of [float] is: [32] bits, or [4] bytes
	// Size of [double] is: [64] bits, or [8] bytes
	// Size of [long double] is: [64] bits, or [8] bytes


	cout << "Number of bits for [" << typeid(floatVar).name() << "]: Max -> [" << FLT_MAX << "], Min -> [" << FLT_MIN << "] Unsigned Max -> [" << FLT_MAX << "]" << endl;
	cout << "Number of bits for [" << typeid(doubleVar).name() << "]: Max -> [" << DBL_MAX << "], Min -> [" << DBL_MIN << "]" << endl;
	cout << "Number of bits for [" << typeid(longDoubleVar).name() << "]: Max -> [" << LDBL_MAX << "], Min -> [" << LDBL_MIN << "]" << endl;
	// Number of bits for [float]: Max -> [3.40282e+38], Min -> [1.17549e-38] Unsigned Max -> [3.40282e+38]
	// Number of bits for [double]: Max -> [1.79769e+308], Min -> [2.22507e-308]
	// Number of bits for [long double]: Max -> [1.79769e+308], Min -> [2.22507e-308]


	float a = 10.0 / 3;
	a = a * 1000000000000;
	cout << a << endl;
	// 3.33333e+12
	
	cout << std::fixed << a << endl;
	// 3333333188608.000000


	double b = 10.0 / 3;
	b = b * 1000000000000;

	cout << std::fixed << b << endl;
	// 3333333333333.333496

	cout << FLT_DIG << endl;
	cout << DBL_DIG << endl;
	cout << LDBL_DIG << endl;
	// 6 - Trusted up to 6 places
	// 15 - Trusted up to 15 places
	// 15 - Trusted up to 15 places

	
	
	// CONSTANTS

	int x = 5; // literal constant

	const int y = 5; // symbolic constant, creates a read-only number
	enum { i = 100};	// enum
	#define J 8			// macro

	cout << x << y << i << J << endl;
	//551008





}