#include <iostream> // ����ó�� - iostream ������� ��������
using namespace std; // ǥ�� c++ ���̺귯���� std ��Ī������ �⺻ ��Ī�������� ����
namespace myNSp1 {int n = 10;} // myNSp1 ��Ī������ n�� �� 10 ����
namespace myNSp2 {int n = 20;} // myNSp2 ��Ī������ n�� �� 20 ����
int n = 30; // ������Ī������ n�� �� 30 ����

int main() // main �Լ� ����
{
	int n = 40; // �������� n�� �� 40 ����
	cout << myNSp1::n << endl; // myNSp1�� n ���
	cout << myNSp2::n << endl; // myNSp2�� n ���
	cout << ::n << endl; // ������Ī������ n ���
	cout << n << endl; // �������� n ���
	return 0;
}