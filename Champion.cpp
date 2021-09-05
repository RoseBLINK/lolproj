#include "Champion.h"
#include "ChampionDef.h"
#include "StringUtil.h"
#include <iostream>

Champion::Champion()
{
    setDefaultInfo();
}

Champion::Champion(const std::string& _name, const ChampInfo& _info) : Champion()
{
    name = _name;
    setInfo(_info);
    setDefaultInfo();
}

Champion::~Champion()
{
}

void Champion::printinfo()
{
    printf("[%s] lv = %d, dmg = %g, hp = %g, def = %g, gen = %g \n", name.c_str(), lv, dmg, hp, def, gen);
}

void Champion::setInfo(const ChampInfo& _info)
{
    for (int i = 0; i < CHAMP_STAT_COUNT; i++)
    {
        info.stat[i] = _info.stat[i];
    }
}

void Champion::setDefaultInfo()
{
    std::string a;
    //CStringUtil::getInstance()->getReverse(a); //½Ì±ÛÅæ

    lv = 1;
    dmg = info.stat[DMG];
    hp = info.stat[HP];
    def = info.stat[DEF];
    gen = info.stat[GEN];
}

void Champion::attack(Champion* target)
{
    target->hp = target->hp - dmg + target->def;
}

void Champion::printHP()
{
    printf("[%s] hp = %g\n", name.c_str(), hp);
}