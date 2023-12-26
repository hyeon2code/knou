package ControlStatement;

/**
 * File Name: SwitchTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 26. 2023
 * Last Edited on: December 26. 2023
 * Summary: Switch 조건문을 활용하여 실행 파라미터가 특정 수에 해당하는 지 알려주는 프로그램.
 */

public class SwitchTest {
	public static void main(String args[]) {
		int n = Integer.parseInt(args[0]); 		// 실행 파라미터를 정수로 변환
		
		// switch 문은 long형을 제외한 정수를 인자로 받음
		switch(n) {
		// 인자가 특정 조건에 해당하면 하위 블록의 명령을 수행
		case 10:
			System.out.println("입력은 10 입니다.");
			// 명령 수행 후 switch 문을 빠져나오도록 break 해주어야 함.
			break;
		
		// 여러 케이스를 묶어서 공통된 명령을 정의할 수 있음. 
		case 20:
		case 30:
			System.out.println("입력은 20 또는 30입니다.");
			break;
		// 조건에 해당하지 않을 경우 기본적으로 취할 명령을 정의.
		default:
			System.out.println("입력이 조건에 해당하지 않습니다.");
			break;
		}
	}
}
