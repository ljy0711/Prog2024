﻿// 026_menul.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int choice;

	do {
		printf("1. 새 게임\n");
		printf("2. 불러오기\n");
		printf("3. 설정\n");
		printf("4. 크레딧\n");
		printf("5. 종료\n");
		printf("메뉴를 선택하시오: ");

		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("새 게임\n");
			break;
		case 2:
			printf("불러오기\n");
			break;
		case 3:
			printf("설정\n");
			break;
		case 4:
			printf("크레딧\n");
			break;
		case 5:
			printf("종료\n");
			break;

		default:
			printf("잘못 입력하셨습니다.");
		} 
		
	} while (choice != 5);

}