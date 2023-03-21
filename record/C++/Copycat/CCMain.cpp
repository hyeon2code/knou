#include <iostream>
#include "Copycat.h"
using namespace std;

int main()
{
	Copycat cc1("홍길동"); // Copycat 헤더파일을 이용하여 cc1 변수 생성
	Copycat cc2(cc1);

	cc1.whoRU();
	cc2.whoRU();
	return 0;
}