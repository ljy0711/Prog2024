// 031_doubleLoop.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 예제 4.22
#include <stdio.h>

int main()
{//nxn 정사각형 	
	int n;
	printf("n 입력: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) { //for (4줄)반복 //for(*) 반복
		for (int j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}
//xXy 사각형
	int x, y;
	printf("xXy 사격형의  x,y 입력: ");
	scanf_s("%d %d", &x,&y);
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
			printf("@");
		printf("\n");
	}
// 예제 4.23 피라미드 출력
// 높이가 a인 계단을 출력해보자.
	int a;
	
	printf("a 입력:");
	scanf_s("%d", &a);
	for (int i = 1; i <=a; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}



}
