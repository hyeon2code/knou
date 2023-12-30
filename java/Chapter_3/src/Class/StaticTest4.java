package Class;

/**
 * File Name: StaticTest4.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 29. 2023
 * Last Edited: December 29. 2023
 * Summary: static field 초기화 예제 프로그램
 */
class MyClass4 {
	public static int nStaticField1 = 10;
	public static int nStaticField2;
	// 생성자에 static 필드 초기화 명령을 넣을 경우 객체 생성시마다 초기화가 이루어지므로 주의하여야 한다.
	public MyClass4() {nStaticField2 = 20;}
}
public class StaticTest4 {
	public static void main(String args[]) {
		MyClass4 mc1 = new MyClass4();
		System.out.println("mc1 is constructed");
		System.out.println("nStaticField1: " + MyClass4.nStaticField1);
		System.out.println("nStaticField2: " + MyClass4.nStaticField2);
		
		MyClass4.nStaticField1 += 10;
		MyClass4.nStaticField2 += 10;
		System.out.println("Values are changed.");
		System.out.println("nStaticField1: " + MyClass4.nStaticField1);
		System.out.println("nStaticField2: " + MyClass4.nStaticField2);
		
		// mc2 객체 생성으로 인해 nStaticField2의 값이 20으로 초기화 됨.
		MyClass4 mc2 = new MyClass4();
		System.out.println("mc2 is constructed");
		System.out.println("nStaticField1: " + MyClass4.nStaticField1);
		System.out.println("nStaticField2: " + MyClass4.nStaticField2);
	}
}
