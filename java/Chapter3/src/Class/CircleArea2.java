package Class;

/**
 * File Name: CircleArea2.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 03. 2024
 * Last Edited: January 03. 2024
 * Summary: OOP의 특징을 반영하여 원의 넓이를 구하는 프로그램
 */
// 원을 추상화한 클래스 정의 - 캡슐화 반영
class Circle{
	private int r;
	// 생성자 정의 => 파라미터를 통해 r 필드가 초기화 되도록 캡슐
	public Circle(int a) {
		r = a;
	}
	public double getArea() {
		return r * r * 3.141592;
	}
}
public class CircleArea2 {
	public static void main(String args[]) {
		Circle c = new Circle(5);
		System.out.println(c.getArea());
	}
}
