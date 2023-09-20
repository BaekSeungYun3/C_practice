// 포인터를 이용하여 a와 b의 값을 두배로 변화한 후 출력

#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	int* p;

	p = &a;
	*p *= 2;
	printf("%d %d\n", *p, a);

	p = &b;
	*p *= 2;
	printf("%d %d\n", *p, b);
}