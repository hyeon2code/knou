//반응형 카운터
#include <iostream>
using namespace std;
#include "Counter.h" // 선행처리 - Counter.h 헤더파일 포함 지시

int main()
{
	Counter cnt; // Counter 객체를 정의하며 cnt 값 선언
	cnt.reset();
	double bc;
	cout << "계수기의 현재 값 :" << cnt.getValue() << endl;
	cout << "값을 추가하시려면 1을 입력하여 주십시오 " << endl;
	cin >> bc;
	if (bc = 1) {
	cnt.count();
	};
	if (bc = 0) {
		cnt.reset();
	};
	cout << "계수기의 현재 값 :" << cnt.getValue() << endl;
		cout << "값을 추가하시려면 1을 입력하여 주십시오 " << endl;
	cin >> bc;
	if (bc = 1) {
	cnt.count();
	};
	if (bc = 0) {
		cnt.reset();
	};
	cout << "계수기의 현재 값 :" << cnt.getValue() << endl;	cout << "값을 추가하시려면 1을 입력하여 주십시오 " << endl;
	cin >> bc;
	if (bc = 1) {
	cnt.count();
	};
	if (bc = 0) {
		cnt.reset();
	};
	cout << "계수기의 현재 값 :" << cnt.getValue() << endl;
	return 0;
}