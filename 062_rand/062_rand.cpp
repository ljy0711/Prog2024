// 062_rand.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*srand(time(0));*/ //srand()안에 다른 숫자가 작성하면 결과값도 다르게 나옴
    srand(time(NULL));
    for (int i = 1; i <= 5; i++)
        printf("%d\n", rand());

    /* srand(time(NULL));
     for (int i = 1; i <= 10; i++)
         printf("%d\n", rand()%6+1);*/   // 1부터 6까지 랜덤으로 나오는 것
}
