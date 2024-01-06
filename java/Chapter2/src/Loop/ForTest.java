package Loop;
/**
 * File Name: ForTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 간단한 For문 누산 예제 프로그램
 */
public class ForTest {
	public static void main(String args[]) {
		int nSum = 0;
		// for (카운터변수 초기화; 블록 진입 조건; 블록에서 나오며 반복할 식;){}
		for (int i=1; i<=10; i++) {
			nSum += i;
		}
		System.out.println(nSum);
	}
}
