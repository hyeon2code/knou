package Loop;
/**
 * File Name: ForEachDemo.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 27. 2023
 * Last Edited: December 27. 2023
 * Summary: 간단한 ForEach문 예제 프로그램
 */
public class ForEachDemo {
	public static void main(String args[]) {
		int arrayOfInts[] = {32, 87, 3, 589, 12, 1076, 2000, 8, 622, 127};
		
		// foreach문 => 배열을 순회하며 각 원소를 카운터변수가 참조하도록 하는 반복문
		for (int element:arrayOfInts) {
			System.out.println(element + " ");
		}
	}
}
