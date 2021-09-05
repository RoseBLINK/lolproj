#pragma once
#include "Processor.h"
#include "StringUtil.h"


class CInterface;
class PlayProcessor : public Processor
{
public:
	PlayProcessor();
	~PlayProcessor();

	virtual void run() override final {}
	virtual void play(Champion* champ1, Champion* champ2, bool first) override final;
private:
	CInterface* inter;
	// ����� ������ è�Ǿ�
	// ��� è�Ǿ�
};


