package IO;

// Java에서는 입력을 쉽게 받기 위해 Scanner 객체를 활용할 수 있다.
// Scanner 클래스는 java.util 패키지에 존재하므로 별도로 사용을 명시하여야 한다.
// (Java의 기본 패키지는 java.lang 이다.)
// import 패키지명.클래스명; 꼴로 사용할 패키지와 하위 클래스를 명시할 수 있다.
import java.util.Scanner;

/**
 * File Name: ScannerDemo1.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 28. 2023
 * Last Edited: December 28. 2023
 * Summary: Scanner 클래스 사용 예제 프로그램
 */
public class ScannerDemo1 {
	public static void main(String args[]) {
		// 입력을 받기 위해서는 Scanner 객채 생성이 필요하다.
		// 객체 생성을 위해 System.in 스트림을 인자로 주어야 한다.
		Scanner sc = new Scanner(System.in);
		
		// Scanner 객체는 라인 단위로 입력을 받는다.
		// hasNextLine() 메소드를 통해 개행문자가 들어올 때 까지 입력을 받을 수 있다.
		// 개행문자가 들어오면 true, 인터럽트가 들어오면 false를 반환하며 메소드를 종료한다.
		while (sc.hasNextLine()) {
			// nextLine() 메소드를 통해 Scanner 객체가 현재까지 보유한 문자열을 반환받을 수 있다.
			System.out.println(sc.nextLine());
		}
	}
}
