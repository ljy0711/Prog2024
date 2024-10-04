// 036_str.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
//  c언어에서 문자열을 문자배열에 저장한다
// c언어에 string 타입이 없다

	char s[] = "Hello, World!"; //크기가 최소한 14개짜리 배열 [14]

	printf("%s\n", s);

	char t[6] = { 'h','e','l','l','o','\0'};
	printf("%s\n", t);

	char name[20];
	printf("이름 입력: ");
	// scanf_s("%s", name); <-- 이게 표준  //vs에서는 문자열 입력받을 때 문자열의 길이를 쓰게함 ex)20
	scanf_s("%s", name,20); //문자열에선 scanf시 &사용 안함
	printf("%s\n",name);

}


