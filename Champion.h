#pragma once
#include <iostream>
#include "ChampionDef.h"

class Champion
{
public:
	Champion();
	Champion(const std::string& _name, const ChampInfo& _info);
	~Champion();

	void printinfo();
	void printHP();
	void setInfo(const ChampInfo& _info);
	void setDefaultInfo();
	void attack(Champion* target);

private:
	std::string name;
	int lv;
	double dmg;
	double hp;
	double def;
	double gen;
	//std::string q; //·£´ý
	//std::string w; //·£´ý
	//std::string e; //·£´ý
	//std::string r; //·£´ý

	ChampInfo info;
	//double dmg;
	//double lv_dmg;
	//double max_dmg;
	//double def;
	//double lv_def;
	//double max_def;
	//double gen;
	//double lv_gen;
	//double max_gen;
	//double hp;
	//double lv_hp;
	//double max_hp;
};