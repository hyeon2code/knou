//누산기 헤더파일 (Accumulator Header File)
#pragma once
#include <iostream> // 선행처리 - iostream을 포함 지시
using namespace std; // 표준 c++ 라이브러리의 std를 기본명칭공간으로 지정

class AC { // 클래스 'AC' 선언 - Accmulator의 앞글자 2자를 따서 클래스 이름을 'AC' 로 선언
	int value; // int형 변수 value 선언 - 값이 바뀔 변수이므로 const 선언은 하지 않음
public: // 소스파일에서 사용 할 클래스 및 함수이므로 공개를 위해 public 선언
	AC() : value (0) {}; // 생성자 선언 - value 값을 0으로 초기화 지시. 생성자는 이름이 따로 없으므로 클래스 이름인 AC로 선언.

	/* 사칙연산 함수 선언 전 미리 변수를 지정해주어야 하므로 필요한 매개변수 선언.*/
	int add(); // 정수형 덧셈을 위한 int형 변수 add 선언
	int sub(); // 정수형 뺄셈을 위한 int형 변수 sub 선언
	int mul(); // 정수형 곱셈을 위한 int형 변수 mul 선언
	int div(); // 정수형 나눗셈을 위한 int형 변수 div 선언

	/*사칙연산 함수 선언*/
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
}; // 클래스 'AC' 종료