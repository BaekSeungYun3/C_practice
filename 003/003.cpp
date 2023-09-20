// 정수 125를 10진수, 8진수, 16진수로 출력하는 프로그램
 
#include <stdio.h>

int main()
{
	printf("%10s %5d \n", "10진수", 125);
	printf("%10s %5o \n", "8진수", 125);
	printf("%10s %5x \n", "16진수", 125);
}