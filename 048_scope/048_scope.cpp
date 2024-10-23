// 048_scope.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
int a = 10; // 전역변수 a

void aaa() {
    printf("in aaa: a= %d\n", a); 
    // 선언한 변수가 없어도 가까운 변수의 값을 출력
}

void bbb() {
    int a = 20; // 지역변수 a

    printf("in bbb : a= %d\n", a);
    // 프린트 출력할 때 a 두 변수 중 가까운 변수 값을 출력
}

int main()
{
    aaa();
    bbb();
}

