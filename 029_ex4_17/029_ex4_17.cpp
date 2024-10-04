// 029_ex4_17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
#include <stdio.h>

int main()
{
    int n;

    printf("n입력 : ");
    scanf_s("%d", &n);

/*    for (; n >= 1; n--)
        printf("%d", n);
    printf("\n"); */

    for (int i = n; i >= 1; i--)
        printf("%d", i);
    printf("\n");

// 2의 n제곱 
    int pow, i; // 변수 지정, 곱할땐 초기화 숫자를 1로 설정하기.

/*   for (int i = 1; i <= n; i++)
        pow *= 2; */

    for (i = 1, pow = 1; i <= n; i++, pow *= 2);

    printf("%d\n", pow);

}
