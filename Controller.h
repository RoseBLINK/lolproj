#pragma once
#include <map>
#include "ChampionDef.h"
#include "UserDef.h"

class CInterface;
class Champion;
class CController
{
public:
	CController();
	~CController();

	void init();
	void start();
	bool createChamp(const std::string& pickChamp1, const std::string& pickChamp2);

private:
	CInterface* inter;
	std::map<std::string, ChampInfo> champInfo;

	Champion* champ1;
	Champion* champ2;
};



