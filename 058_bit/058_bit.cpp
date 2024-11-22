// 058_bit.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 4;

    printf("a & b =%d\n", a & b);
    printf("a | b =%d\n", a | b);
    printf("a ^ b =%d\n", a ^ b);
    printf("~a =%d\n", ~a);
    printf("~a =%d\n", ~b);
    printf("a<<2 =%d\n", a<<2);
    printf("a>>2 =%d\n", a >>2);

   // a &= b; (a = a & b; 와 같음)
   
   //masking : 원하는 비트만 1로 남기고 나머지는 0으로 만듦.
    int x = 106; //0110 1010
    int mask = 15; // 0000 1111
    x &= mask; //x = x & mask;
    printf("masking : %d\n", x);



}

