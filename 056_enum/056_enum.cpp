// 056_enum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
enum color {red,green,blue}; //color라는 타입의 변수가 생김

int main()
{
    color x, y;
    
    x = red;
    y = blue;

    printf("%d %d\n", x, y);

    if (x == red) // 유용한 방법
        printf("red\n"); 
}

