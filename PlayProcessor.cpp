#include <windows.h>
#include "PlayProcessor.h"

PlayProcessor::PlayProcessor()
{
}

PlayProcessor::~PlayProcessor()
{
}

void PlayProcessor::play(Champion* champ1, Champion* champ2, bool first)
{
    inter->print("게임이 시작되었습니다.");

    int count = 0;
    int maxCount = 5;
    bool turn_user1 = first;
    //CStringUtil util;
    while (true)
    {
        if (turn_user1)
        {
            champ1->printinfo();
            champ1->attack(champ2);
            champ2->printHP();
        }
        else
        {
            CStringUtil::getInstance().getSkillName("", Q);
            //printf("skill: %s", util.getSkillName(champ2.name, Q));
            champ2->printinfo();
            champ2->attack(champ1);
            champ1->printHP();
        }

        if (turn_user1)
            turn_user1 = false;
        else
            turn_user1 = true;

        Sleep(3000);
    }
}
