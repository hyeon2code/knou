package TypeConversion;

/**
 * File Name: TypeConversion.java
 * Created by: Dohyeon Kwon (playdev7@gmail.com)
 * Created on: December 26. 2023
 * Last Modified on: December 26. 2023
 * Summary: 자료형 형변환(캐스팅)을 하는 프로그램
 */
public class TypeConversion {
	public static void main(String args[]) {
		// 형변환에는 묵시적 형변환(자동 형변환)과 명시적 형변환(강제 형변환)이 있다.
		// Java에서 변수는 선언 당시의 자료형과 리터럴의 자료형이 일치하지 않으면 컴파일 오류 또는 자동 형변환이 일어난다.
		
		// 자동 형변환 예제
		// 문자열을 그에 해당하는 정수로 자동 캐스팅.
		char b = 66;
		int b_number;
		b_number = b;
		// System.out.println(b_number);
		
		// 안좋은 예제
		// 자료형의 종류가 아주 달라서 컴파일 시 오류 발생.
		int a = 3;
		// String s = a;
		
		// 소수부 소실로 인해 컴파일 시 오류 발생.
		float f;
		//a = f;
		
		
		// 명시적 형변환 예제
		// double에서 float으로 형변환 => 소수점 이하 자리가 절사되더라도 강제로 float으로 변환.
		double pi_54 = 3.141592653589793238462643383279502884197169399375105820;
		float pi_float = (float)pi_54;		// 3.1415927 로 반올림.
	}
}
