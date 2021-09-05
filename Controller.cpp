#include <iostream>
#include "Champion.h"
#include "ProcessorFactory.h"
#include "Controller.h"
//#include <vector>
#pragma warning(disable: 4996)

CController::CController()
{
    inter = new CInterface;
}

CController::~CController()
{
    if (inter)
        delete inter;

    if ( champ1 )
        delete champ1;

    if (champ2)
        delete champ2;
}

void CController::init()
{
    FILE* fd = fopen("lol_stat_temp.csv", "r");
    if (!fd)
    {
        puts("파일열기 실패");
    }

    int count = 0;
    char str[2048];
    while (fgets(str, sizeof(str), fd) != NULL)
    {
        count++;
        if (count == 1)
            continue;

        //printf("%s \n", str);

        char* pch;
        pch = strtok(str, ",");
        //printf("%s \n", pch);

        std::string champName = pch;

        ChampInfo info;
        for (int i = 0; i < CHAMP_STAT_COUNT; i++)
        {
            pch = strtok(NULL, ","); //null?
            //printf("%s \n", pch);
            info.stat[i] = atof(pch);
        }

        champInfo[champName] = info;
        //printf("insert champ(%s) \n", champName.c_str());
    }

    fclose(fd);

    printf("[CHAMPION LIST]\n");
    for (const auto& a : champInfo)
    {
        printf("%s,", a.first.c_str());
    }
    printf("\n");

}

void CController::start()
{
    ProcessorFactory factory;
    const auto& initProcessor = factory.create(INIT);
    const auto& playProcessor = factory.create(PLAY);

    // Initialize
    initProcessor->setChampInfo(champInfo);
    initProcessor->run();                                         //state pattern

    const auto& pairChamp = initProcessor->getPickChamp();
    createChamp(pairChamp.first, pairChamp.second);

    // Play
    playProcessor->play(champ1, champ2, initProcessor->getFirst());

    // Surren
}

bool CController::createChamp(const std::string& pickChamp1, const std::string& pickChamp2)
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