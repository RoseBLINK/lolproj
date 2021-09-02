#pragma once
#include <map>
#include "Champion.h"
#include "Interface.h"

enum EN_PROCESSOR
{
	INIT,
	PLAY,
};

class Processor
{
public:
	Processor();
	~Processor();

	virtual void run() = 0;

	void setChampInfo(const std::map<std::string, ChampInfo>& _info) { champInfo = _info; }
protected:
	Champion* champ1;
	Champion* champ2;
	CInterface* inter;
	std::map<std::string, ChampInfo> champInfo;

	std::string pick_champ1;
	std::string pick_champ2;
	bool isUser1First;
};

Processor::Processor()
{
	inter = new CInterface;
}

Processor::~Processor()
{
	delete inter;
}