package Class;

/**
 * File Name: StaticTest1.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 29. 2023
 * Last Edited: December 29. 2023
 * Summary: 클래스 필드 예제 프로그램
 */

class MyClass2 {
	// 필드 선언 시 자료형 앞에 static을 명시하면 클래스 변수가 된다.
	// 클래스 변수는 클래스에 상주하여 생성된 모든 객체들이 공유하게 된다.
	public static int nStaticFiled = 0;
}

public class StaticTest1 {
	public static void main(String args[]) {
		MyClass2 myObject1, myObject2;
		myObject1 = new MyClass2();
		myObject2 = new MyClass2();
		
		// 객체를 통해 클래스 변수의 값을 변경하면 동일 클래스를 가진 모든 인스턴스가 이를 공유한다.
		myObject1.nStaticFiled = 10;
		System.out.println(myObject2.nStaticFiled);
		myObject2.nStaticFiled = 20;
		System.out.println(myObject1.nStaticFiled);
	}
}
