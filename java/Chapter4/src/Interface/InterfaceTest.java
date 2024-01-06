package Interface;

/**
 * File Name: AbstractClassExam.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 06. 2024
 * Last Edited: January 06. 2024
 * Summary: 인터페이스 선언 예제   
 */
// Java에는 인터페이스 라는 요소가 있다.
// 하위 객체들이 공통으로 가져야 할 행동양식들을 규격화 한 것으로 보면 된다.
// 접근제어자 abstract interface 인터페이스명 {} 꼴로 선언한다. abstract는 생략할 수 있다.
// 인터페이스의 접근제어자는 public 또는 생략만 가능하다.
abstract interface Figure {
	// 인터페이스에 필드를 정의할 수 있지만, public static final 로서 static 상수로만 사용한다.
	
	// 하위 객체가 가져야 할 행동들을 추상메소드로서 정의한다.
	double getArea();
}

// 인터페이스는 상속받는다고 표현하기보다 구현한다고 표현한다.
// 접근제어자 class 클래스명 implements 인터페이스명 {} 꼴로 구현한다.
class Triangle2 implements Figure {
	private double height, width;
	public Triangle2(double h, double w) {height=h; width=w;}
	// 인터페이스의 추상 메소드 구현
	public double getArea() {return height*width*0.5;}
}

public class InterfaceTest {

}
