// 057_macro.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#define SQUARE(x) x*x //괄호 있으면 함수처럼 적용됨
// #define SQUARE(x) (x)*(x) -> 괄호를 쳐주면 주의할 점1 같이 값들이 다르지 않음
// #define SQUARE(x) ((x)*(x)) -> 주의할 점 2 보안하려면 이렇게 써야함

int square(int x) {
    return x * x;
} // (함수)

int main()
{
    int a = 5;

    printf("%d\n", SQUARE(a)); //a가 a*a처럼 바뀜 // 대문자는 define(매크로)
//  printf("%d\n", a*a); (수식)
    printf("%d\n", square(a)); //소문자면 함수(함수)
   
   /* 주의할 점 1
    printf("%d\n", SQUARE(a + 1)); 답은 5+1*5+1 = 11
    printf("%d\n", square(a + 1)); 답은 36
    printf("%d\n", (a + 1) * (a + 1)); 답은 36
   
    주의할점 2
    a = 4;

    printf("%d\n", 100/SQUARE(a+1)); // (매크로)
    printf("%d\n", 100/square(a+1)); // (함수) */
}

