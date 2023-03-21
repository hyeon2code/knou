//범위 기반 for 루프
#include <iostream> // 선행처리 - iostream을 포함 지시
using namespace std; // 표준 c++ 라이브러리의 std를 기본 명칭공간으로 지정

int main() // main 함수 선언
{
	int x; // int형 변수 a 선언
	int y; // int형 변수 y 선언
	cout << "더하고 싶은 값을 입력하시오." << endl; // 구문 출력
	cin >> x; // x값 입력콘솔 출력
	cout << "더할 값을 입력하시오." << endl; // 구문 출력
	cin >> y; // y값 입력콘솔 출력
		int arr[] = { x,y }; // int형 arr 배열 선언 - x,y 값 포함
		int sum = 0; // int형 sum값 선언 - sum 초기값 0으로 초기화
		for (int a : arr) // 범위기반for루프 - int형 변수 a 선언, arr 배열 타깃지정.
			sum += a; // a값을 모두 sum에 더함.
	cout << "결과는 " << sum << " 입니다." << endl; // 구문 출력
	return 0;
}