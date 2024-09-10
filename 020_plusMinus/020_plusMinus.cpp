// 020_plusMinus.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int x;

	printf("숫자 입력: ");
	scanf_s("%d", &x);

	if (x > 0)
		printf("%d는 양수입니다.\n",x);

	else if (x == 0)
		printf("x는 0입니다.\n");

	else
		printf("%d는 음수입니다.\n",x);





}

