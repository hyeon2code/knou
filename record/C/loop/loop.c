#include <stdio.h>

void main() {
	int i=0, sum=0;
/* do~while��*/
	do {
		sum=sum+i;
		i++;
	} while(i<=100);

/* for��
	for(; i<=100; i++) {
		sum=sum+i;
	}
*/

/* while ��
	while (i<=100) {
		sum=sum+i;
		i++;
	}
	*/
	printf("1���� 100������ ��=%d", sum);
}