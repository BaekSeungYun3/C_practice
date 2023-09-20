// 포인터 배열이 있을 때 포인터 배열의 원소가 각각 변수 a,b,c를 가리키게 하고 그 값을 2배로 바꾸고 출력

#include <stdio.h>

int main()
{
	int* p[3];
	int a = 10, b = 20, c = 30;

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	for (int i = 0; i < 3; i++) {
		*p[i] *= 2;
		printf("%d\n", *p[i]);
	}
}
