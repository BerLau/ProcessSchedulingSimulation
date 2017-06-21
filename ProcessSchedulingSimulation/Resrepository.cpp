#include "Resrepository.h"
#include "IOResource.h"
#include "SharedResource.h"



Resrepository::Resrepository()
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


Resrepository::~Resrepository()
{
}

bool Resrepository::getRes(int id)
{
	return false;
}

void Resrepository::releaseRes(int id)
{
}
