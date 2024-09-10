// 018_nextChar.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    char c;
    printf("문자를 입력하시오: ");
    scanf_s("%c", &c);
    printf("%c\n", c + 1);
}
