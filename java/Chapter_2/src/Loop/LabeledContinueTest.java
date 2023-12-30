package Loop;
/**
 * File Name: LabeledContinueTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 간단한 Continue문 예제 프로그램 - 홀수만 더하기
 */
public class LabeledContinueTest {
	public static void main(String args[]) {
		int nSum = 0;
		// 홀수만 더하는 반복문
		my_loop: for(int i=1; i<=100; i++) {
			// 짝수일 경우 이번 회차는 Skip.
			// continue 만으로 현재의 반복을 skip하므로 잘 사용하지 않지만, 다중 루프에서 바깥쪽 반복을 빠져나갈 때 활용 가능?
			if (i%2==0) {continue my_loop;}
			nSum += 1;
		}
	}
}
