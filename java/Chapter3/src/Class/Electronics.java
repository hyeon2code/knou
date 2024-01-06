package Class;

/**
 * File Name: Electronics.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 28. 2023
 * Last Edited: December 28. 2023
 * Summary: 클래스 선언 예제 프로그램
 */
// 클래스 선언 규칙 => 접근제어자 class 클래스명 {멤버}
public class Electronics {
	// private는 나를 감싸는 클래스에서만 접근이 가능하다. 자식 클래스에서도 접근할 수 없다.
	private int nVoltage = 0;
	
	// 클래스 정의 블록에서는 멤버 정의 외의 다른 명령문을 넣을 수 없다.
	// nVoltage=1;  컴파일 오류
	
	// 멤버의 별도 초기화가 필요하다면 블록으로 감싸서 초기화를 할 수 있다. 이를 초기화 블록이라고 부른다.
	{nVoltage=1;}
	
	public void turnOn(int nInputVoltage) {
		nVoltage = nInputVoltage;
	}
	public void turnOff() {nVoltage=0;}
	public int getVoltage() {return nVoltage;}
}
