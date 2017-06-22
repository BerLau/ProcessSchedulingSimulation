#pragma once
#include <map>
#include "Resource.h"
using namespace std;
class ResRepository
{
public:
	ResRepository();
	~ResRepository();
	static map<int,Resource> resList;
	bool getRes(int id);
	void releaseRes(int id);
};

