#pragma once
#include "Processor.h"

class CInterface;
class PlayProcessor : public Processor
{
public:
	PlayProcessor();
	~PlayProcessor();

	virtual void run() override final;
private:
	CInterface* inter;
	// ����� ������ è�Ǿ�
	// ��� è�Ǿ�
};


