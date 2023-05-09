//����� ������� (Accumulator Header File)
#pragma once
#include "iostream" // iostream ����
#include "stdlib.h" // stdlib ������� - itoa(Integer TO Ascii) �Լ�, ����, �����޸� �Լ� ���� ���Ե� �������
using namespace std;

class Accumulator { // ����� ��ü ����
public: // �ҽ����Ͽ��� ��� �� Ŭ���� �� �Լ��̹Ƿ� ������ ���� public ����
	Accumulator() : value(0) {} // ������ ���� - �����ڴ� �̸��� ���� �����Ƿ� Ŭ���� �̸��� ����. value ���� 0���� ����. ����Ʈ �μ� ����.
	int value; // ����� �� value ����
	int n; // ��Ģ������ ���� ���� n ����
	int radix; // ���� ��ȯ�� �ʿ��� ���� radix ����
	void add(int n) { // ���� (add)
		value += n;
	}
	void sub(int n) { // ���� (sub)
		value -= n;
	}
	void mul(int n) { // ���� (mul)
		value *= n;
	}
	void div(int n) { // ������ (div)
		value /= n;
	}
	bool �˻�0() { // 0 �˻�. bool �ڷ����� true/false�� return ����.
		return value == 0;
	}
	bool ���() { // ��� �˻�. ��
		return value > 0;
	}
	bool ����() { // ���� �˻�. ��
		return value < 0;
	}
	int getValue() { // �� ��ȯ
		return value; // ��
	}
	void print(int radix = 10) { // ������ ��� - 10������ �⺻ ���� �ǵ��� 10 ����.
		char buffer[10]; // 10���� �̹Ƿ� ����ũ��� 10.
		cout << itoa(value, buffer, radix) << endl; // itoa �Լ���.
	}
};
/*������ �ʿ� �Լ� ������ �����ϸ� �ǹǷ� ��ġ ���� ����, �ּ� ����, Ŭ����, �Լ�, ���� ���� ����. pragma_once ���� ifndef/define(endif) ��� �䱸. */