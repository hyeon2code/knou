#include <iostream> // 선행처리 - iostream을 포함 지시
#include <cmath> // 선행처리 - cmath를 포함 지시
using namespace std; // 표준 c++ 라이브러리의 std를 기본 명칭공간으로 지정

const double PI = 3.141593; // const 한정어 - double형 PI 값을 3.141593으로 선언

struct C2dType { // 자료형 생성 - 2차원 좌표 구조체 C2dType 생성
	double x, y; // double형 x, y 변수 선언
}; // ※구조체는 구별을 위해 중괄호에 세미콜론 표시 필수

struct CircleType { // 자료형 생성 - 원 구조체 CircleType 생성
	C2dType center; // 중심좌표 - C2dType 구조체를 이용하여 center라는 중심좌표 선언
	double radius; // 반경 - double형 radius 변수 선언
};

double circleArea(CircleType c) // 원의면적 - double 형 circleArea 변수 선언 (CircleType 자료형의 c 구조체 생성)
{
	return c.radius * c.radius * PI; // 원의 면적 계산
}

bool chkOverlap(CircleType c1, CircleType c2) // 중첩여부검사 - bool형 chkOverlap 함수 선언(CircleTpye 변수의 c1,c2 매개변수 받음)
{
	double dx = c1.center.x - c2.center.x; // c1(CircleType)의 center(C2dtype)의 x - c2(CircleType)의 center(C2dtype)의 x의 값을 double형 dx에 저장.
	double dy = c1.center.y - c2.center.y; // c1(CircleType)의 center(C2dtype)의 y - c2(CircleType)의 center(C2dtype)의 y의 값을 double형 dy에 저장.
	double dCntr = sqrt(dx*dx + dy*dy); // sqrt함수 - dx*dx + dy*dy 의 값을 double형 dCntr에 저장.
	return dCntr < c1.radius + c2.radius; // dCntr의 값이 c1(CircleType) + c2(CircleTpye)의 값보다 작을때, true가 return, 클때, false의 값이 return.
}

void dispCircle(CircleType c) { // dispCircle 함수 선언 (CircleType 자료형의 c 구조체 생성)
	cout << " 중심좌표 : (" << c.center.x << ", " << c.center.y << ")"; // 구문출력 - c.center.x, c.center.y 값 포함
	cout << "반경 : " << c.radius << endl; // 구문출력 - c.radius 값 포함
}

int main() // main 함수 선언
{
	CircleType c1 = { {0, 0}, 10 }; // CircleType 자료형의 c1 구조체를 중심좌표 0,0 / 반지름 10으로 초기화
	CircleType c2 = { {30, 10}, 5 }; // CircleType 자료형의 c2 구조체를 중심좌표 30,10 / 반지름 5로 초기화

	cout << "원1" << endl; // c1 구문출력
	dispCircle(c1); // c1의 정보를 출력 해 주는 dispCircle(c1) 함수 선언
	cout << " 원1의 면적 :" << circleArea(c1) << endl; // c1 구문출력
	cout << "원2" << endl; // c2 구문출력
	dispCircle(c2); // c2의 정보를 출력 해 주는 dipCircle(c2) 함수 선언
	cout << " 원2의 면적 :" << circleArea(c2) << endl; // c2 구문출력

	// 두 원의 중첩 여부 출력
	if (chkOverlap(c1, c2)) // 조건문 - chkOverlap 함수로 c1, c2가 중첩하는지 계산
		cout << " 두 원은 중첩됩니다." << endl; // true - 구문출력
	else
		cout << " 두 원은 중첩되지 않습니다." << endl; // false - 구문출력
	return 0;
}