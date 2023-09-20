// 자연수를 입력받아 약수를 모두 출력하는 프로그램

#include <Stdio.h>

int main()
{
	int n;
	
	printf("자연수 입력: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d", i);
		}
	}
}