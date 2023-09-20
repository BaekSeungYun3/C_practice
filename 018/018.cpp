// 자연수 n을 입력받아 크기가 n인 숫자 삼각형을 출력

#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}