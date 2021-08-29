#pragma once
#include <string>

class CInterface
{
public:
    CInterface();
    ~CInterface();


public:
    std::string pick_champ();
    bool pick_first();
    void printChampPickError();
};
