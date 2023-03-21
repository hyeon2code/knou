// 클래스 함수원형 헤더파일
#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED
// include 중복되어 crush 되는 것 방지
class Counter { // Counter 클래스 선언
	int value;
public:
	Counter() : value (0) {} // 생성자 - 생성자는 이르밍 따로 없으므로 포인터의 이름으로. // 값을 0으로 지우는 명령.
void reset() {
	value = 0;
}
void count() {
	++value;
}
int getValue() const {
	return value;}
};

#endif // COUNTER_H_INCLUDED 일 경우