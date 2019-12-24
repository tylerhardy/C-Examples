#include <iostream>
#include "Position.h"

int main() 
{
	Position pos1, pos2;
	Position pos3 = pos1 + pos2;
	std::cout << pos3.x << "," << pos3.y << std::endl;

	if (pos1 == pos2)
	{
		std::cout << "They are the same!" << std::endl;
	}
	else
	{
		std::cout << "They are not the same!" << std::endl;
	}

	return 0;
}