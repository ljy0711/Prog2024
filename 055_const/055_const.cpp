// 055_const.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#define PI 3.141592 // 매크로 형식
//const double pi = 3.141592; --> 상수 형식

double getArea(double r) {
    return PI * r * r;
}

int main()
{
    //pi=3.14; 이렇게 쓸 수 없다. 수정을 못함.

    printf("%f\n", getArea(10));
}

