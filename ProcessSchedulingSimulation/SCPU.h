#pragma once
#include "SProcess.h"
class SCPU
{
public:
	SCPU();
	~SCPU();
	int commandLen;
	int period;
	void run(SProcess& p);
};

