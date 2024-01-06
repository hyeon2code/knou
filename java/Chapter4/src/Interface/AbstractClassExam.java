package Interface;

/**
 * File Name: AbstractClassExam.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 06. 2024
 * Last Edited: January 06. 2024
 * Summary: 추상클래스 선언 예제   
 */
// 추상클래스는 슈퍼클래스로서 하위 클래스의 틀을 잡아주기 위해 사용하는 클래스이다.
// 접근제어자 abstract class 클래스명 {} 꼴로 선언한다.
// 추상 클래스는 추상 메소드를 가질 수 있고, 추상메소드가 하나라도 있으면 추상클래스로 본다.
abstract class Shape {
	public double height, width;
	
	// 생성자가 있더라도 직접 인스턴스를 생성할 수 없다.
	// 하지만 자식 객체는 반드시 부모객체가 필요하므로 서브클래스 생성자에서 super()를 실행시켜야 한다.
	public Shape(double h, double w) {height=h; width=w;}
	
	public void setHeight(double h) {height=h;}
	public void setWidth(double w) {width=w;}
	
	// 추상메소드는 함수 원형은 만들어졌지만, 함수의 본문이 빠져있는 메소드를 말한다.
	// 추상메소드를 상속받는 서브클래스는 만드시 추상메소드를 완전히 구현하여야 한다.
	public abstract double getArea();
}

class Triangle extends Shape {
	// 추상클래스의 서브클래스는 슈퍼클래스에 정의된 생성자에 맞게 super()를 실행시켜 부모 객체를 생성하여야 한다.
	public Triangle(double h, double w) {super(h, w);}
	// 추상메소드는 반드시 구현하여야 한다.
	public double getArea() {return height * width * 0.5;}
}

class Box extends Shape {
	public Box(double h, double w) {super(h, w);}
	// 추상메소드 구현
	public double getArea() {return height * width;}
}

public class AbstractClassExam {
	public static void main(String args[]) {
		// Shape s = new Shape(10, 5); => 추상클래스로서 인스턴스 생성 불가
		Triangle t = new Triangle(10, 5);
		Box b = new Box(10, 5);
		
		System.out.println(t.getArea());
		System.out.println(b.getArea());
	}
}