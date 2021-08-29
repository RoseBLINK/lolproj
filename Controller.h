#pragma once
#include <map>
class CInterface;

enum CHAMP_STAT
{
	DMG,
	LV_DMG,
	MAX_DMG,
	HP,
	LV_HP,
	MAX_HP,
	DEF,
	LV_DEF,
	MAX_DEF,
	GEN,
	LV_GEN,
	MAX_GEN,
	CHAMP_STAT_COUNT,
};

struct ChampInfo
{
	double stat[CHAMP_STAT_COUNT];
};

class CController
{
public:
	CController();
	~CController();

	void init();
	void start();

private:
	bool validate_champ(const std::string& champ);
	std::string pick_champ_process();

private:
	CInterface* inter;
	std::map<std::string, ChampInfo> champInfo;
};



