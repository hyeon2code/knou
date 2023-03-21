#include <iostream> // 선행처리 - iostream을 포함 지시
using namespace std; // 표준 c++ 라이브러리의 std를 기본 명칭공간으로 지정

int main() // main 함수 선언
{
	int val, total = 0; //int형 val 변수 선언, 초기값 0으로 초기화
	cout << "계산값을 입력하시오." << endl; // 구문출력
	cin >> val;
	while (val < 10) { // while 루프 - val 변수가 10보다 작다면?
		total += val; // val값을 계속 더함.
		cin >> val;
		cout << val << endl;
	}
	cout << val << endl;
	return 0;
}