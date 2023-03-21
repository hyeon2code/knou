#include <iostream> // 선행처리 - iostream을 포함 지시
using namespace std; // 표준 c++ 라이브러리의 std를 기본 명칭공간으로 지정

class Box { // Box 클래스 생성
private : // 가시성 지시 = private = 비공개 클래스(정보은닉)
	int height, width, depth; // int형 height(높이), width(너비), depth(깊이) 변수 생성
public: // 가시성 지시 - public = 공개 클래스(공개)
	void init(int h, int w, int d) { // void형 init 함수 선언(int h, int w, int d 변수를 매개변수로 지정)
		height = h; // public 클래스의 h값을 private 클래스의 height 값에 저장) // 후자에서 전자로
		width = w; // public 클래스의 w값을 private 클래스의 width 값에 저장)
		depth = d; // depth 클래스의 depth에 public 클래스의 d값을 저장
	}
	int volume() const {
		return height * width * depth;
	}
};

int main()
{
	Box b;
	b.init(5, 10, 10);
	cout << b.volume() << endl;
	return 0;
}