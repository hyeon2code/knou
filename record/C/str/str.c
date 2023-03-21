/*
	C프로그래밍 출석수업 실습 과제물
	공통실습문제 - 다음의 조건을 만족하는 프로그램을 작성하시오.
		1.2 문자열에서 특정 문자열을 변환하기
		 C언어는 문자열을 변환하기 위한 특별한 함수를 제공하지 않는다.
		  따라서, 입력 받은 문자열 중에서 특정 문자열을 변환하는 함수를 작성한다.
		 소스코드 작성조건(함수명) - 변환 문자열 함수 원형은 다음과 같다.
		  void ReplaceStr(char *string, char *oldstr, char *newstr);
	작성자 권도현
*/

#include <stdio.h> // 선행처리 - stdio.h 헤더파일 포함 지시.
#pragma warning(disable:4996) // gets 구문 사용시 발생하는 4996 경고 무시.
void ReplaceStr(char *string, char *oldstr, char *newstr); // 함수 원형 선언.


void main() { // main 함수 선언.
	char string[35], oldstr[35], newstr[35]; // char형 문자열 선언.
	printf("문자열을 입력하시오. (공백포함 최대 34자)\n"); // 문장 출력.
	gets(string); // 문자열입력 - string 문자열에 입력. (문자열을 입력받을 경우 gets 구문을 사용)
	printf("변환하고자 하는 문자열을 입력하시오.\n"); // 문장 출력.
	gets(oldstr); // 문자열입력 - oldstr 문자열에 입력.
	printf("변환될 문자열을 입력하시오.\n"); // 문장 출력.
	gets(newstr); // 문자열입력 - newstr 문자열에 입력.

	ReplaceStr(string, oldstr, newstr); // ReplaceStr 함수 호출. (매개변수로 string, oldstr, newstr)

	printf("\n문자열을 다음과 같이 변환하였습니다.\n"); // 문장 출력.
	puts(string); // 문자열출력 - string 문자열을 출력.
}
/* main 함수 종료 */

/* 문자열을 바꾸어주는 ReplaceStr 함수 */
void ReplaceStr(char *string, char *oldstr, char *newstr) { // ReplaceStr 함수 선언.

	/* 문자열이 바뀌어야 할 위치를 찾는 반복문 */
	while(*string !=NULL) { // *string 문자열의 값이 NULL이 아닐동안, (string 문자열이 끝날때까지.)
		
		/* 문자열이 바뀌어야 할 위치를 찾았을때의 조건문  */
		if(*string==*oldstr) { // *string 문자열의 값이 *oldstr 문자열의 값과 같을때,

			/* 문자열을 바꾸는 반복문 */
			while(*newstr != NULL) { // *newstr 문자열의 값이 NULL이 아닐동안, (newstr 문자열이 끝날때까지.)
					*string=*newstr; // *newstr 문자열의 값을 string 문자열에 대입.
					*string++; // *string 문자열의 값을 1증가. (문자열의 값이 1증가하면 배열이 한칸 이동함.)
					*newstr++; // *string 문자열의 값을 1증가.
				 }
			/* 반복문 종료 */

		} 
		/* 문자열을 바꾸는 조건문 종료 */

		*string++; // string 문자열의 값을 1증가.
	}
	/* 문자열이 바뀌어야 할 위치를 찾는 반복문 종료 */

	*string=NULL; // *string 문자열의 값을 NULL로 이동. (NULL로 이동하지 않으면 문자열 뒤에 쓰레기값이 생길 수 있음.)
} // ReplaceStr 함수 종료.