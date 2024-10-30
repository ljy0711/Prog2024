// 053_productInfo.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//구조체 정의(구조체 방법2)

//표준함수 사용 : #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

struct productInfo {
    int num; //상품번호
    char name[100]; // 상품명
    int cost; // 가격
}; //자동으로 ; 입력해줌, 세미콜론 중요!

void swap (productInfo a, productInfo b);//구조체 변수 스왐함수 사용 // 값에 의한 호출
void swap2 (productInfo *a, productInfo *b); // 주소에 의한 호출


int main() {
    productInfo x; //만들 때..

    x.num = 1001; //값을 넣을때(할당)..
    strcpy_s(x.name, 20, "제주 한라봉"); //문자열 함수(복사)를 사용해서 쓸 수 있음
//  strcpy_s(x.name, sizeof(x.name),"제주 한라봉"); 위와 같음
// 표준함수 사용 : strcpy(x.name,"제주 한라봉");
    x.cost = 20000;

    productInfo y{1002,"성주 꿀참외", 15000}; //교과서 방법

    printf("%d %15s %7d\n", x.num, x.name, x.cost);
    printf("%d %15s %7d\n", y.num, y.name, y.cost);

    productInfo z;
    z = x; //x를 할당받음
    printf("%d %15s %7d\n", z.num, z.name, z.cost); //x와 값이 같음

    // 구조체 메모리
    printf("%d\n", sizeof(x));
    printf("%d\n" ,&x); //x의 주소
    printf("%d\n", &x.num); //int x의 4바이트
    printf("%d\n", &x.name); //4바이트 증가
    printf("%d\n", &x.cost); //100바이트 증가

    // 구조체 포인터로 멤버를 사용하기(->사용)
    productInfo a= { 1003, "대전 성심당", 3500 };
    productInfo* p; //포인터 p, p는 주소를 갖음
   
    p = &a; //a의 주소를 갖음
    printf("%d %15s %7d\n", a.num, a.name, a.cost);
    printf("%d %15s %7d\n", (*p).num,(*p).name,(*p).cost); //포인터로 쓸 수 있음,()를 꼭해야함
    printf("%d %15s %7d\n", p->num, p->name, p->cost); //구조체 포인터 -> 사용.

    //1001번과 1003번 상품을 바꾸자(p213,상품정보 구조체 변수를 스왑하기)
    swap(x, a);
    printf("x: %d %15s %7d\n", x.num, x.name, x.cost);
    printf("a: %d %15s %7d\n", a.num, a.name, a.cost);

    swap2(&x, &a);
    printf("x: %d %15s %7d\n", x.num, x.name, x.cost);
    printf("a: %d %15s %7d\n", a.num, a.name, a.cost);
}

void swap(productInfo a, productInfo b) {
    productInfo tmp = a;
    a = b;
    b = tmp;
}
void swap2(productInfo* a, productInfo* b) {
    productInfo tmp = *a;
    *a = *b;
    *b = tmp;
}
