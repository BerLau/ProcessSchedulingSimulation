#pragma once
#include <list>
#include "Resource.h"
using namespace std;
class SProcess
{
public:
	SProcess();
	~SProcess();
	int runtime;
	int taskLength;
	list<Resource> tasks;
};

