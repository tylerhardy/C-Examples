#include <iostream>
#include "User.h"
#include "Teacher.h"

int add_user_if_not_exists(std::vector<User>& users, User &user)
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
	User user;
	user.first_name = "Tyler";
	user.last_name = "Hardy";
	user.set_status("Gold");
	//output_status(user);

	Teacher teacher;
	std::cin >> teacher;
	std::cout << teacher << std::endl;
	teacher.output();

	//std::cout << user << std::endl;
	//User user2;
	//std::cin >> user2;
	//std::cout << user2 << std::endl;


	//std::vector<User> users;
	//User user1, user2("Danielle","Hardy", "Gold"), user3, user4("Adeline", "Hardy", "Gold");

	//user1.first_name = "Tyler";
	//user1.last_name = "Hardy";
	//
	//user3.first_name = "Logan";
	//user3.last_name = "Hardy";

	//User user;
	//user.first_name = "Logan";
	//user.last_name= "Hardy";
	//std::cout << "Total User class objects created: " << User::get_user_count() << std::endl;

	//std::cout << add_user_if_not_exists(users, user1) << std::endl;
	//std::cout << add_user_if_not_exists(users, user2) << std::endl;
	//std::cout << add_user_if_not_exists(users, user3) << std::endl;
	//std::cout << add_user_if_not_exists(users, user4) << std::endl;
	//std::cout << add_user_if_not_exists(users, user) << std::endl;
	//std::cout << "users array size: " << users.size() << std::endl;

	//user1.set_status("Silver");
	//user.set_status("Platinum");
	//std::cout << user1.get_status() << std::endl;
	//std::cout << user2.get_status() << std::endl;
	//std::cout << user3.get_status() << std::endl;
	//std::cout << user4.get_status() << std::endl;
	//std::cout << user.get_status() << std::endl;
	//std::cout << "Total User class objects created: " << User::get_user_count() << std::endl;

	return 0;
}