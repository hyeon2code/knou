#pragma once // include �ߺ� ������ ����
#include <iostream> // iostream ����
#include <cstring> // ����ó�� - cstring ����
using namespace std; // std �⺻��Ī���� ����

class Copycat {
	char* name; // char �� name ����Լ� ����
public:
	Copycat (const char* n) { // ������
		name = new char[strlen(n)+1]; // ������ �����ͷ� ���� n�� �Ű������� ���� (const ������ - �� ���� �Ұ���)
		//���ڿ� ���� NULL ���ڰ� �߰��ǹǷ� ���� ���ڿ����� 1�� �� �ʿ���.
		strcpy(name, n); // ������ �Լ�
		cout << name << "����" << endl; // test
	}
	~Copycat() { // �Ҹ��� ����
		cout << name << "�Ҹ�" << endl; // test
		delete [] name; // name ����Լ����� �������� �޸𸮸� �Ҵ�޾����Ƿ� �������� ������ ���� [] ó��
	}
	void whoRU() const { // whoRU �Լ��� ������ �� �����Ƿ� const ������
		cout << "���� " << name << "�Դϴ�." << endl;
	}
};

Counterm (const CounterM &c) ;
maxvalue (c.maxValue),
	value (c.value) {}