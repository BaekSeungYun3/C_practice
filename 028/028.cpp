//문자열 함수를 사요이하여 두 개의 문자 배열 중 하나에 입력받고 또 다른 하나의 문자열에 복사하여 출력

#include <stdio.h>
#include <String.h>

int main()
{
	char a[100];
	char b[100];

	printf("입력: ");
	scanf_s("%s", a, 100);

	strcpy_s(b, a);
	printf("%s\n", b);
}