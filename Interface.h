#pragma once

class Interface; //전방선언

class CController
{
public:
    CController();
    ~CController();

    void init();
    void start();

private:
    Interface* inter;
};
