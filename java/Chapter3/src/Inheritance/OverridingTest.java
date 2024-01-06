package Inheritance;

/**
 * File Name: OverridingTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: 메소드 오버라이딩 예제  
 */
class Shape {
	// 도형의 면적을 구해주는 메소드 최초 정의 
	public double getArea(double h, double w) {return h*w;}
}

class Triangle extends Shape {
	// 파라미터까지 동일한 상속받은 메소드를 재정의하는 것을 메소드 오버라이딩이라고 한다.
	// 오버라이딩하게 되면, 자식 인스턴스에서는 오버라이딩된 메소드가 실행된다.
	
	// 예제 => 도형의 넓이를 구하는 메소드에서 삼각형의 넓이를 반환하는 메소드로 재정의
	public double getArea(double h, double w) {return h*w*0.5;}
}
public class OverridingTest {
	public static void main(String args[]) {
		Triangle t = new Triangle();
		
		// 오버라이딩 된 메소드를 통해 6.0을 출력 
		System.out.println(t.getArea(3, 4));
	}
}
