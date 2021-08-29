#include "Interface.h"
#include "Champion.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

CInterface::CInterface()
{
}

CInterface::~CInterface()
{
}

std::string CInterface::pick_champ()
{
    string pick;
    cout << "챔피언을 고르십시오: ";
    cin >> pick;

    return pick;
}

bool CInterface::pick_first() //CInterface 가 아닌 다른 클래스로 이동. Interface 클래스는 Interface 만 있어야함
{
    srand(time(NULL)); // 매번 다른 시드값 생성
    int random = 0;
    random = (rand() % 2) + 1; // 1과 2 중 랜덤

    int user_pick;
    cout << "선공을 정합니다, user 1이 1과 2중 선택 하십시오: ";
    cin >> user_pick;
    while (true)
    {
        if (user_pick != 1 && user_pick != 2)
        {
            cout << "1과 2중에 선택 하십시오." << endl;
            continue;
        }

        if (user_pick == random)
        {
            cout << "user 1 이 선공입니다" << endl;
            return true;
        }
        else
        {
            cout << "user 2 가 선공입니다" << endl;
            return false;
        }
    }
}

void CInterface::printChampPickError()
{
    printf("챔피언 선택이 잘못되었습니다.\n");
}

//void CInterface::attack(Champion attack_champ, Champion get_hit_champ) // 이것 또한 interface 만 포함, 체력과 딜 등을 계산 하는 클래스는 따로 생성
//{
//    attack_champ.name;
//
//
//}