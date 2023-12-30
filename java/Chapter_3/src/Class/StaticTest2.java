package Class;

/**
 * File Name: StaticTest2.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 29. 2023
 * Last Edited: December 29. 2023
 * Summary: 클래스 필드 예제 프로그램
 */
class MyClass3 {
	public static int nStaticField = 0;
}

public class StaticTest2 {
	public static void main(String args[]) {
		// 클래스 필드는 클래스에 상주하므로 객체가 없더라도 클래스 이름을 통해 직접 접근할 수 있다.
		MyClass3.nStaticField = 10;
		System.out.println(MyClass3.nStaticField);
	}
}
