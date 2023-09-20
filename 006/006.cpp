// 화씨 온도를 섭씨 온도로 변환하는 프로그램 작성
// 화씨를 섭씨로 변환하는 공식 C = (5/9)(F-32)

#include <stdio.h>

int main()
{
	printf("%3s %8s\n", "화씨", "섭씨");
	printf("================\n");
	
	float f1 = 100.0;
	float c1 = (5.0 / 9.0) * (f1 - 32.0);
	float f2 = 80.0;
	float c2 = (5.0 / 9.0) * (f2 - 32.0);
	float f3 = 60.0;
	float c3 = (5.0 / 9.0) * (f3 - 32.0);

	printf("%3.1f %8.1f\n", f1, c1);
	printf("%3.1f %8.1f\n", f2, c2);
	printf("%3.1f %8.1f\n", f2, c2);
}