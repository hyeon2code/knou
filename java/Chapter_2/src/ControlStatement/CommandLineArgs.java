package ControlStatement;

/**
 * File Name: CommandLineArgs.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 26. 2023
 * Last Edited on: December 26. 2023
 * Summary: 명령행파라미터에 대한 정의 
 */
public class CommandLineArgs {						 
	// 자바 실행 명령 뒤에 붙는 텍스트는 공백을 기준으로 분리하여 args 배열에 문자열로 담김.
	public static void main(String args[]) {		
		System.out.println(args[0]); 		// 입력된 파라미터의 첫 원소를 출력 
		int n = Integer.parseInt(args[1]);	// 두 번째 원소를 Int n으로 변환
		System.out.println(n);				// 변환한 n을 출력 
	}
}
