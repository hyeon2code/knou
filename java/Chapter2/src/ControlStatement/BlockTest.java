package ControlStatement;

/**
 * File Name: BlockTest.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: December 26. 2023
 * Last Edited on: December 26. 2023
 * Summary: 블록에 대한 정의 
 */
public class BlockTest {							// 클래스 정의 블록 
	public static void main(String args[]) {		// 메소드 블록 
		int a=0, b=0, c;
		{											// 명령문 블록
			int d = 0, e, f;
			a = a + b;
			{										// 중첩된 블록
				d++;
			}
		}
	}
}
