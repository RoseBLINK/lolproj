#pragma once

class Interface; //���漱��

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
