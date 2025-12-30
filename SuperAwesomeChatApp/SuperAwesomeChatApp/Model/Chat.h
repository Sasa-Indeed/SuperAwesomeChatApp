#pragma once
#include <list>
#include <set>

class Chat {
private: 
	long id;
	std::set<long> memberIDs;
	std::list<long> messageIDs;
};

