//10개의 숫자를입력받아 배열에 저장하고 가장 큰 값과 두 버ㄴ째 큰 값을 출력 (하나의 반복문)

#include <Stdio.h>

int main()
{
	int n;
	int a[10];

	printf("입력받을 숫자의 개수: ");
	scanf_s("%d", &n);

	printf("숫자 %d개를 입력하세요: ", n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	int max, sec;

	if (a[0] > a[1]) {
		max = a[0];
		sec = a[1];
	}
	else {
		max = a[1];
		sec = a[0];
	}

	for (int i = 2; i < 10; i++) {
		if (max < a[i]) {
			sec = max;
			max = a[i];
		}
		if (sec < a[i] && a[i] < max) {
			sec = a[i];
		}
	}
	printf("가장 큰 값: %d\n", max);
	printf("두번 째로 큰 값: %d\n", sec);
}