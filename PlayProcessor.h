#pragma once

class CInterface;
class PlayProcessor // �÷���
{
public:
	PlayProcessor();
	~PlayProcessor();

	void run();
private:
	CInterface* inter;
	// ����� ������ è�Ǿ�
	// ��� è�Ǿ�
};


