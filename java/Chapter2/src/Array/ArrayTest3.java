package Array;

/**
 * File Name: ArrayTest3.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 배열을 생성 하는 예제 프로그램
 */
public class ArrayTest3 {
	public static void main(String args[]) {
		// 배열의 생성은 초기화 없이 단순히 메모리 영역만 할당해주는 작업을 의미한다.
		// 생성하는 배열은 길이에 맞춰 컴포넌트의 자료형이 숫자면 0, 참조형이면 null로 초기화 된다. 
		
		// 1차원 배열 생성
		// int 컴포넌트가 들어올 수 있는 길이가 5인 배열 생성
		int anArray1[] = new int[5];
		int[] anArray2 = new int[5];
		int anArray3[];
		anArray3 = new int[5];
		
		// 2차원 배열 생성
		int anArray4[][] = new int[3][2];
		int[][] anArray5 = new int[3][2];
	}
}
