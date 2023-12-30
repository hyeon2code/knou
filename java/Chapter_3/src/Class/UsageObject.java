package Class;

/**
 * File Name: UsageObject.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 28. 2023
 * Last Edited: December 28. 2023
 * Summary: 객체 생성 예제 프로그램
 */
public class UsageObject {
	public static void main(String args[]) {
		// 클래스로 정의된 무언가를 실제로 사용하기 위해서는 객체를 생성해야 한다.
		// 객체 생성이란 객체가 차지할 적당한 메모리공간을 할당받는 것을 의미한다.
		
		// 객체 생성 예제 => 클래스는 동일 패키지 내 Electronics.java에 존재.
		Electronics a = new Electronics();
		
		// 객채 생성은 클래스형 변수를 선언한 다음 new 를 통해 메모리를 할당받고, 생성자를 호출하고, 메모리 주소를 반환한다.
		// 클래스형 변수는 참조형 변수로서 객체가 있는 주소값을 가진다.
		Electronics b;
		b = new Electronics();
		
		// 객체 사용 예제
		// 객체.메소드명으로 메소드를 실행할 수 있다.
		b.turnOn(10);
		int b_volt = b.getVoltage();
	}
}