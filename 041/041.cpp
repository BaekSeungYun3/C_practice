//5개짜리 1차원 배열을 만들고 값을 읽어들여 출력

#include <stdio.h>

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%8d", a[i]);
    printf("\n");
}

int main()
{
    int a[100];

    printf("3개의 정수를 입력하세요 : ");
    for (int i = 0; i < 3; i++)
        scanf_s("%d", &a[i]);

    printArr(a, 3);
}
