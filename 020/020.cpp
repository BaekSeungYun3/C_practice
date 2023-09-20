// 자연수 n을 입력받아 1~n까지의 숫자의 합, 홀수의 합, 짝수의 합을 출력

#include <Stdio.h>

int main()
{
	int n;
	printf("자연수 입력: ");
	scanf_s("%d", &n);
	
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	for (int i = 1; i <= n; i++)
	{
		sum1 += i;
		if (i % 2 != 0)
			sum2 += i;
		else if (i % 2 == 0)
			sum3 += i;
	}
	printf("숫자의 합: %d\n", sum1);
	printf("홀수의 합: %d\n", sum2);
	printf("짝수의 합: %d\n", sum3);


}