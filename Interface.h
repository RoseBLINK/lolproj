#pragma once
#include <string>
#include "UserDef.h"

class CInterface
{
public:
    CInterface();
    ~CInterface();


public:
    std::string pick_champ(USER user);
    bool pick_first();
    void printChampPickError();
    void print(const std::string& str);
};
