//문자배열s[10]과 t[10]이 있을 때, s와 t를 연결하되 가능한 글자수만큼만 연결하여 출력

#include <Stdio.h>
#include <String.h>

int main()
{
	char s[10];
	char t[10];

	printf("문자 입력: ");
	scanf_s("%s", s, 10);
	printf("문자 입력: ");
	scanf_s("%s", t, 10);

	strncat_s(s, t, _TRUNCATE);

	printf("%s", s);
}
