package Class;

/**
 * File Name: MultipleConstructor.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 29. 2023
 * Last Edited: December 29. 2023
 * Summary: 다중 생성자 정의 예제 프로그램
 */
class MultiTV {
	private int nSize = 0;
	
	// 생성자를 정의하지 않을 경우 아무런 파라미터도 없고 기능도 없는 기본 생성자를 생성하여 호출해준다.
	
	// 생성자는 여러 개를 정의할 수 있다.
	// 파라미터의 자료형과 개수에 따라서 구분되며, 호출 또한 파라미터가 정확히 매칭되는 생성자를 호출하게 된다.
	// 동일한 이름을 가진 메소드가 파라미터에 따라 구분되는 것을 오버로딩이라고 한다.
	public MultiTV(int newNsize) {nSize = newNsize;}
	public MultiTV() {nSize = 20;}
}
public class MultipleConstructor {
	public static void main(String args[]) {
		MultiTV tv1 = new MultiTV(10);			// 파라미터가 존재하는 생성자 호출
		MultiTV tv2 = new MultiTV();			// 파라미터가 존재하지 않는 생성자 호출
	}
}
