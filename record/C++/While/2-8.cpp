#include <iostream> // ����ó�� - iostream�� ���� ����
using namespace std; // ǥ�� c++ ���̺귯���� std�� �⺻ ��Ī�������� ����

int main() // main �Լ� ����
{
	int val, total = 0; //int�� val ���� ����, �ʱⰪ 0���� �ʱ�ȭ
	cout << "��갪�� �Է��Ͻÿ�." << endl; // �������
	cin >> val;
	while (val < 10) { // while ���� - val ������ 10���� �۴ٸ�?
		total += val; // val���� ��� ����.
		cin >> val;
		cout << val << endl;
	}
	cout << val << endl;
	return 0;
}