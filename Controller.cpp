#include <stdio.h>
#include <iostream>
#include "Controller.h"
#include "Interface.h"
//#include <vector>
#pragma warning(disable: 4996)

CController::CController()
{
    inter = new CInterface;
}

CController::~CController()
{
    delete inter;
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
        printf("insert champ(%s) \n", champName.c_str());
    }

    fclose(fd);

    //for (const auto& a : champInfo)
    //{
    //    printf("[%s] %g %g %g %g %g %g %g %g %g %g %g %g", a.first.c_str(), a.second.stat[0], a.second.stat[1], a.second.stat[2], a.second.stat[3], a.second.stat[4],
    //        a.second.stat[5], a.second.stat[6], a.second.stat[7], a.second.stat[8], a.second.stat[9], a.second.stat[10], a.second.stat[11]);
    //    printf("\n");
    //}

}

void CController::start()
{
    const std::string pick_champ = pick_champ_process();
    const bool first = inter->pick_first();

    playProcessor->run();
    createChamp();

}

bool CController::validate_champ(const std::string& champ)
{
    const auto& itr = champInfo.find(champ);
    return itr != champInfo.end();
}

std::string CController::pick_champ_process()
{
    while (true)
    {
        std::string champ = inter->pick_champ();
        if (!validate_champ(champ))
        {
            inter->printChampPickError();
            continue;
        }

        return champ;
    }
    
}
