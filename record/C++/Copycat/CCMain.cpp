#include <iostream>
#include "Copycat.h"
using namespace std;

int main()
{
	Copycat cc1("ȫ�浿"); // Copycat ��������� �̿��Ͽ� cc1 ���� ����
	Copycat cc2(cc1);

	cc1.whoRU();
	cc2.whoRU();
	return 0;
}