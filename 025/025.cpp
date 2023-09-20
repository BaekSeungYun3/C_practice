//자신의 학번, 이름을 입력받고 하나의 문자열로 연결한 후 출력

#include <Stdio.h>
#include <String.h>

int main()
{
	char a[100];
	char b[100];
	char c[100];

	printf("학년: ");
	scanf_s("%s", a, 100);

	printf("학번: ");
	scanf_s("%s", b, 100);

	printf("이름: ");
	scanf_s("%s", c, 100);

	strcat_s(a, "학년 ");
	strcat_s(a, b);
	strcat_s(a, " ");
	strcat_s(a, c);

	printf("%s", a);

}