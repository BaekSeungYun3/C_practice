// 자릿수를 지정하는 서식 지정자를 사용하여 출력되는 프로그램

#include <stdio.h>

int main()
{
	printf("%s %5s", "과목", "점수\n");
	printf("==============\n");
	printf("%s %5d\n", "국어", 100);
	printf("%s %5d\n", "수학", 90);
	printf("%s %5d\n", "영어", 80);
	printf("==============");

}