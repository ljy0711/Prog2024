﻿// 044_arrayPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int* p[10];   // 포인터의 10개짜리  배열
    int (*q)[10]; // 10개 원소를 갖는 배열의 포인터 

    int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
    // p = a;  이렇게 쓸 수 없다.
    q = &a; // 이렇게 쓸 수 있다. a라는 배열의 주소를 q가 갖는다.
    int* ptr = a;

    printf("%p %p %p\n", q, q + 1,ptr+1); 
    //q+1은 40바이트 차이 , ptr+1은 4바이트 차이



}
