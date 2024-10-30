// 052_struct.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
#include <stdio.h>

int main()
{
   //1번째 사용방법
    struct { float x, y; }pos;

    pos.x = 1.5;
    pos.y = 2.2;

    printf("좌표 :(%.1f, %.1f)\n", pos.x, pos.y);
}

