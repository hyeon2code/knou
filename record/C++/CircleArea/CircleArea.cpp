#include <iostream> // 선행처리 - iostream을 포함지시.
using namespace std; // 표준 c++ 라이브러리의 std를 기본 명칭공간으로 지정.

int main () // main 함수 선언
{
	const double PI = 3.1459; // const 한정어로 PI에 원주율 값 부여
	double radius; // double형의 radius(반경)변수 선언
	cout << "원의 반경을 입력하세요." << endl; // 본 문장 출력.
	cin >> radius; // radius변수 입력 커서 출력.
	double area = radius * radius * PI; // double형 값의 반경*반경*파이식으로 계산한 원의 면적값을 area 변수로 지정.
	cout << "원의면적 = " << area << endl; // 원의면적을 area 변수로 스트림출력.
		return 0;
}