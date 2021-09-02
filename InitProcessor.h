#pragma once
#include "Processor.h"
#include "UserDef.h"
class InitProcessor : public Processor
{
public:
	InitProcessor();
	~InitProcessor();

	void setInfo() {}

private:
	virtual void run() override final;

	bool validate_champ(const std::string& champ);
	std::string pick_champ_process(USER user);
	bool createChamp(const std::string& pickChamp1, const std::string& pickChamp2);

};


