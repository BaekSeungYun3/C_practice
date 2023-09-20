// 피보나치 수열은 1항과 2항은 1이고 그 이상의 항은 앞의 두 항을 더하는 수열로 정의된다. 피보나치 함수를 만들고 20항까지의 값 출력

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    for (int i = 1; i <= 20; i++)
        printf("%d ", fibonacci(i));
    printf("\n");
}
