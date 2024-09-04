// 008_arithmetic.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    //int a = 5;
    //int b = 3;
    //int sum = a + b;
    //int sub = a - b;
    //int mul = a * b;
    //int div = a / b;
    //int mod = a % b;

    //printf("%d + %d = %d\n", a, b, sum);
    //printf("%d - %d = %d\n", a, b, sub);
    //printf("%d * %d = %d\n", a, b, mul);
    //printf("%d / %d = %d\n", a, b, div); // 정수 나누기 정수는 결과 값이 정수
    //printf("%d %% %d = %d\n", a, b, mod);

    float a = 9.8;
    float b = 3.14;
    float sum = a + b;
    float sub = a - b;
    float mul = a * b;
    float div = a / b;
    //float mod = a % b;

    // float mod = a % d;
    // c 언어는 float의 나머지 연산이 없다

    printf("%f + %f = %f\n", a, b, sum);
    printf("%f - %f = %f\n", a, b, sub);
    printf("%f * %f = %f\n", a, b, mul);
    printf("%f / %f = %f\n", a, b, div); 
    //printf("%f %% %f = %f\n", a, b, mod);

}

