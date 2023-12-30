package Array;

/**
 * File Name: ArrayTest1.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 배열을 선언하는 예제 프로그램
 */
public class ArrayTest1 {
	public static void main(String args[]) {
		// Java에서 배열은 참조 자료형이다.
		// Java 배열은 선언한 다음 초기화나 생성의 과정을 거쳐야만 사용할 수 있다.
		// Java 배열은 선언할 때 배열의 크기를 지정할 수 없다.
		// Java에서 다차원 배열은 255차원까지 선언할 수 있다.
		
		// Java 배열 선언은 클래스를 선언하는 것과 비슷하다.
		// 1차원 배열의 선언 예시
		int anArray1[];			// int형 컴포넌트가 들어오는 배열
		int[] anArray2;			// int형 컴포넌트가 들어오는 배열. 자료형 옆에 기호를 붙여도 된다.
		// int anArray3[10];		Java 배열은 선언과 동시에 크기를 지정할 수 없다.
		// anArray1[0] = 1;			Java 배열은 초기화나 생성 전에 사용할 수 없다.
		
		// 2차원 배열의 선언
		int anArray4[][];			// int형 컴포넌트가 들어오는 2차원 배열
		int[][] anArray5;			// int형 컴포넌트가 들어오는 2차원 배열
		int[] anArray6[];			// int형 컴포넌트가 들어오는 2차원 배열. 문법상 가능은 하지만 가독성이 좋지 않다.
	}
}
