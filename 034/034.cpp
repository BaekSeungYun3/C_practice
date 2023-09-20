// 이차원 배열을 배열포인터로 지정하고 배열포이터를 사용하여 배열의 내용 출력

#include <Stdio.h>

int main()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	for (int(*pi)[4] = a; pi < a + 3; pi++) {
		for (int* pj = *pi; pj < *pi + 4; pj++) {
			printf("%5d", *pj);
		}
		printf("\n");
	}
}