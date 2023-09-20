// float a, b를 선언과 동시에 9.8와 3.14로 초기화하고 +, -, *, / 연산을 수행하여 결과를 출력. (소수점 아래 2자리)

#include <stdio.h>

int main()
{
	float a = 9.8;
	float b = 3.14;

	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}