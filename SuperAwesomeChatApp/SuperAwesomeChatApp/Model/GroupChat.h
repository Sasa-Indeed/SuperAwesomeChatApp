#pragma once

#include <string>
#include <set>
#include "Chat.h"

class GroupChat: Chat {
private:
	std::string groupName;
	std::set<long> adminIDs;
};
