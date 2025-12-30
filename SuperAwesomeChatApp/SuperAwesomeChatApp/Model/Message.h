#pragma once
#include <string>
#include <ctime>

enum MessageStatus {
	Sent,
	Delivered,
	Seen
};

class Message
{
private:
	long id;
	std::string content;
	long senderID;
	long chatID;
	bool isEdited;
	time_t timeStamp;
	MessageStatus status;
public:
	Message(long id,
		std::string content,
		long senderID,
		long chatID,
		bool isEdited,
		time_t timeStamp,
		MessageStatus status) : id(id),
		                        content(content),
		                        senderID(senderID),
		                        chatID(chatID),
		                        isEdited(isEdited),
		                        timeStamp(timeStamp),
		                        status(status){
	}
};

