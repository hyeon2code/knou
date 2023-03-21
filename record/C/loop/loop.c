#include <stdio.h>

void main() {
	int i=0, sum=0;
/* do~while문*/
	do {
		sum=sum+i;
		i++;
	} while(i<=100);

/* for문
	for(; i<=100; i++) {
		sum=sum+i;
	}
*/

/* while 문
	while (i<=100) {
		sum=sum+i;
		i++;
	}
	*/
	printf("1부터 100까지의 합=%d", sum);
}