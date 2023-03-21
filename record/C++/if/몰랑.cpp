#include <iostream> // 선행처리 - iostream을 포함.
using namespace std; // 표준 c++ 라이브러리의 std를 기본 명칭공간으로 지정

int main() // main 함수 선언
{
	int a = 10;
	int b = 20;
	if (a > b)
		cout << "호옹이" << endl;
	else {
		int e = a;
		a = b;
		b = e;
	}
	cout << a << endl;
	cout << b << endl;
	return 0;
}