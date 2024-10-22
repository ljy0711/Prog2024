// 040_doublepointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int a = 10;
	int* ptr = &a;
	int** pptr = &ptr; //double pointer다.

	printf("1. a = %d\n", a); //10이라 찍음
	printf("2. &a = %p\n", &a); //a의 주소를 찌음 p //2번 3번 값이 같아야함
	printf("3. ptr = %p\n", ptr);
	printf("4. &ptr = %p\n",&ptr); // ptr의 주소 //4번 5번이 값이 같아야함
	printf("5. pptr = %p\n", pptr); //pptr은 주소
	printf("6. *pptr = %p\n", *pptr); // 2번과 값이 같아야함
	printf("7. **pptr = %d\n", **pptr); // 1번과 값이 같아야함
}

