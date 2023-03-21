/*
	작성자 권도현
	최초작성일 170402
*/

#include <stdio.h>
// #pragma warning(disable:4996) - 4996 오류를 disable.

void main() {
	int nou1, nou2;
	float knou1, knou2;
	char name;

	printf ("\n정수를 입력하시오(2번)");
	scanf ("%d %d", &nou1, &nou2);

	printf ("\n실수를 입력하시오(2번)");
	scanf ("%f %f", &knou1, &knou2);

	printf ("정수는 %d %d\n", nou1, nou2);
	printf ("실수는 %f %f\n", knou1, knou2);
}