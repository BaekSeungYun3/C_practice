//24. 10개의 숫자를 배열에 저장합니다.  이 모두를 하나의 반복문 안에서 처리하시오.

//(1) 짝수번째 인덱스(0, 2, 4, 6, ...)에 저장된 값을 더하시오
//(2) 홀수번째 인덱스(1, 3, 5, 7, ...)에 저장된 값을 더하시오.
//(3) 저장된 값이 짝수인 숫자의 합을 구하시오.
//(4) 저장된 값이 홀수인 숫자의 합을 구하시오.

#include <Stdio.h>

int main()
{
	int n;
	int a[10];

	printf("입력받을 숫자의 개수: ");
	scanf_s("%d", &n);

	printf("숫자 %d개를 입력: ", n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) {
			sum1 += a[i];
		}
		else if (i % 2 == 1) {
			sum2 += a[i];
		}

		if (a[i] % 2 == 0) {
			sum3 += a[i];
		}
		else if (a[i] % 2 == 1) {
			sum4 += a[i];
		}
	}
	printf("짝수번 째 인덱스에 저장된 값의 합: %d\n", sum1);
	printf("홀수번 째 인덱스에 저장된 값의 합: %d\n", sum2);
	printf("저장된 값이 짝수인 숫자의 합: %d\n", sum3);
	printf("저장된 값이 홀수인 숫자의 합: %d\n", sum4);

}