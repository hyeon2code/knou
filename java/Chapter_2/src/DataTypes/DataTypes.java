package DataTypes;

/**
 * File Name: DataTypes.java
 * Created by: Dohyeon Kwon (playdev7@gmail.com)
 * Created on: December 26. 2023
 * Last Modified on: December 26. 2023
 * Summary: 자료형 종류에 대해 나열하는 프로그램.
 */
public class DataTypes {
	public static void main(String args[]) {
		// Java는 기본자료형과 참조자료형으로 나뉜다.
		
		// 기본 자료형 
		// 정수 자료형
		// 정수 리터럴은 기본적으로 십진수로 인식한다. 리터럴은 대입시키는 값을 의미한다.
		int dec_int_3 = 3;
		// 16진법, 8진법 사용이 필요할경우 리터럴 앞에 0x, 0을 명시하고, 이진수는 자료형 바이트 수에 맞게 0을 채워서 명시한다.
		int hex_int_3 = 0x3;
		int octa_int_3 = 03;
		int bin_3 = 0000000000000011; 		// int = 4Byte
		
		// 실수 자료형 
		// float은 4Byte, double은 8Byte이다.
		// Java에서는 실수 리터럴을 기본적으로 double로 인식한다.
		// float 변수에 대해 실수 리터럴로 초기화를 시도하면 컴파일 시 오류가 발생한다.
		// float float_3 = 3.0; // 컴파일 시 오류 발생.
		float float_3 = 3;		// Real Number 3.0으 인식.
		double double_3 = 3.0;
		
		// 문자 자료형 
		// Java는 UNICODE를 사용하기에, 문자 하나는 2Byte를 차지한다.
		// UNICODE는 ASCII의 확장 코드로서 ASCII 코번호를 그대로 사용할 수 있다.
		// char형은 int형과 호환이 되는데, Unsigned int로서 0~65536까지 표현하게 된다.
		// 65536 = 2 ** (8*2) => 1바이트는 8비트이고, 2바이트이므로 2^8*2
		char a = 97;	// 정수 리터럴을 대입하여도 "a"로 호환됨.
		
		// 논리 자료형 
		// Java는 오직 boolean 자료형만 참/거짓을 표현할 수 있다.
		// boolean 자료형은 1바이트를 차지한다.
		// 명시할 수 있는 리터럴로는 true/false, 명제가 있다.
		boolean bFlag1 = true;			// T
		boolean bFlag2 = false;			// F
		boolean bFlag3 = 3 != 2;		// T
		
		
		// 참조 자료형
		// 위의 기본 자료형을 제외한 모든 자료형을 참조 자료형이라고 한다.
		// 대표적인 예로 객체를 담는 클래스형, 배열형, 문자열형이 있다.
		// 클래스명 인스턴스명; 꼴로 선언되는 변수의 자료형을 클래스형이라고 부른다.
		int arrayOne[];						// 정수를 담는 배열형 
		String hello = "Hello";				// 문자열형 
		
	}
}
