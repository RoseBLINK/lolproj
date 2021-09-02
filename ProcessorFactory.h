#pragma once
#include "Processor.h"

class ProcessorFactory
{
public:
	ProcessorFactory();
	~ProcessorFactory();

	Processor* create(EN_PROCESSOR type);
};



