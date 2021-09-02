#pragma once
#include "Processor.h"

class CInterface;
class PlayProcessor : public Processor
{
public:
	PlayProcessor();
	~PlayProcessor();

	virtual void run() override final;
private:
	CInterface* inter;
	// 사용자 선택한 챔피언
	// 상대 챔피언
};


