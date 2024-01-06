package Class;

/**
 * File Name: InitStatic.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 03. 2024
 * Last Edited: January 03. 2024
 * Summary: 클래스 메소드 예제 프로그램
 */

class MyClass5 {
	public static int nStaticField = 10;
	// 메소드 자료형 앞에 static을 명시하면 클래스 메소드로서 작동하게 된다.
	// 클래스 메소드는 클래스를 참조할 수 있는 곳이면 어디서든 실행 가능하다.
	// 하지만 클래스 메소드는 인스턴스 멤버에 접근할 수 없다.
	static void setStaticField(int n) {nStaticField = n;}
	static int getStaticField() {return nStaticField;}
}
public class InitStatic {
	public static void main(String args[]) {
		MyClass5 mc = new MyClass5();
		mc.setStaticField(20);
		System.out.println(mc.getStaticField());
		MyClass5.setStaticField(30);
		System.out.println(MyClass5.getStaticField());
	}
}
