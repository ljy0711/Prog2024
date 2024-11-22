// 054_timeT.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
struct time {
	int h, m, s;
};

int totalsec(time t) {
	return t.h * 3600 + t.m * 60 + t.s;
}//call by value (값)

int totalsecp(time *t) {
	return t->h * 3600 + t->m * 60 + t->s;
} //call by address(주소)

int main()
{
	time t = { 1,22,48 };

	printf("%d\n", totalsec(t));

	printf("%d\n", totalsecp(&t));
}

