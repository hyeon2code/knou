#include <iostream> // 선행처리 - iostream 헤더파일 포함지시
using namespace std; // 표준 c++ 라이브러리의 std 명칭공간을 기본 명칭공간으로 지정
namespace myNSp1 {int n = 10;} // myNSp1 명칭공간의 n의 값 10 지정
namespace myNSp2 {int n = 20;} // myNSp2 명칭공간의 n의 값 20 지정
int n = 30; // 전역명칭공간의 n의 값 30 지정

int main() // main 함수 선언
{
	int n = 40; // 지역변수 n의 값 40 지정
	cout << myNSp1::n << endl; // myNSp1의 n 출력
	cout << myNSp2::n << endl; // myNSp2의 n 출력
	cout << ::n << endl; // 전역명칭공간의 n 출력
	cout << n << endl; // 지역변수 n 출력
	return 0;
}