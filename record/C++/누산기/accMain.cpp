/* ����� �ҽ� ���� (Accumulator Source File) */
#include "Accumulator.h" // Accumulaotr ������� ����
Accumulator acc; // Accumulaotor Ŭ������ acc��� �̸����� ��ü ����.

int main() {
	cout << acc.getValue() << endl; // ������� ���� ��
	acc.add(4); // 4�� ����
	cout << acc.getValue() << endl;
	acc.sub(3); // 3�� ��
	cout << acc.getValue() << endl;
	acc.mul(2); // 2�� ����
		cout << acc.getValue() << endl;
		acc.div(1); // 1�� ����
		cout << acc.getValue() << endl;
	acc.print(2); // 2������ ���
	if (acc.�˻�0())
		cout << "0" << endl;
	if (acc.���())
		cout << "���" << endl;
	if (acc.����())
		cout << "����" << endl;
	return 0;
}

// ���� ��쵵 ��� ���� ���� �䱸.
