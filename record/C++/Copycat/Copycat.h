#pragma once // include 중복 컴파일 방지
#include <iostream> // iostream 포함
#include <cstring> // 선행처리 - cstring 포함
using namespace std; // std 기본명칭공간 지정

class Copycat {
	char* name; // char 형 name 멤버함수 생성
public:
	Copycat (const char* n) { // 생성자
		name = new char[strlen(n)+1]; // 문자형 포인터로 변수 n을 매개변수로 지정 (const 한정어 - 값 변경 불가능)
		//문자열 끝에 NULL 문자가 추가되므로 실제 문자열보다 1자 더 필요함.
		strcpy(name, n); // 위험한 함수
		cout << name << "생성" << endl; // test
	}
	~Copycat() { // 소멸자 생성
		cout << name << "소멸" << endl; // test
		delete [] name; // name 멤버함수에서 여러개의 메모리를 할당받았으므로 여러개를 날리기 위해 [] 처리
	}
	void whoRU() const { // whoRU 함수는 변경할 일 없으므로 const 한정어
		cout << "나는 " << name << "입니다." << endl;
	}
};

Counterm (const CounterM &c) ;
maxvalue (c.maxValue),
	value (c.value) {}