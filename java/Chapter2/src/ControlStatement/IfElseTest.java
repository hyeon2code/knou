package ControlStatement;

/**
 * File Name: IfElseTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 26. 2023
 * Last Edited on: December 26. 2023
 * Summary: if-else 조건문을 활용하여 실행 파라미터와 특정 수를 대소비교 해주는 프로그램.
 */
public class IfElseTest {
	public static void main(String args[]) {
		int inp = Integer.parseInt(args[0]);
		
		// inp가 10보다 크면 크다고 알려줌  
		if (inp > 10) {
			System.out.println("입력이 10보다 큽니다.");
		}
		// 그게 아니라 3보다 작을경우 3보다 작다고 알려줌 
		else if (inp < 3) {
			System.out.println("입력이 3보다 작습니다.");
		}
		// 그마저도 아닐경우 해당 내용 출력.
		else {
			System.out.println("입력이 3 이상 10 이하입니다.");
		}
	}
}
