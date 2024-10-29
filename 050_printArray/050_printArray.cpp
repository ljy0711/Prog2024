// 050_printArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <stdio.h>
void printArr(int a[], int n)
//그냥 출력하는 거기 때문에 void 사용
//앞에는 배열 뒤는 숫자 
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

/* 
void printArr(int* a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
} 
*/

void changeArr(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] *= a[i];
}

//2차원 배열을 매개변수로 전달받는 방법
void printArr2(int a[][4], int n) //[4]뒤에 거는 꼭 쓰기
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}	
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	//2차원 배열 함수
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	printArr2(b, 3); //2차원 배열
	printArr(a, 5);
	changeArr(a, 5);
}

