﻿// 007_variable.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <stdio.h>

int main()
{
    int a; // 선언 후 한칸띄기
    
    a = 3; // 값을 대입
    printf("%d\n", a);

    a = 5;
    printf("a = %d\n", a);

    int b = 5; //정수형 변수 b를 선언하면서 5로초기화 함
    printf("b = %d\n", b);

    printf("%d + %d = %d\n", a, b, a + b);

    int sum;
    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
}

