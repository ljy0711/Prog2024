// 017_ scanf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a, b;
    printf("두개의 정수를 입력하세요: ");
    scanf_s("%d%d", &a, &b); // 띄어쓰기 안해도 상관없음.
    printf("두개의 정수 : %d %d\n", a, b);
    getchar();

    char c;
    printf("한개의 문자를 입력하세요: ");
    scanf_s("%c", &c); 
    printf("문자 : %c\n", c);
    
    float f;
    printf("한개의 실수를 입력하세요: ");
    scanf_s("%f", &f);
    printf("실수 : %f\n", f);

    double d;
    printf("한개의 배정도 실수를 입력하세요: "); // 정밀도가 두배인 =배정도
    scanf_s("%lf", &d);
    printf("실수 : %lf\n", d);
}

