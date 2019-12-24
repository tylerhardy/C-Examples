#include <iostream>
#include <vector>

// The process from going to a class to an object is called instantiation
// User user1 = new User(); // Don't do this way
// User user1;				// Do this way

class User
{
public:
	User()
	{
		std::cout << "Constructor" << std::endl;
	}
	User(std::string first_name, std::string last_name, std::string status)
	{
		std::cout << "Constructor with args" << std::endl;
		this->first_name = first_name;
		this->last_name = last_name;
		this->status = status;
	}
	std::string first_name;
	std::string last_name;
	std::string get_status()
	{
		return status;
	}
	void set_status(std::string status)
	{
		this->status = status;
	}
private:
	std::string status = "Bronze";
};


int add_user_if_not_exists(std::vector<User>& users, User user)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].first_name == user.first_name && users[i].last_name == user.last_name)
		{
			std::cout << "User: [" << user.first_name << "] already exists!" << std::endl;
			return i;
		}
	}
	std::cout << "User: [" << user.first_name << "] doesn't exists, adding to array..." << std::endl;
	users.push_back(user);
	return users.size() - 1;
}

int main()
{
	std::vector<User> users;
	User user1, user2("Danielle","Hardy", "Gold"), user3, user4("Adeline", "Hardy", "Gold");

	user1.first_name = "Tyler";
	user1.last_name = "Hardy";
	
	user3.first_name = "Logan";
	user3.last_name = "Hardy";

	User user;
	user.first_name = "Logan";
	user.last_name= "Hardy";

	users.push_back(user1);
	users.push_back(user2);
	users.push_back(user3);
	users.push_back(user4);

	std::cout << add_user_if_not_exists(users, user) << std::endl;
	
	std::cout << users.size() << std::endl;
	std::cout << user1.get_status() << std::endl;
	std::cout << user2.get_status() << std::endl;
	std::cout << user3.get_status() << std::endl;
	std::cout << user4.get_status() << std::endl;
	std::cout << user.get_status() << std::endl;

	user1.set_status("silver");
	user2.set_status("silver");
	user3.set_status("silver");
	user4.set_status("silver");
	user.set_status("silver");

	std::cout << user1.get_status() << std::endl;
	std::cout << user2.get_status() << std::endl;
	std::cout << user3.get_status() << std::endl;
	std::cout << user4.get_status() << std::endl;
	std::cout << user.get_status() << std::endl;
	return 0;
}