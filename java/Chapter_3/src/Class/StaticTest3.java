package Class;

/**
 * File Name: StaticTest3.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 29. 2023
 * Last Edited: December 29. 2023
 * Summary: static field 예제 프로그램
 */
class MyMessages {
	// static field는 클래스만으로 접근이 가능하므로 전역변수처럼 활용할 수 있다.
	// static은 여러 객체간의 공유가 목적이므로 어디서든 접근이 가능하도록 접근 제어자를 public으로 하는 것이 좋다.
	public static String msg1 = "Hello";
	public static String msg2 = "Java";
	public static String msg3 = "Application";
	public static String msg4 = "Applet";
}
public class StaticTest3 {
	public static void main(String args[]) {
		System.out.println(MyMessages.msg1);
		System.out.println(MyMessages.msg2);
		System.out.println(MyMessages.msg3);
		System.out.println(MyMessages.msg4);
	}
}
