package Class;

/**
 * File Name: InitFields.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: 필드 초기화 예제 클래스
 */
class IniTest {
	/* 객체 생성 시 필드의 초기화 구문 실행 순서
	 * 1. static 필드의 선언문 실행 
	 * 2. static 초기화 블록 실행 
	 * 3. non-static 필드의 선언문 실행 
	 * 4. non-static 초기화 블록 실행 
	 * 5. 생성자 실행 
	 * */
	int nNormal1 = 10, nNormal2 = 20;			// 3 - non-static 선언문 
	
	static int nStatic1 = 50, nStatic2 = 60;	// 1 - static 선언문 
	
	{											// 4 - non-static 초기화 블록 
		nNormal1 = 30;
		nNormal2 = 40;
	}
	
	static {									// 2 - static 초기화 블록 
		nStatic1 = 70;
		nStatic2 = 80;
	}
	
	public IniTest() {							// 5 - 생성자.
		nNormal1 = 100;
		nNormal2 = 200;
		nStatic1 = 300;
		nStatic2 = 400;
	}
}

public class InitFields {
	public static void main(String args[]) {
		IniTest it = new IniTest();
	}
}
