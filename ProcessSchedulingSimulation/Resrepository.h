#pragma once
#include <map>
#include "Resource.h"
using namespace std;
class Resrepository
{
public:
	Resrepository();
	~Resrepository();
	static map<int,Resource> resList;
	bool getRes(int id);
	void releaseRes(int id);
};

