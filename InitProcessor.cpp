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

