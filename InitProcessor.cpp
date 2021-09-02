#include <string>
#include "InitProcessor.h"

InitProcessor::InitProcessor()
{
}

InitProcessor::~InitProcessor()
{
}


void InitProcessor::run()
{
    pick_champ1 = pick_champ_process(USER1);
    pick_champ2 = pick_champ_process(USER2);
    isUser1First = inter->pick_first();
    createChamp(pick_champ1, pick_champ2);
}

bool InitProcessor::validate_champ(const std::string& champ)
{
    const auto& itr = champInfo.find(champ);
    return itr != champInfo.end();
}

std::string InitProcessor::pick_champ_process(USER user)
{
    while (true)
    {
        std::string champ = inter->pick_champ(user);
        if (!validate_champ(champ))
        {
            inter->printChampPickError();
            continue;
        }

        return champ;
    }

}

bool InitProcessor::createChamp(const std::string& pickChamp1, const std::string& pickChamp2)
{
    if (champInfo.count(pickChamp1) < 1 || champInfo.count(pickChamp2) < 1)
    {
        inter->print("챔피언을 만들 수 없습니다.");
        return false;
    }

    const auto& itr1 = champInfo.find(pickChamp1);
    const auto& itr2 = champInfo.find(pickChamp2);


    champ1 = new Champion(itr1->first, itr1->second);
    champ2 = new Champion(itr2->first, itr2->second);

    return true;
}