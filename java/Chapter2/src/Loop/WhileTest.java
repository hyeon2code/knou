package Loop;
/**
 * File Name: WhileTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 간단한 ForEach문 예제 프로그램
 */
public class WhileTest {
	public static void main(String args[]) {
		int nSum = 0;
		int i = 1;
		
		// while 문 => 반복 조건에 해당할 때까지 계속해서 반복하는 반복문
		// while(블록으로 진입할 조건){}
		while(i<=10) {
			nSum += i;
			i++;
		}
	}
}
