//60_getchar.cpp : 이 파일에는 'main' 함수가 포함됩니다.거기서 프로그램 실행이 시작되고 종료됩니다.

#include <stdio.h>

int main()
{
    char ch;

    /*ch = getchar();
    putchar(ch);*/

    while (true) {
        ch = getchar();
        if (ch == '\n')
            break;
        putchar(ch);
    }
}

