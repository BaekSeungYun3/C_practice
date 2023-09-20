// 10개의 숫자를 입력받아 배열에 저장하고 가장 큰 값과 가장 작은 값을 출력 (하나의 반복문)

#include<stdio.h>

int main()
{
	int n;
	int a[10];

	printf("입력받을 숫자의 개수: ");
	scanf_s("%d", &n);

	printf("숫자 %d개를 입력하세요: ", n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	int max = a[0];
	int min = a[0];

	for (int i = 1; i < 10; i++)
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}

	printf("가장 큰 값: %d\n", max);
	printf("가장 작은 값: %d\n", min);
}