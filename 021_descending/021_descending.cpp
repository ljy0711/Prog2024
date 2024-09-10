// 021_descending.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf_s("%d %d %d", &a, &b, &c);
    
   /* 
   if (a > b)
        if (b > C)
            printf("%d %d %d\n", a, b, c);
       
        else
            if (a > c)
                printf("%d %d %d\n", a, c, b); 
            else
                printf("%d %d %d\n", c, a, b);

    else 
        if (a > c)
            printf("%d %d %d\n", b,a,c);
        else
            if (b > c)
                printf("%d %d %d\n", b,c,a);
            else
                printf("%d %d %d\n", c,b,a);
    */

    if (a > b) {
        if (b > c) printf("% d % d % d\n", a, b, c);
        else if (a > c) printf("% d % d % d\n", a, c, b);
        else printf("% d % d % d\n", c, a, b);
    }
    else {
        if (a > c) printf("% d % d % d\n", b, a, c);
        else if (b > c) printf("% d % d % d\n", b, c, a);
        else printf("% d % d % d\n", c, b, a);

}

