#pragma once
#include <string>

enum UserStatus {
	Online,
	Offline
};

class User
{
	long id;
	std::string FirstName;
	std::string LastName;
	std::string EmailAddress;
	std::string About;
	UserStatus status;
};

