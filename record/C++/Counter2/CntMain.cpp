//������ ī����
#include <iostream>
using namespace std;
#include "Counter.h" // ����ó�� - Counter.h ������� ���� ����

int main()
{
	Counter cnt; // Counter ��ü�� �����ϸ� cnt �� ����
	cnt.reset();
	double bc;
	cout << "������� ���� �� :" << cnt.getValue() << endl;
	cout << "���� �߰��Ͻ÷��� 1�� �Է��Ͽ� �ֽʽÿ� " << endl;
	cin >> bc;
	if (bc = 1) {
	cnt.count();
	};
	if (bc = 0) {
		cnt.reset();
	};
	cout << "������� ���� �� :" << cnt.getValue() << endl;
		cout << "���� �߰��Ͻ÷��� 1�� �Է��Ͽ� �ֽʽÿ� " << endl;
	cin >> bc;
	if (bc = 1) {
	cnt.count();
	};
	if (bc = 0) {
		cnt.reset();
	};
	cout << "������� ���� �� :" << cnt.getValue() << endl;	cout << "���� �߰��Ͻ÷��� 1�� �Է��Ͽ� �ֽʽÿ� " << endl;
	cin >> bc;
	if (bc = 1) {
	cnt.count();
	};
	if (bc = 0) {
		cnt.reset();
	};
	cout << "������� ���� �� :" << cnt.getValue() << endl;
	return 0;
}