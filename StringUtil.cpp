#include "StringUtil.h"

std::string CStringUtil::getSkillName(const std::string& champ, SKILL enSkill)
{
	if (champ == "garen")
	{
		switch (enSkill)
		{
		case Q: return "ajeiofweq";
		case W: return "ajeiofwew";
		case E: return "ajeiofwee";
		case R: return "ajeiofwer";
		default: return "unknown";
		}
	}
	
	return "";
}