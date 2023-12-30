package Loop;
/**
 * File Name: BreakTest1.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 간단한 Break문 예제 프로그램
 */
public class BreakTest1 {
	public static void main(String args[]) {
		int nSum = 0;
		int i = 1;
		// 반복조건을 true로 하면 무한 루프.
		while(true) {
			nSum += i;
			i++;
			// 특정 조건에 해당하면 반복문을 탈출하도록 break 명시.
			if (i > 10) {break;}
		}
		System.out.println(nSum);
	}
}
