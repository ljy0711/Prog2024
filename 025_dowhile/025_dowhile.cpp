// 025_dowhile.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//0을 입력할 때 까지 입력한 숫자를 출력해라

#include <stdio.h>

int main()
{
    int n;

    do {
        scanf_s("%d", &n);
        printf("%d\n", n);
    } while (n != 0);
}

