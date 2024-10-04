// 035_p150_4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
#include <stdio.h>

int main()
{
    int a[10][10];
    int x, y;
    
    printf("행과 열의 숫자를 입력:");
    scanf_s("%d %d", &x, &y);
    //입력
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            scanf_s("%d", &a[i][j]);

    }
    //출력
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }


//각 행의 합을 구하여 출력하라
    printf("각 생의 합을 출력: \n");
    for (int i = 0; i < x; i++) {
        int sum = 0;
        for (int j = 0; j < y; j++)
            sum += a[i][j];
        printf("%4d\n",sum);
    }
}

