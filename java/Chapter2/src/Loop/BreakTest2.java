package Loop;
/**
 * File Name: BreakTest2.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: Break문을 활용하여 블록을 탈출하는 예제 프로그램
 */
public class BreakTest2 {
	public static void main(String args[]) {
		int n;
		// label:{} 꼴로 블록에 레이블을 붙일 수 있음
		my_block1: {
			n = Integer.parseInt(args[0]);
			// 입력값이 10보다 크면 my_block1 블록 탈출
			// 레이블이 붙은 블록은 break label 꼴로 블록을 탈출시킬 수 있음
			if (n>10) {break my_block1;}
			n = n * 10;			// 블록 탈출 시 이 명령문은 작동하지 않음
		}
		n = n * 20;
		System.out.println(n);
	}
}
