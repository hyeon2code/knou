package Loop;
/**
 * File Name: ContinueTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 간단한 Continue문 예제 프로그램 - 홀수만 더하기
 */
public class ContinueTest {
	public static void main(String args[]) {
		int nSum = 0;
		// 홀수만 더하는 반복문
		for(int i=1; i<=100; i++) {
			// 짝수일 경우 이번 회차는 Skip.
			if (i%2==0) {continue;}
			nSum += 1;
		}
	}
}
