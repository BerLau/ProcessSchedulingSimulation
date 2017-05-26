#include "InterruptRegister.h"



InterruptRegister::InterruptRegister()
{
	recorder = 0;
}

bool InterruptRegister::hasRecord()
{
	return recorder;
}

void InterruptRegister::setRecord(ItrpType type)
{
	switch (type)
	{
	case TIMEOUT:recorder |= 1;
		break;
	case CREATED:recorder |= 2;
		break;
	case BLOCKED:recorder |= 4;
		break;
	case FINISHED:recorder |= 8;
		break;
	case REVIVED:recorder |= 16;
		break;
	default:
		break;
	}
}

void InterruptRegister::reset()
{
	recorder = 0;
}

void InterruptRegister::reset(ItrpType type)
{
	switch (type)
	{
	case TIMEOUT:recorder ^= 1;
		break;
	case CREATED:recorder ^= 2;
		break;
	case BLOCKED:recorder ^= 4;
		break;
	case FINISHED:recorder ^= 8;
		break;
	case REVIVED:recorder ^= 16;
		break;
	default:
		break;
	}
}

ItrpType InterruptRegister::getItrpType()
{
	int type=recorder
}


InterruptRegister::~InterruptRegister()
{
}
