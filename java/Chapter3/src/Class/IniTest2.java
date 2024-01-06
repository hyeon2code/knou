package Class;

/**
 * File Name: IniTest1.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: 생성자를 통한 필드 초기화 예제 클래스
 */
public class IniTest2 {
	private int nValue;
	private static int nStatic;
	public IniTest2() {
		nValue = 0;
		// static 필드는 클래스 공간에 존재하므로 생성자가 아닌 클래스 자체에서 초기화되도록 프로그래밍 하는 것이 바람직함.
		nStatic = 0;
	}
}
