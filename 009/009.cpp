// sizeof 연산자를 사용하여 char, int, short, long, long long, float, double의 크기를 출력하세요.

#include <Stdio.h>

int main()
{
	printf("%s %3d\n", "char:", sizeof(char));
	printf("%s %3d\n", "int:", sizeof(int));
	printf("%s %3d\n", "short:", sizeof(short));
	printf("%s %3d\n", "long:", sizeof(long));
	printf("%s %3d\n", "long long:", sizeof(long long));
	printf("%s %3d\n", "float:", sizeof(float));
	printf("%s %3d\n", "double:", sizeof(double));

}