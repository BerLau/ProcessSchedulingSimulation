#include "Resrepository.h"
#include "IOResource.h"
#include "SharedResource.h"



ResRepository::ResRepository()
{
	for (int i=0;i<10;i++)
	{
		Resource r = IOResource();
		resList[i] = r;
	}
	for (int i = 10; i < 20; i++)
	{
		Resource r = SharedResource();
		resList[i] = r;
	}
}


ResRepository::~ResRepository()
{
}

bool ResRepository::getRes(int id)
{
	return false;
}

void ResRepository::releaseRes(int id)
{
}
