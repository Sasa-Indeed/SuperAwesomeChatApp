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
	long id;
	std::string content;
	long senderID;
	long chatID;
	bool isEdited;
	time_t timeStamp;
	MessageStatus status;

};

