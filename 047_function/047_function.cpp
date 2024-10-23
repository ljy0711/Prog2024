// 047_function.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
#include <stdio.h>

int itemCnt = 0; // 전역,글로벌 변수
int money = 100; // 여러함수에서 사용가능

void buyItem(int price, int cnt) {
   // 값이 마이너스가 아닌 잔액이 부족하다고 출력하기
    if (money >= price) {
        itemCnt += cnt;
        money -= price;
        printf("아이템을  구매했습니다.\n");
        printf("아이템 개수 : %d\n", itemCnt);
        printf("잔액 : %d\n", money);
    }
    else {
        printf("잔액이 부족합니다.\n");
    }
}
//리턴문 1
int plus(int a, int b) {
    return a + b;
}

int main()
{
   // buyItem(); --> 함수 호출
   // buyItem(); --> 2번 작성했음으로 2번 실행함

   /* 매개변수로 호출
      buyItem(30);
      buyItem(40);
      buyItem(20);  */

    //매개변수 2개 사용
    buyItem(30, 5);
    buyItem(40, 7);
    buyItem(20, 1);

    buyItem(30,2); // 결과값이 마이너스 나옴

    //리턴문 1
    int sum = plus(3, 5); 
    printf("%d\n", sum);
}

