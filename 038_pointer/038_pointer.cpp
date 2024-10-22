// 038_pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a = 10;
    int* ptr;
    ptr = &a;

    // printf("%p=%d\n", &a, a);

    printf("%p = %p = %d\n", &a, ptr, a);
    *ptr = 20; // a=20;라는 뜻
    printf("%p = %p = %d\n", &a, ptr, a);
}

