#pragma once

#include "User.h"
#include <vector>
#include <iostream>

class Teacher : public User
{
public:
	std::vector<std::string> classes_teaching;
	void output();
};

