// 009_sizeof.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
#include <stdio.h>

int main()
{
	printf("sizeof int = %d\n", sizeof(int)); //%d가 sizeof(int)를 표현해줌
	printf("sizeof char = %d\n", sizeof(char));
	printf("sizeof short = %d\n", sizeof(short));
	printf("sizeof long = %d\n", sizeof(long));
	printf("sizeof long long = %d\n", sizeof(long long));
	printf("sizeof double = %d\n", sizeof(double));
	printf("sizeof float = %d\n", sizeof(float));



	int i;
	char c;
	short s;
	long l;
	long long ll;
	double d;

	printf("sizeof int = %d\n", sizeof(int)); 
	printf("sizeof char = %d\n", sizeof(char));
	printf("sizeof short = %d\n", sizeof(short));
	printf("sizeof long = %d\n", sizeof(long));
	printf("sizeof long long = %d\n", sizeof(long long));
	printf("sizeof double = %d\n", sizeof(double));
	printf("sizeof float = %d\n", sizeof(float));



}
