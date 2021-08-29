#pragma once
#include <iostream>
class Champion
{
public:
	Champion();
	~Champion();

	std::string name;
	std::string q; //·£´ý
	std::string w; //·£´ý
	std::string e; //·£´ý
	std::string r; //·£´ý

private:
	double dmg;
	double lv_dmg;
	double max_dmg;
	double def;
	double lv_def;
	double max_def;
	double gen;
	double lv_gen;
	double max_gen;
	double hp;
	double lv_hp;
	double max_hp;
};