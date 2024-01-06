package Inheritance;

/**
 * File Name: ThisSuperTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: this와 super 키워드 예제  
 */
class CSuper2 {
	public double x;
}

class CSub2 extends CSuper2 {
	// 자식 인스턴스는 생성 시 기본적으로 기본생성자를 통해 부모 인스턴스도 생성됨.
	// 따라서 필드의 이름이 같아도 부모와 별개의 필드로서 존재.
	// 이 때 나를 가리키려면 this, 부모의 필드를 가리키려면 super를 필드 앞에 명시.
	public double x;
	
	public CSub2(double new_x) {
		// 생성되는 인스턴스의 x 필드를 초기화 
		this.x = new_x;
		// CSuper2를 기반으로 하는 부모 인스턴스의 x 필드를 초기화.
		super.x = new_x * 10;
	}
	
	// 부모 인스턴스의 x 필드 값을 반환 
	public double getSuper() {return super.x;}
	// 내가 가진 x 필드 값을 반환 
	public double getThis() {return this.x;}
}

public class ThisSuperTest {
	public static void main(String args[]) {
		CSub2 sub = new CSub2(10.0);
		
		// 인스턴스 sub의 x 값인 10.0을 출력 
		System.out.println(sub.x);	
		
		// 메소드 내용 => sub의 부모 인스턴스의 x 값인 100.0을 출력 
		System.out.println(sub.getSuper());	
		
		// 메소드 내용 => sub의 x값인 10.0을 출력 
		System.out.println(sub.getThis());	
	}
}
