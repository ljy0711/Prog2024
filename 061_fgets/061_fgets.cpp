﻿// 061_fgets.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100];

	/*fgets(str, 80, stdin);
	puts(str);*/

	char s[] = "10 20 30";
	int a, b, c;

	sscanf(s, "%d %d %d", &a, &b, &c);
	printf("s 출력 : %d %d %d\n", a, b, c);	// 화면에 출력

	sprintf(str, "%d %d %d\n", a, b, c);	// str[]에 출력
	printf("str 출력 : %s", str);

}