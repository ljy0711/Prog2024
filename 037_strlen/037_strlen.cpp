// 037_strlen.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS // 이걸 작성해야 표준 C언어로 쓸 수 있음.
#include <stdio.h>
#include <string.h>

int main()
{
  //char s[] = "hello"; 배열의 칸수는 6이라고 출려됨 hello\0까지 포함.
	char s[100] = "hello0";
	int len = strlen(s);

	printf("배열의 칸수 : %d\n", (int)sizeof(s));
	printf("문자열의 길이 : %d\n", len);

	char s1[] = "hello";
	char s2[100];

	strcpy(s2, s1);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	
	//문자열 상수를 복사할 수 있음.
	strcpy(s2, "Konyang University");
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);

	char greeting[100] = "Hello, ";
	char name[100];

	printf("이름 입력: ");
	scanf("%s", name);//_s쓰면 오류떠서 scanf로 쓰기

	strncat(greeting, name, sizeof(greeting) - sizeof(name) - 1);
	strcat(greeting, "!");

	printf("%s\n", greeting);

	// 주의 할 점 : 문자 배열은 반드시 '\0' 로 끝나있어야함.
    // char str[10]; 결과 값에서 이상한 문자가 나오는 이유는 s가 최기화가 안되어 있어서 임.

	char str[10] = "";
	strcat(str, "Hello");
	printf("%s\n", str);

	//char str1[] = "tample"; 이건 t가 s보다 더 커서 결과값은 +1이 나옴.
	char str1[] = "sample";
	char str2[] = "simple";

	printf("%d\n", strcmp(str1, str2));




}

