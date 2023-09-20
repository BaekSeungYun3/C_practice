// 구구단을 2단으로 출력하세요.

#include <stdio.h>

int main()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 5; j++)
			printf("%dx%d=%d\t", j, i, j * i);
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 6; j <= 9; j++)
			printf("%dx%d=%d\t", j, i, j * i);
		printf("\n");
	}
}