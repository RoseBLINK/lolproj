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
	Processor()
	{
		inter = new CInterface;
	}
	~Processor()
	{
		delete inter;
	}

	virtual void run() = 0;
	virtual void play(Champion* champ1, Champion* champ2, bool first) {}

	void setChampInfo(const std::map<std::string, ChampInfo>& _info) { champInfo = _info; }
	bool getFirst() { return isUser1First; }
	std::pair<std::string, std::string> getPickChamp() { return std::make_pair(pick_champ1, pick_champ2); }

protected:
	
	CInterface* inter;
	std::map<std::string, ChampInfo> champInfo;
	bool isUser1First;
	std::string pick_champ1;
	std::string pick_champ2;
};