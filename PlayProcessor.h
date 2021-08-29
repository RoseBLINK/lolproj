#pragma once

class CInterface;
class PlayProcessor // 플레이
{
public:
	PlayProcessor();
	~PlayProcessor();

	void run();
private:
	CInterface* inter;
	// 사용자 선택한 챔피언
	// 상대 챔피언
};


