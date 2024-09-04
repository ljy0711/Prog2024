// 0016_logical.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a = 3;

    bool p = a >= 1 && a <= 10;
    bool q = a == 3|| a == 7;
    bool r = !q;

    printf("%d %d %d\n", p, q, r);
}
