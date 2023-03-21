#include <iostream> // 선행처리 - iostream을 포함 지시

int main() // main 함수 선언
{
	int score; // int 형 score 변수 값 선언
	std::cout << "점수를 입력하시오." << std::endl; // 점수를 입력하시오. 구문 출력
	std::cin >> score; // score 변수 값 입력
	char grade; // char형 grade 변수 값 선언
	switch (score / 10) // switch 조건부 구문
	{
	case 10 : // 10일 경우
	case 9: grade = 'A'; // 9일 경우 A라는 char형 변수 grade값 저장
		break; // 빠져나오기
	case 8: grade = 'B'; // 8일 경우 B라는 char형 변수 grade값 저장
		break; // 브레이크
	case 7: grade = 'C'; // 7일 경우 C라는 char형 변수 grade값 저장
		break; // 브레이크
	case 6: grade = 'D'; // 6일 경우 D라는 char형 변수 grade값 저장
		break; // 브레이크
	default: grade = 'F'; // 나머지 기본 값으로 F라는 char형 변수 grade값 저장
	}
	std::cout << "당신의 학점은 " << grade << " 입니다." << std::endl; // 변수 grade 값을 포함한 구문 출력
	return 0;
}