#include "ProcessorFactory.h"
#include "InitProcessor.h"
#include "PlayProcessor.h"

ProcessorFactory::ProcessorFactory()
{
}

ProcessorFactory::~ProcessorFactory()
{
}

Processor* ProcessorFactory::create(EN_PROCESSOR type)
{
	switch (type)
	{
	case INIT: return new InitProcessor;
	case PLAY: return new PlayProcessor;
	default: return nullptr;
	}
}
