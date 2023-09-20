// 2차원 문자배열이 있을 떄 4개의 문자열을 입력으로 받아서 출력하는 프로그램

#include <stdio.h>

int main()
{
    char str[4][20];

    printf("학과 : ");
    scanf("%s", str[0]);
    printf("학년 : ");
    scanf("%s", str[1]);
    printf("학번 : ");
    scanf("%s", str[2]);
    printf("이름 : ");
    scanf("%s", str[3]);

    printf("학과 : %s\n", str[0]);
    printf("학년 : %s학년\n", str[1]);
    printf("학번 : %s\n", str[2]);
    printf("이름 : %s\n", str[3]);
}