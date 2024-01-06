package Array;
/**
 * File Name: ArrayTest2.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 배열을 초기화 하는 예제 프로그램
 */
public class ArrayTest2 {
	public static void main(String args[]) {
		// Java 배열은 초기화가 필요할 경우 선언과 동시에 초기화가 이루어져야 한다.
		// 1차원 배열의 초기화
		int anArray1[] = {1, 2, 3, 4, 5};
		int[] anArray2 = {1, 2, 3, 4, 5};
		
		// 2차원 배열의 초기화
		int anArray3[][] = {{1,2,3},{4,5,6}};
		int[][] anArray4 = {{1,2,3},{4,5,6}};
		
		// 아래와 같이 선언 이후 초기화는 불가능하다.
		int anArray5[][];
		//anArray5 = {{1,2,3},{4,5,6}};
	}
}
