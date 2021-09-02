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

std::string CInterface::pick_champ(USER user)
{
    string pick;
    if ( user == USER1 )
        cout << "è�Ǿ��� ���ʽÿ�(User1): ";
    else
        cout << "è�Ǿ��� ���ʽÿ�(User2): ";
    cin >> pick;

    return pick;
}

bool CInterface::pick_first() //CInterface �� �ƴ� �ٸ� Ŭ������ �̵�. Interface Ŭ������ Interface �� �־����
{
    srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����
    int random = 0;
    random = (rand() % 2) + 1; // 1�� 2 �� ����

    int user_pick;
    cout << "������ ���մϴ�, user 1�� 1�� 2�� ���� �Ͻʽÿ�: ";
    while (true)
    {
        cin >> user_pick;
        if (user_pick != 1 && user_pick != 2)
        {
            cout << "1�� 2�߿� ���� �Ͻʽÿ�: ";
            continue;
        }

        if (user_pick == random)
        {
            cout << "user 1 �� �����Դϴ�" << endl;
            return true;
        }
        else
        {
            cout << "user 2 �� �����Դϴ�" << endl;
            return false;
        }
    }
}

void CInterface::printChampPickError()
{
    printf("è�Ǿ� ������ �߸��Ǿ����ϴ�.\n");
}

void CInterface::print(const std::string& str)
{
    printf("%s\n", str.c_str() );
}

//void CInterface::attack(Champion attack_champ, Champion get_hit_champ) // �̰� ���� interface �� ����, ü�°� �� ���� ��� �ϴ� Ŭ������ ���� ����
//{
//    attack_champ.name;
//
//
//}