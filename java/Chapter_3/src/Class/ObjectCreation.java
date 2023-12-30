package Class;

/**
 * File Name: ObjectCreation.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 28. 2023
 * Last Edited: December 28. 2023
 * Summary: 객체 생성 예제 프로그램
 */
// 접근제어자를 명시하지 않을 경우 동일 패키지 내에서 접근 가능하다.
class TV {
	private int nSize = 0;
}

public class ObjectCreation {
	public static void main(String args[]) {
		TV tv1;					// TV 클래스를 자료형으로 하는 클래스형 변수 선언
		tv1 = new TV();  		// TV 클래스를 이용하여 tv1 인스턴스 생성 
	}
}
