#pragma once

class CController
{
public:
	CController();
	~CController();

	void init();
	void start();

private:
	Interface* inter;
};



