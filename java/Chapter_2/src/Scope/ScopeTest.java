package Scope;
/**
 * File Name: ScopeTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 변수의 유효범위를 테스트하는 프로그램
 */
public class ScopeTest {
	public static void main(String args[]) {
		// Java에는 지역변수만 존재한다. main 함수에 선언된 변수는 main 함수에서만 유효하다.
		int outer = 1;
		{
			// 블록에 선언되는 변수는 블록 내부에서만 유효하다.
			// 블록 내부에서는 블록 바깥의 변수와 동일한 이름의 변수를 가질 수 없다.
			int inner = 2;
			System.out.println("inner: " + inner);
			System.out.println("outer: " + outer);
		}
		// 블록 변수는 블록이 닫히면서 Garbage가 된다.
		int inner = 3;
		System.out.println("inner: " + inner);
		System.out.println("outer: " + outer);
	}
}
