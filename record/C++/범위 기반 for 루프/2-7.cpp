//���� ��� for ����
#include <iostream> // ����ó�� - iostream�� ���� ����
using namespace std; // ǥ�� c++ ���̺귯���� std�� �⺻ ��Ī�������� ����

int main() // main �Լ� ����
{
	int x; // int�� ���� a ����
	int y; // int�� ���� y ����
	cout << "���ϰ� ���� ���� �Է��Ͻÿ�." << endl; // ���� ���
	cin >> x; // x�� �Է��ܼ� ���
	cout << "���� ���� �Է��Ͻÿ�." << endl; // ���� ���
	cin >> y; // y�� �Է��ܼ� ���
		int arr[] = { x,y }; // int�� arr �迭 ���� - x,y �� ����
		int sum = 0; // int�� sum�� ���� - sum �ʱⰪ 0���� �ʱ�ȭ
		for (int a : arr) // �������for���� - int�� ���� a ����, arr �迭 Ÿ������.
			sum += a; // a���� ��� sum�� ����.
	cout << "����� " << sum << " �Դϴ�." << endl; // ���� ���
	return 0;
}