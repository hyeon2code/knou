// Ŭ���� �Լ����� �������
#pragma once // ������� ������ 1���� �ǰ� ����
class Counter { // Counter Ŭ���� ����
	int value;
public:
void reset() {
	value = 0;
}
void count() {
	++value;
}
int getValue() const {
	return value;}
};