#include <iostream> // ����ó�� - iostream�� ��������.
using namespace std; // ǥ�� c++ ���̺귯���� std�� �⺻ ��Ī�������� ����.

int main () // main �Լ� ����
{
	const double PI = 3.1459; // const ������� PI�� ������ �� �ο�
	double radius; // double���� radius(�ݰ�)���� ����
	cout << "���� �ݰ��� �Է��ϼ���." << endl; // �� ���� ���.
	cin >> radius; // radius���� �Է� Ŀ�� ���.
	double area = radius * radius * PI; // double�� ���� �ݰ�*�ݰ�*���̽����� ����� ���� �������� area ������ ����.
	cout << "���Ǹ��� = " << area << endl; // ���Ǹ����� area ������ ��Ʈ�����.
		return 0;
}