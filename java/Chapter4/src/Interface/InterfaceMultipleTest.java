package Interface;

/**
 * File Name: AbstractClassExam.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 06. 2024
 * Last Edited: January 06. 2024
 * Summary: 인터페이스 다중 상속 예제   
 */
interface Movable {
	// 인터페이스의 추상메소드에 정의된 파라미터는 구현 클래스에서 반드시 따라야 한다.
	void add(double dx, double dy);
	void sub(double dx, double dy);
}

interface Scalable {
	void mul(double s);
	void div(double s);
}

// 두 개 이상의 인터페이스를 상속받아 구현시킬 수 있다.
// 단, 상속받은 인터페이스의 모든 추상메소드를 완전히 구현시켜야 한다.
class Point implements Movable, Scalable {
	double x, y;
	
	// 인터페이스에 구현된 파라미터와 동일하게 추상메소드를 구현시켜야 한다.
	// Movable 인터페이스 구현
	public void add(double dx, double dy) {x += dx; y += dy;}
	public void sub(double dx, double dy) {x -= dx; y -= dy;}
	
	// Scalable 인터페이스 구현
	public void mul(double s) {x *= s; y *= s;}
	public void div(double s) {x /= s; y /= s;}
}

public class InterfaceMultipleTest {
	public static void main(String args[]) {
		Point p = new Point();
		p.add(10, 5);
		System.out.println("add x=10, y=5");
		System.out.println("p.x: " + String.valueOf(p.x) + " " + "p.y: " + String.valueOf(p.y));
		p.mul(2);
		System.out.println("mul 2");
		System.out.println("p.x: " + String.valueOf(p.x) + " " + "p.y: " + String.valueOf(p.y));
	}
}
