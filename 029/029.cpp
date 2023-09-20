//문자열 3개를 입력받아 사전 순서로 출력하세요

#include <Stdio.h>
#include <String.h>

int main()
{
	char a[100];
	char b[100];
	char c[100];

	printf("입력: ");
	scanf_s("%s", a, 100);
	printf("입력: ");
	scanf_s("%s", b, 100);
	printf("입력: ");
	scanf_s("%s", c, 100);

	if (strcmp(a, b) < 0)
	{
		if (strcmp(a, c) < 0)
		{
			if (strcmp(c, b) < 0)
				printf("%s %s %s", a, c, b);
			else
				printf("%s %s %s", a, b, c);
		}
		else
			printf("%s %s %s", c, a, b);
	}
	else
	{
		if (strcmp(b, c) < 0)
		{
			if (strcmp(a, c) < 0)
				printf("%s %s %s", b, a, c);
			else
				printf("%s %s %s", b, c, a);
		}
		else
			printf("%s %s %s", c, b, a);
	}
	printf("\n");
}