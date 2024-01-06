package Inheritance;

/**
 * File Name: SuperTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: 상속 시 생성자 호출 예제   
 */
// 모든 클래스는 객체 생성 시 슈퍼클래스의 생성자를 호출하게 됨.
// 슈퍼클래스를 명시하지 않은 클래스도 사실은 JDK의 Object 클래스를 슈퍼클래스로 가짐. => class CSuper4 extends Object {}
// 따라서 인스턴스 생성 시 Object 클래스의 기본 생성자를 호출하게 됨. => super(), Object()
class CSuper4 {
	public CSuper4() {System.out.println("super non-arguments");}
	public CSuper4(int a) {System.out.println("super argument: " + a);}
}

class CSub4 extends CSuper4 {
	// 자식 인스턴스 생성 시 기본적으로 super()를 통해 부모 인스턴스가 생성됨. 기본생성자가 없으면 자동으로 생성하여 호출.
	public CSub4() {System.out.println("sub non-arguments");}
	public CSub4(int a) {System.out.println("sub argument:" + a);}
}
public class ConstructorTest {
	public static void main(String args[]) {
		CSub4 sub1 = new CSub4();
		CSub4 sub2 = new CSub4(10);
	}
}
