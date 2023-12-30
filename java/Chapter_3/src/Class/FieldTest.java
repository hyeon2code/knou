package Class;

/**
 * File Name: FieldTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 29. 2023
 * Last Edited: December 29. 2023
 * Summary: 인스턴스 필드 예제 프로그램
 */
class MyClass {
	private int nMyField = 0;
	public void setMyField(int nNewField) {nMyField = nNewField;}
	public int getMyField() {return nMyField;}
}
public class FieldTest {
	public static void main(String args[]) {
		MyClass myObject1, myObject2;
		myObject1 = new MyClass();
		myObject2 = new MyClass();
		
		// 클래스에서 static을 명시하지 않는 필드는 배타적이다.
		// 따라서 각 인스턴스는 서로 다른 필드를 할당받아 보유하게 된다.
		myObject1.setMyField(10);
		// 따라서 2번 객체의 필드를 정의해도 1번 객체는 아무런 영향을 받지 않는다.
		myObject2.setMyField(20);
	}
}
