#pragma once
#include <string>

class User
{
public:
	User();
	User(std::string first_name, std::string last_name, std::string status);
	~User();

	static int get_user_count();
	std::string get_status();
	void set_status(std::string status);
	
	std::string first_name;
	std::string last_name;
private:
	static int user_count;
	std::string status = "Bronze";
};

