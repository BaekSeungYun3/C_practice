//정수배열이 있을 때 반복문을 사용하여 각 배열 원소가 저장된 주소와 원소의 값을 포인터를 이용하여 출력

#include <stdio.h>

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("각 배열 원소가 저장된 주소\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%p\n", &a[i]);
	}
	printf("배열 원소의 값 출력");
	for (int* ptr = a; ptr < a + 10; ptr++)
	{
		printf("%d\n", *ptr);
	}
}