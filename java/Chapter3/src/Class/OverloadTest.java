package Class;

/**
 * File Name: OverloadTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: 메소드 오버로딩 예제 프로그램 
 */
class MyClass6 {
	// add 메소드 정의 => 두 정수의 합 반환 
	public int add(int a, int b) {return a+b;}
	// add 메소드 추가 정의 => 두 실수가 들어왔을 때 실수의 합을 반환  
	public double add(double a, double b) {return a+b;}
}

public class OverloadTest {
	public static void main(String args[]) {
		// 같은 이름을 가진 메소드를 파라미터에 따라 구분하여 호출하는 것을 메소드 오버로딩이라고 한다.
		System.out.println("Test string"); 		// 문자열 파라미터로 호출
		System.out.println(241);				// 정수 파라미터로 호출 
		System.out.println(34.5);				// 실수 파라미터로 호출 
	
		MyClass6 mc = new MyClass6();
		
		// 메소드 오버로딩 => 정수형 파라미터로 add 호출 
		System.out.println(mc.add(10, 15));
		
		// 메소드 오버로딩 => 실수형 파라미터로 add 호출 
		System.out.println(mc.add(10.5, 15.3));
		
		// 메소드 오버로딩 => 자료 손실이 없도록 실수로서 add 호출 
		System.out.println(mc.add(10, 10.5));
	}
}
