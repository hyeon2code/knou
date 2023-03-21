// 클래스 함수원형 헤더파일
#pragma once // 헤더파일 컴파일 1번만 되게 선언
class Counter { // Counter 클래스 선언
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