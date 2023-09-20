// 출력할 단 수를 입력받아 구구단을 출력

#include <Stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", n, i, i * n);
	}
}