#include <stdio.h>
#include "Controller.h"
#include <iostream>
#include <vector>
#include <map>
#pragma warning(disable: 4996)

CController::CController()
{
}

CController::~CController()
{
}

void CController::init()
{
    int ch, i = 0;

    FILE* fd = fopen("lol_stat_temp.csv", "r");
    if (!fd)
    {
        puts("���Ͽ��� ����");
    }

    while (/*??*/)
    {
        //fread();
        std::vector<std::string> line;
        ch = fgets(line/*���ڿ��� ������ �޸��� �ּ�*/, /*�޸��� ũ��*/, fd);
        printf("%c \n", ch);

        /*double dmg;
        double lv_dmg;
        double max_dmg;
        double hp;
        double lv_hp;
        double max_hp;
        double def;
        double lv_def;
        double max_def;
        double gen;
        double lv_gen;
        double max_gen;*/
    }


    fclose(fd);

}

void CController::start()
{

}