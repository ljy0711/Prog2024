// 039_pointer2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int* ptr = &a;
    printf("%p = %d\n", ptr, *ptr);

    ptr = &b;
    printf("%p = %d\n", ptr, *ptr);
}

