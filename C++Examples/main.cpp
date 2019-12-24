#include <iostream>

struct User
{
public:
	std::string first_name;
	std::string last_name;
	std::string get_status()
	{
		return status;
	}
private:
	std::string status = "Gold";
};


int main() 
{
	User me;
	me.first_name = "Tyler";
	me.last_name = "Hardy";
	//me.status = "Gold";
	std::cout << "First name: " << me.first_name << "Status: " << me.get_status() << std::endl;

	return 0;
}