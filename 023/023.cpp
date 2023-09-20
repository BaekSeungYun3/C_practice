//자연수 n을 입력받아 다음과 같이 크기가 n인 숫자 삼각형 출력(2개의 반복문)
/*    *

	 ***

	*****

   *******

	*****

	 ***

	  *       */

#include <Stdio.h>

int main()
{
	int n;

	printf("자연수 입력: ");
	scanf_s("%d", &n);

	for (int i = 1; i < n + 1; i++)  //행
	{
		for (int j = 1; j < n - i + 1; j++) // 띄어쓰기 (n-1)
			printf(" ");
		for (int a = 1; a <= 2 * i - 1; a++)  // 별(2*i-1)
			printf("*");
		printf("\n");
		printf("\n");
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j < n - i + 1; j++)
			printf(" ");
		for (int a = 1; a <= i * 2 - 1; a++)
			printf("*");
		printf("\n");
		printf("\n");

	}
}