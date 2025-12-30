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
public:
	Notification(long id,
		std::string content,
		long userID,
		long messageID,
		bool isRead) : id(id),
		               content(content), 
		               userID(userID),
		               messageID(messageID),
		               isRead(isRead) {

	}
};

