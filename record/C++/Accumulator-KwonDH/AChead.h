//����� ������� (Accumulator Header File)
#pragma once
#include <iostream> // ����ó�� - iostream�� ���� ����
using namespace std; // ǥ�� c++ ���̺귯���� std�� �⺻��Ī�������� ����

class AC { // Ŭ���� 'AC' ���� - Accmulator�� �ձ��� 2�ڸ� ���� Ŭ���� �̸��� 'AC' �� ����
	int value; // int�� ���� value ���� - ���� �ٲ� �����̹Ƿ� const ������ ���� ����
public: // �ҽ����Ͽ��� ��� �� Ŭ���� �� �Լ��̹Ƿ� ������ ���� public ����
	AC() : value (0) {}; // ������ ���� - value ���� 0���� �ʱ�ȭ ����. �����ڴ� �̸��� ���� �����Ƿ� Ŭ���� �̸��� AC�� ����.

	/* ��Ģ���� �Լ� ���� �� �̸� ������ �������־�� �ϹǷ� �ʿ��� �Ű����� ����.*/
	int add(); // ������ ������ ���� int�� ���� add ����
	int sub(); // ������ ������ ���� int�� ���� sub ����
	int mul(); // ������ ������ ���� int�� ���� mul ����
	int div(); // ������ �������� ���� int�� ���� div ����

	/*��Ģ���� �Լ� ����*/
	int add() {
		return value + add;
	}
	int sub() {
		return value - mul;
	}
	int mul() {
		return value * mul;
	}
	int div() {
		return value / div;
	}
}; // Ŭ���� 'AC' ����