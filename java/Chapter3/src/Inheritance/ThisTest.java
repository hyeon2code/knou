package Inheritance;

/**
 * File Name: SuperTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: this 키워드 세부 예제  
 */
class MyClass {
	double x = 10.0;
	
	// 생성자는 오버로딩을 통해 여러개 생성될 수 있음.
	// this()는 주로 다른 생성자에서 또 다른 생성자를 호출할 때 사용.
	// this() 사용 시 구문들이 실행될 뿐 인스턴스가 여러개 생성되는 것은 아님.
	public MyClass() {x = 20.0;}
	public MyClass(double new_x) {
		// 20.0으로 초기화 된 인스턴스로서 생성한 다음 new_x를 더해줌.
		this();
		x = x + new_x;
	}
}

public class ThisTest {
	public static void main(String args[]) {
		MyClass mc = new MyClass(10);
		System.out.println(mc.x);
	}
}