#include <iostream>
using namespace std;
#include "Counter.h" // ����ó�� - Counter.h ������� ���� ����

int main()
{
	Counter cnt; // Counter ��ü�� �����ϸ� cnt �� ����
	cout << "������� ���� �� :" << cnt.getValue() << endl;
	cnt.count();
	cnt.count();
	cout << "������� ���� �� :" << cnt.getValue() << endl;
	return 0;
}