package Inheritance;

/**
 * File Name: InheritTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: 구체적인 클래스 상속 예제  
 */
class CSuper {
	private int f1;
	public int f2;
	public void setPrivate() {f1 = 10;}
	public void setPublic() {f2 = 20;}
	private void mPrivate() {f1 = 30;}
}

// CSuper 상속받은 클래스 
class CSub extends CSuper {
	private int f3;
	public int f4;
}

/** 접근제어자에 따른 멤버 접근범위 
 * 1. private => 본인 클래스 내부에서만 접근 가능. 
 * 2. 생략 => 같은 패키지에 있는 클래스에서는 접근 가능.
 * 3. protected => 자식 클래스까지는 접근 가능. 
 * 4. public => 모든 클래스에서 접근 가능.
 * Tip. 같은 패키지에 자식클래스가 있으면 생략 필드 접근 가능 
 * */
public class InheritTest {
	public static void main(String args[]) {
		CSub sub = new CSub();

		// 부모 클래스의 private 필드는 부모클래스 내부에서만 접근 가능. 
		// sub.f1 = 40;
		
		// public 필드는 어디서든 접근 가능 => 상속 받았으므로 자식이름으로도 접근 가능.
		sub.f2 = 50;
		
		// 자식 클래스의 private 필드는 자식클래스 내부에서만 접근 가능.
		// sub.f3 = 60;
		
		// public 필드는 어디서든 접근 가능 
		sub.f4 = 70;
		
		// public 메소드는 어디서든 호출 가능 => 상속 받았으므로 자식이름으로도 호출 가능. 
		sub.setPrivate();
		sub.setPublic();
		
		// 부모클래스의 private 메소드는 부모클래스 내부에서만 호출 가능.
		// sub.mPrivate();
	}
}
