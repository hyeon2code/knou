// Ŭ���� �Լ����� �������
#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED
// include �ߺ��Ǿ� crush �Ǵ� �� ����
class Counter { // Counter Ŭ���� ����
	int value;
public:
	Counter() : value (0) {} // ������ - �����ڴ� �̸��� ���� �����Ƿ� �������� �̸�����. // ���� 0���� ����� ���.
void reset() {
	value = 0;
}
void count() {
	++value;
}
int getValue() const {
	return value;}
};

#endif // COUNTER_H_INCLUDED �� ���