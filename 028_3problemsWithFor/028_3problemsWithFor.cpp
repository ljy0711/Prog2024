// 028_3problemsWithFor.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 1. 별표를 n개 출력한다
// 2. 1부터 n까지 홀수를 출력한다
// 3. 1부터 n까지 자연수를 모두 더한다

#include <stdio.h>

int main()
{
	int n;
	printf("n을 입력:");
	scanf_s("%d", &n);
	// (1)
	for (int i = 1; i <= n; i++) {
		printf("*");
	}
	printf("\n");

	// (2)
	for (int i = 1; i <= n; i += 2) {
		printf("%d ", i);
	}
	printf("\n");

	//(3)
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("sum = %d\n", sum);
}
