#include <iostream>
#include <string>

int main() 
{
	// c style strings or cstrings for backwards compatibility with C
	
	char name[] = "Caleb"; //c string == array of characters "Caleb\0" and memory size cannot be easily changed

	// string Class for c++ (better in everyway)

	std::string greeting = "Hello";

	std::cout << greeting[0] << std::endl;
	// H

	std::cout << greeting + " there" << std::endl;
	// Hello there

	std::string complete_greeting = greeting + " there";
	std::cout << complete_greeting << std::endl;
	// Hello there

	complete_greeting += "!";
	std::cout << complete_greeting << std::endl;
	// Hello there!

	std::cout << complete_greeting.length() << std::endl;
	// 12

	//method == member function == functions attached to objects


	// getLine for strings
	std::string greetingVar;
	//std::cin >> greetingVar; // Will only grab the first word
	std::string left_over;
	//std::cin >> left_over; // will only grab the second word 
	std::cout << greetingVar << std::endl;
	std::cout << left_over << std::endl;
	// hello
	// there
	
	std::string fullString;
	//getline(std::cin, fullString);
	std::cout << fullString << std::endl;
	// hello there


	// String Methods
	// Get length or size
	fullString = "Hello there";
	std::cout << fullString.length() << std::endl;
	std::cout << fullString.size() << std::endl;
	fullString += "!";
	fullString.append("!");
	std::cout << fullString << std::endl;
	// Hello there!!

	fullString.insert(3, "X");
	std::cout << fullString << std::endl;
	// HelXlo there!!

	fullString.erase(3, 1);
	std::cout << fullString << std::endl;
	// Hello there!!

	fullString.erase(3);
	std::cout << fullString << std::endl;
	// Hel

	fullString = "Hello thereY";
	fullString.erase(fullString.length() - 1);
	std::cout << fullString << std::endl;
	// Hello there

	fullString = "Hello thereY";
	fullString.pop_back();
	std::cout << fullString << std::endl;
	// Hello there

	fullString = "Hell";
	fullString.replace(0, 4, "Heaven");
	std::cout << fullString << std::endl;
	// Heaven


	// String Operation Methods

	// Replace
	fullString = "What the hell?";
	fullString.replace(fullString.find("hell"), 4, "heaven");
	std::cout << fullString << std::endl;
	// What the heaven?

	// Substitute
	fullString = "What is up?";
	std::cout << fullString.substr(5,2) << std::endl;
	// is

	fullString = "What is up?";
	if(fullString == "What is up?") std::cout << "They are equal" << std::endl;






}
