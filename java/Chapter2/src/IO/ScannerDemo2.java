package IO;

import java.util.Scanner;
/**
 * File Name: ScannerDemo2.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 28. 2023
 * Last Edited: December 28. 2023
 * Summary: Scanner 클래스 사용 예제 프로그램
 */
public class ScannerDemo2 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		// hasNextInt() 메소드를 통해 정수를 입력받을 수 있다.
		// hasNextInt() 메소드 또한 개행문자까지 입력 스트림을 켠다.
		// 개행 시 스캐너는 탭 포함 공백을 기준으로 숫자를 끊어서 보관하고 있는다.
		// hasNextInt() 메소드는 스캐너가 숫자를 보유하거나 개행을 했을 경우 true, 인터럽트 또는 정수를 의미하지 않는 값이 입력되면 false를 반환하며 종료한다.
		while (sc.hasNextInt()) {
			// nextInt() 메소드는 스캐너에 저장된 정수 중 가장 먼저 입력된 정수를 pop한다.
			System.out.println(sc.nextInt());
		}
	}
}
