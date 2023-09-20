// 정수배열이 있을 때 배열 포인터로 배열을 가르키고 배열 포인터로 배열의 내용을 출력

#include <Stdio.h>

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p_a)[10] = &a;

	for (int i = 0; i < 10; i++) {
		printf("%d\n", (*p_a)[i]);
	}
}