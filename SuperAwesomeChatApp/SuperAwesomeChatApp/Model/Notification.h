#pragma once
#include <string>

class Notification
{
private:
	long id;
	std::string content;
	long userID;
	long messageID;
	bool isRead;
};

