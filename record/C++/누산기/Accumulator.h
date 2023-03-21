//누산기 헤더파일 (Accumulator Header File)
#pragma once
#include "iostream" // iostream 포함
#include "stdlib.h" // stdlib 헤더파일 - itoa(Integer TO Ascii) 함수, 난수, 동적메모리 함수 등이 포함된 헤더파일
using namespace std;

class Accumulator { // 누산기 객체 생성
public: // 소스파일에서 사용 할 클래스 및 함수이므로 공개를 위해 public 선언
	Accumulator() : value(0) {} // 생성자 선언 - 생성자는 이름이 따로 없으므로 클래스 이름을 지정. value 값을 0으로 지움. 디폴트 인수 지정.
	int value; // 누산기 값 value 선언
	int n; // 사칙연산을 위한 변수 n 선언
	int radix; // 진수 변환에 필요한 변수 radix 선언
	void add(int n) { // 덧셈 (add)
		value += n;
	}
	void sub(int n) { // 뺄셈 (sub)
		value -= n;
	}
	void mul(int n) { // 곱셈 (mul)
		value *= n;
	}
	void div(int n) { // 나눗셈 (div)
		value /= n;
	}
	bool 검사0() { // 0 검사. bool 자료형은 true/false만 return 가능.
		return value == 0;
	}
	bool 양수() { // 양수 검사. 상동
		return value > 0;
	}
	bool 음수() { // 음수 검사. 상동
		return value < 0;
	}
	int getValue() { // 값 반환
		return value; // 상동
	}
	void print(int radix = 10) { // 진수별 출력 - 10진수가 기본 값이 되도록 10 설정.
		char buffer[10]; // 10진수 이므로 버퍼크기는 10.
		cout << itoa(value, buffer, radix) << endl; // itoa 함수부.
	}
};
/*변수는 필요 함수 전에만 선언하면 되므로 위치 각자 변경, 주석 변경, 클래스, 함수, 변수 네임 변경. pragma_once 말고도 ifndef/define(endif) 사용 요구. */