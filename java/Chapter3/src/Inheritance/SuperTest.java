package Inheritance;

/**
 * File Name: SuperTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: super 키워드 세부 예제  
 */
class CSuper3 {
	public double x;
	
	// CSuper3 클래스의 생성자 정의
	// 생성자는 1개 이상 존재하면 되므로 별도 정의 시 기본 생성자가 자동생성되지 않음.
	// 문제는 상속 후 자식 인스턴스가 생성될 때 부모 인스턴스는 필수로 생성되어야 함.
	// 따라서 기본 생성자를 추가 정의하거나 자식클래스에서 super()를 통해 파라미터를 전달해주어야 함.
	public CSuper3(double new_x) {
		x = new_x;
	}
}

class CSub3 extends CSuper3 {
	double x;
	
	public CSub3(double new_x) {
		// 부모 클래스의 생성자 호출
		// 부모클래스에 정의된대로 파라미터를 포함하여 부모 인스턴스 생성.
		super(new_x);
		// super(); 기본 생성자는 존재하지 않으므로 호출할 수 없음.
		x = new_x;
	}
	
	public double getSuper() {return super.x;}
	public double getSub() {return this.x;}
}

public class SuperTest {
	public static void main(String args[]) {
		CSub3 sub = new CSub3(10.0);
		
		System.out.println(sub.getSuper());
		System.out.println(sub.getSub());
	}
}
