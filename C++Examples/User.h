#pragma once
#include <string>

class User
{
	static int user_count;
	std::string status = "Bronze";

public:

	static int get_user_count();
	std::string first_name;
	std::string last_name;
	std::string get_status();
	void set_status(std::string status);
	User();
	User(std::string first_name, std::string last_name, std::string status);
	~User();
	friend void output_status(User user);
	friend std::ostream& operator << (std::ostream& output, const User user);
	friend std::istream& operator >> (std::istream& input, User& user);
};

