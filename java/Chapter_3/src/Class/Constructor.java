package Class;

/**
 * File Name: Constructor.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 29. 2023
 * Last Edited: December 29. 2023
 * Summary: 생성자 정의 예제 프로그램
 */

class TV_ {
	public int nSize = 0;
	// 생성자는 객체 생성 시 객체와 객체 멤버를 초기화한다.
	// 생성자는 메소드이지만 반환 자료형을 지정할 수 없다.
	// 생성자 메소드의 이름은 클래스 이름과 동일하여야 한다.
	// 생성자는 별도로 호출이 불가능하며, 객체 생성 시 자동으로 호출된다.
	public TV_(int nNewSize) {			// 생성자 정의 예제
		nSize = nNewSize;
	}
}
public class Constructor {
	public static void main(String args[]) {
		// new TV_(10) 시 생성자가 호출되고 객체가 초기화된다.
		TV_ tv = new TV_(10);			
	}
}
