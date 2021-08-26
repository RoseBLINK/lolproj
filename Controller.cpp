#include <stdio.h>
#include "Controller.h"

CController::CController()
{
}

CController::~CController()
{
}

void CController::init()
{
    FILE* fd = fopen("lol_stat_temp.csv", "r");
    if (!fd)
    {
        return;
    }

    while ()
    {
        fread();
    }


    fclose(fd);

}

void CController::start()
{

}