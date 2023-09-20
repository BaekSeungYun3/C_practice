// 2차원 배열이 있을 때 함수를 만들어 2차원 배열의 내용을 출력

#include <stdio.h>

void printArray(int a[3][4])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

    printArray(a);
}
