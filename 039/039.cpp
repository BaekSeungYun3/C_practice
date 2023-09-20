//재귀함수와 반복문으로 팩토리얼을 계산하는 함수

#include <stdio.h>

// 재귀함수 n! = (n-1)!*n
int fact1(int n)
{
    if (n == 1)
        return 1;
    else
        return fact1(n - 1) * n;
}

// 반복문
int fact2(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    int n;
    printf("n을 입력 : ");
    scanf_s("%d", &n);

    printf("재귀함수 : %d\n", fact1(n));
    printf("반복문 : %d\n", fact2(n));
}
