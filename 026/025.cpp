// 문자배열 s[10]에 9글자 이내의 문자열을 입력받고 s[] 배열의 각 원소를 반복문을 사용하여 한글자 씩 출력

#include <Stdio.h>
#include <string.h>

int main()
{
	char s[10];
	scanf_s("%s", s, 10);

	int len = strlen(s);

	for (int i = 0; i < len; i++) {
		printf("%c\n", s[i]);
	}
}