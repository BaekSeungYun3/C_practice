// 변수가 선언되었을 때 아래 모양으로 출력하는 프로그램
//#include <stdio.h>
//int main()
//{
//	char ch = 'A';
//	char str[20] = "Hello World!";
//	float flt = 10.234;
//	int no = 150;
//	double dbl = 20.123456;
//	...
//}
//
//Character is A
//String is fresh2refresh.com
//Float value is 10.234000
//Integer value is 150
//Double value is 20.123456
//Octal value is 226
//Hexadecimal value is 96

#include <stdio.h>

int main()
{
	char ch = 'A';
	char str[20] = "Hello world! ";
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;

	printf("Character is %c\n", ch);
	printf("String is % s\n", str);
	printf("Float value is %.6f\n", flt);
	printf("Integer value is %d\n", no);
	printf("Double value is %f\n", dbl);
	printf("Octal value is %o\n", no);
	printf("Hexadecimal value is %x\n", no);
}