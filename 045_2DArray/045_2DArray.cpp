// 045_2DArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	printf("%d\n", &a[0]);
	printf("%d\n", a);
	printf("%d\n", &a[1]);
	printf("%d\n", a+1);
	printf("%d\n", &a[0]+1);


	int (*p)[4] = &a[0]; //정수4개짜리의 포인터(배열을 갖음)

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			printf("%4d", (*(p + j))[i]);
		}
		printf("\n");
	}
		
}

