// 014_increment.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int a = 5;
	int b;

	b = ++a;
	printf("a=%d, b=%d\n", a, b);

	b = a++;
	printf("a=%d, b=%d\n", a, b);
}
