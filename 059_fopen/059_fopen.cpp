// 059_fopen.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 059솔루션->추가->새항목->int.txt->input.txt*솔루션이 뜸->숫자입력->059솔루션 코드실행

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* in;
    FILE* out;

    //fopen_s(&in, "input.txt", "r");
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("input1.txt가 없습니다.\n");
        exit(1);
    }


    out = fopen("output.txt", "a"); //w대신 a를 쓸수 있다. w를 쓰면 있는걸 다 지우고 새로 쓰는것이고 a를 쓰면 파일 뒤에 첨부한다는 의미이다.

    int n;

    /*fscanf_s(in, "%d", &n);*/
    fscanf(in, "%d", &n);
    fprintf(out, "%d %d\n", n, n * n);
    printf("%d\n", n);

    fclose(in);
    fclose(out);
}
