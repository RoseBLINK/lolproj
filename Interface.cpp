#include "Interface.h"
#include "Champion.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

CInterface::CInterface()
{
}

CInterface::~CInterface()
{
}

void CInterface::pick_champ()
{
    cout << "è�Ǿ��� ���ʽÿ�: ";

    Champion user1;
    Champion user2;
}

void CInterface::pick_first() //CInterface �� �ƴ� �ٸ� Ŭ������ �̵�. Interface Ŭ������ Interface �� �־����
{
    srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����
    int random = 0;
    random = (rand() % 2) + 1; // 1�� 2 �� ����

    int user_pick;
    cout << "������ ���մϴ�, user 1�� 1�� 2�� ���� �Ͻʽÿ�: ";
    cin >> user_pick;
    if (user_pick == random)
    {
        cout << "user 1 �� �����Դϴ�" << endl;
    }
    else
        cout << "user 2 �� �����Դϴ�" << endl;

    return; //���� ���ѻ���� return �ؾ� �� �� ����
}

//void CInterface::attack(Champion attack_champ, Champion get_hit_champ) // �̰� ���� interface �� ����, ü�°� �� ���� ��� �ϴ� Ŭ������ ���� ����
//{
//    attack_champ.name;
//
//
//}