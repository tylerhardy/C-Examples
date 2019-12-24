#include "User.h"
#include <iostream>


User::User()
{
	user_count++;
	//std::cout << "Constructor" << std::endl;
}

User::User(std::string first_name, std::string last_name, std::string status)
{
	user_count++;
	//std::cout << "Constructor with args" << std::endl;
	this->first_name = first_name;
	this->last_name = last_name;
	this->status = status;
}

User::~User()
{
	user_count--;
	//std::cout << "Deconstructor" << std::endl;
}

int User::get_user_count()
{
	return user_count;
}

std::string User::get_status()
{
	return status;
}

void User::set_status(std::string status)
{
	if (status == "Gold" || status == "Silver" || status == "Bronze")
	{
		this->status = status;
	}
	else
	{
		this->status = "No Status";
	}
}

int User::user_count = 0;

void output_status(User user)
{
	std::cout << user.status;
}

std::ostream& operator << (std::ostream& output, const User user)
{
	output << "First name: " << user.first_name << "\nLast name: " << user.last_name << "\nStatus: " << user.status;
	return output;
}

std::istream& operator >> (std::istream& input, User& user)
{
	input >> user.first_name >> user.last_name >> user.status;
	return input;
}