#pragma once
#include <string>

enum UserStatus {
	Online,
	Offline
};

class User
{
private:
	long id;
	std::string FirstName;
	std::string LastName;
	std::string EmailAddress;
	std::string About;
	UserStatus status;
public:
	User(long id,
		std::string FirstName,
		std::string LastName,
		std::string EmailAddress,
		std::string About,
		UserStatus status) : id(id),
		                     FirstName(FirstName),
		                     LastName(LastName),
		                     EmailAddress(EmailAddress),
		                     About(About),
		                     status(status) {
	}
};

