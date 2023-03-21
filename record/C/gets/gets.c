#include <stdio.h>

void main() {
	char s[50];
	printf("문자열 입력?");
	gets(s); // 공백 포함
	printf("gets()로 문자열 입력= %s\n", s);
	printf("\n문자열 입력?");
	scanf("%s", s);
	printf("scanf()로 문자열 입력= %s\n", s);
}

/*디버깅을 원하는 행에서 F9를 누르고 F5시 디버깅.*/