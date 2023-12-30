package String;

/**
 * File Name: StringTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 문자열을 선언하는 예제 프로그램
 */
public class StringTest {
	public static void main(String args[]) {
		// Java에서 문자열은 참조자료형에 속한다.
		// Java 문자열은 기본형처럼 선언하고 초기화할 수 있다.
		String szStr1 = "Java Application";
		String szStr2, szStr3;
		szStr2 = "Java Applet";
		szStr3 = szStr2;
		
		// String 클래스의 생성자를 통해 초기화 할 수도 있다.
		String szStr4 = new String("Java Application");
		
		// 문자열에 숫자를 덧셈할 경우 숫자가 문자열로 캐스팅된다.
		szStr1 = "Java";
		szStr2 = "Application";
		szStr3 = szStr1 + 2;
		szStr3 = szStr1 + 2.0;
		// boolean 리터럴 또한 해당 리터럴이 문자열로 캐스팅된다.
		szStr3 = true + "lies";
		System.out.println(szStr3);
	}
}