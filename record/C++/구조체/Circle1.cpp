#include <iostream> // ����ó�� - iostream�� ���� ����
#include <cmath> // ����ó�� - cmath�� ���� ����
using namespace std; // ǥ�� c++ ���̺귯���� std�� �⺻ ��Ī�������� ����

const double PI = 3.141593; // const ������ - double�� PI ���� 3.141593���� ����

struct C2dType { // �ڷ��� ���� - 2���� ��ǥ ����ü C2dType ����
	double x, y; // double�� x, y ���� ����
}; // �ر���ü�� ������ ���� �߰�ȣ�� �����ݷ� ǥ�� �ʼ�

struct CircleType { // �ڷ��� ���� - �� ����ü CircleType ����
	C2dType center; // �߽���ǥ - C2dType ����ü�� �̿��Ͽ� center��� �߽���ǥ ����
	double radius; // �ݰ� - double�� radius ���� ����
};

double circleArea(CircleType c) // ���Ǹ��� - double �� circleArea ���� ���� (CircleType �ڷ����� c ����ü ����)
{
	return c.radius * c.radius * PI; // ���� ���� ���
}

bool chkOverlap(CircleType c1, CircleType c2) // ��ø���ΰ˻� - bool�� chkOverlap �Լ� ����(CircleTpye ������ c1,c2 �Ű����� ����)
{
	double dx = c1.center.x - c2.center.x; // c1(CircleType)�� center(C2dtype)�� x - c2(CircleType)�� center(C2dtype)�� x�� ���� double�� dx�� ����.
	double dy = c1.center.y - c2.center.y; // c1(CircleType)�� center(C2dtype)�� y - c2(CircleType)�� center(C2dtype)�� y�� ���� double�� dy�� ����.
	double dCntr = sqrt(dx*dx + dy*dy); // sqrt�Լ� - dx*dx + dy*dy �� ���� double�� dCntr�� ����.
	return dCntr < c1.radius + c2.radius; // dCntr�� ���� c1(CircleType) + c2(CircleTpye)�� ������ ������, true�� return, Ŭ��, false�� ���� return.
}

void dispCircle(CircleType c) { // dispCircle �Լ� ���� (CircleType �ڷ����� c ����ü ����)
	cout << " �߽���ǥ : (" << c.center.x << ", " << c.center.y << ")"; // ������� - c.center.x, c.center.y �� ����
	cout << "�ݰ� : " << c.radius << endl; // ������� - c.radius �� ����
}

int main() // main �Լ� ����
{
	CircleType c1 = { {0, 0}, 10 }; // CircleType �ڷ����� c1 ����ü�� �߽���ǥ 0,0 / ������ 10���� �ʱ�ȭ
	CircleType c2 = { {30, 10}, 5 }; // CircleType �ڷ����� c2 ����ü�� �߽���ǥ 30,10 / ������ 5�� �ʱ�ȭ

	cout << "��1" << endl; // c1 �������
	dispCircle(c1); // c1�� ������ ��� �� �ִ� dispCircle(c1) �Լ� ����
	cout << " ��1�� ���� :" << circleArea(c1) << endl; // c1 �������
	cout << "��2" << endl; // c2 �������
	dispCircle(c2); // c2�� ������ ��� �� �ִ� dipCircle(c2) �Լ� ����
	cout << " ��2�� ���� :" << circleArea(c2) << endl; // c2 �������

	// �� ���� ��ø ���� ���
	if (chkOverlap(c1, c2)) // ���ǹ� - chkOverlap �Լ��� c1, c2�� ��ø�ϴ��� ���
		cout << " �� ���� ��ø�˴ϴ�." << endl; // true - �������
	else
		cout << " �� ���� ��ø���� �ʽ��ϴ�." << endl; // false - �������
	return 0;
}