#include <iostream> // ����ó�� - iostream�� ����.
using namespace std; // ǥ�� c++ ���̺귯���� std�� �⺻ ��Ī�������� ����

int main() // main �Լ� ����
{
	int a = 10;
	int b = 20;
	if (a > b)
		cout << "ȣ����" << endl;
	else {
		int e = a;
		a = b;
		b = e;
	}
	cout << a << endl;
	cout << b << endl;
	return 0;
}