#pragma once

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