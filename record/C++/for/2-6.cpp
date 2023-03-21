#include <iostream> // 선행처리 - iostream을 포함 지시
using namespace std; // 표준 c++ 라이브러리의 std를 표준 명칭공간으로 지정

int main() // main 함수 선언
{
	cout << "초기값은 2, 3, 9, 4, 7 입니다" << endl;
	int arr[] = { 2, 3, 9, 4, 7 }; // 정수형 배열 arr 선언. 배열 초기값 2, 3, 9, 4, 7로 초기화 - 배열의 크기 5
	int sum = 0; // 합산을 위한 int 형 sum 변수 선언, sum 초기값 0으로 초기화.
	for (int i = 0; i < 5; i++) // for 반복문 - int형 정수 i를 0으로 초기화(int i=0) ; i가 5보다 작다면(i<5) ; 계속 증가 반복(i++)
		sum += arr[i]; // arr[i] 배열에 들어있는 값 i를 7행 "{}" 내부의 0부터 4까지 반복 증가 변화 시키면서 그 값을 sum에 더함.
	cout << "합계 = " << sum << endl; // sum 값을 포함한 변수 출력
	return 0;
}