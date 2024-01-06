package Class;

/**
 * File Name: IniTest1.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 05. 2024
 * Last Edited: January 05. 2024
 * Summary: 초기화 블록을 통한 필드 초기화 예제 클래스
 */
public class IniTest3 {
	private int nValue;
	private static int nStatic;
	
	// 클래스 블록에서는 초기화 구문을 작성할 수 없다.
	// 따라서 필드를 초기화하기 위해 초기화 블럭을 사용하여야 한다.
	{
		// 이 공간은 일반 초기화 블록으로서 non-static 필드만 초기화한다.
		nValue = 0;
	}
	// 중괄호 앞에 static 키워드를 붙이면 static 필드 초기화 블록이 된다.
	static {
		// static 필드만을 초기화 한다.
		nStatic = 0;
		// nValue = 1;		non-static 필드를 초기화 할 수 없다.
	}
}
