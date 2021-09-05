#pragma once
#include "ChampionDef.h"
#include <string>

class CStringUtil
{
public:

	static CStringUtil& getInstance()
	{
		// 게으른 초기화
		if (!instance_)
			instance_ = new CStringUtil;

		return *instance_;
	}


	std::string getSkillName(const std::string& champ, SKILL enSkill);
	//std::string getReverse(const std::string& str);
	//int getStringCount(const std::string& str);
	//std::string getUpper(const std::string& str);
	//std::string getLower(const std::string& str);


private:
	CStringUtil()
	{
		//instance_ = new CStringUtil;
	}

	~CStringUtil()
	{
		delete instance_;
	}

	static CStringUtil* instance_;
};
