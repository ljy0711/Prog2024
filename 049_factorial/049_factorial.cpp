// 049_factorial.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
/*숫자 n을 입력받아서 n!을 계산하시오
(1) 반복문으로
(2) 재귀함수를 사용해서 */

#include <stdio.h>
//재귀함수 (2)
int factorial(int n); //함수의 원형(프로토타입)

int main()
{
	int n;
	printf("n 입력 : ");
	scanf_s("%d", &n);
	//반복문
	long long a = 1;
	for (int i = 1; i <= n; i++) {
		a = 1;
		for (int j = 1; j <= i; j++)
			a *= j;
		printf("%d! = %lld\n", i, a);
	}
	//1부터 100까지 반복문 합
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("1부터 100까지의 합 : %d\n",sum);

	//1부터 n까지 반복문 곱
	int p = 1;
	for (int i = 1; i <= n; i++)
		p *= i;
	printf("1부터 n까지의 곱 : %d\n",p);

	// 재귀함수 (1)
	printf("%d\n", factorial(n));

} // 재귀함수 (3)
int factorial(int n) {
	if (n == 1) // 재귀함수는 끝나는 조건이 꼭 있어야함
		return 1;
	return factorial(n - 1) * n; //팩토리얼 
}
