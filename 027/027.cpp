//문자열 배열에 입력받은 문자열을 저장하고 몇 글자인지 문자열 함수를 사용하여 출력

#include <Stdio.h>
#include <string.h>

int main()
{
	char s[100];

	printf("입력: ");
	scanf_s("%s", s,100);

	int len = strlen(s);
	printf("문자의 글자 수: %d\n", len);

}