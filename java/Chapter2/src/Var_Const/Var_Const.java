package Var_Const;

/**
 * File Name: Var_Const.java
 * Created by: Dohyeon Kwon (playdev7@gmail.com)
 * Created on: December 26. 2023
 * Last Modified on: December 26. 2023
 * Summary: 변수와 상수를 정의하는 프로그램.
 */

public class Var_Const {
	public static void main(String args[]) {
		// 상수 정의 => 더 이상 값이 변하지 않는 특별한 수를 상수라고 정의함.
		// Java에서 상수는 final 키워드를 앞에붙임 => 더 이상 값이 정하지 않는 마지막이다.
		final int nConst = 3;
		// nConst = 4; 		리터럴 변환 시도 시 컴파일 오류 발생.
	}
}
