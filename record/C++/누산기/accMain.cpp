/* 누산기 소스 파일 (Accumulator Source File) */
#include "Accumulator.h" // Accumulaotr 헤더파일 포함
Accumulator acc; // Accumulaotor 클래스를 acc라는 이름으로 객체 생성.

int main() {
	cout << acc.getValue() << endl; // 누산기의 현재 값
	acc.add(4); // 4를 더함
	cout << acc.getValue() << endl;
	acc.sub(3); // 3을 뺌
	cout << acc.getValue() << endl;
	acc.mul(2); // 2를 곱함
		cout << acc.getValue() << endl;
		acc.div(1); // 1로 나눔
		cout << acc.getValue() << endl;
	acc.print(2); // 2진수로 출력
	if (acc.검사0())
		cout << "0" << endl;
	if (acc.양수())
		cout << "양수" << endl;
	if (acc.음수())
		cout << "음수" << endl;
	return 0;
}

// 위의 경우도 출력 구문 변경 요구.
