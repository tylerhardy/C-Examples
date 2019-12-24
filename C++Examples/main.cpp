#include <iostream>
#include <string>

//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	//std::cout << "Variable_1: " << a << "\tVariable_2: " << b << std::endl;
//}
//
//void swap(std::string &a, std::string &b)
//{
//	std::string temp = a;
//	a = b;
//	b = temp;
//
//	//std::cout << "Variable_1: " << a << "\tVariable_2: " << b << std::endl;
//
//}
template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main() 
{ 
	int a = 33;
	int b = 66;
	std::cout << "a: " << a << "\tb: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << "\tb: " << b << std::endl;

	std::string first_name = "Tyler";
	std::string last_name = "Hardy";
	std::cout << "first_name: " << first_name << "\tlast_name: " << last_name << std::endl;
	swap(first_name, last_name);
	std::cout << "first_name: " << first_name << "\tlast_name: " << last_name << std::endl;

}

