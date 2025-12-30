#pragma once

#include <set>
#include <string>

class ChatService {
public:
	void createChat();
	void addParticipants(std::set<long> membersIDs);
	void removeParticipants(std::set<long> membersIDs);
	void sendMessage(long chatID, long senderID, std::string content)
};

