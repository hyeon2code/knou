package Inheritance;

/**
 * File Name: TV.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: 간단한 클래스 상속 예제  
 */
//클래스 선언 규칙 => 접근제어자 class 클래스명 {멤버}
class Electronics {
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

// 접근제어자 class 서브클래스 extends 슈퍼클래스 꼴로 상속 선언 가능 
// Java는 다중 상속 불가 => 부모클래스로 하나의 클래스만 상속할 수 있음.
// 상속하게 되면 접근제어자에 따라 부모클래스의 멤버를 가져오게 됨.
public class TV extends Electronics{
	private int nSize = 0;
	public void setSize(int new_size) {nSize = new_size;}
	public int getSize() {return nSize;}
}
