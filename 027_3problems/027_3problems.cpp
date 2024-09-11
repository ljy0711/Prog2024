// 027_3problems.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 1. 별표를 n개 출력한다
// 2. 1부터 n까지 홀수를 출력한다
// 3. 1부터 n까지 자연수를 모두 더한다

#include <stdio.h>

int main()
{
    // while 문
    //while문 (1)
    int n;
    
    printf("n을 입력 :");
    scanf_s("%d", &n);
    
    int i = 1;

    while(i <= n) {
        printf("*");
        i++;
    }  
    printf("\n");
    
    // while문(2)
    i = 1;

    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");

    // while문(3) 1부터 n까지 자연수를 모두 더한다
    int sum = 0;
    i = 1;

    while (i <= n) {
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);

    // do-while 문

    // for문
}

