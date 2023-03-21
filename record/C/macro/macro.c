/*
	작성자 권도현
	최초작성일 170402
*/

#include <stdio.h>
#define Hap1(x,y) x+y
#define Hap2(x,y) (x+y)
#define Gop1(x,y) x*y
#define Gop2(x,y) (x*y)
#define Gop3(x,y) (x)*(y)

void main() {
int h1, h2, g1, g2, g3;

h1=10*Hap1(3,4); // 연산자 우선순위 때문에 이상한계산.
h2=10*Hap2(3,4);

g1=Gop1(1+2,3+4); // 연산자 우선순위 때문에 이상한계산. 1+2*3+4
g2=Gop2(1+2,3+4); // 연산자 우선순위 때문에 이상한계산. (1+2*3+4)
g3=Gop3(1+2,3+4); // ()때문에 정확한 계산 (1+2)*(3+4)

printf("h1=%d, h2=%d\n", h1, h2);
printf("g1=%d, g2=%d, g3=%d\n", g1, g2, g3);
}