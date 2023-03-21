#include <iostream>
using namespace std;
#include "Counter.h" // 선행처리 - Counter.h 헤더파일 포함 지시

int main()
{
	Counter cnt; // Counter 객체를 정의하며 cnt 값 선언
	cout << "계수기의 현재 값 :" << cnt.getValue() << endl;
	cnt.count();
	cnt.count();
	cout << "계수기의 현재 값 :" << cnt.getValue() << endl;
	return 0;
}